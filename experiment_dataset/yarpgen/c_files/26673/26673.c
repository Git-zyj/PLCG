/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26673
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26673 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26673
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = var_10;
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_9 [i_0] = ((-(((1715293999480289798 ? 1651344956 : 1651344964)))));
                    var_20 = ((-(~-296135304)));
                }
            }
        }
        arr_10 [i_0] = (arr_3 [i_0]);
        arr_11 [i_0] [i_0] = (arr_0 [i_0] [i_0]);
    }
    var_21 = var_19;

    for (int i_3 = 0; i_3 < 11;i_3 += 1) /* same iter space */
    {
        arr_14 [i_3] = 1651344950;
        var_22 -= (min(1785303757, 65526));
        arr_15 [6] &= var_11;
        arr_16 [i_3] [i_3] = (((((arr_5 [i_3] [i_3] [i_3]) >= (arr_5 [i_3] [i_3] [i_3]))) ? (((arr_3 [i_3]) ? (arr_3 [i_3]) : var_4)) : (((arr_5 [i_3] [i_3] [i_3]) ? 1651344963 : (arr_3 [i_3])))));
        var_23 = ((((max((!var_2), (min((arr_5 [i_3] [i_3] [i_3]), 62247))))) ? var_9 : (arr_1 [i_3])));
    }
    for (int i_4 = 0; i_4 < 11;i_4 += 1) /* same iter space */
    {
        arr_20 [i_4] = -1651344942;
        var_24 -= (arr_18 [i_4]);
    }
    for (int i_5 = 0; i_5 < 19;i_5 += 1)
    {
        var_25 = (min(var_25, ((((arr_21 [i_5] [i_5]) ? (arr_22 [i_5]) : (arr_22 [11]))))));
        var_26 = -1651344972;
        /* LoopNest 2 */
        for (int i_6 = 1; i_6 < 18;i_6 += 1)
        {
            for (int i_7 = 3; i_7 < 18;i_7 += 1)
            {
                {
                    arr_29 [i_5] [i_6] [i_7] [i_7] = ((((arr_27 [i_5] [i_6] [10]) % (max(21, var_10)))) * (arr_23 [i_5] [i_5] [i_7 - 2]));
                    arr_30 [i_5] [i_5] [i_7] &= ((((((arr_24 [i_6 - 1] [i_7 - 1] [i_7 - 3]) >= (arr_22 [i_6 + 1])))) >= (arr_25 [i_6 - 1] [i_6 + 1])));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 19;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 19;i_9 += 1)
                        {
                            {
                                var_27 = (((((var_0 / 1651344930) ? var_5 : ((-(arr_34 [i_5] [i_5] [i_7] [i_8] [i_7] [2]))))) / var_11));
                                arr_36 [i_5] [i_6] [i_7] [i_7] [i_5] = (max(var_11, ((296135304 ? 3827332315830510946 : 1651344926))));
                            }
                        }
                    }
                }
            }
        }
        arr_37 [i_5] [i_5] = ((296135289 ? 32753 : 27));
    }
    var_28 -= var_14;
    #pragma endscop
}
