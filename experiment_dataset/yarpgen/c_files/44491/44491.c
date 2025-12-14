/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44491
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44491 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44491
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 -= 1047416833;

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (((1047416833 + -877) & 64531));
        var_13 = (299963481 + -818339343);
        arr_4 [i_0] = ((!((max(-177267023, 1047416837)))));
    }
    /* vectorizable */
    for (int i_1 = 4; i_1 < 17;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 3; i_2 < 17;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 20;i_3 += 1)
            {
                for (int i_4 = 3; i_4 < 19;i_4 += 1)
                {
                    {
                        var_14 -= (((((-52 ? 65535 : 49))) ? var_5 : ((-1047416834 + (arr_14 [i_3] [i_3] [i_3 - 2] [i_2] [i_3] [i_3])))));
                        var_15 ^= (arr_11 [i_2 + 3] [i_2 + 3]);
                        var_16 *= ((arr_7 [i_4] [i_3] [i_1]) * (!67));
                    }
                }
            }
        }
        arr_17 [i_1] [i_1] = (!-818339343);
    }
    for (int i_5 = 1; i_5 < 8;i_5 += 1)
    {
        var_17 = var_0;
        var_18 = (min(((18446744073709551615 ? ((7154 ? 147 : 3029644435)) : (-4716 != 6))), ((((arr_7 [i_5] [i_5] [i_5 + 1]) & (arr_7 [i_5] [i_5 + 2] [i_5 + 2]))))));
        arr_20 [5] = max((arr_7 [i_5] [i_5] [i_5]), 1551130689);
        arr_21 [i_5] = ((((((arr_13 [8] [8] [8]) ? (arr_10 [i_5] [i_5 - 1] [20] [i_5]) : (arr_13 [6] [i_5] [6])))) | (~10410099612045548958)));
        var_19 -= (arr_1 [i_5]);
    }
    for (int i_6 = 0; i_6 < 24;i_6 += 1)
    {
        arr_24 [i_6] = (arr_22 [i_6]);
        var_20 = ((((((((arr_23 [i_6]) ? -68 : 32766))) ? (((13850856869934817912 != (arr_23 [i_6])))) : -2047))) ? (((((arr_23 [i_6]) < 1)))) : (arr_22 [i_6]));
        var_21 |= (((((var_9 ? (max(65535, var_2)) : 1047416837))) ? ((-715736389605150250 ^ ((65535 & (arr_22 [i_6]))))) : (arr_23 [i_6])));
        arr_25 [i_6] [i_6] |= arr_23 [i_6];
    }
    var_22 |= ((var_8 == (~-46)));
    #pragma endscop
}
