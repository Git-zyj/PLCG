/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37823
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37823 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37823
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((((((max(var_3, 32767))) - 805306368))) < 4611650834055299072));
    var_13 = (min(var_6, ((((max(var_8, var_2))) ? var_8 : var_10))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 24;i_2 += 1)
            {
                {
                    var_14 = ((((((3489660927 * 0) % (~0)))) ? (arr_0 [i_0] [i_1]) : var_8));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                var_15 = (min(var_15, ((max(((3 ? (max((arr_11 [i_4]), var_7)) : 67108864)), (((140 ? 1 : 17952))))))));
                                arr_13 [i_0] [i_4] [i_2] [i_2] [i_4] [i_2] [1] = -4227858431;
                                var_16 = -29403;
                                var_17 = 17870283321406128128;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
