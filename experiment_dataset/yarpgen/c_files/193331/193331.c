/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193331
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193331 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193331
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 &= var_3;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] = ((~(arr_0 [i_0] [i_0])));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 8;i_2 += 1)
            {
                {
                    var_16 &= var_5;
                    var_17 = ((-(4611686018427387904 - 4611686018427387904)));
                    var_18 = (~4611686018427387882);
                }
            }
        }
        var_19 = (max(-4611686018427387899, 4611686018427387899));
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 9;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 6;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 8;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 10;i_6 += 1)
                        {
                            {
                                var_20 = (max((((((arr_14 [i_6] [i_4] [i_4] [i_3 + 1] [3]) ? 3894532144 : var_8)) + (((var_12 - (arr_14 [i_0] [i_3] [i_4] [i_5] [4])))))), (((1 | (arr_3 [7]))))));
                                var_21 = ((((var_8 ? (arr_12 [i_0] [i_0]) : (arr_13 [0] [0] [i_4] [i_5 + 2] [0] [i_5])))) ? (arr_4 [i_6]) : var_1);
                                var_22 = 4611686018427387921;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 9;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 10;i_8 += 1)
                        {
                            {
                                var_23 = ((((+((var_8 ? (arr_18 [i_0] [i_3] [i_3] [i_4 - 2] [i_7] [i_8]) : var_4))))) ? (var_1 & var_5) : (arr_11 [i_4]));
                                arr_21 [9] [i_0] [i_4] [i_0] [i_0] = var_14;
                                var_24 = (arr_20 [i_0] [i_3] [i_4] [i_7] [i_8]);
                                var_25 = ((((((((8752001174572399567 ? 3239984017125042306 : 2930018477))) ? -3239984017125042307 : (~-460853463)))) ? ((((arr_3 [i_7 - 1]) ? (arr_12 [i_0] [i_3 + 1]) : (arr_12 [i_3 - 1] [i_3 + 1])))) : (((arr_19 [i_4] [i_3 + 1] [i_7 + 1]) ? (((4611686018427387921 ? (arr_19 [i_4] [i_3] [i_4 - 1]) : var_13))) : (max((arr_16 [1] [i_3 + 1] [i_4] [i_7]), (arr_4 [i_7])))))));
                                var_26 = (min(-41040, (max((!873244979), var_3))));
                            }
                        }
                    }
                    var_27 *= ((((arr_6 [i_0] [i_0] [i_0] [i_4]) ? (arr_15 [i_3 - 1] [i_3 + 1] [2] [i_4] [i_4 + 4] [7]) : (arr_6 [i_0] [i_0] [i_3] [i_0]))) * (!var_7));
                }
            }
        }
    }
    for (int i_9 = 0; i_9 < 25;i_9 += 1)
    {
        arr_24 [i_9] = -4611686018427387905;
        var_28 ^= ((-((((var_5 == (arr_22 [22] [22])))))));
        var_29 |= ((((max(4611686018427387918, 107))) ? ((((arr_23 [i_9] [i_9]) ? (arr_23 [i_9] [i_9]) : (arr_23 [i_9] [i_9])))) : var_10));
    }
    #pragma endscop
}
