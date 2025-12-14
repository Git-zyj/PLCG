/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31822
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31822 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31822
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_15 = arr_0 [i_0];
                            var_16 = (max((-2147483647 - 1), (min(((3306053968256281388 ? (arr_8 [i_0] [1] [i_2] [i_3 - 2]) : var_9)), (max(3306053968256281382, (arr_0 [i_3])))))));
                            var_17 = (((arr_9 [i_2] [i_3 + 1] [i_3 - 1] [i_3]) ? (~-3306053968256281389) : ((~(arr_9 [i_2] [i_3 + 2] [i_3 - 1] [i_3 - 2])))));
                        }
                    }
                }
                var_18 = ((-((~((var_13 ? 222657114 : var_13))))));
            }
        }
    }
    var_19 = ((var_13 ? 3306053968256281414 : 3306053968256281388));
    var_20 *= (-409245973 & 752138991);
    #pragma endscop
}
