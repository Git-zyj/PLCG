/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207706
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207706 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207706
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        var_15 = (max(var_15, ((((((arr_1 [1]) ? 444431337533405793 : (min(64, 18002312736176145822)))) * ((((min((arr_0 [i_0 - 1]), 444431337533405793))))))))));
        arr_2 [1] = 444431337533405793;
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            {
                arr_10 [i_2] = ((((!(arr_5 [i_2] [i_2]))) ? var_4 : (min((arr_7 [i_2] [i_2]), (arr_0 [3])))));
                var_16 = ((((~(arr_6 [i_1] [i_2]))) | ((((arr_9 [i_2] [i_2]) ? (arr_1 [i_2]) : ((262143 >> (((arr_1 [i_1]) - 86)))))))));
                /* LoopNest 3 */
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 10;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 12;i_5 += 1)
                        {
                            {
                                var_17 -= 19432;
                                arr_21 [i_1] [i_5] [i_5] [i_3] [i_5] = ((((((-2064026482 - 18446744073709551615) ? (((min((arr_13 [10] [10] [10] [6]), (arr_1 [i_5]))))) : (min(var_0, (arr_8 [i_2])))))) ? (min((262146 & var_7), ((min(17984, 8191))))) : (arr_20 [i_4] [i_4 + 1] [i_4 - 1] [i_4])));
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 = ((-(((!(1299054990 + var_11))))));
    #pragma endscop
}
