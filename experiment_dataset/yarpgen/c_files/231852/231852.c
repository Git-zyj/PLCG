/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231852
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231852 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231852
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 16460033957877519017;
    var_17 ^= ((var_4 ? (max(var_13, var_15)) : -2011553219));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            {
                arr_6 [i_1 + 1] = (~23059);
                var_18 = (min(var_18, ((((arr_0 [i_0] [i_1]) ? var_9 : (arr_0 [i_0] [i_0]))))));
                var_19 = (min(var_19, 2147483647));
            }
        }
    }
    var_20 = var_10;
    #pragma endscop
}
