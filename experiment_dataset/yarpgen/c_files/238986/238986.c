/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238986
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238986 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238986
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] = 30499;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 14;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {

                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            arr_12 [8] [i_1] [i_2 - 3] [i_4] [8] = (arr_0 [i_3] [i_3]);
                            arr_13 [i_2] [i_2] [i_2] [i_2 - 3] [i_2] = (arr_3 [i_0]);
                        }
                        for (int i_5 = 0; i_5 < 15;i_5 += 1)
                        {
                            arr_17 [i_2] = (((arr_1 [i_0] [i_2 + 1]) == var_3));
                            arr_18 [i_2] [i_3] [i_2 - 1] [i_3] [i_3] = -4172377484707677973;
                        }
                        for (int i_6 = 0; i_6 < 15;i_6 += 1) /* same iter space */
                        {
                            arr_21 [i_0] [2] [i_0] [i_2] = 30499;
                            arr_22 [i_2] [i_6] [13] [i_2] [i_1] [i_2] = (((arr_0 [i_0] [i_1]) || var_3));
                        }
                        for (int i_7 = 0; i_7 < 15;i_7 += 1) /* same iter space */
                        {
                            arr_25 [10] [i_2] = (arr_1 [i_2] [i_7]);
                            arr_26 [i_0] [i_2] = ((-(arr_23 [i_0] [1] [i_2] [i_3] [i_7] [i_3])));
                            arr_27 [i_0] [i_1] [i_2] [i_7] = (4376094272169065187 - 1);
                        }

                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            arr_31 [i_0] [2] [i_2] [4] [i_8] = (arr_9 [i_0] [i_1] [i_2] [i_2 - 2]);
                            arr_32 [i_0] [14] [i_0] [12] = ((1073741824 ? 1909842028 : 1));
                        }
                        for (int i_9 = 0; i_9 < 15;i_9 += 1)
                        {
                            arr_35 [i_2] [i_1] = (arr_3 [i_1]);
                            arr_36 [i_0] [i_2] [i_3] = -4119126485632769458;
                        }
                        for (int i_10 = 0; i_10 < 15;i_10 += 1)
                        {
                            arr_41 [i_2] [i_1] = 2047;
                            arr_42 [i_0] [i_1] [i_0] [i_10] [i_1] = (((((2744174598 ? 132669602716260724 : (arr_3 [i_2])))) ? (arr_23 [i_0] [i_2 - 3] [i_0] [i_2] [i_2] [i_2 - 2]) : ((var_0 ? (arr_33 [i_0] [i_0] [i_0] [i_0] [i_0] [0]) : 65534))));
                            arr_43 [i_0] [i_2] [i_2 - 1] [i_1] [i_10] [i_3] [i_1] = (~1);
                        }
                        arr_44 [i_0] [i_1] [i_2] [i_0] [i_1] = ((var_8 ? (arr_14 [i_3] [i_2] [i_0] [i_0] [i_0]) : -15957));
                        arr_45 [i_0] [i_1] [i_0] [i_3] [i_0] [6] |= (arr_16 [12] [6] [12] [i_2 - 2] [i_2 + 1] [i_2 - 1] [i_2 - 2]);
                    }
                    arr_46 [i_0] [i_0] [i_2] [i_0] = ((var_4 ? (arr_10 [8] [i_1] [i_2] [i_1] [i_1] [i_1] [3]) : (-30494 && 1550792671)));
                    arr_47 [0] |= 1073741801;
                }
            }
        }
        arr_48 [i_0] = ((~(arr_8 [1])));
    }
    var_12 = ((~(((((-13262 ? 2 : -132669602716260724))) ? 253 : (var_7 / var_3)))));
    #pragma endscop
}
