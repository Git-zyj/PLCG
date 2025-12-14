/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209947
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209947 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209947
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min((((11395970668855239877 ^ var_12) ^ (~var_7))), var_14));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_16 = (arr_4 [i_0] [1] [i_1]);

                /* vectorizable */
                for (int i_2 = 2; i_2 < 13;i_2 += 1)
                {
                    var_17 = -232;
                    var_18 *= 1076664664;
                    var_19 = (var_6 + var_6);
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    var_20 = (((var_9 ? (arr_9 [i_0] [i_1] [i_0] [i_0]) : var_12)));
                    var_21 = -1130298202;
                    var_22 -= var_8;
                }
            }
        }
    }
    #pragma endscop
}
