/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196433
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196433 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196433
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_7 [i_1] = (min((max(65535, (-28 ^ -90))), ((((max(var_10, (arr_0 [i_0] [10]))) >= (max(var_8, var_9)))))));
                var_19 = (max(var_19, (arr_6 [i_0] [i_1])));
            }
        }
    }
    var_20 = var_5;
    var_21 = (min(var_21, (min((((var_10 >= (((4342394785736386498 ? 81 : 93)))))), 14188274026563584856))));
    #pragma endscop
}
