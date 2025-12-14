/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27849
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27849 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27849
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            {
                arr_4 [i_0] |= 246;
                var_19 ^= var_16;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_20 = ((255 ? (35 ^ var_16) : (((-(1 || var_2))))));
                            var_21 = ((var_18 ? var_3 : 126));
                        }
                    }
                }
            }
        }
    }
    var_22 &= var_17;
    var_23 &= ((((((var_13 - var_15) + 2147483647)) >> (((var_17 - 1) + 69)))));
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 11;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 11;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 9;i_6 += 1)
            {
                {

                    for (int i_7 = 0; i_7 < 11;i_7 += 1)
                    {
                        arr_20 [i_6] [i_5] [i_5] [i_5] = (((46945 / 2329) - ((max(1, 40119)))));
                        var_24 = ((!((((max(1, var_14)) ? -117 : 8843400607977801925)))));
                    }
                    var_25 ^= (~var_4);

                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        var_26 &= 0;

                        for (int i_9 = 0; i_9 < 11;i_9 += 1)
                        {
                            var_27 |= (((var_16 ? 14594863874031324110 : 84363974)));
                            arr_28 [i_4] [i_6] [7] [2] [i_9] [i_6] [i_6] = ((~(((!(arr_22 [i_5] [i_5] [i_5] [i_5]))))));
                            var_28 ^= var_10;
                            arr_29 [i_6] = (126 ? 246 : 3754024490424899784);
                            var_29 = ((((-(arr_6 [i_5] [i_5] [i_9]))) <= var_9));
                        }
                        for (int i_10 = 2; i_10 < 7;i_10 += 1)
                        {
                            var_30 += (~0);
                            var_31 ^= -var_18;
                            arr_32 [i_4] [9] [i_6 + 1] [i_8] [i_6] = 33051;
                        }
                    }
                    arr_33 [4] [i_4] [i_6 + 2] [i_6] = (-117 == -var_18);
                }
            }
        }
    }
    #pragma endscop
}
