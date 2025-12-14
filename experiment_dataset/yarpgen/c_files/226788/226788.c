/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226788
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226788 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226788
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_0;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_2] = (((((16273676889036175177 ^ var_2) >> (((arr_3 [i_0]) + 85)))) + ((((-1 != (arr_2 [i_1])))))));
                    var_21 = 255;
                    var_22 = ((-((-(arr_7 [i_0] [i_1] [i_1])))));

                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        var_23 = (((max(156, 2390433666021479316)) + (((241 ? (arr_1 [i_3]) : (arr_1 [i_1]))))));
                        arr_12 [i_2] [2] [i_2] [i_3] = ((1 ? 8 : 1));
                        var_24 |= 2;
                    }
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        var_25 ^= ((var_12 + (min(var_11, -1668740442037544367))));

                        for (int i_5 = 1; i_5 < 19;i_5 += 1) /* same iter space */
                        {
                            arr_18 [i_0] [i_0] [i_2] [i_2] [12] [i_2] [i_2] = ((~(arr_9 [i_0] [i_0] [13] [i_0] [i_5])));
                            arr_19 [i_2] [i_2] [12] [i_5] = var_19;
                            var_26 = (max(var_26, ((((arr_16 [i_1] [i_1]) >= ((var_14 ? (arr_9 [i_5 - 1] [i_5 + 1] [i_5 + 1] [18] [i_5]) : (arr_9 [i_5 + 1] [i_5 + 2] [i_5 + 1] [10] [10]))))))));
                        }
                        for (int i_6 = 1; i_6 < 19;i_6 += 1) /* same iter space */
                        {
                            arr_23 [i_0] [i_0] [i_2] [i_0] [i_2] = 4294967295;
                            arr_24 [12] &= 0;
                        }
                        for (int i_7 = 2; i_7 < 20;i_7 += 1)
                        {
                            var_27 -= ((-(max((arr_5 [i_7 + 1] [i_7 + 1] [i_7 + 1]), (arr_22 [i_7 + 1] [i_7 + 1] [i_7 - 2])))));
                            arr_28 [i_0] [i_0] [i_0] [i_2] = (~var_0);
                        }
                        for (int i_8 = 0; i_8 < 0;i_8 += 1)
                        {
                            arr_32 [i_2] [i_2] [i_2] [i_4] [i_8 + 1] = ((-(arr_20 [8] [i_2] [i_8 + 1] [i_8] [1])));
                            arr_33 [i_0] [i_1] [17] [i_2] [i_8] = 1;
                            var_28 = (arr_14 [i_0] [16] [i_4] [i_2]);
                            var_29 = ((!(((arr_5 [i_0] [i_8 + 1] [i_0]) != (arr_5 [i_2] [i_8 + 1] [i_8 + 1])))));
                        }
                    }
                    /* vectorizable */
                    for (int i_9 = 2; i_9 < 17;i_9 += 1)
                    {
                        var_30 ^= ((~((~(arr_4 [i_0])))));
                        arr_36 [i_2] [i_2] [i_2] [i_0] = (((~109547486) ? (var_3 + 249) : 2631536355415869662));
                    }
                }
            }
        }
    }
    var_31 += var_19;
    #pragma endscop
}
