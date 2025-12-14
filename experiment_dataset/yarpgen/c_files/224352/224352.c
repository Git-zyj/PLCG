/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224352
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224352 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224352
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_8;

    /* vectorizable */
    for (int i_0 = 4; i_0 < 20;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_14 = var_12;
            arr_7 [i_1] = 45972;
            var_15 = var_9;
            var_16 -= (((((109 ? (arr_2 [i_0] [i_0]) : var_5))) ? (((1 + (arr_6 [i_0] [i_0] [i_0])))) : ((~(arr_4 [i_0] [i_0] [i_1])))));
        }
        for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
        {
            arr_10 [7] [i_2] [i_2] = (arr_8 [i_0] [i_2]);
            arr_11 [i_2] = (((!var_2) || 409811526));
            var_17 = var_3;
            arr_12 [i_2] [i_2] [i_0] = (var_6 - 1370);
            var_18 = ((((var_8 ? var_7 : (-9223372036854775807 - 1))) + (arr_8 [i_2] [i_2])));
        }
        for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
        {
            var_19 = (min(var_19, ((3885155765 != (arr_13 [i_0 - 3] [i_0 + 2] [i_0 + 2])))));
            arr_16 [i_0] [i_0] [i_3] = 409811526;
            arr_17 [i_3] = (((!var_6) >= 1));
            arr_18 [i_3] [11] = (arr_15 [i_0]);
            var_20 = (((arr_1 [i_3]) ? ((var_10 ? (-9223372036854775807 - 1) : 1)) : var_10));
        }
        for (int i_4 = 0; i_4 < 23;i_4 += 1)
        {

            for (int i_5 = 2; i_5 < 21;i_5 += 1)
            {
                var_21 ^= (((arr_8 [i_5 + 2] [i_5]) << (((arr_8 [i_5 + 1] [i_5]) - 12911))));

                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    var_22 = (arr_4 [i_6] [i_4] [i_5]);
                    var_23 = 1;
                }
                for (int i_7 = 2; i_7 < 20;i_7 += 1)
                {
                    var_24 ^= ((-(!1)));
                    arr_30 [i_7] [i_5] [i_4] [i_7] [i_4] [i_0 - 1] = -63;
                    var_25 = var_4;
                    arr_31 [i_4] = var_5;
                }
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    var_26 = (-((32765 << (122 - 114))));
                    var_27 = (i_4 % 2 == zero) ? ((~((3678585460 << (((arr_19 [i_4] [i_4] [16]) - 17053)))))) : ((~((3678585460 << (((((arr_19 [i_4] [i_4] [16]) - 17053)) - 23714))))));
                    var_28 = (min(var_28, (arr_21 [i_8] [i_8] [i_8])));
                }
                var_29 = (((arr_22 [i_4]) ? (arr_6 [i_5 - 2] [i_5 + 1] [i_5 - 2]) : (arr_19 [i_4] [i_4] [i_4])));
            }
            var_30 = var_2;
            arr_34 [i_4] [i_4] [1] = ((arr_4 [i_0 + 2] [i_0 + 3] [i_0 + 2]) ? (arr_4 [i_0 - 3] [i_4] [i_4]) : var_3);
            var_31 = (arr_23 [i_0] [i_0]);
            arr_35 [i_4] [i_4] [i_4] = (i_4 % 2 == 0) ? ((((arr_3 [i_4]) > ((var_10 << (((((arr_32 [i_4] [i_4]) + 5479469719339835035)) - 50))))))) : ((((arr_3 [i_4]) > ((var_10 << (((((((arr_32 [i_4] [i_4]) + 5479469719339835035)) - 50)) - 2192419050789645917)))))));
        }
        arr_36 [i_0] [i_0 + 1] = (((arr_19 [6] [i_0 - 4] [i_0 + 3]) ? (arr_19 [4] [i_0 - 4] [i_0 - 3]) : (arr_19 [22] [i_0 - 3] [i_0 + 2])));
    }
    var_32 = (~var_10);
    var_33 = ((var_0 ? var_10 : var_12));
    #pragma endscop
}
