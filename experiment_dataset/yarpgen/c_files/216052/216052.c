/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216052
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216052 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216052
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_5;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {

        for (int i_1 = 3; i_1 < 19;i_1 += 1) /* same iter space */
        {
            var_16 = ((~(arr_0 [i_0] [i_0])));
            var_17 = ((126 ? ((var_14 >> (((arr_4 [i_1]) - 6949375869573771488)))) : 4006588310987334803));
        }
        for (int i_2 = 3; i_2 < 19;i_2 += 1) /* same iter space */
        {
            var_18 = ((8748 * (~0)));
            arr_7 [i_0] [i_0] [i_2] = var_8;
        }
        var_19 += var_13;
    }
    for (int i_3 = 1; i_3 < 11;i_3 += 1)
    {
        var_20 = (((arr_4 [i_3]) ? -var_9 : (65535 + 1253)));
        var_21 = var_11;
    }
    #pragma endscop
}
