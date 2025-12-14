/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2564
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2564 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2564
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 -= (((max((var_5 < var_10), var_6)) << (-9050213402978954131 - 771085421)));
    var_17 = (min((var_12 < var_11), (248 < 7842263666869223665)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 13;i_3 += 1)
                    {
                        {
                            var_18 = (arr_2 [i_0] [11] [i_0]);
                            arr_9 [4] [i_1] [i_2] [i_2] = (min(-8280858017523820338, -8280858017523820367));
                        }
                    }
                }
                arr_10 [i_0] [i_1] [i_0] = (max(-447161725, (min(9050213402978954131, (~-9050213402978954131)))));
                var_19 -= (max(((((max(var_12, (arr_3 [i_0] [i_1]))) < (arr_1 [i_0] [i_1])))), -9050213402978954151));
            }
        }
    }
    var_20 = var_13;
    #pragma endscop
}
