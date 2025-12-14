/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5393
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5393 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5393
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, ((min(((~((1 ? var_5 : 2461805931992165870)))), (min(var_5, ((20513 ? var_6 : 9223372036854775807)))))))));
    var_17 = var_0;
    var_18 = (min(1666776848, (-1666776848 - var_1)));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            var_19 = (max((((9223372036854775804 ? 2903636876 : 12380))), (var_15 + var_6)));

            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                var_20 = -132;
                var_21 *= (((arr_5 [i_2 - 1] [i_1 - 1]) ? (min(((min((arr_3 [i_2] [i_1]), (arr_4 [14] [i_1] [i_1] [i_2])))), var_0)) : 53161));
                var_22 -= ((((((var_8 + var_8) ? (var_6 | var_10) : ((var_15 ? (arr_6 [6] [i_1 + 1] [i_2]) : var_6))))) ? ((((min(65524, 1))) ? (arr_7 [i_1 + 1] [i_1 - 1] [i_2 - 1] [i_1 + 1]) : ((-126 ? 88 : 45008)))) : ((~((~(arr_7 [i_0] [i_0] [i_1] [i_0])))))));
                var_23 = (max((((var_6 && (((var_9 >> (-17 + 31))))))), 12380));
            }
            for (int i_3 = 1; i_3 < 22;i_3 += 1)
            {
                var_24 = min((min(((var_10 ? (arr_3 [i_0] [i_1]) : (arr_7 [18] [18] [22] [i_1 - 2]))), (arr_6 [i_0] [19] [1]))), ((-22281 ? (arr_4 [i_0] [i_1] [i_1 + 1] [i_3]) : var_10)));
                arr_10 [i_0] [i_0] [i_1 - 1] [i_3] = -1;
                var_25 = ((((arr_2 [i_3 - 1] [i_1] [i_0]) ? (arr_2 [i_3 + 1] [i_3 + 1] [i_3]) : (arr_2 [i_3 + 1] [i_1] [i_1]))) * var_7);
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        {
                            var_26 = (-var_6 - var_12);
                            var_27 = ((min(var_15, (arr_15 [i_3 + 1] [i_3] [i_3 - 1] [i_3 + 1] [i_1 - 2]))));
                            var_28 = ((((min(((-2219041758025887097 ? 53161 : (arr_16 [i_4] [i_1] [i_5] [i_4] [i_5] [i_3]))), var_13))) ? var_9 : ((((14668523118217206512 ? (arr_13 [i_0] [i_0] [i_0]) : 30))))));
                        }
                    }
                }
            }
            var_29 = ((-(min((!var_4), (var_15 | -1113784598)))));
            arr_17 [16] [i_0] [i_0] = (((((((56499 ? (arr_16 [6] [i_1] [i_1] [i_0] [i_0] [5]) : var_10))) ? var_10 : var_9))) ? (((-7 + 2147483647) >> (!1))) : var_11);
        }

        for (int i_6 = 3; i_6 < 20;i_6 += 1)
        {
            var_30 = (arr_6 [i_0] [i_6 + 1] [i_6 - 2]);
            var_31 ^= (((var_12 >= var_14) + ((((arr_7 [10] [i_6 - 2] [i_6 + 2] [i_6 + 2]) != (arr_7 [i_6 + 1] [i_6 + 2] [i_6 + 1] [i_6 + 3]))))));
            arr_20 [i_0] [i_6] = 77;
        }
        arr_21 [i_0] [i_0] = ((735933261816303255 ? 1 : -902968725));
    }
    var_32 = -var_2;
    #pragma endscop
}
