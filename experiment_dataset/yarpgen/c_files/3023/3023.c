/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3023
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3023 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3023
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_12;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            var_15 += -121;
            arr_5 [i_0] = (((((((arr_1 [9] [i_1]) | var_12)) + 2147483647)) >> (121 - 107)));
            arr_6 [i_1] [i_0 - 1] = -var_11;

            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                arr_10 [i_0] [i_1] [i_1] [i_0] |= ((151 << (73 - 73)));
                var_16 = (min(var_16, ((((arr_8 [i_0] [i_0] [i_0]) % (((61245 ? 292825949 : 4))))))));
                arr_11 [i_0] [i_0] [i_1] [0] = ((-(arr_0 [i_0 - 1] [i_2 - 1])));
            }
        }
        var_17 ^= 3;
    }
    var_18 = ((-16755 ^ ((((min(var_0, var_8))) ? (~144115188071661568) : (((var_13 ? 53272 : var_13)))))));
    var_19 *= ((var_13 ? var_7 : var_10));
    var_20 |= (!((((~var_9) ? 16755 : var_11))));
    #pragma endscop
}
