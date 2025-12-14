/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21557
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21557 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21557
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((max(var_15, (max(2524925894531453644, var_7)))) + ((((67553994410557440 % var_18) * (((min(var_6, 0)))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_10 [i_2] [i_2] = (max(-794039807, 13270882360475021734));
                    var_21 = ((var_4 - (((!(arr_0 [i_0]))))));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        var_22 = (112 < 0);
                        var_23 = (((arr_11 [i_2]) != (arr_9 [i_0])));

                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            var_24 = (0 + 26);
                            var_25 = (max(var_25, (255 >= 253)));
                        }
                        for (int i_5 = 0; i_5 < 17;i_5 += 1)
                        {
                            var_26 = (max(var_26, 936086180));
                            var_27 = var_9;
                        }
                        for (int i_6 = 0; i_6 < 17;i_6 += 1)
                        {
                            var_28 = 43;
                            arr_22 [i_2] = (arr_18 [i_2] [i_2]);
                            var_29 -= 255;
                        }
                    }
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        var_30 -= (((min(((max(var_9, 25))), (arr_7 [i_0] [i_1] [i_2]))) - (arr_21 [i_0] [i_1] [i_2] [i_7] [i_0])));
                        arr_25 [i_2] = var_7;
                    }
                    var_31 = (max((min(13908676890939525601, (!172))), ((min(((max(-7962, 4))), (((arr_14 [i_0]) << (((((arr_21 [i_0] [i_0] [i_1] [i_2] [i_2]) + 81)) - 21)))))))));
                    var_32 = (((((((arr_21 [i_0] [2] [1] [i_0] [i_0]) > (arr_8 [i_0] [i_1] [i_2]))))) != (arr_5 [i_1] [i_1])));
                }
            }
        }
    }
    var_33 = var_14;
    #pragma endscop
}
