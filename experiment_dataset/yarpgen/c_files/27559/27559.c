/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27559
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27559 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27559
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 += (max(((((13119756058931115734 ? 13119756058931115727 : 65533)) * (var_1 == var_6))), ((max((var_1 == var_8), var_13)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            {
                var_17 ^= ((+(((arr_3 [i_1 + 1] [i_1 - 2] [i_1 + 1]) ? (arr_3 [i_1 - 2] [i_1 - 1] [i_1 + 1]) : (arr_3 [i_1 + 2] [i_1 - 2] [i_1 + 1])))));
                arr_4 [i_0] [i_0] [i_0] = (4221941542365095489 / -117);
                arr_5 [i_1] [i_1 - 2] [i_1] = ((((((!var_15) << (var_10 < 1)))) ? (((arr_0 [i_1 - 1]) * (((arr_2 [i_0]) ? (arr_0 [i_0]) : (arr_1 [i_0]))))) : ((var_0 / ((var_9 ? var_5 : (arr_3 [i_0] [i_0] [i_0])))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_4 = 3; i_4 < 17;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 17;i_5 += 1)
                    {
                        {
                            var_18 = (max(var_18, ((((((arr_10 [i_4 - 2]) ? ((((arr_8 [i_3]) * 1))) : (max(13119756058931115718, 1)))) < ((((arr_7 [i_3]) == (arr_10 [i_3])))))))));
                            arr_15 [i_2] [i_4] = ((arr_14 [i_5 + 1] [i_3] [i_4] [i_5 - 2] [i_4] [i_4]) % (((arr_14 [i_2] [i_4 - 2] [i_4 - 3] [i_4 - 2] [i_4 + 2] [i_2]) ? (((arr_7 [16]) ? (arr_11 [i_2]) : 1820503011)) : (((var_2 ? -83 : (arr_6 [i_4] [i_2])))))));
                            arr_16 [i_5] [i_3] [i_3] [i_2] = (max(((max(((((arr_6 [i_2] [i_4]) == var_10))), (arr_9 [i_5] [i_4] [i_2])))), var_6));
                        }
                    }
                }
                var_19 = (((arr_14 [i_3] [i_3] [i_2] [i_2] [i_2] [i_2]) ? (((((arr_7 [i_3]) && (arr_7 [i_2]))))) : ((max(var_3, var_3)))));
                arr_17 [i_3] = (max((max((arr_11 [i_3]), var_10)), ((((!var_12) ? (arr_7 [i_2]) : var_7)))));
            }
        }
    }
    var_20 += ((-(((((var_2 ? var_12 : var_2)) == var_4)))));
    #pragma endscop
}
