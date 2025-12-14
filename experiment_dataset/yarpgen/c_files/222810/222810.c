/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222810
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222810 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222810
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            arr_8 [i_1] [i_2 + 1] [i_1] = ((-(((arr_3 [i_0] [i_2 + 1] [i_1]) ? (arr_6 [i_1 + 4] [i_2 - 2]) : (arr_6 [i_1 + 4] [i_2 + 1])))));
                            var_12 = (min(var_12, ((((((19000 ? 2732768566 : 0))) + var_8)))));
                        }
                    }
                }
                var_13 = ((((min(((var_4 ? var_11 : (arr_7 [i_1] [15] [18] [1]))), -var_3))) + (max((((arr_5 [i_0] [i_0] [i_1]) ? (arr_6 [i_0] [i_1 + 4]) : var_6)), var_5))));

                for (int i_4 = 3; i_4 < 20;i_4 += 1)
                {
                    var_14 = (((((((max(12132, (arr_1 [i_4 - 2] [i_1]))) == (max((arr_7 [i_1] [18] [i_1 + 4] [i_1]), (arr_0 [i_0]))))))) != ((((var_5 ? var_5 : (arr_7 [i_1] [i_1 - 1] [i_4] [i_4 + 3]))) - var_4))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 21;i_6 += 1)
                        {
                            {
                                var_15 = (min(var_0, ((+((((arr_5 [4] [i_4 - 3] [i_5]) != (arr_13 [i_6 + 2] [i_4] [i_1 + 4] [i_0]))))))));
                                var_16 = ((~((max((10 < var_10), var_9)))));
                                var_17 = (max(var_17, ((((arr_13 [i_0] [i_0] [i_0] [i_0]) || ((min((arr_5 [i_1 + 3] [i_4 - 2] [i_4 - 3]), (arr_19 [i_0] [i_1] [i_4 + 3] [i_5] [i_6 + 3] [i_1 - 1])))))))));
                                var_18 += max(((min((arr_19 [i_0] [i_1] [i_4] [i_5] [i_6 - 1] [18]), var_3))), (!3336945058));
                                arr_20 [i_1] [i_4] [i_6 + 1] = (!var_1);
                            }
                        }
                    }

                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        var_19 = var_4;
                        var_20 ^= var_7;
                    }
                    var_21 = (((((((var_5 ? -26 : var_5))) ? (~var_2) : var_5))) == (max((arr_18 [i_0] [i_0] [i_0] [i_1 + 4] [i_4] [i_4 - 1]), ((var_4 ? (arr_14 [i_1]) : (arr_22 [i_0] [i_0] [i_1 + 4] [i_1] [i_4] [i_4]))))));
                }
                arr_24 [i_0] [i_0] [i_1] = (max((1 ^ var_4), (min((((-62 ? 11 : 1114583105))), (~var_6)))));
            }
        }
    }
    var_22 = (((~var_9) ? (((36 || (((65530 ? 1 : 1)))))) : var_7));
    #pragma endscop
}
