/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233827
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233827 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233827
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 7723;
    var_21 += ((((((max(1813536911, 0))) ? (!1813536911) : (var_9 < 1209205699)))) ? var_17 : ((var_15 ? (~3085761597) : (var_0 != 1901))));
    var_22 = (min(((min(var_5, (!32767)))), var_13));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_23 *= (((((4095 << (4105 - 4096)))) == (((((184 ? 4159725141484563874 : -687502810))) ? (~759952392) : (-4159725141484563875 - 4294967287)))));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        arr_12 [i_3] [1] [6] [6] = ((-390510165 ? 184 : 4960));
                        arr_13 [i_3] = 1;
                    }
                    var_24 = 231;
                }
            }
        }
    }
    #pragma endscop
}
