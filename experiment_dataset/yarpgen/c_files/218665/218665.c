/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218665
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218665 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218665
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 += var_12;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                var_19 = (min(var_19, ((min(((min((1 && 1), (min(var_12, 17974))))), ((1 << (61 - 32))))))));
                var_20 = (min(var_20, 1));
                arr_5 [i_0] = ((((-(arr_2 [i_1 - 2]))) < -3732052040));
            }
        }
    }
    var_21 = -var_2;
    #pragma endscop
}
