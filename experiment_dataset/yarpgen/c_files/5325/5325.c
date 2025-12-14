/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5325
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (10 < 2);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            {
                arr_7 [i_0] [6] = var_11;
                var_17 = (min(var_17, (((~((var_3 & ((var_7 & (arr_2 [i_0]))))))))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 16;i_3 += 1)
                    {
                        {
                            arr_13 [i_2] [i_2] [6] = ((~(((~var_15) ^ ((((arr_9 [i_2] [i_3]) ? (arr_4 [i_0]) : (arr_1 [i_1 - 1]))))))));
                            var_18 = 5762071705013941973;
                            var_19 = (max(var_19, (((!((max(-4294967295, var_10))))))));

                            /* vectorizable */
                            for (int i_4 = 2; i_4 < 17;i_4 += 1) /* same iter space */
                            {
                                var_20 = (((~32767) && (-32752 ^ -5762071705013941973)));
                                var_21 = (max(var_21, ((((((10 ? 255 : -32752))) ? (~var_11) : (((var_8 > (arr_10 [i_0] [i_0] [i_0] [i_0])))))))));
                            }
                            for (int i_5 = 2; i_5 < 17;i_5 += 1) /* same iter space */
                            {
                                arr_20 [i_0] [i_1] [i_2 + 1] [i_3] [i_2] = -5762071705013941973;
                                var_22 = ((-(arr_12 [i_3] [i_3] [i_3] [i_3 - 1] [i_3] [i_3])));
                            }
                            /* vectorizable */
                            for (int i_6 = 2; i_6 < 17;i_6 += 1) /* same iter space */
                            {
                                var_23 = ((~((var_7 ? 1750856185 : -5762071705013941971))));
                                var_24 &= 2214183218346429583;
                            }
                        }
                    }
                }
                var_25 = (min(var_25, var_13));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 11;i_7 += 1)
    {
        for (int i_8 = 2; i_8 < 8;i_8 += 1)
        {
            for (int i_9 = 3; i_9 < 8;i_9 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_10 = 2; i_10 < 10;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 11;i_11 += 1)
                        {
                            {
                                var_26 = ((((((arr_33 [i_7] [i_8] [i_9 - 1]) - (arr_18 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7]))) | var_1)) | 18);
                                var_27 = ((33305 > ((((arr_21 [i_7] [i_8 + 2] [i_9 + 2] [11] [i_11]) != ((var_5 ? 5762071705013941984 : (arr_21 [i_7] [i_8] [i_9] [i_10 - 2] [i_11]))))))));
                                var_28 = ((-var_6 - ((((min(var_0, -115))) ? var_3 : (((238 ? var_4 : 255)))))));
                            }
                        }
                    }
                    var_29 &= 1;
                    var_30 = (min(var_30, ((((((((arr_9 [i_7] [6]) ? 255 : 1)) >= (((arr_35 [i_7] [i_8]) ? 213 : var_0)))) && ((!(((13147 ? 8316 : (arr_5 [i_7] [i_8] [i_7])))))))))));
                    arr_36 [i_7] [i_8] [i_9] = -32757;
                }
            }
        }
    }
    #pragma endscop
}
