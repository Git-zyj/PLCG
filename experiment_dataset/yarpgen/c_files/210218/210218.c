/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210218
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210218 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210218
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    arr_6 [i_1] [i_1] = ((((((arr_2 [i_0] [i_0] [i_2]) ? 3658853493 : (((18446744073709551615 ? 24 : var_15)))))) ? 28 : var_0));
                    arr_7 [i_1] [i_1] [i_1] = ((0 ? ((-((-1 ? (arr_2 [i_0] [i_0] [i_2]) : 169084971)))) : (((((!(arr_5 [i_0]))))))));
                }
                for (int i_3 = 2; i_3 < 8;i_3 += 1)
                {
                    arr_12 [i_0] [i_1] [i_1] = ((~((var_2 ? ((15087476472333781212 ? var_9 : 27)) : (arr_3 [i_3])))));
                    arr_13 [i_0] [i_0] [i_0] [i_1] = (!((((((0 ? var_1 : 1))) ? (arr_3 [i_3]) : ((4125882329 ? -27483 : 86))))));
                    var_19 = (min(var_19, (((((982833354 ? 1 : 52)))))));
                    var_20 = ((~(~1910506970863705274)));
                }
                var_21 = (max(var_21, -var_10));

                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    arr_18 [i_1] [i_1] [i_1] = ((((((arr_10 [i_0] [i_0] [i_0]) ? var_5 : 15297))) ? (!4294967295) : (!-1)));

                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        arr_21 [i_1] [i_1] [i_4] [i_5] = (((((-9 ? 1 : (arr_15 [i_0] [i_0] [i_0])))) ? (((((var_2 ? var_3 : (arr_9 [i_0] [i_0] [i_4] [i_5])))) ? var_1 : var_15)) : (arr_4 [i_0] [i_1] [i_4] [i_5])));
                        var_22 &= (((~212904706) ? (arr_17 [i_5] [i_1] [i_4] [i_4]) : (arr_14 [i_0] [i_1] [i_4] [i_5])));
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 2; i_6 < 8;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 11;i_7 += 1)
                        {
                            {
                                var_23 = (((((-2147483647 - 1) ? var_5 : var_16))) ? ((-32117 ? (arr_20 [i_0] [i_4] [i_0]) : 15360)) : ((var_3 ? (((arr_20 [i_4] [i_4] [i_1]) ? var_0 : var_0)) : var_9)));
                                arr_29 [i_0] [i_1] [i_1] [i_1] [i_0] = ((((-105 ? 1 : (arr_24 [i_0] [i_1])))));
                                arr_30 [i_1] [i_1] [i_1] = ((!((((arr_26 [i_1] [i_1] [i_4] [i_6] [i_7] [i_6 - 2] [i_1]) ? 4125882325 : (arr_26 [i_0] [i_0] [i_4] [i_6] [i_0] [i_6 - 1] [i_1]))))));
                            }
                        }
                    }
                    var_24 -= -13322;
                }
                var_25 = (((-(arr_9 [i_0] [i_0] [i_0] [i_1]))));
            }
        }
    }
    var_26 = (min(var_26, (((14562698137078784253 ? 51 : ((var_14 ? var_14 : (~var_1))))))));
    #pragma endscop
}
