/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212976
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212976 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212976
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((((var_4 ? -1011559968 : -var_11))) ? (((~(max(var_15, var_13))))) : (max(2669245670855581963, 2669245670855581963))));
    var_19 -= var_11;
    var_20 = var_11;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 4; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 19;i_3 += 1)
                {
                    {
                        arr_9 [i_0] [i_1 + 1] [i_0] [i_2] [1] [i_1] = ((((1914889154 ? var_8 : var_6))));
                        var_21 ^= var_5;

                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            arr_12 [i_0] [i_0] |= (max((!2669245670855581961), (arr_5 [0] [i_1] [i_3] [i_4])));
                            arr_13 [i_1] [i_1] [i_2] [i_3] [19] = ((max(var_12, ((((arr_7 [i_0] [i_1 - 3] [i_1 - 3] [i_4]) ? var_16 : 7032018305975665093))))));
                        }
                        for (int i_5 = 1; i_5 < 19;i_5 += 1)
                        {
                            arr_17 [5] [i_1] [i_1] [i_1] [i_0] = var_1;
                            var_22 ^= ((((((((~(arr_14 [16] [i_0] [i_2] [16] [i_5 + 1])))) ? (!15777498402853969653) : (arr_16 [i_5] [i_5 + 1] [i_1 - 4])))) ? var_6 : (((((2669245670855581949 ? 15777498402853969670 : -8602837991706597945))) ? (((var_9 + 2147483647) << (((var_13 + 1915056339) - 20)))) : (max((arr_7 [i_0] [i_1] [i_3] [4]), var_6))))));
                            arr_18 [i_2] [11] [i_2] [i_3] [i_1] [8] [i_5] = (i_1 % 2 == zero) ? ((((arr_10 [i_3 - 1] [i_1] [i_0] [i_3] [i_3]) >> ((((~(arr_3 [i_1] [i_3 - 2]))) - 12036360814866791564))))) : ((((arr_10 [i_3 - 1] [i_1] [i_0] [i_3] [i_3]) >> ((((((~(arr_3 [i_1] [i_3 - 2]))) - 12036360814866791564)) - 7224768146429220679)))));
                            var_23 = ((((7 ? (-127 - 1) : 7768399846807593246)) / ((max(6, ((min(var_10, 16067))))))));
                        }
                        arr_19 [i_1] [1] [i_1] = var_15;
                    }
                }
            }
        }
        arr_20 [i_0] = (((((var_8 ? var_8 : var_13))) ? (158149290 < var_15) : ((var_15 ? -68 : 255))));
        var_24 = (~var_13);
        var_25 -= (arr_14 [16] [i_0] [i_0] [16] [i_0]);
        arr_21 [i_0] = (arr_6 [i_0] [i_0] [i_0] [i_0]);
    }
    for (int i_6 = 4; i_6 < 10;i_6 += 1)
    {
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 11;i_7 += 1)
        {
            for (int i_8 = 2; i_8 < 10;i_8 += 1)
            {
                {
                    var_26 &= 11436295402600381792;
                    var_27 = ((((var_17 ? var_7 : var_7))));
                }
            }
        }
        var_28 += (max((max(var_10, (min((arr_6 [i_6] [i_6] [i_6] [i_6]), var_8)))), -1));
    }
    for (int i_9 = 0; i_9 < 13;i_9 += 1)
    {
        arr_37 [i_9] [i_9] = var_15;
        arr_38 [i_9] [11] = (max(((2107452431 ? var_1 : (arr_1 [i_9]))), ((max((~2187514863), var_6)))));
        var_29 = (~var_17);
    }
    #pragma endscop
}
