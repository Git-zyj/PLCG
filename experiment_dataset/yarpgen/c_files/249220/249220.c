/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249220
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249220 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249220
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((-(((((var_11 ? var_7 : 4294967295))) ? var_10 : ((var_9 ? var_14 : var_12))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_18 *= ((+(((arr_0 [13]) & -100))));
        var_19 = (!7824);

        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            var_20 = ((!-84) > 7650988946606622465);
            var_21 ^= var_6;
        }
        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            arr_7 [i_2] [i_2] [i_2] = ((var_16 ? 84 : (arr_2 [i_0])));
            var_22 = ((~(!13113169438313838921)));
            var_23 = ((+((((-2147483647 - 1) == 13113169438313838921)))));
        }
        for (int i_3 = 2; i_3 < 16;i_3 += 1)
        {
            arr_11 [i_0] [i_3] [i_3] = (((-(arr_10 [i_0] [i_0] [i_3]))));
            var_24 = (((-(arr_4 [i_3]))));
        }
    }

    for (int i_4 = 0; i_4 < 15;i_4 += 1)
    {
        arr_15 [i_4] = (((-75 != -10447) < (((!((!(arr_5 [i_4] [i_4] [i_4]))))))));
        var_25 = ((((((!5333574635395712689) % (((13113169438313838931 || (arr_9 [10] [i_4]))))))) ? (((!((0 == (arr_0 [i_4])))))) : (((!(!-100))))));
    }
    #pragma endscop
}
