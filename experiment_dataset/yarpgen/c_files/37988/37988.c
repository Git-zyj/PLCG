/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37988
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37988 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37988
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_18 = (max(((((max(253, -24388))) ? var_3 : (arr_3 [i_1 - 1] [i_2]))), (max((((!(arr_3 [i_0] [i_0])))), (min(902305360, (arr_2 [i_0] [i_0])))))));

                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        var_19 -= (arr_1 [i_0] [6]);
                        var_20 = (max(var_20, var_14));
                        var_21 = (min(24387, 255));
                        var_22 = (min(var_22, -24393));
                        var_23 = (((((((min((arr_8 [i_0] [i_1] [i_1] [i_0]), (arr_6 [i_0] [i_0] [i_0] [i_0])))) ? (((var_16 % (arr_2 [i_1 - 1] [i_3])))) : 24387))) ? 1 : (arr_8 [i_1 - 1] [i_1] [i_1 - 1] [i_1 + 1])));
                    }
                    for (int i_4 = 2; i_4 < 9;i_4 += 1)
                    {
                        var_24 = ((~(((1597593904 / 24398) ? (arr_2 [i_0] [i_0]) : (max((-9223372036854775807 - 1), 3634118788009697850))))));
                        var_25 = (min((max((arr_8 [i_1] [i_1] [i_1] [i_1]), 12)), (((255 == ((~(arr_11 [i_4] [i_0] [i_2] [0] [i_0] [i_0]))))))));
                        var_26 = (max(var_26, (arr_4 [i_0] [i_1] [i_1 + 1])));
                        var_27 *= 12015472887171979460;
                    }
                    var_28 = (min(var_28, ((((((+(((arr_3 [i_0] [9]) ? (arr_11 [i_0] [i_0] [i_1 - 1] [i_2] [i_2] [i_2]) : 7826912475298609480))))) ? (min((arr_4 [i_0] [i_0] [i_0]), (arr_11 [i_0] [i_0] [4] [i_0] [1] [i_0]))) : (arr_2 [i_2] [i_0]))))));
                }
            }
        }
    }
    var_29 = ((var_9 >= (((((var_16 ? var_12 : 2147483647))) - 192430437879821667))));
    #pragma endscop
}
