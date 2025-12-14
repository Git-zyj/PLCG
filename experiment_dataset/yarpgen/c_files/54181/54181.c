/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54181
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54181 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54181
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (var_9 + var_0);
    var_18 = (min((max(var_1, (((var_12 << (((-3579 + 3583) - 4))))))), var_5));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_1] = max((~var_1), ((((arr_5 [i_0] [i_1] [i_1 + 1]) == (arr_5 [i_0] [i_1 + 1] [i_1 + 1])))));
                var_19 = ((~((-((2147483647 ? 15163 : 16))))));
                var_20 = (min((arr_6 [i_1]), var_8));
            }
        }
    }
    #pragma endscop
}
