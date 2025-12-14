/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224060
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((-(((min(var_13, 55682))))));
    var_18 = (max(var_18, var_3));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        {
                            arr_12 [i_0] [i_1] [i_1] = (((((!(!var_3)))) + 2052486423));
                            arr_13 [i_0] [i_0] [i_0] = 16989687030436814384;
                            arr_14 [12] [i_2] [12] [i_0] [15] = var_5;
                        }
                    }
                }
                var_19 += var_3;
            }
        }
    }
    #pragma endscop
}
