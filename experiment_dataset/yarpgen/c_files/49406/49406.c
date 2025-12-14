/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49406
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49406 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49406
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((((var_14 ? (!-870) : -23775))) * ((var_4 ? var_1 : (min(var_19, 16779372781954831869))))));
    var_21 = (min(((349849198105547765 ? 349849198105547765 : 18096894875604003857)), var_4));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_22 ^= var_0;
                    var_23 = (max(var_23, ((min((((arr_4 [21] [i_1]) / (arr_4 [i_0] [i_1]))), 32754)))));
                }
            }
        }
    }
    #pragma endscop
}
