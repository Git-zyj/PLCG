/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246365
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_17 = ((((233592768 ? -4 : ((1032357079 ? 74 : 6))))) ? (--1870419850) : ((-(arr_4 [i_0] [9] [i_1]))));
                arr_5 [i_0] [i_0] [i_0] = (((((22 + ((-37 ? -854361535 : 15133598345183892810))))) ? (((22 == 254) ? 233 : (((arr_0 [i_1]) ? (arr_2 [1] [i_0]) : 854361534)))) : (arr_1 [i_1])));
                arr_6 [1] = ((~(arr_3 [i_0])));

                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    arr_10 [i_0] = (min(((295618469 ? -1528473473 : 1)), var_10));
                    var_18 = (min(var_18, (((((((1015808 / (arr_0 [i_0])))) == -1187209772052706833))))));
                    var_19 = (min(var_19, ((min((arr_7 [10] [10] [10] [10]), (max((arr_1 [i_1]), (arr_4 [i_0] [i_0] [i_2]))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_17 [i_1] [i_3] [i_1] = ((!(arr_13 [1] [1] [1] [1] [i_4] [i_4] [i_4])));
                                var_20 = (min(var_20, (arr_15 [3] [i_1] [i_2] [16] [i_4] [3] [5])));
                            }
                        }
                    }
                    var_21 = (max(var_7, (arr_0 [i_0])));
                }
                arr_18 [i_0] = ((((max((arr_16 [4] [i_1] [i_1] [i_0]), ((44 ? var_9 : (arr_14 [i_0] [i_0] [i_0] [i_0])))))) ? var_13 : ((~(arr_0 [i_1])))));
            }
        }
    }
    var_22 = (((~var_6) ? var_1 : ((var_10 ? var_13 : (~-76)))));
    #pragma endscop
}
