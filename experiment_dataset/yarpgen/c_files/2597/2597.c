/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2597
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2597 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2597
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 ^= ((-((~((-8901835505599704887 ? 18446744073709551615 : 255))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_16 ^= ((((-(((arr_1 [i_1]) ? var_9 : 252)))) & ((((!-11) % var_0)))));
                arr_5 [i_0] = (!203);
                var_17 = var_12;
                arr_6 [i_0 - 2] [i_0] [1] = ((!(((218056805 ? (arr_1 [i_0 + 1]) : 255)))));
            }
        }
    }

    for (int i_2 = 1; i_2 < 12;i_2 += 1) /* same iter space */
    {

        for (int i_3 = 4; i_3 < 15;i_3 += 1) /* same iter space */
        {
            var_18 += (min((min(var_1, (arr_8 [i_2 - 1]))), ((min(5924880270769058732, 4294967292)))));
            var_19 -= var_14;
            arr_13 [i_2] = (((arr_7 [i_2] [i_2 - 1]) != (arr_9 [i_2 + 1])));
            var_20 = var_13;
        }
        for (int i_4 = 4; i_4 < 15;i_4 += 1) /* same iter space */
        {
            var_21 = (max(var_21, 41335));
            var_22 = (min(var_22, (!0)));
            var_23 = ((127 % (max((arr_10 [i_4 - 1]), 65528))));
        }
        for (int i_5 = 4; i_5 < 15;i_5 += 1) /* same iter space */
        {
            var_24 = ((65535 ? (max(4294967294, 13605937208674702513)) : (((4176797721249687355 ? ((1 ? 1 : 1)) : (arr_14 [i_2]))))));
            var_25 = (!1);
        }
        for (int i_6 = 3; i_6 < 14;i_6 += 1)
        {

            /* vectorizable */
            for (int i_7 = 0; i_7 < 16;i_7 += 1)
            {
                var_26 += 1;
                var_27 = (max(var_27, (arr_25 [i_2 + 2] [i_2 + 3] [i_6 + 2] [i_6])));
            }
            var_28 = (max(var_28, (arr_2 [i_6 + 1] [i_2 - 1])));
        }
        var_29 *= var_10;
        var_30 += ((((min(1331330880, (arr_24 [i_2 - 1])))) ? ((min(var_2, (arr_15 [i_2] [i_2])))) : -1));
    }
    for (int i_8 = 1; i_8 < 12;i_8 += 1) /* same iter space */
    {
        var_31 -= (((arr_26 [i_8 - 1]) / 2));
        var_32 -= ((((max((arr_3 [i_8 + 4]), (arr_23 [i_8] [i_8] [i_8 - 1])))) - ((min((arr_3 [i_8 + 1]), (arr_3 [i_8 - 1]))))));
    }
    var_33 -= ((-(min(-47, (max(var_8, 4242759045377614977))))));
    #pragma endscop
}
