/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45995
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45995 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45995
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_20 = (max(var_20, ((((4294967283 - var_6) / (arr_0 [i_0]))))));
        var_21 = (((arr_2 [i_0] [i_0]) ? (arr_2 [i_0] [i_0]) : (7421473144011949236 + 2301531993)));

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            var_22 = ((-(arr_0 [i_0])));
            arr_6 [i_0] [i_1] = (!9223372036854775807);
            var_23 = (((arr_0 [i_1]) ? (arr_2 [i_0] [i_1]) : (arr_3 [i_0])));
        }
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            var_24 *= ((var_1 | (arr_4 [i_0] [i_0])));
            var_25 += -110;
        }
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            var_26 = 110;

            for (int i_4 = 1; i_4 < 14;i_4 += 1)
            {
                arr_17 [i_0] = (-77 ? 33361 : (arr_5 [i_4 + 1]));

                for (int i_5 = 3; i_5 < 15;i_5 += 1)
                {
                    var_27 ^= (!93);

                    for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
                    {
                        var_28 -= (arr_18 [i_4 + 2] [i_4 - 1] [i_4 + 1] [i_4] [i_4 + 1]);
                        var_29 = (max(var_29, (((-(arr_19 [i_5 - 2] [i_5 + 1] [i_5 + 1] [i_4 + 2] [i_4 + 1] [i_4 + 2]))))));
                    }
                    for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
                    {
                        var_30 = (max(var_30, (((!(arr_22 [i_4] [i_5 - 2] [1] [i_5] [1] [i_4]))))));
                        var_31 -= ((!(~44177)));
                    }
                    var_32 = -5906300163118058940;
                }
            }
            var_33 &= ((~((-(arr_12 [i_3])))));
        }
    }
    for (int i_8 = 0; i_8 < 23;i_8 += 1)
    {
        var_34 = 38;
        var_35 ^= 76;
    }
    var_36 = (min(var_36, -2801807504693609652));
    var_37 |= ((var_13 ? var_14 : (((((var_11 ? 115 : var_15)) << ((((((1129599991369005380 ? (-9223372036854775807 - 1) : var_16)) - -9223372036854775793)) + 31)))))));
    #pragma endscop
}
