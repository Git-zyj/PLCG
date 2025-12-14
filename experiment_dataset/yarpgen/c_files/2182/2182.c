/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2182
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2182 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2182
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (!var_4);
    var_20 = (min(var_20, var_18));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] = ((~(~var_11)));

        /* vectorizable */
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {

            for (int i_2 = 3; i_2 < 11;i_2 += 1)
            {
                var_21 = (!152);
                var_22 = (~2490345817);
            }

            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                var_23 *= (!(arr_8 [i_1] [i_1 + 1]));
                var_24 = ((!(arr_7 [i_0] [i_0] [i_0] [i_3])));
            }
            var_25 = (max(var_25, (!1)));
            var_26 = ((~(arr_8 [i_1 - 2] [i_1 - 2])));
        }
        var_27 = (max(var_27, ((-(((!(arr_4 [i_0] [i_0]))))))));
        var_28 = ((~(~var_15)));
        var_29 = ((~(!var_5)));
    }
    #pragma endscop
}
