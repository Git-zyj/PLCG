/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236087
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236087 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236087
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_15 = (((arr_7 [i_0] [i_0]) ? (((((-1699131408411750558 ? (arr_6 [i_0] [i_1] [i_0] [i_1]) : (arr_5 [i_0] [i_1])))) ? 1614170577 : (arr_7 [i_0] [i_0]))) : ((((arr_0 [i_0]) << (((arr_2 [4] [i_1] [i_2]) - 1568277938)))))));
                    var_16 = (max(var_16, (arr_4 [i_1] [i_2])));
                    var_17 = ((var_8 / 11) ? 101 : ((3717067758 ? 0 : 8480923520174608937)));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_18 = (((((-(arr_4 [i_4 - 2] [i_4 - 1])))) ? ((((((arr_8 [22] [i_2] [22]) ? var_3 : (arr_3 [i_3] [i_4])))))) : var_6));
                                var_19 = (min(var_19, ((((((var_8 ? ((~(arr_9 [i_0] [i_0]))) : (((~(arr_5 [i_2] [i_0]))))))) ? (arr_1 [5]) : ((((((arr_4 [i_0] [i_0]) ? (arr_13 [i_0]) : -8480923520174608937))) ? (((arr_6 [i_0] [i_0] [i_4] [i_0]) ? (arr_11 [i_4] [i_4] [i_1] [i_4 - 3]) : (arr_13 [i_3]))) : 2317192266314664096)))))));
                                var_20 = (max(var_20, (((-(!-42))))));
                            }
                        }
                    }
                    var_21 = ((-(!8800)));
                }
            }
        }
    }
    var_22 = (min(var_13, (((var_10 >= var_1) ? (var_9 == 46308) : (~var_1)))));
    #pragma endscop
}
