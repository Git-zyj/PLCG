/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223304
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223304 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223304
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 *= (min(((-(~var_15))), var_8));
    var_18 = (max(var_18, var_1));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 10;i_3 += 1)
                    {
                        {
                            var_19 = (max(var_19, (((~(arr_8 [i_3] [i_3 - 1] [i_1 + 2] [i_0]))))));
                            arr_11 [i_0] [10] [i_0] [i_0] [i_0] [i_0] |= (((max(2305825417027649536, (((-(arr_4 [i_2])))))) - (((60 ? (arr_7 [i_0] [8]) : 64)))));
                            var_20 = (max(var_20, ((((!(arr_10 [i_3] [i_3 + 2] [i_0] [i_3 - 2]))) ? ((((arr_10 [6] [i_3 - 1] [i_2] [i_3 - 2]) == (arr_10 [i_3] [i_3 + 2] [i_0] [i_3 - 3])))) : (((arr_10 [i_3] [i_3 + 2] [i_2] [i_3 - 3]) ? (arr_10 [i_3 + 2] [i_3 - 3] [i_2] [i_3 - 2]) : (arr_10 [1] [i_3 - 3] [i_0] [i_3 - 1])))))));
                            var_21 ^= (min((arr_6 [i_0]), (((arr_6 [i_2]) / 60))));
                        }
                    }
                }
                arr_12 [i_0] [1] [i_0] |= (max((((arr_7 [i_0] [i_1 - 2]) ? -60 : ((91 ? (arr_2 [i_0] [i_1]) : 275917397)))), (((-(arr_10 [i_1] [i_1 - 1] [i_0] [i_1 - 1]))))));
                var_22 = (((((var_6 ? (arr_1 [i_1 + 2] [i_1 - 1]) : var_0))) ? (arr_3 [i_1 - 2] [i_1 + 3]) : ((((arr_3 [i_1 - 1] [i_1 - 2]) ? (arr_1 [i_1 - 2] [i_1 + 2]) : (arr_1 [i_1 - 3] [i_1 - 3]))))));
            }
        }
    }
    var_23 ^= var_4;
    #pragma endscop
}
