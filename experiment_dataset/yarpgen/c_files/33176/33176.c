/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33176
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33176 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33176
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 8;

    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 21;i_1 += 1) /* same iter space */
        {
            var_14 = (max(var_14, ((((((arr_3 [i_0 - 2] [i_0 - 1]) ? 65534 : (~var_10))) << 1)))));
            arr_6 [i_0] = 32822;
        }
        for (int i_2 = 0; i_2 < 21;i_2 += 1) /* same iter space */
        {
            var_15 = 9223372036854775777;
            var_16 = 225;
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 21;i_3 += 1) /* same iter space */
        {
            arr_13 [i_0] [12] = ((!(arr_4 [i_0 + 3] [i_0 + 3])));

            for (int i_4 = 0; i_4 < 21;i_4 += 1)
            {
                var_17 &= (((arr_11 [i_0 + 2]) ? 1 : (((var_2 != (arr_3 [9] [i_3]))))));
                var_18 = 1432724344;
                var_19 = (((arr_14 [i_0 + 3] [i_0 - 2] [i_0 + 3] [i_0]) < 0));
            }
            for (int i_5 = 0; i_5 < 21;i_5 += 1)
            {
                arr_18 [i_0] = (arr_12 [i_0 + 1]);
                arr_19 [i_5] [i_3] [i_0 + 3] [i_0 + 3] = (arr_12 [i_0]);
            }
        }
        for (int i_6 = 0; i_6 < 21;i_6 += 1)
        {

            for (int i_7 = 0; i_7 < 21;i_7 += 1) /* same iter space */
            {
                arr_24 [i_7] [i_7] [i_7] = (max(((((((arr_7 [i_6] [i_7]) ? 18446744073709551593 : 0)) >= (arr_11 [i_0])))), 1459855339));
                arr_25 [i_0] [i_6] [i_7] = (22486 >= 0);
                arr_26 [i_0] [i_0] [i_0] [i_0 + 1] |= var_6;
            }
            for (int i_8 = 0; i_8 < 21;i_8 += 1) /* same iter space */
            {
                arr_30 [i_0] [i_0] = ((+(((((arr_2 [i_0 + 1] [i_0 + 1] [i_8]) || 1)) ? (0 ^ 1) : 171))));
                arr_31 [i_8] [i_8] [i_8] = (((168 ? ((max(1, 61205))) : (arr_5 [i_0]))));
                var_20 = (min(var_20, 9223372036854775792));
                var_21 -= (arr_22 [i_0] [i_6] [i_6]);
            }
            var_22 = (min(var_22, ((((((171 ? (arr_4 [i_0 + 3] [i_6]) : (arr_4 [i_0 - 2] [i_6])))) ? (min(-659586086586345631, (arr_7 [i_0] [i_0]))) : (((~(arr_11 [i_0 - 1])))))))));
        }
        var_23 = (min(var_23, 1137960344));
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 17;i_9 += 1)
    {
        arr_35 [i_9] = 84;
        arr_36 [i_9] [i_9] = 1;
    }
    var_24 += (((-((var_0 ? var_1 : var_6)))));
    #pragma endscop
}
