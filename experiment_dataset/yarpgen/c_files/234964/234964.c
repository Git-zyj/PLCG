/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234964
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234964 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234964
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 7;i_0 += 1)
    {
        var_12 += ((((min((min(27808, 27808)), var_4))) ? (max(((-15 ? var_2 : (-32767 - 1))), ((min(var_8, var_1))))) : (~-2961590567479725103)));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                var_13 = (4556783893330799559 ? (((3206473213 ? 1590382583 : 27810))) : ((~(arr_7 [i_0 + 1] [i_1] [i_2] [i_2]))));
                var_14 = ((var_6 ? 1 : 32767));
                arr_8 [1] [i_1] [i_2] |= ((-27808 ? 1 : (!-4859381328152026661)));
                arr_9 [i_0 + 2] [i_1] = ((-(arr_4 [i_0 + 4])));
            }
            arr_10 [i_0 + 4] [i_1] = (((arr_0 [i_0]) ? (((var_7 ? var_8 : 97))) : var_2));

            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                var_15 = (((-4584 ? 11715 : 3379046663416931885)) >> ((((var_7 ? var_3 : var_11)) - 18008)));
                var_16 = (max(var_16, (((~(arr_6 [i_0] [i_0 - 1] [i_0 + 2] [i_0 - 1]))))));
            }
            for (int i_4 = 1; i_4 < 8;i_4 += 1)
            {
                arr_17 [i_4] [i_4] [i_1] [i_4 + 1] = (~var_5);
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 1;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        {
                            arr_22 [i_0] [i_1] [i_4] [i_4 + 2] [i_5] [5] = ((((var_8 ? var_6 : var_7))) ? (!27809) : var_0);
                            arr_23 [i_4] = -3379046663416931891;
                        }
                    }
                }
                arr_24 [i_0] [i_4] [i_0] [i_0] = -5761562386920618940;
                var_17 ^= ((-(arr_2 [i_0 + 1] [i_0])));
            }
        }
        for (int i_7 = 0; i_7 < 11;i_7 += 1)
        {
            var_18 = (min(var_18, (((min(((-27808 ? 21704 : 27804)), var_10))))));
            arr_27 [i_7] [i_7] = (((((var_6 > var_3) ? (var_1 == var_3) : ((var_0 ? var_2 : (arr_26 [i_7]))))) % ((((21704 >> var_9) ? (arr_12 [i_0 - 1] [i_7] [1]) : var_6)))));
        }
        var_19 = (min(var_19, (-4458 - 1)));
    }
    var_20 = ((~(((min(var_7, var_6))))));
    var_21 = ((2051408347 ? 3379046663416931903 : 1));
    #pragma endscop
}
