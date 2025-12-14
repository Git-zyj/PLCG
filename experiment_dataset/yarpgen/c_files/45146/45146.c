/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45146
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45146 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45146
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 |= (var_5 != var_0);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_14 = (min(var_14, (((((33291 ? 2905723501645755660 : 17673)) != ((((((~(arr_3 [i_0] [9])))) ? (max(2775938979954557794, (arr_1 [10] [i_0]))) : var_8))))))));
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_12 [13] [13] [i_2] [i_2] = ((((~((1 ? (arr_11 [i_0] [i_0] [i_0]) : 7433)))) > 7441));
                                var_15 = (min(var_15, 154));
                            }
                        }
                    }
                }
                var_16 += 29;
                arr_13 [i_0] [i_0] [i_1] = (((arr_3 [i_0] [i_1]) ? ((+((5750018965501421470 ? (arr_9 [i_0] [i_1] [i_1] [i_1] [i_1] [i_1]) : var_1)))) : (((((1329 <= 1332) >= (max((arr_10 [i_1] [i_1]), (arr_7 [i_0] [i_1] [i_0] [i_1])))))))));
            }
        }
    }
    var_17 = (1354 != 56768);
    var_18 = (106 ? 72 : 158);
    var_19 = (min(((var_6 ? (var_1 % 4044) : (var_5 * var_3))), ((max(163, 100)))));
    #pragma endscop
}
