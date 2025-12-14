/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235198
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235198 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235198
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_20 = max((((((arr_1 [i_0] [i_0]) * var_19)) + ((((arr_0 [6]) ? (arr_2 [i_0]) : (arr_6 [i_0] [i_1] [i_0])))))), 0);
                                var_21 = (min(var_21, (((771328276 ? 771328285 : 4288519616)))));
                            }
                        }
                    }

                    for (int i_5 = 3; i_5 < 20;i_5 += 1)
                    {
                        var_22 = (min(var_22, (((((max((arr_8 [i_5 - 1] [i_2] [i_2]), (arr_8 [i_5 - 1] [i_2] [12])))) == ((var_10 - (arr_8 [i_5 - 3] [i_2] [i_2]))))))));
                        var_23 = ((((var_11 ? (22678 - 12262) : ((var_15 ? var_7 : (-32767 - 1)))))) ? (((((0 ? 4516 : var_7)) | (arr_13 [i_0] [i_1] [i_2] [i_5])))) : ((4288519590 ? 1837829655 : 3523639020)));
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 22;i_6 += 1)
                    {
                        for (int i_7 = 2; i_7 < 21;i_7 += 1)
                        {
                            {
                                var_24 ^= ((!(arr_3 [i_7] [i_7])));
                                var_25 ^= 4023176056;
                                var_26 = ((((((arr_7 [i_1 + 2] [2] [2]) ? (max((arr_4 [i_2]), (arr_3 [i_0] [i_0]))) : (!3138360952)))) || ((((max(6447677, var_13)) ^ var_4)))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_27 = ((((var_15 ? (((var_19 >> (var_0 - 13788)))) : (max(4144652114, 786171677))))) ? var_11 : (((32750 == 6447680) ? 6447680 : var_10)));
    var_28 = var_6;
    #pragma endscop
}
