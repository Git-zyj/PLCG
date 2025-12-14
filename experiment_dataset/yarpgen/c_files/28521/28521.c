/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28521
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28521 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28521
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((min(-32747, 7))) ? var_9 : (((((216 ? var_10 : 15))) ? (6 + var_9) : (max(var_19, (-127 - 1)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        var_21 = ((15360 ? (-32767 - 1) : 16));
                        var_22 -= 27;
                        var_23 *= (((((arr_1 [i_0] [i_1 - 3]) ? (arr_9 [6] [0] [4] [i_2] [i_3] [i_3]) : (121 * var_17))) * ((((((!(arr_4 [i_1] [1])))) == var_14)))));
                        arr_10 [i_3] [i_0] = (min((((((((var_18 < (arr_4 [i_1] [i_0]))))) >= (1 + var_3)))), (min(108, (arr_0 [i_1 + 1])))));
                        var_24 = ((((~((~(arr_8 [i_0]))))) >> ((((118 ? (arr_1 [i_2] [i_3]) : (~var_0))) - 182))));
                    }
                    var_25 = 239;
                    /* LoopNest 2 */
                    for (int i_4 = 3; i_4 < 15;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 16;i_5 += 1)
                        {
                            {
                                arr_18 [i_0] [i_4] [i_2] = var_7;
                                arr_19 [i_4] [i_1] [i_2] [i_4] [1] = ((-(min(var_18, ((-109 ? (arr_6 [i_0] [i_0] [i_0] [i_0]) : var_12))))));
                                var_26 = (((!(((~(arr_4 [i_0] [i_1])))))));
                            }
                        }
                    }
                    var_27 -= ((((+((((arr_4 [i_0] [8]) != var_5))))) >= (max((((arr_2 [i_1]) ? 19 : 11)), -122))));
                }
            }
        }
    }
    var_28 = var_5;
    #pragma endscop
}
