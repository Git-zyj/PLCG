/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201684
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201684 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201684
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_4;
    var_12 = min((min(var_2, var_9)), (((!((max(238, 2683107242)))))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_13 = (2147483647 <= 32756);
                    arr_9 [i_1] = (((((-1611860047 ? (min(var_7, var_2)) : -var_10))) ? ((var_1 ^ (((max(var_6, var_6)))))) : var_9));
                }
            }
        }
    }
    #pragma endscop
}
