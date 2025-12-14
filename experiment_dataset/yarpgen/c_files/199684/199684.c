/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199684
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199684 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199684
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((1 ? -8142288735737898257 : 0));
    var_14 ^= var_2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] [i_1] = 7890154782848676683;
                var_15 = (max(var_15, ((((((arr_1 [i_0]) ? var_2 : var_1)) - (var_9 <= var_0))))));
            }
        }
    }
    var_16 ^= var_2;
    var_17 = (max(var_17, (3 >= 4067912471)));
    #pragma endscop
}
