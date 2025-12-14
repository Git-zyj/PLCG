/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27949
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27949 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27949
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1) /* same iter space */
    {
        var_19 &= (arr_0 [i_0]);
        var_20 = ((((min(((-566794376 ? 18446744073709551601 : 1)), 15))) ? ((min(-46, var_3))) : ((((arr_1 [i_0] [i_0]) / (arr_1 [i_0] [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1) /* same iter space */
    {
        var_21 = (!(((((28231 || (arr_1 [i_1] [i_1])))))));
        var_22 = (max(var_22, (((-6511038767674649198 ? var_12 : var_1)))));
        arr_4 [i_1] [i_1] = ((((max(var_10, (arr_3 [i_1] [i_1])))) ? (arr_3 [i_1] [i_1]) : (((arr_3 [i_1] [i_1]) ? (arr_3 [i_1] [i_1]) : (arr_3 [i_1] [i_1])))));
    }
    for (int i_2 = 0; i_2 < 16;i_2 += 1) /* same iter space */
    {
        arr_9 [i_2] [5] = min((((122 + (37313 != 16)))), (((max(var_3, (arr_3 [i_2] [i_2]))) & (((min(var_4, var_4)))))));
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 12;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    {
                        var_23 = ((((min((arr_11 [i_2]), (min(65506, 135))))) ? (((65535 ? ((-8777 ? 134 : -8770)) : 384))) : ((-var_1 - ((-9223372036854775795 ? -32762 : (arr_3 [i_3] [13])))))));
                        var_24 ^= (((((-1 ? 113 : (((arr_1 [i_2] [i_2]) - (arr_17 [i_2] [i_4])))))) ? (arr_11 [i_2]) : ((386 ? (var_12 > var_17) : ((43389 ? 124 : 4095))))));
                        arr_18 [i_2] [i_3] [i_3] [i_3] [i_4] = (-1041176979 - 13960);
                        var_25 = (((var_13 == 106) ? (((((var_18 + (arr_15 [i_4])))) ? (((max(14564, 101)))) : ((-20 ? var_17 : 4248473406)))) : var_12));
                        var_26 ^= ((-((-87 ? 18446744073709551587 : 9))));
                    }
                }
            }
        }
    }
    for (int i_6 = 0; i_6 < 24;i_6 += 1)
    {
        var_27 = (max((((min(1, -28)))), ((min(var_17, var_9)))));
        arr_23 [i_6] = (((arr_22 [i_6]) ? (18446744073709551576 >> 63) : (arr_19 [i_6])));
        var_28 -= var_7;
        var_29 = (min(((-(max(var_14, (arr_20 [i_6]))))), var_12));
        var_30 = (((((arr_21 [i_6]) < 190)) ? (max(293021083, 87)) : var_8));
    }
    var_31 = -171547798;
    var_32 = var_18;
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 25;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 25;i_8 += 1)
        {
            {
                arr_29 [i_7] [i_7] [i_7] = (((!123) % (((arr_28 [i_8] [i_8] [i_7]) - 7))));
                arr_30 [i_7] [13] = (((arr_28 [i_7] [i_7] [i_7]) % (((arr_28 [i_7] [i_8] [i_8]) ^ -1078504519))));
                var_33 = ((3593757459464130355 ? (arr_25 [i_7]) : (!59371)));
            }
        }
    }
    #pragma endscop
}
