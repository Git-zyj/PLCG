/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23816
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23816 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23816
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 7;i_0 += 1) /* same iter space */
    {
        var_16 = (arr_0 [i_0 + 3] [8]);

        for (int i_1 = 0; i_1 < 11;i_1 += 1) /* same iter space */
        {
            var_17 = ((((max((arr_2 [i_1]), (arr_0 [1] [1])))) <= (((((var_1 ? var_3 : var_15))) ? (arr_3 [i_0]) : (!var_7)))));
            var_18 = (min(-var_15, ((((min(var_2, var_11))) ? (min((arr_3 [i_0]), var_11)) : ((((arr_0 [i_0] [i_1]) ? var_13 : var_8)))))));
        }
        for (int i_2 = 0; i_2 < 11;i_2 += 1) /* same iter space */
        {
            var_19 = (((min((arr_6 [3] [3]), var_13))) ? 7254928536680218429 : (((((var_5 ? var_2 : 1)) << (var_2 - 32235)))));
            arr_7 [i_0] = (max((((~-82) ? ((((!(arr_5 [i_0] [i_2]))))) : 7254928536680218433)), 192432529));
        }
        for (int i_3 = 0; i_3 < 11;i_3 += 1) /* same iter space */
        {

            for (int i_4 = 0; i_4 < 11;i_4 += 1)
            {
                arr_12 [i_4] [i_3] [i_4] = (max((max((arr_11 [i_4] [i_4] [i_4]), var_13)), 7254928536680218442));
                var_20 |= (max((min(var_14, (((arr_6 [i_0] [i_3]) ? (arr_2 [2]) : (arr_4 [i_0] [i_0]))))), (((max(var_14, var_10))))));
            }
            for (int i_5 = 0; i_5 < 11;i_5 += 1)
            {
                var_21 = (((((((arr_15 [i_0] [i_3] [i_0]) ? (arr_1 [i_5]) : (arr_6 [i_0 + 4] [i_0 + 4])))) ? (min((arr_3 [i_5]), var_0)) : (((((arr_6 [2] [2]) == (arr_11 [i_0] [i_3] [i_0]))))))));
                var_22 &= var_7;
                var_23 = -var_13;
            }
            var_24 = 11191815537029333180;
            var_25 = ((max(32767, 32368)));
        }

        for (int i_6 = 0; i_6 < 11;i_6 += 1) /* same iter space */
        {
            var_26 &= (arr_0 [i_6] [i_0 + 3]);
            arr_21 [i_6] = (arr_19 [i_6] [i_6]);
        }
        for (int i_7 = 0; i_7 < 11;i_7 += 1) /* same iter space */
        {
            arr_25 [i_0] [i_7] [i_7] = ((255 ? -32368 : 506791970));
            var_27 = (min(var_27, (arr_3 [i_7])));
        }
    }
    for (int i_8 = 2; i_8 < 7;i_8 += 1) /* same iter space */
    {

        for (int i_9 = 0; i_9 < 11;i_9 += 1)
        {
            var_28 = var_8;

            for (int i_10 = 1; i_10 < 9;i_10 += 1)
            {

                /* vectorizable */
                for (int i_11 = 0; i_11 < 11;i_11 += 1)
                {
                    var_29 += (arr_29 [i_9] [i_11]);

                    for (int i_12 = 0; i_12 < 11;i_12 += 1)
                    {
                        arr_40 [i_8] [i_10] [i_11] [i_8] = 7254928536680218424;
                        arr_41 [i_8] [i_9] [i_10 + 1] [i_10] [i_12] [i_9] [i_8 + 1] = ((((((arr_35 [i_10] [i_10] [2] [i_10]) ? 13035915993474916372 : (arr_0 [i_9] [i_12])))) ? (((arr_26 [i_12] [i_9]) >> (((arr_24 [i_8 + 4] [i_9] [i_10]) + 11034)))) : (((((arr_39 [i_12] [i_10] [i_10]) < 7254928536680218404))))));
                        var_30 = (arr_14 [i_8 + 4]);
                        var_31 = ((-433664919 ? 5410828080234635253 : 433664919));
                    }
                }
                arr_42 [i_8 + 4] [i_10] = ((5410828080234635243 ? 4200880754 : 7254928536680218443));
            }
            /* vectorizable */
            for (int i_13 = 2; i_13 < 8;i_13 += 1)
            {
                arr_47 [i_8] [i_8] [i_13] [i_13] = (arr_44 [i_8]);
                var_32 *= (arr_30 [i_8 - 1] [i_8 - 1]);
                var_33 = ((+(((arr_8 [i_9] [i_13]) ? (arr_43 [i_8]) : 55999))));
            }
        }
        arr_48 [i_8] = (((arr_1 [i_8]) ? (((min(253, 23064)))) : (max(var_14, ((var_15 ? (arr_34 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8]) : -9223372036854775802))))));
        arr_49 [i_8] [i_8] = (max(var_7, (arr_38 [i_8 + 1] [i_8 + 4])));
        var_34 = (max(var_34, ((((((((23064 ^ (arr_32 [i_8])))))) * ((2147483647 ? (((((arr_27 [i_8]) || (arr_0 [i_8] [i_8]))))) : (arr_26 [i_8] [i_8]))))))));
    }
    for (int i_14 = 0; i_14 < 18;i_14 += 1)
    {
        arr_52 [i_14] = -1;
        var_35 ^= (((((13194 ? -7784 : 255))) ? (arr_50 [i_14]) : (min(204, var_9))));
    }
    var_36 = (+-2061);
    #pragma endscop
}
