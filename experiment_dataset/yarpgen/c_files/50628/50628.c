/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50628
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50628 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50628
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (((4585629655026710840 + 26411) ? -15686237687220628494 : -3104149835));

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                arr_8 [i_0] [i_0] [i_2] = (-var_0 <= (arr_0 [i_1]));
                var_12 = (((-9223372036854775807 - 1) / (arr_7 [i_0] [10] [i_2] [i_2])));
            }
            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                var_13 = ((~3251) - -213415302689722146);
                var_14 = 15686237687220628499;
                var_15 = ((((((arr_9 [i_0] [i_1] [i_3]) > (arr_7 [i_3] [i_1] [22] [i_0])))) + -3458));
            }
            arr_11 [i_0] [i_0] [i_0] = (arr_10 [i_0]);
        }
        arr_12 [i_0] = -3437;
    }
    var_16 = (max(var_16, ((max(var_11, ((22143 ? -213415302689722146 : 213415302689722146)))))));
    var_17 = ((var_6 ? var_3 : (((812 == (!-3995396206840683854))))));
    var_18 = min((((~((max(33975, var_8)))))), var_0);
    var_19 = (min((var_9 >= -var_10), ((13606 * (2625169858922928567 || 4294967295)))));
    #pragma endscop
}
