/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34187
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34187 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34187
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_11 *= (((((231 ? (arr_3 [i_0] [i_0]) : (arr_3 [i_0] [i_0])))) ? ((((arr_3 [i_0] [i_0]) || 57990))) : (arr_3 [i_0] [i_0])));
        var_12 = (min((arr_3 [i_0] [i_0]), (arr_1 [i_0])));
        var_13 = ((!((min(((33833 ? 24162 : 31681)), (-24145 > -1013141859))))));

        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            var_14 = (min(-var_7, (!var_10)));
            var_15 = ((((0 ? 19922 : -311522253674319337)) < 6327));
        }
        var_16 = (min(var_16, ((max((arr_0 [i_0]), -462792268)))));
    }
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        arr_9 [2] [i_2] |= (!31692);
        var_17 = arr_4 [i_2];
        var_18 = (min(var_1, (min((arr_8 [i_2]), (min((arr_8 [i_2]), (arr_7 [i_2])))))));
    }
    /* vectorizable */
    for (int i_3 = 2; i_3 < 12;i_3 += 1)
    {

        for (int i_4 = 0; i_4 < 16;i_4 += 1) /* same iter space */
        {

            for (int i_5 = 1; i_5 < 13;i_5 += 1)
            {
                arr_19 [i_3] [i_4] [i_5 + 1] &= (~1);
                var_19 = ((-(var_5 < 24145)));
                arr_20 [i_3 + 1] [i_4] [i_5] = (((((((arr_1 [i_3]) > (arr_12 [i_3]))))) + var_8));
                var_20 &= (~33842);
                var_21 ^= (((((arr_2 [i_4]) ^ (arr_14 [i_5] [i_3]))) * ((1 ? -415920314 : 1670270665560138053))));
            }
            for (int i_6 = 0; i_6 < 16;i_6 += 1)
            {
                var_22 = ((((-(arr_18 [i_3] [i_3] [i_6]))) / (arr_11 [i_6] [i_3])));
                var_23 = (min(var_23, var_3));
            }
            for (int i_7 = 4; i_7 < 12;i_7 += 1)
            {
                arr_27 [i_7 + 3] [i_4] [2] = (!(arr_18 [i_3 + 2] [i_3 + 2] [i_7 - 3]));
                arr_28 [i_3 + 3] [i_4] [i_3 + 3] [i_7] = (((arr_18 [i_7 - 1] [i_7 - 1] [i_7 - 4]) - (arr_18 [i_7 + 1] [i_7 - 4] [i_7 - 2])));
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 16;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 16;i_9 += 1)
                    {
                        {
                            arr_33 [i_3] [i_4] [i_9] [i_8] [i_9] = (((arr_1 [i_3 + 3]) >> (118 - 110)));
                            var_24 = (((arr_12 [i_3 - 1]) % (arr_12 [i_3 - 1])));
                            arr_34 [i_3] [i_3] [i_7] [i_8] [i_9] = (arr_5 [i_3 - 2] [i_7 + 4]);
                            arr_35 [i_3] [i_3] &= (((arr_2 [i_3 + 1]) | 222));
                            var_25 &= -1731782314;
                        }
                    }
                }
            }
            var_26 = (max(var_26, (((!(7843179916927283110 || -24193))))));
        }
        for (int i_10 = 0; i_10 < 16;i_10 += 1) /* same iter space */
        {
            arr_39 [i_3] = ((~(arr_29 [i_3 + 4] [i_10])));
            var_27 = (max(var_27, var_5));
            arr_40 [8] = 1472427733;
            var_28 = var_4;
        }
        var_29 = (max(var_29, (arr_5 [i_3 + 1] [i_3 + 3])));
        arr_41 [i_3] |= 9016776935647973667;
    }
    var_30 = ((((max(98, -1))) ? var_1 : -48));
    #pragma endscop
}
