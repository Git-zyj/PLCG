/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24657
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 0;

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            var_20 = (max(var_20, ((((11528786330456633474 + 2273088950) ? ((((((((arr_0 [i_0]) < 9223372036854775807)))) & (min(1787765420, (arr_1 [0])))))) : var_2)))));
            var_21 = (max((max(17999609378136742157, var_15)), (((1 ? 1 : 15)))));
            var_22 = (max(var_22, (arr_4 [i_0])));
        }
        var_23 = 3759296205021139510;
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_24 = ((~(~var_3)));

        for (int i_3 = 0; i_3 < 23;i_3 += 1) /* same iter space */
        {
            var_25 = (!0);
            var_26 = (max(var_26, (((var_14 ^ ((~(7284768687824863757 >> 1))))))));
        }
        for (int i_4 = 0; i_4 < 23;i_4 += 1) /* same iter space */
        {
            var_27 *= (min((((max((arr_11 [i_4]), 155)) >> (((arr_10 [14] [i_4] [i_4]) ? 1 : (arr_14 [i_2] [1] [1]))))), ((8064 ? (~1) : 20))));
            var_28 = (max((max(9279742462500872218, (-2147483647 - 1))), (arr_8 [i_4] [7])));
        }

        for (int i_5 = 2; i_5 < 20;i_5 += 1)
        {
            var_29 = 60;
            arr_17 [i_5] = (max((((arr_13 [i_5 - 2] [i_5]) ? -1 : 5)), 1));
            var_30 = (max(var_30, (~230)));
        }
        arr_18 [4] [i_2] = 81;
    }

    for (int i_6 = 0; i_6 < 10;i_6 += 1)
    {
        var_31 ^= (min(((((arr_5 [i_6]) && (((-1 ? 2273088939 : (arr_12 [i_6] [i_6] [i_6]))))))), (max(var_5, (arr_0 [i_6])))));

        for (int i_7 = 0; i_7 < 10;i_7 += 1)
        {
            arr_23 [0] [i_6] = (((2471648441 / var_6) == (arr_1 [i_6])));
            var_32 = (((var_14 ^ var_3) ? 9 : (min(18446744073709551607, 1073741824))));
            arr_24 [i_6] [i_6] = ((-(max((max(-1, 0)), ((max(0, (arr_3 [i_6] [i_6]))))))));
            arr_25 [i_6] [i_7] |= 1;
        }
        /* vectorizable */
        for (int i_8 = 1; i_8 < 8;i_8 += 1)
        {
            arr_29 [i_6] [i_8] [i_8] = ((-1 ? 243 : 65535));
            var_33 += ((var_18 - 4294967269) ? (137438953471 / var_7) : 428496476);
        }
        /* vectorizable */
        for (int i_9 = 0; i_9 < 10;i_9 += 1)
        {
            arr_33 [i_6] [i_9] = (((arr_9 [i_9] [1] [i_6]) ^ (arr_15 [i_9])));
            arr_34 [i_9] = ((4294967295 ? 8388607 : (((144 < (arr_32 [i_6]))))));
        }
        var_34 = var_16;
    }
    /* vectorizable */
    for (int i_10 = 3; i_10 < 10;i_10 += 1)
    {
        var_35 = (((30 ? -1 : (arr_1 [14]))));

        for (int i_11 = 0; i_11 < 1;i_11 += 1)
        {
            var_36 = (((arr_37 [i_11] [i_10 + 3]) & (arr_5 [i_10 + 3])));
            var_37 *= (arr_0 [i_11]);
            var_38 += (((var_4 && -7336375532806815624) ? -1713941271 : var_13));
        }
        arr_40 [i_10] = ((~(((0 && (-9223372036854775807 - 1))))));
    }
    var_39 |= var_8;
    #pragma endscop
}
