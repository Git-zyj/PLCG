/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48558
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48558 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48558
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 |= (~var_1);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            {
                var_16 = (min(-238033147372982399, (((!(((arr_2 [i_0]) || var_8)))))));
                var_17 = (min(var_17, ((min((arr_0 [i_0]), var_4)))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {
                            var_18 = (min(var_18, (arr_6 [i_0] [i_0] [i_0])));
                            var_19 = (max(var_19, -253));
                            var_20 = ((var_0 << (((((arr_6 [i_0] [i_1] [i_2]) ? 3407987477 : (((min(var_5, (arr_5 [3] [i_1] [11] [i_3]))))))) - 3407987454))));
                        }
                    }
                }
            }
        }
    }
    var_21 = (min((min(((min(var_13, 112))), var_0)), ((min(181, (min(185, 74)))))));
    #pragma endscop
}
