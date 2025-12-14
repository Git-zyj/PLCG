/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199377
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0 - 1] = ((((var_4 ? -var_12 : (var_3 & var_8)))) ? 5974832790697339907 : (((var_6 != var_12) >> (var_3 - 7884))));
        arr_4 [8] = ((((((((var_12 ? 3 : -5780429481818780015))) && (arr_0 [i_0])))) >= (var_8 && -9749)));
    }
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {
        arr_8 [i_1] [i_1] = ((((((var_11 | ((var_3 ? var_8 : var_2)))) + 2147483647)) >> (max((((arr_7 [i_1 - 1] [i_1 - 1]) % 1)), var_6))));
        arr_9 [i_1] = ((((((((var_11 ? var_9 : 58))) ? ((-2036371856 ? 9223372036854775807 : -327176915)) : (~var_6)))) ? (23876 & var_7) : 138835837));

        for (int i_2 = 3; i_2 < 8;i_2 += 1)
        {
            var_13 = (min(var_13, (((-var_1 ? var_11 : (((var_6 >= var_5) | ((max(-1, (arr_7 [i_1] [i_2])))))))))));
            arr_14 [0] |= ((((!(8540633651451160014 || 0))) ? ((((((65535 ? var_1 : var_12))) < (18446744073709551605 & var_11)))) : 0));
            arr_15 [i_1] = ((-var_1 % (max(((var_8 >> (var_1 - 2469))), ((var_1 ? var_0 : var_4))))));
            arr_16 [5] [i_2 - 3] [i_1] = (((var_12 && 171) || ((!(((arr_11 [i_1 - 1] [i_2]) || (arr_7 [i_1] [i_1])))))));
        }
    }
    for (int i_3 = 1; i_3 < 22;i_3 += 1)
    {
        arr_19 [i_3] = (max((((131071 ? var_8 : var_2))), ((min((min(var_3, 124)), (min(var_8, var_12)))))));
        arr_20 [i_3 - 1] |= (((max(38, 78)) * ((201 ? 80 : 2036371856))));
        arr_21 [i_3] = -1975518978;
        /* LoopNest 2 */
        for (int i_4 = 1; i_4 < 21;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 23;i_5 += 1)
            {
                {
                    arr_29 [i_3] [i_3] [i_4] [i_5] = var_4;
                    arr_30 [i_4] [i_4] [i_4] = (((((arr_23 [i_4] [i_4 + 2] [i_5]) && (((var_5 ? var_8 : -1))))) ? ((((var_4 || var_5) || (((arr_24 [i_3] [i_3] [i_3]) && var_5))))) : ((((((var_2 ? (arr_25 [i_5] [i_3]) : var_12))) || var_10)))));
                    var_14 = var_2;
                }
            }
        }
    }

    /* vectorizable */
    for (int i_6 = 0; i_6 < 17;i_6 += 1)
    {
        arr_34 [i_6] = (((var_7 ? var_2 : var_11)) % var_4);

        for (int i_7 = 0; i_7 < 17;i_7 += 1)
        {
            var_15 *= var_4;
            var_16 *= ((221 ? 707922220 : -6));
            arr_38 [i_6] = (985162418487296 && 1975518977);
            var_17 = (max(var_17, (var_10 <= -31)));
            arr_39 [8] [i_7] = (((((var_5 ? var_0 : var_2))) ? ((var_12 ? var_8 : var_9)) : ((var_3 ? (arr_2 [i_7] [i_7]) : -707922221))));
        }
        var_18 = ((~((var_12 << (32314 - 32291)))));
        arr_40 [8] = (((var_4 < var_9) ^ var_3));
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 18;i_8 += 1)
    {
        arr_43 [3] = ((-(arr_25 [i_8] [i_8])));
        var_19 = (~21);
    }
    var_20 = ((!var_12) ? var_9 : ((39 ? 13638 : 44992)));
    #pragma endscop
}
