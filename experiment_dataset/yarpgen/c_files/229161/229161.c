/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229161
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229161 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229161
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 8;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_16 = ((!(((-(((arr_8 [i_0] [i_0] [i_1]) ? 1720336514 : 27)))))));
                                arr_16 [1] [1] [i_2] [10] [i_1] = (min(((min(27, 65509))), ((-2456 ? (arr_10 [i_4] [i_4 + 1] [8] [i_4] [i_4 - 2] [i_4 - 3]) : var_1))));
                                arr_17 [i_1] [i_1] [i_2] [0] [i_4] = (((arr_7 [i_0 - 1] [i_1] [i_1] [i_3]) ? var_5 : (min(var_12, (arr_15 [3] [i_1] [i_1] [i_2] [i_4 - 2] [i_3])))));
                                arr_18 [i_1] [i_1] [7] [i_1] [8] [8] [i_4] = ((var_3 ? (((!3037679992) ? 19 : ((40 ? 1916582062 : 1963634712)))) : ((1 ? (arr_0 [i_0 + 2]) : 3718484544))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 1;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 11;i_6 += 1)
                    {
                        {
                            var_17 = 2286162427;
                            var_18 = (((min(-100, (arr_3 [i_0 + 4]))) <= 65509));
                        }
                    }
                }
                var_19 = ((((max((max(12, 2462850355)), (arr_3 [i_0 + 3])))) ? 2118508161 : (((((var_3 ? 8940750547543139722 : var_10))) ? (arr_8 [i_0] [i_0 - 1] [i_1]) : (min(var_11, 1960123264940536931))))));
                arr_25 [i_0] [i_1] [0] = 1;
            }
        }
    }
    var_20 = var_13;
    var_21 = var_1;
    var_22 += var_1;
    #pragma endscop
}
