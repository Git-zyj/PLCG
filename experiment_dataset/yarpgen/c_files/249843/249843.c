/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249843
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249843 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249843
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_5;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                {
                    var_14 = (((((-(arr_6 [i_1] [i_1])))) ? ((((((arr_6 [i_1] [i_1]) * (arr_7 [i_0] [i_1] [i_2])))) ? (((min((arr_6 [i_1] [10]), var_4)))) : -3461273957707100669)) : ((((arr_7 [i_0 - 2] [i_1] [1]) >> (((arr_7 [i_0 - 1] [i_1] [i_0]) - 219)))))));
                    var_15 = ((+(((((arr_4 [i_1]) ? (arr_6 [i_1] [i_2]) : var_7))))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_16 ^= 33554432;
                                arr_13 [i_1] [18] [i_2] [i_3] [i_4] = ((-(arr_10 [i_1] [i_1] [i_2] [i_3] [i_4] [i_4])));
                            }
                        }
                    }
                    var_17 = ((((!(arr_7 [i_1] [i_1] [i_0 - 2]))) || (((arr_1 [i_0 + 1]) || (arr_8 [i_1] [i_0 + 2] [i_2])))));
                    var_18 ^= (((~(arr_3 [6]))));
                }
            }
        }
    }
    #pragma endscop
}
