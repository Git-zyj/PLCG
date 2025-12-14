/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26758
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26758 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26758
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_17;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {

        for (int i_1 = 4; i_1 < 18;i_1 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    {
                        var_21 = var_9;
                        arr_11 [i_0] [i_1 - 4] [9] [i_3] = (max((var_7 % 124), var_16));
                        arr_12 [i_0] [i_1] [i_0] [11] [i_2] = (((((arr_8 [i_0] [i_1]) & 950168096765118952)) < var_14));
                        arr_13 [i_0] = ((min(-950168096765118954, (max(-950168096765118952, 1)))));
                    }
                }
            }
            var_22 |= (var_10 / var_0);
        }
        for (int i_4 = 4; i_4 < 18;i_4 += 1) /* same iter space */
        {
            var_23 = (min(var_23, 9205));
            var_24 = (arr_0 [i_4 - 4] [1]);
            arr_17 [i_0] [i_4] [i_4] = (((var_13 & (arr_10 [i_4 - 1] [i_4 - 3] [i_4 - 4] [i_4 + 2] [i_4 - 3]))));
            var_25 ^= ((var_12 ? var_14 : var_1));
        }

        /* vectorizable */
        for (int i_5 = 4; i_5 < 19;i_5 += 1)
        {
            arr_20 [i_0] [i_5] [i_5] = ((9 ? (!var_16) : ((var_17 ? -950168096765118954 : var_7))));
            var_26 = -950168096765118953;

            for (int i_6 = 0; i_6 < 20;i_6 += 1)
            {
                arr_23 [i_0] [i_5] [i_5 - 2] [i_6] = ((-123 ? 7139602633987907111 : 1));
                arr_24 [i_0] [i_0] [14] [i_6] = var_19;
            }
        }
        for (int i_7 = 2; i_7 < 16;i_7 += 1)
        {
            var_27 = (max(var_27, (((((((~(arr_16 [i_0] [12])))) & var_10)) == (var_17 ^ var_17)))));
            var_28 = (min(var_28, 950168096765118962));
            var_29 += (((var_5 < (((arr_3 [i_0]) % 1)))));
        }
        for (int i_8 = 4; i_8 < 17;i_8 += 1)
        {
            var_30 = (min((((arr_15 [i_0]) ? 123 : var_5)), (~var_18)));
            arr_32 [i_0] [i_0] [i_8] = (((19 < 6) ^ ((((((arr_14 [1]) / var_7))) ? (arr_21 [i_8 + 3] [i_0]) : ((11307141439721644505 ? (arr_18 [i_0] [i_0] [i_0]) : var_4))))));
            var_31 += max((arr_0 [i_0] [12]), (var_18 * 1493849484598205533));
        }

        for (int i_9 = 0; i_9 < 20;i_9 += 1)
        {
            arr_36 [i_0] [i_0] [i_9] = (((((var_4 | (arr_31 [i_0])))) ? ((~(arr_31 [i_0]))) : (((arr_31 [i_9]) ? (arr_35 [i_0] [i_0] [i_9]) : var_10))));
            var_32 = (min(var_32, (((var_9 ? ((((arr_35 [i_0] [12] [i_0]) < 9823035730307723586))) : ((min((!var_0), 220))))))));
            arr_37 [i_0] = (((var_7 <= ((min(var_6, (arr_5 [i_0] [i_0] [i_0])))))));
        }
        arr_38 [i_0] [i_0] = ((~((var_19 ? (((max(19, -4072)))) : var_16))));
        var_33 = (min(var_33, (((var_13 ^ (((((arr_30 [i_0] [i_0] [i_0]) >= 1)) ? (var_19 % var_8) : 7139602633987907086)))))));
    }
    #pragma endscop
}
