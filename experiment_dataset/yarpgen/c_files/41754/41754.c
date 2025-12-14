/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41754
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41754 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41754
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 8;i_4 += 1)
                        {
                            {
                                var_13 = (-1302739055 >= (max((arr_17 [i_1] [i_2] [i_2] [i_3] [i_4 - 2] [i_4 + 1] [i_4]), (max((arr_13 [i_3] [i_1]), var_5)))));
                                var_14 = ((((((var_10 >> (var_3 + 18832))))) / (((((max(var_6, 4294967287))) && var_0)))));
                            }
                        }
                    }
                    arr_19 [8] [i_1] [i_1] [7] = ((((((max(var_8, 7))) || var_1)) || ((((var_0 ? 1 : (arr_5 [i_0] [i_1] [i_2]))) == (((-(arr_6 [i_0] [i_2]))))))));
                    var_15 = (min((~var_2), (((arr_12 [i_0]) ? (((var_10 ? (arr_0 [i_0] [i_0]) : (arr_18 [i_1])))) : (arr_2 [i_2])))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 12;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 12;i_6 += 1)
        {
            {
                var_16 *= ((-((min(1212495931, 1)))));
                var_17 = (arr_24 [i_6]);
                var_18 = ((max(-110, (arr_20 [i_6]))) < 1);
                var_19 = max(-7104984463507279784, -64);
            }
        }
    }
    #pragma endscop
}
