/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34064
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34064 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34064
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            var_16 += arr_5 [i_0 - 1] [i_0 - 1] [2];
            arr_6 [i_0 - 2] [i_1] = (((!-910835259) == ((((arr_3 [i_0]) < var_1)))));
        }
        var_17 = ((arr_3 [i_0 + 1]) + (arr_3 [i_0 - 3]));
    }
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {

        for (int i_3 = 3; i_3 < 19;i_3 += 1)
        {

            for (int i_4 = 1; i_4 < 19;i_4 += 1)
            {
                var_18 = (arr_10 [i_2]);
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 18;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 21;i_6 += 1)
                    {
                        {
                            var_19 = ((((((((18446744073709551615 ? 63 : var_7))) ? (var_7 <= 77) : -3228586790))) ? (((var_4 ^ (~-44)))) : ((((max(var_3, (arr_18 [i_2] [16] [i_2] [i_2] [i_2])))) ? ((((arr_15 [i_2] [i_2] [i_4] [i_4] [i_5 + 1] [i_6]) ? var_5 : (arr_16 [i_2] [i_2] [i_2] [i_2])))) : ((3366967821 ? (arr_10 [i_4]) : (arr_18 [i_2] [i_3] [i_4] [i_3] [i_3])))))));
                            var_20 = (((((((max((arr_7 [i_2]), 26))) ? (((var_12 ? (arr_13 [i_2] [i_2] [2] [i_5]) : (arr_7 [i_6])))) : var_7))) % ((104 ? -2067656948 : ((2147483647 ? 9 : 63))))));
                        }
                    }
                }
            }
            var_21 = (((arr_16 [i_2] [i_2] [i_2] [i_2]) ? (!65) : (arr_16 [i_3] [1] [1] [1])));
            var_22 += (arr_17 [i_2] [12]);
        }
        for (int i_7 = 0; i_7 < 21;i_7 += 1)
        {
            arr_21 [i_7] = (max(((((var_1 > -108) ? (arr_17 [i_2] [8]) : (arr_7 [i_2])))), (((arr_17 [i_2] [14]) ? ((0 ? 1869995030 : 2)) : ((((arr_7 [i_7]) ? 0 : (arr_8 [i_2]))))))));
            arr_22 [i_2] = (((((((((arr_16 [i_2] [i_7] [i_7] [14]) ? var_9 : var_4))) ? ((491149162 ? 1717 : 35618)) : (arr_9 [i_7] [i_2])))) ? (!2147483647) : (((((var_3 ? (arr_17 [i_2] [20]) : (arr_20 [i_2] [i_2] [i_7])))) + ((5354204353196023530 ? 0 : 927999472))))));
        }
        var_23 = (arr_8 [i_2]);
        var_24 ^= (((arr_12 [i_2] [i_2] [i_2]) >= (~27538)));
    }
    /* vectorizable */
    for (int i_8 = 1; i_8 < 9;i_8 += 1)
    {
        var_25 += (((arr_25 [i_8 - 1]) * (arr_9 [i_8 + 1] [i_8 - 1])));

        for (int i_9 = 0; i_9 < 10;i_9 += 1)
        {
            arr_28 [i_8] = (var_14 ? ((-250174590 ? 1229276517458732722 : var_11)) : var_6);
            arr_29 [i_8] = (((arr_2 [i_9] [i_8 + 1]) ? (arr_2 [10] [i_8 - 1]) : var_5));
        }
        for (int i_10 = 2; i_10 < 7;i_10 += 1)
        {
            var_26 = var_14;
            var_27 = (((((-(arr_9 [i_8] [i_8])))) ? (arr_12 [i_8] [i_8] [i_8]) : (((31312 ? -30277 : var_13)))));
        }
    }
    var_28 = var_8;
    #pragma endscop
}
