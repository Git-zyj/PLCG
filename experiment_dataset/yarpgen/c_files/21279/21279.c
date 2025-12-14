/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21279
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21279 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21279
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = ((+(((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0])))));
        var_18 = (max((((arr_1 [i_0]) ? (arr_1 [23]) : (arr_0 [i_0]))), (((((-(arr_0 [i_0])))) ? (((arr_1 [i_0]) ? (arr_1 [i_0]) : 13439)) : (13436 != 13439)))));
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        for (int i_2 = 3; i_2 < 7;i_2 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 1;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 9;i_5 += 1)
                        {
                            {
                                arr_13 [i_1] [i_1] [9] [i_2] [i_1] = (((((!(arr_0 [i_1])))) > (((((-(arr_5 [6] [i_1] [i_3]))) != ((min((arr_7 [i_1] [i_2] [i_3]), 32767))))))));
                                arr_14 [i_1] = ((13453 ? (max(-52956, ((13439 ? -124 : 103)))) : ((-(arr_12 [i_5 - 1] [i_5 - 1] [i_5] [7] [i_1] [i_5 - 1] [i_5 + 1])))));
                            }
                        }
                    }
                }
                arr_15 [i_1] [i_1] = (max(((137371844608 ? (arr_1 [i_1]) : (arr_9 [i_2] [i_2] [i_1] [i_1] [i_1] [i_1]))), ((((max(50331648, (arr_9 [i_1] [i_1] [i_1] [3] [i_2] [i_2 - 1])))) ? (((arr_5 [i_1] [i_1] [i_2]) ? (arr_9 [i_1] [i_1] [i_1] [i_2] [5] [i_2]) : 4993152502303052272)) : ((5074243261841788265 ? -965654962440763787 : 2008673869))))));
                var_19 = min((max((!1304612789), (((arr_3 [i_1]) ? (arr_11 [i_1] [i_2] [i_1] [1] [i_1]) : (arr_10 [i_1] [i_1] [1] [i_2 - 1]))))), (((-(!1807)))));
            }
        }
    }
    var_20 = ((!(((var_13 ? (var_9 * var_17) : var_13)))));
    var_21 |= (max(1006632960, 1));
    var_22 = (max(((~((var_1 ? 7128394603531690724 : var_10)))), ((5074243261841788263 ? 13453 : -240925326903534665))));
    #pragma endscop
}
