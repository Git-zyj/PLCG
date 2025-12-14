/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53476
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53476 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53476
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_14, var_2));
    var_18 = -var_14;
    var_19 = ((!(((((min(69, -19345))) ? (132 && var_0) : 1)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 16;i_3 += 1)
                    {
                        {
                            var_20 = -1522919958;
                            var_21 = (min(var_21, ((min(((((min(32767, (arr_6 [12] [i_2] [i_3])))) - (arr_1 [i_2] [i_0]))), (32748 ^ var_5))))));
                        }
                    }
                }
                arr_10 [i_1] [i_1] [i_1] = 0;
            }
        }
    }
    #pragma endscop
}
