/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228704
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228704 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228704
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 |= (((((63 ? (var_16 < var_17) : ((min(var_11, var_19)))))) ? (!112) : -27720));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 10;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_21 = ((var_13 ? var_5 : ((((!(~-19388)))))));
                                var_22 = (max((max(19402, ((~(arr_9 [i_1] [i_2] [i_3] [i_1]))))), (((max(4294967295, 4294967295))))));
                            }
                        }
                    }
                    arr_13 [i_2] = var_15;
                    arr_14 [i_2] [i_2] [i_2] [i_2] = ((((arr_3 [i_0] [i_0 + 1] [i_0 + 1]) ? 9223372036854775808 : (arr_8 [i_0] [i_0 + 1] [i_0 - 2] [i_0] [10]))));
                    var_23 = (max(var_23, ((max(8969451983228671140, ((min(var_4, 66507884))))))));
                }
            }
        }
    }

    for (int i_5 = 1; i_5 < 15;i_5 += 1)
    {
        var_24 = ((!(((arr_16 [i_5 - 1]) < (arr_15 [i_5 - 1])))));
        arr_18 [2] [i_5 + 2] = (!1);
    }
    /* vectorizable */
    for (int i_6 = 1; i_6 < 15;i_6 += 1)
    {
        arr_22 [i_6] = (var_12 || var_3);
        arr_23 [i_6] = 19402;
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 15;i_8 += 1)
            {
                {
                    var_25 = var_16;
                    arr_31 [i_6] [5] [5] = var_4;

                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        arr_34 [i_6] [i_7] [i_8] [i_9] = -5;

                        for (int i_10 = 0; i_10 < 16;i_10 += 1)
                        {
                            arr_37 [i_6] [i_7] [i_8 + 1] [i_9] [i_10] = (((arr_16 [i_6 + 1]) ? ((var_12 ? var_19 : 8725724278030336)) : 28));
                            arr_38 [i_10] [i_10] [i_8] [i_8] [4] [0] [i_8] |= (arr_15 [i_8 + 1]);
                            arr_39 [i_10] [i_6] [i_8 - 1] [i_6] [3] = 240;
                        }
                        var_26 &= -var_15;
                    }
                }
            }
        }
        arr_40 [9] [i_6] = (!63864);
    }
    var_27 *= var_9;
    #pragma endscop
}
