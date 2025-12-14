/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44297
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44297 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44297
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_14;
    var_21 = 2762642003;
    var_22 = (-597598799821529348 ^ (~163));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 18;i_3 += 1)
                    {
                        {
                            var_23 = (max(var_23, (((((min(38271, (arr_1 [i_0 - 3])))) ? var_15 : 1356465847)))));
                            var_24 += (((max(var_7, (arr_8 [i_0 - 1] [i_0 - 2] [i_0] [i_0 + 1] [i_0 - 2]))) == 128063694453939092));
                            arr_11 [i_1] [i_1] = (min(var_13, ((min((4294967295 == 3252133849), 1)))));
                        }
                    }
                }
                var_25 = (max(var_25, (arr_1 [i_1])));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 21;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 21;i_5 += 1)
        {
            {
                arr_18 [i_4] [i_4] = (min(((max((arr_14 [i_5]), var_2))), (((arr_15 [i_4] [i_5]) / (arr_15 [6] [i_5])))));
                var_26 = -0;
            }
        }
    }
    #pragma endscop
}
