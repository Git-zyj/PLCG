/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232859
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232859 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232859
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, (((((((~var_12) && (((-9857 ? 9857 : 65535)))))) << (var_7 - 876307470837523805))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_17 = (min(var_17, var_5));
                var_18 = (min(var_18, (((var_15 ? (((~var_10) / ((max(0, var_11))))) : 1)))));
                arr_4 [i_1] = ((!(((+(max((arr_2 [i_0 + 1] [11] [i_0 + 1]), var_3)))))));
            }
        }
    }
    var_19 = -9050992198479729588;
    #pragma endscop
}
