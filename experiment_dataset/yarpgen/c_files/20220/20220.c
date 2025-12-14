/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20220
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20220 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20220
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, ((min(268304384, -77)))));
    var_14 = (min(var_14, ((((!8080976596858135602) && (var_2 != var_1))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {
                var_15 = (max(var_15, var_1));
                arr_5 [i_0] [i_1] = ((-(var_6 || var_11)));
            }
        }
    }
    #pragma endscop
}
