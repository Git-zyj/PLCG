/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190432
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190432 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190432
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_7, var_4));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    arr_7 [i_0] [i_0] = min((min(var_1, var_6)), var_8);

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {

                        for (int i_4 = 3; i_4 < 10;i_4 += 1)
                        {
                            arr_15 [i_0] [i_0] [i_0] [4] [i_0] [i_0] = var_9;
                            arr_16 [i_0] [1] [i_2] [i_0] [i_4 + 2] = var_0;
                            var_14 = var_0;
                            var_15 = var_5;
                        }
                        for (int i_5 = 1; i_5 < 10;i_5 += 1)
                        {
                            var_16 += var_8;
                            arr_19 [i_5] [i_0] [i_0] [i_0] = var_8;
                            var_17 = var_1;
                        }
                        arr_20 [i_0] [10] [i_2] [i_0] = var_3;
                        arr_21 [i_0] [i_0] [i_0] = var_6;
                        var_18 = var_3;
                    }
                }
                var_19 = (max(var_19, (max(((max(-2036140790559452460, 4294967294))), (max(var_10, var_9))))));
            }
        }
    }
    var_20 = var_9;
    #pragma endscop
}
