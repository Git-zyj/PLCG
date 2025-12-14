/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222347
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222347 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222347
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_2;
    var_11 = (((-(max(var_0, var_1)))));
    var_12 *= (-(max(((var_7 ? var_3 : var_4)), (min(var_9, var_4)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_13 = (min(var_13, 29981988));
        var_14 *= arr_2 [0] [i_0];
        arr_4 [i_0] [i_0] = (((arr_2 [i_0] [i_0]) ? (((arr_0 [i_0]) ? (arr_2 [i_0] [i_0]) : (arr_2 [i_0] [i_0]))) : (arr_3 [i_0])));

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                var_15 &= (arr_1 [i_1] [i_0]);
                var_16 = (((arr_3 [i_0]) ? (((var_3 > (arr_1 [i_0] [i_0])))) : 29981998));
                var_17 ^= -4607744053922939493;
                var_18 = (((((arr_0 [i_0]) % var_1))) | (((arr_8 [i_0] [i_1]) ? 549751619584 : (arr_5 [i_0] [i_0]))));
            }
            var_19 *= 10215972223737586267;
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    {
                        var_20 ^= (3675947402026887842 ? 2251662374731776 : 503316480);
                        arr_17 [i_0] [i_1] [0] &= (((arr_1 [i_1] [i_4]) ? (arr_13 [i_4] [4] [4] [i_0]) : (arr_0 [i_1])));
                        var_21 = (((arr_15 [i_4] [i_1] [i_1]) ? var_7 : (arr_2 [i_4] [i_0])));
                    }
                }
            }
        }
        for (int i_5 = 2; i_5 < 8;i_5 += 1)
        {
            arr_22 [i_0] = ((-((-(arr_3 [i_0])))));
            var_22 = (((var_3 & (arr_2 [i_0] [i_5 + 3]))));
        }
    }
    var_23 = min((((var_2 || var_4) ? (min(var_1, 13888131550748444538)) : ((var_5 ? 0 : var_1)))), (!var_4));
    #pragma endscop
}
