/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194991
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194991 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194991
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(((61305 ? (~var_13) : (var_1 | var_1))), ((((((var_9 ? var_6 : var_13))) ? ((max(var_6, var_0))) : (!var_0))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    var_15 = (max(var_15, ((min(18446744073709551615, 4224)))));

                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        var_16 = (arr_6 [i_0] [i_0] [i_1] [i_0] [10]);
                        var_17 = ((4230 ? 1 : 4231));
                    }
                    var_18 = (max(var_18, ((min(1048320, -1654413057)))));
                    var_19 = var_6;
                }
                for (int i_4 = 4; i_4 < 22;i_4 += 1) /* same iter space */
                {
                    var_20 = ((min((((var_11 >> (4227 - 4200)))), ((var_1 / (arr_6 [1] [1] [i_1] [i_4 - 4] [3]))))));
                    arr_10 [i_0] [i_0] [i_4 + 2] = (max(0, 104));

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        var_21 = ((var_13 | (((arr_3 [i_0] [i_0] [i_5]) | (arr_3 [i_0] [i_1] [i_4])))));
                        arr_13 [i_0] [i_0] [i_0] [i_0] &= var_7;
                    }
                    for (int i_6 = 0; i_6 < 24;i_6 += 1)
                    {
                        var_22 = (arr_14 [i_6] [i_6]);
                        var_23 = (min(var_23, (((((5346119888777960475 ? 1516642123011954247 : 1389372637)) | (((((max((arr_12 [i_4] [i_4]), var_4))) ? (arr_4 [i_0] [i_1]) : ((min((arr_11 [7]), 169)))))))))));
                    }
                    for (int i_7 = 0; i_7 < 0;i_7 += 1)
                    {
                        arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] = (max(var_13, 250));
                        var_24 *= (((-13833 < 0) ? (arr_16 [i_0] [i_0] [i_1] [i_4] [i_7]) : ((max((~var_7), 20)))));
                    }
                }
                for (int i_8 = 4; i_8 < 22;i_8 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 24;i_9 += 1)
                    {
                        for (int i_10 = 1; i_10 < 23;i_10 += 1)
                        {
                            {
                                var_25 = (max(var_1, 8));
                                var_26 = ((((((13463 < 3359224505180749967) ? ((var_6 ? var_5 : 175)) : (arr_9 [i_10] [i_9] [i_0] [i_0])))) ? (((((min(var_5, var_8))) ? var_4 : (arr_9 [i_0] [i_1] [i_9] [i_10])))) : ((((((arr_27 [i_0] [i_0] [i_0] [i_10 - 1]) >> (2574658975 - 2574658961)))) ? var_11 : ((-(arr_17 [i_0] [i_0] [23] [i_0])))))));
                            }
                        }
                    }
                    arr_32 [i_0] [i_1] [i_8] [i_1] = (((((var_7 ? ((min(1945964145, 238))) : ((0 ? 13832 : var_3))))) ? ((((min(var_9, 2147483647))) ? 4293680575375192964 : var_4)) : -4823));
                    arr_33 [i_0] [i_0] [i_8 - 3] [i_8 - 4] = (arr_0 [i_0] [i_0]);
                }
                var_27 = (~var_12);
            }
        }
    }
    var_28 = var_6;
    var_29 = (max(var_29, var_9));
    #pragma endscop
}
