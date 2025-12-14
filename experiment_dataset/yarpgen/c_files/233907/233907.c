/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233907
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233907 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233907
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_7;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 19;i_2 += 1)
            {
                {
                    arr_10 [i_1 - 1] [i_0] = (max((((11597 != (min(-2330271099997681328, -31551))))), (((var_0 ? var_1 : 11582)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_18 [i_0] [i_0] [4] [i_0] [i_0] = (max((arr_7 [i_0] [i_1] [i_0]), ((((var_10 < (arr_16 [i_2] [1] [i_2] [i_2] [i_2] [i_2] [1]))) ? (arr_0 [i_0]) : ((((arr_4 [i_0]) ? (arr_5 [i_4] [i_4] [i_4]) : (arr_14 [i_0] [i_0] [i_0] [i_0] [i_0]))))))));
                                arr_19 [i_0] [i_1] [i_0] [i_3] [i_0] = 198107887;
                            }
                        }
                    }
                }
            }
        }
    }
    var_12 = ((var_6 ? ((((((var_9 ? var_3 : 2565356208))) ? ((min(var_7, var_7))) : (~var_2)))) : var_1));
    var_13 = 1729611107;
    #pragma endscop
}
