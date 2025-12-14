/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35975
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35975 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35975
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, -32120));
    var_12 = (min(var_12, ((min(-32120, -7286)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_13 *= var_0;
                arr_5 [i_0] [i_0] [i_0] = (i_0 % 2 == 0) ? ((min((((46 >> (((arr_1 [i_0]) - 6808))))), var_0))) : ((min((((46 >> (((((arr_1 [i_0]) - 6808)) - 50769))))), var_0)));
                var_14 = ((~-15) + 251);
                arr_6 [i_0] = (arr_3 [i_0] [i_0] [i_0]);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        {
                            var_15 = (~var_7);
                            var_16 -= ((arr_1 [i_2]) || ((((((var_0 ? var_9 : 1))) ? (arr_3 [9] [9] [i_0]) : (!14)))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
