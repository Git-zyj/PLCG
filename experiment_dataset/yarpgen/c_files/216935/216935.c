/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216935
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216935 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216935
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 17;i_2 += 1)
                {
                    var_19 ^= var_13;

                    for (int i_3 = 2; i_3 < 16;i_3 += 1)
                    {
                        arr_12 [i_0] [i_1] [i_2] [0] [i_2] [i_3] = var_3;
                        arr_13 [i_0] [i_2] = var_6;

                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            var_20 = var_15;
                            var_21 = var_15;
                        }
                        for (int i_5 = 1; i_5 < 15;i_5 += 1)
                        {
                            var_22 = var_11;
                            arr_18 [i_0] [i_2] [i_0] = 284398452906733578;
                            var_23 ^= -9398;
                        }
                        var_24 = (max(var_24, var_11));
                    }
                }
                var_25 = var_15;
                var_26 = (min(var_26, var_6));
                var_27 = (min(var_27, var_5));
            }
        }
    }
    var_28 = var_0;
    var_29 = var_17;
    #pragma endscop
}
