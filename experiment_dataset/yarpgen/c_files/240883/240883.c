/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240883
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240883 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240883
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_11 = (max((!var_2), ((var_1 ? 13438986903326450796 : 9223372036854775793))));
                var_12 = (max(((194 ? 32767 : 3306)), 3282));
                arr_5 [i_0] [i_0] [i_1] = (~var_2);
                arr_6 [i_0] [i_1] = (max((((17218663972635416223 ? var_5 : 1))), var_2));
                arr_7 [i_0] [i_0] [i_1] = 62229;
            }
        }
    }
    var_13 ^= var_0;
    var_14 = (!var_0);
    var_15 &= (!1473932270);
    #pragma endscop
}
