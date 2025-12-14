/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20852
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20852 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20852
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_6;
    var_17 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_18 = (min((((-((var_6 + (arr_0 [i_1])))))), (min((min(3417975899040809204, 0)), -var_11))));
                arr_4 [i_0 + 2] [i_0] [i_1] = ((((((min(var_0, 236)) > (var_12 == -32758)))) <= 17437));
            }
        }
    }
    var_19 = (min(var_19, var_2));
    var_20 = ((((-(min(-9223372036854775783, var_1)))) == (min(var_3, (min(var_0, var_5))))));
    #pragma endscop
}
