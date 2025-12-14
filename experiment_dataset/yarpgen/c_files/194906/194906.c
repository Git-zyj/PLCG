/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194906
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194906 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194906
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_4;
    var_18 = ((var_9 ? ((((min(-1344430661462829291, var_9))) ? (((max(var_7, var_0)))) : (min(var_15, var_0)))) : var_16));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_19 = (max(var_19, (arr_0 [i_0] [i_0])));

        for (int i_1 = 0; i_1 < 10;i_1 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 0;i_3 += 1)
                {
                    {
                        var_20 &= (((var_7 ? var_1 : var_7)));

                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            var_21 = (((((37218756 > 37218760) ? (arr_3 [i_3 + 1] [i_1] [8]) : (arr_11 [i_0] [i_0] [i_0] [i_3 + 1] [i_4]))) > (arr_3 [i_4] [7] [i_4])));
                            var_22 = (((((arr_6 [i_0] [i_1] [i_4 - 1] [i_3 + 1]) & (arr_5 [i_3] [i_3] [i_3 + 1] [i_3])))) ? (((arr_6 [i_3] [i_1] [i_4 - 1] [i_3]) | (arr_6 [i_0] [1] [i_4 - 1] [i_3 + 1]))) : (((arr_6 [i_0] [i_1] [i_4 - 1] [i_3]) ? (arr_6 [i_0] [i_1] [i_4 - 1] [i_3 + 1]) : (arr_5 [i_1] [5] [i_3 + 1] [i_4]))));
                            arr_13 [i_0] [i_1] [i_4] = ((((((min((-2147483647 - 1), -37218757)) % ((6501649933461578729 ? var_13 : 37218784))))) ? (((arr_1 [i_0] [i_0]) ? (max(-3927158888260346816, var_11)) : var_11)) : (arr_11 [i_3] [i_3] [i_3 + 1] [i_3 + 1] [i_4 - 1])));
                        }
                        var_23 = var_7;
                        arr_14 [i_3 + 1] [i_1] |= (((((arr_0 [i_3 + 1] [i_3 + 1]) && var_6)) && ((((arr_6 [i_0] [i_1] [i_3 + 1] [i_0]) ? (arr_4 [i_3 + 1] [i_3 + 1]) : 2147483647)))));
                        var_24 &= ((((var_3 && (arr_10 [i_3 + 1] [i_3 + 1] [i_3 + 1]))) ? (((-108 + 2147483647) >> (-5054023470271908105 + 5054023470271908131))) : ((((arr_10 [i_3 + 1] [i_3 + 1] [i_3 + 1]) > (arr_10 [i_3 + 1] [i_3 + 1] [i_3 + 1]))))));
                    }
                }
            }
            var_25 = var_13;

            for (int i_5 = 0; i_5 < 10;i_5 += 1)
            {
                arr_19 [i_5] [i_0] [i_0] = 1164773529;
                var_26 = (max(var_26, ((min(((((37218756 && var_4) && (arr_12 [i_0] [i_0] [3] [i_0] [i_1])))), (((var_4 || var_11) ? ((min((arr_11 [i_0] [i_0] [i_0] [i_0] [i_0]), var_2))) : ((224 ? (arr_7 [i_0] [i_1] [i_5] [i_0]) : var_7)))))))));
            }
            for (int i_6 = 0; i_6 < 10;i_6 += 1)
            {
                var_27 = ((-8307 ? 2147483647 : 23505));
                var_28 = ((3 ? ((((min((arr_12 [i_0] [i_0] [i_1] [i_0] [i_6]), (arr_0 [i_0] [i_0])))) ? 17776627795330160259 : (arr_12 [i_6] [i_1] [i_1] [i_0] [i_0]))) : (((((arr_18 [i_0] [i_1]) || (arr_5 [i_0] [i_1] [i_1] [i_6])))))));
            }
        }
        for (int i_7 = 0; i_7 < 10;i_7 += 1) /* same iter space */
        {
            arr_27 [i_7] [i_7] [i_0] |= (((-((32 ? 128 : 0)))));
            var_29 = (((((-4705185781000093468 ? 512 : (-2147483647 - 1)))) ? ((((arr_12 [i_0] [i_7] [i_7] [i_0] [i_0]) >= (arr_2 [i_0] [i_0])))) : 1164773527));
        }
        for (int i_8 = 0; i_8 < 10;i_8 += 1)
        {
            var_30 = (~11);
            var_31 = (var_2 < ((var_8 / (arr_24 [i_0] [i_0] [i_0]))));
            var_32 ^= var_4;
        }
    }
    #pragma endscop
}
