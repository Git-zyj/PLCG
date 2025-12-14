/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189973
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189973 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189973
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((((((var_5 ? var_14 : 1))) ? (min(var_2, var_5)) : (max(var_14, 2097151))))) ? ((min((var_5 < var_5), var_7))) : var_5);

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = ((var_4 ? (!var_13) : (((((var_4 ? var_11 : 1))) ? ((var_2 ? 0 : var_12)) : ((max((arr_1 [i_0]), var_4)))))));
        arr_3 [i_0] = ((((((((~(arr_1 [i_0])))) ? -1338583256 : ((var_9 ? var_12 : (arr_0 [i_0] [i_0])))))) ? var_0 : (((~320182126) ? ((var_4 ? -320182134 : (arr_1 [i_0]))) : var_0))));
    }
    for (int i_1 = 2; i_1 < 18;i_1 += 1)
    {
        var_17 = var_0;
        arr_6 [i_1] = ((-(((!(95 * var_0))))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 0;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {
                        for (int i_5 = 3; i_5 < 21;i_5 += 1)
                        {
                            {
                                arr_17 [i_2] [i_2] [i_4] [i_2] = ((((((-320182127 ? 2147483647 : var_14)) ? var_5 : ((var_6 ? 1 : 0))))));
                                arr_18 [i_1] [i_2] [i_2] [i_3 + 1] [i_3 + 1] [i_5] = (((((arr_14 [i_2] [i_3 + 1] [i_5 - 1]) ? (arr_8 [i_5] [i_3 + 1] [i_5 - 3]) : (arr_13 [i_1 - 2] [i_3 + 1] [i_5 - 3]))) != (arr_14 [i_2] [i_3 + 1] [i_5 + 1])));
                                arr_19 [i_2] [i_2] [i_3 + 1] [i_5] = ((((((((-320182123 ? var_2 : -161439992))) ? (max((arr_8 [i_4] [i_1] [i_1]), -779163094)) : (((arr_15 [i_1] [i_2] [i_3] [i_4] [i_2]) ? (arr_15 [i_2] [i_2] [i_3 + 1] [i_3 + 1] [i_2]) : var_10))))) ? var_13 : var_13));
                            }
                        }
                    }
                    var_18 = (max(var_18, ((var_2 ? ((var_12 ? ((var_2 ? (arr_12 [i_1] [11] [18] [i_3 + 1] [i_1]) : 1)) : (var_6 != 848005240))) : (arr_4 [i_1])))));
                    arr_20 [i_2] = ((0 ? 107 : (1 % 848005257)));
                }
            }
        }
    }
    #pragma endscop
}
