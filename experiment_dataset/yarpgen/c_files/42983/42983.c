/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42983
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42983 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42983
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_15 = (((((-((var_0 + (arr_2 [i_0])))))) ? ((~((var_7 ? var_14 : (arr_1 [i_0] [i_0]))))) : ((-(arr_1 [i_0] [i_0])))));
        var_16 = (arr_2 [i_0]);
        var_17 = (((((max((arr_1 [i_0] [i_0]), var_14)))) != 465408961));
    }
    for (int i_1 = 2; i_1 < 15;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 1; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 16;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    {
                        arr_13 [9] [9] [i_1] [i_3] = ((!((min((arr_0 [i_4]), 7601850209655184971)))));
                        arr_14 [i_1] [15] [i_3] [i_3] = ((var_11 <= (((-368429472 != (arr_4 [i_1 - 2]))))));
                    }
                }
            }
        }
        arr_15 [14] [i_1 - 1] = (max((((((max((arr_12 [i_1] [6] [12] [i_1 - 2]), var_8))) != (arr_2 [i_1 - 1])))), ((((32767 ? var_0 : var_7)) | (arr_12 [4] [1] [i_1 - 1] [i_1 - 2])))));

        /* vectorizable */
        for (int i_5 = 0; i_5 < 16;i_5 += 1)
        {
            var_18 = (max(var_18, (((-(((arr_2 [i_1]) + (arr_4 [i_5]))))))));
            var_19 = (((18446744073709551615 ? (arr_3 [i_5] [i_5]) : 3327092711)));
            var_20 = (((arr_0 [i_1 - 2]) ? var_10 : (arr_17 [i_1 - 1])));
            var_21 = var_12;
        }
        for (int i_6 = 0; i_6 < 16;i_6 += 1)
        {
            var_22 -= var_10;
            var_23 = (max(var_23, (((!((((11893419496894380163 % var_14) ? ((((arr_11 [i_1]) | (arr_10 [i_6] [i_6] [i_1 + 1])))) : (max(-32765, (arr_0 [i_6])))))))))));
        }
        arr_21 [i_1] = (((~(arr_9 [i_1] [i_1] [i_1 + 1] [3]))));
    }
    var_24 = (max(var_24, ((min(var_12, (min((var_6 == var_4), (var_1 - var_11))))))));
    var_25 = var_8;
    var_26 = ((((max(var_4, ((var_10 ? var_12 : 12599673425171839014))))) ? (26 & -3204183056253332864) : var_11));
    var_27 = (max(7, 1048575));
    #pragma endscop
}
