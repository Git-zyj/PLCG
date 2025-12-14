/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23456
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23456 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23456
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_17 = (min(var_17, (((min((arr_8 [i_1 + 1] [i_1] [i_2 + 2]), var_9))))));
                                arr_16 [i_0] [i_1] [i_3] [i_3] [i_4] = (!1);
                                var_18 = (max(var_18, (max(((((~2985) ? ((-21153141834866116 ? (arr_6 [i_0] [i_0]) : 1)) : ((6928501413463732219 ? 1 : 42872))))), 6570870772436566818))));
                            }
                        }
                    }
                    arr_17 [i_0] [i_1 - 2] [i_2] = (var_5 - -var_13);
                    arr_18 [i_0] [i_0] [i_0 - 3] [i_0 - 2] = ((((!(arr_1 [i_0 - 3])))));

                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        var_19 = ((-((((((arr_13 [i_5] [16] [i_5]) >> (var_1 + 144)))) ? (arr_4 [9]) : ((min(var_5, (arr_13 [6] [i_2] [i_1]))))))));
                        var_20 = var_14;
                        var_21 += (max(147, 69));
                        var_22 *= ((16128 ? 21153141834866116 : 1));
                    }
                }
            }
        }
    }
    var_23 = (max(var_23, (((var_6 / ((var_4 ? var_15 : -21153141834866117)))))));
    var_24 = max(1, -1394505034802788012);
    /* LoopNest 2 */
    for (int i_6 = 1; i_6 < 1;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 17;i_7 += 1)
        {
            {
                arr_28 [i_6] [i_6] [i_7] = (min(((6091914636327240088 ? var_10 : (arr_4 [i_6 - 1]))), var_14));
                var_25 = (((((((32764 ? 1 : -2004507279))) ? var_0 : (arr_19 [i_6] [i_6 - 1] [i_6 - 1] [i_7]))) == (arr_14 [i_7])));
                var_26 = var_7;
            }
        }
    }
    #pragma endscop
}
