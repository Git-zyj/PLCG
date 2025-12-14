/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30954
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30954 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30954
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((var_0 ? -var_11 : var_12));
    var_15 = (min((--18446744073709551599), ((18446744073709551595 - (((var_5 ? 232 : 39146)))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            {
                var_16 = ((((-(arr_6 [1] [i_1 - 2]))) == (((-(~var_5))))));
                var_17 -= var_11;
                var_18 = (min(var_18, (((arr_4 [i_0 + 1] [i_0 + 2]) <= (arr_0 [i_0 + 2])))));
            }
        }
    }
    var_19 = 234;
    #pragma endscop
}
