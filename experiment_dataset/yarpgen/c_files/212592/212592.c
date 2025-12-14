/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212592
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212592 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212592
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_7;
    var_12 -= ((!(((((var_4 ? 17158814790613082150 : var_7))) && (!var_7)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_4 [i_0] = (~(min(((max(var_3, 9223372036854775807))), (max((arr_1 [i_0] [i_0]), var_7)))));
                arr_5 [i_0] [i_0] = ((37289 - ((17158814790613082150 ? var_9 : (arr_3 [i_0] [i_1] [i_1])))));
                var_13 -= (arr_0 [i_0]);
            }
        }
    }
    var_14 = (~var_2);

    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        arr_8 [i_2] = ((max(var_3, (var_10 <= 465423778))) ? ((((max(192, var_0))) ? (arr_6 [i_2]) : (max(16086349880470350952, (arr_6 [i_2]))))) : (((min((arr_6 [i_2]), 250)))));

        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {

            for (int i_4 = 0; i_4 < 17;i_4 += 1)
            {
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 17;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {
                        {
                            arr_22 [15] [i_3] [i_4] [i_5] [i_5] [i_5] [i_6] = ((((min((arr_16 [i_2] [i_3] [i_4] [i_4]), var_8))) >= (var_2 || 18446744073709551615)));
                            arr_23 [i_2] [i_3] [1] [i_5] = (min((((((var_8 ? 18446744073709551615 : (arr_14 [i_6] [i_5] [i_3]))) <= ((((arr_15 [i_2] [i_3] [i_4]) / 128)))))), (min((-465423779 & 2147418112), ((var_7 & (arr_6 [1])))))));
                            arr_24 [i_2] [i_5] [i_4] [i_4] [3] [i_5] [11] = (min(((max(((8884796646131977643 >> (((arr_9 [13] [i_3] [i_4]) - 5036877450255891508)))), var_10))), (min(((3968 ? var_6 : var_0)), var_1))));
                            var_15 = (min(var_15, ((max(5968941923484723587, ((((arr_18 [i_2] [i_3] [i_4] [i_4] [i_5] [i_4]) ? (arr_14 [i_2] [i_2] [i_2]) : ((((arr_14 [i_2] [1] [i_6]) <= var_10)))))))))));
                        }
                    }
                }
                var_16 ^= (!2069609110);
                var_17 = (max(var_17, ((max((max((18446744073709551615 ^ var_10), (((-4045367083342277180 - (arr_10 [i_3] [i_3])))))), ((min(var_3, 1228205301))))))));
            }
            var_18 = (max((((arr_9 [i_2] [i_2] [4]) ? -1612554455 : 8425)), (~var_8)));
            var_19 ^= (max(4045367083342277179, (max((arr_20 [i_2] [i_2] [i_2] [i_3] [i_3]), (((3291059909 ? (arr_15 [i_3] [i_2] [i_2]) : (arr_7 [i_2] [i_2]))))))));
        }
        arr_25 [i_2] [i_2] = ((((min(var_0, (arr_21 [i_2] [i_2] [16] [i_2] [i_2])))) | (((arr_21 [i_2] [13] [i_2] [i_2] [i_2]) ? ((4294967295 % (arr_9 [i_2] [16] [i_2]))) : ((-(arr_20 [i_2] [i_2] [6] [16] [i_2])))))));
        arr_26 [i_2] = ((1228205301 ? (((arr_20 [i_2] [i_2] [i_2] [6] [i_2]) ? (arr_20 [i_2] [i_2] [i_2] [14] [12]) : (arr_7 [i_2] [i_2]))) : var_3));
        var_20 = (max(0, -2147483623));
    }
    for (int i_7 = 0; i_7 < 14;i_7 += 1)
    {
        arr_29 [i_7] = (((arr_3 [i_7] [i_7] [i_7]) ? var_7 : ((var_0 * (((arr_19 [i_7] [4] [i_7] [i_7] [i_7] [4]) ? var_3 : var_0))))));
        var_21 *= ((-47 <= (min((arr_21 [i_7] [i_7] [i_7] [i_7] [3]), (~var_2)))));
    }
    #pragma endscop
}
