/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196737
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196737 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196737
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, (((!(+-1829939448))))));
    var_14 = var_9;
    var_15 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_6 [i_0] = 0;

                for (int i_2 = 1; i_2 < 8;i_2 += 1)
                {

                    for (int i_3 = 1; i_3 < 6;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            arr_14 [i_0] [i_1] = ((104 ? 65535 : 131071));
                            var_16 = ((!(((~(arr_1 [i_2 - 1]))))));
                            var_17 = var_8;
                        }
                        var_18 = (arr_13 [i_3] [i_3 + 3] [i_3]);
                    }
                    for (int i_5 = 0; i_5 < 10;i_5 += 1) /* same iter space */
                    {
                        var_19 -= (min((max(var_7, ((min((arr_3 [i_5]), 63))))), -13296));
                        arr_17 [i_5] [i_1] [1] [i_1] [i_1] [i_1] = (arr_8 [i_2 - 1] [i_2] [0] [i_2 + 1]);
                    }
                    for (int i_6 = 0; i_6 < 10;i_6 += 1) /* same iter space */
                    {
                        var_20 = ((-((min((arr_10 [i_0] [i_2 + 2] [i_2 + 1] [5]), (arr_10 [i_0] [i_2 - 1] [i_2] [i_6]))))));
                        var_21 = ((!(!10107798279130566500)));
                    }
                    var_22 *= (max(26303, -65));
                }
                for (int i_7 = 0; i_7 < 10;i_7 += 1)
                {
                    var_23 = ((((~(arr_18 [i_0] [i_0] [i_1] [i_7])))));
                    arr_22 [i_0] [0] [i_1] [i_7] = ((((~(arr_4 [i_1] [i_0])))) == ((-(arr_7 [i_0] [i_0] [i_0]))));
                    var_24 = (((~(((!(arr_19 [4] [i_1] [i_7] [i_7] [i_7])))))));
                    arr_23 [i_0] [5] [i_7] = (~0);
                }
                for (int i_8 = 0; i_8 < 10;i_8 += 1)
                {
                    var_25 = (min(var_25, var_5));
                    var_26 = (max(var_26, ((min((((!(arr_4 [i_0] [i_1])))), (arr_7 [3] [0] [i_8]))))));
                }
                arr_26 [i_0] [i_1] [i_1] = ((min(6460280848964561896, (arr_9 [i_0] [i_0]))));
            }
        }
    }
    var_27 ^= (max((min((-9223372036854775807 - 1), 18446744073709551592)), (((~((max(var_6, 0))))))));
    #pragma endscop
}
