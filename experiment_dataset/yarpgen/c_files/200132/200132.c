/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200132
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200132 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200132
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((~var_8) ? ((((var_9 > 35) % (var_6 & 31)))) : ((2147483645 ? 6268575168876908675 : 132)));
    var_13 = ((~(((30 > ((3093967003 ? 4294967293 : 63)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_14 = ((var_9 ? (arr_2 [i_0]) : (((1 ? 14 : (2147483629 >= 765433878))))));
                arr_5 [i_1] [i_0] = var_5;
            }
        }
    }
    #pragma endscop
}
