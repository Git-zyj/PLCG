/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30896
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30896 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30896
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_17 = (min(var_17, ((((((-((14538 ? var_7 : (arr_0 [i_0])))))) ? (arr_2 [i_0] [i_0]) : ((((((-(arr_1 [i_0])))) ? (8716 / 5701) : ((9176 ? var_7 : 14523))))))))));
        var_18 = min(22937, var_5);
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 13;i_1 += 1)
    {
        arr_6 [i_1] = ((var_3 ? (arr_3 [i_1] [i_1]) : -8221));
        arr_7 [i_1 + 1] [i_1] = ((14520 << (((arr_5 [i_1]) - 5980183883167530216))));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 14;i_3 += 1)
            {
                for (int i_4 = 3; i_4 < 14;i_4 += 1)
                {
                    {

                        for (int i_5 = 0; i_5 < 15;i_5 += 1)
                        {
                            arr_20 [i_1 + 1] [i_2] [i_1] [i_1 - 1] [i_1] [i_1] = (((arr_14 [i_1] [i_1] [i_1 - 1] [i_1] [i_1] [i_1]) ? (arr_16 [i_1] [i_4 - 3] [i_1] [i_1 - 1] [i_2] [i_1]) : var_14));
                            arr_21 [i_1] [i_2] [i_3] [i_2] [i_5] = ((((-18818 ? 22917 : 17466412109514131834)) | (arr_16 [i_3 + 1] [i_3] [i_3] [i_3 - 1] [i_2] [i_3 + 1])));
                        }
                        for (int i_6 = 4; i_6 < 12;i_6 += 1)
                        {
                            var_19 = ((var_10 ? ((14521 ? 4845595403401836060 : 22885)) : ((((arr_5 [i_6]) ? var_8 : 21019)))));
                            arr_24 [i_2] [i_4] [i_2] [i_2] [i_2] [i_1 - 1] [i_1 - 1] = (((var_4 ? var_8 : 65532)) >> (var_15 + 620959942));
                        }
                        var_20 = -32757;
                    }
                }
            }
        }
    }
    var_21 = min(((((max(22869, var_13))) ? var_8 : (var_5 & var_12))), var_12);
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 18;i_7 += 1)
    {
        for (int i_8 = 3; i_8 < 17;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 18;i_9 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_10 = 0; i_10 < 18;i_10 += 1)
                    {
                        var_22 = (max(var_22, (((-(arr_27 [i_8 + 1]))))));
                        var_23 = (((arr_25 [i_8 + 1] [i_8 + 1]) ? (((arr_31 [i_7] [i_8] [i_9] [i_10]) ? var_16 : 45212)) : -var_9));
                    }
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 18;i_11 += 1)
                    {
                        for (int i_12 = 2; i_12 < 15;i_12 += 1)
                        {
                            {
                                var_24 = (max(var_24, ((min((max(2041036977, 22852)), var_15)))));
                                var_25 ^= (((((var_16 ? (arr_25 [i_8 - 2] [i_8 - 2]) : (arr_25 [i_8 - 2] [i_8 - 2])))) ? ((max((arr_37 [i_8 - 2] [i_8] [i_7] [i_11]), (arr_37 [i_8 - 2] [i_8] [i_7] [i_11])))) : ((var_3 ? var_3 : (arr_37 [i_8 - 2] [i_8] [i_7] [i_8])))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
