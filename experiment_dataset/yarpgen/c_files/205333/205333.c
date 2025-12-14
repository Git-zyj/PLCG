/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205333
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205333 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205333
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((min((((var_15 ? var_9 : 77))), -4772712742889247997))) ? ((max((var_0 * var_1), (!var_3)))) : var_15));

    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        var_20 ^= var_12;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 11;i_2 += 1)
            {
                {
                    arr_10 [i_1] [i_1] [i_1] [i_1] = 3;
                    arr_11 [i_1] [i_1] [i_2 - 2] = arr_1 [i_0];
                }
            }
        }
        arr_12 [i_0] = ((((min(-1803745822173764968, 4294967276))) ? (arr_9 [10] [i_0] [10]) : ((((min((arr_8 [i_0] [i_0] [i_0 - 2]), (arr_0 [i_0])))) ? 53163 : ((4294967296 ? -4751652827059917428 : -23159))))));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 20;i_3 += 1)
    {
        var_21 = (((arr_14 [i_3]) % (arr_14 [i_3])));
        var_22 = ((!((((arr_14 [i_3]) ^ -5550022948573312999)))));
        /* LoopNest 2 */
        for (int i_4 = 1; i_4 < 19;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 20;i_5 += 1)
            {
                {
                    var_23 -= (arr_16 [i_3]);
                    var_24 *= (~3553474027);
                    var_25 = (arr_14 [i_3]);
                    var_26 = (min(var_26, ((((arr_18 [i_4 - 1]) - (arr_18 [i_4 + 1]))))));
                    var_27 = (min(var_27, (((4751652827059917424 << (-2197533589 - 2097433707))))));
                }
            }
        }
        var_28 ^= (arr_18 [i_3]);
    }
    for (int i_6 = 0; i_6 < 23;i_6 += 1)
    {
        var_29 = (((((((max(9223372036854775806, (arr_20 [i_6])))) ? ((~(arr_20 [i_6]))) : (arr_22 [i_6] [i_6])))) ? ((((((~(arr_20 [i_6]))) + 9223372036854775807)) >> (((arr_22 [i_6] [i_6]) - 4564239347804000327)))) : (max((((arr_23 [i_6]) - var_1)), (arr_21 [i_6])))));
        var_30 = (min((!56), ((((min(var_18, 9223372036854775806))) ? (((arr_20 [i_6]) ? (arr_20 [i_6]) : 1552203486)) : var_1))));
    }
    var_31 = min((max(2198048936694494797, (~461627176))), var_14);
    #pragma endscop
}
