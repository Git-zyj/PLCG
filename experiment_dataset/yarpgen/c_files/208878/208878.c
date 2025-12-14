/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208878
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 19;i_0 += 1)
    {
        var_12 = (max(var_12, var_9));
        var_13 *= 1146133389;
        arr_3 [6] = (min(((((arr_2 [i_0 + 1] [i_0]) < 2094221054))), (arr_2 [i_0 - 1] [i_0 + 1])));
    }
    for (int i_1 = 1; i_1 < 23;i_1 += 1)
    {
        var_14 = ((647944773598450712 ? 3050933749428387226 : 1340942347));

        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_15 = ((-0 ? (9223372036854775804 - var_3) : 45176));

            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {
                var_16 = (min(var_16, ((min(((var_7 ? (arr_11 [i_1 + 2] [i_3] [i_3]) : (arr_11 [i_1 + 2] [i_3] [i_3]))), (((((var_0 ? var_9 : var_8))) ? 20359 : (arr_11 [i_2] [i_3] [i_3]))))))));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 3; i_5 < 22;i_5 += 1)
                    {
                        {
                            arr_18 [i_1] [i_2] [i_2] [12] [i_5 + 3] = ((((var_6 < (arr_17 [17] [i_1] [i_1 + 1] [i_1 + 1] [i_1 + 2]))) ? ((max(var_4, (arr_17 [i_1] [i_1] [i_1 - 1] [i_1] [i_1 - 1])))) : -1340942334));
                            arr_19 [i_1] [i_1] [i_2] [i_4] [i_5] = var_5;
                        }
                    }
                }
            }
            for (int i_6 = 3; i_6 < 23;i_6 += 1)
            {
                var_17 = (min(var_17, -9223372036854775785));
                var_18 ^= ((((max((min(7031598211024375067, 1275035155)), ((min((arr_9 [i_6] [i_2] [i_1 - 1]), (arr_14 [i_1] [2]))))))) ? ((-(min(114, var_11)))) : var_10));
                var_19 &= (min(131, (((arr_20 [24] [i_1 + 1] [24]) ? (arr_12 [i_1]) : 0))));
            }
            for (int i_7 = 2; i_7 < 24;i_7 += 1)
            {
                var_20 = (max(7, 1));
                var_21 = (max(var_21, ((min((max(var_4, (arr_22 [i_7 - 2] [i_7 - 1] [i_7] [i_7]))), var_8)))));
                var_22 = (min(var_22, ((min((((-(arr_16 [i_1 + 1] [i_1 + 1] [i_7 + 1] [i_7 - 1] [i_7 - 2])))), (max(2483289252765154233, (arr_8 [i_7 - 1] [i_7 - 2]))))))));
            }
            for (int i_8 = 0; i_8 < 25;i_8 += 1)
            {
                var_23 ^= (min((min((arr_20 [i_8] [i_8] [i_8]), var_11)), ((((((arr_11 [i_8] [i_8] [i_8]) == var_6)) ? var_0 : (arr_13 [19] [i_1 + 1] [i_1 + 1] [i_1 + 2] [i_1 + 2]))))));
                var_24 = (min(((31739 ? 125 : ((max(57791, 1))))), var_10));
            }
            var_25 = (max((~-115), var_11));
            var_26 = (min(var_26, ((max(0, (((-41105 | ((max(31245, var_0)))))))))));
        }
        for (int i_9 = 0; i_9 < 25;i_9 += 1)
        {
            var_27 = (min(var_27, ((((((arr_5 [i_1 + 2]) ? var_3 : var_6)) < 244)))));
            arr_31 [21] [i_9] [i_1] &= (((var_9 || var_9) ? (((min(var_5, 255)))) : (max(7750, 1818811253))));
            var_28 = ((((max(57802, var_3))) % (((arr_28 [i_1 - 1] [i_1 + 2] [i_1 + 2]) - (arr_22 [1] [i_1 - 1] [i_9] [i_9])))));
        }
    }
    var_29 = var_0;
    #pragma endscop
}
