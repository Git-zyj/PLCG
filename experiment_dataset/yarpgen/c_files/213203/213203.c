/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213203
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213203 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213203
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_12 = ((+(((arr_7 [i_0] [i_0 - 1] [i_0] [i_0 - 2]) - (arr_7 [1] [i_0 - 2] [i_0] [i_0 + 1])))));
                    var_13 = (i_0 % 2 == zero) ? ((((((2827991729 << (((arr_5 [i_0]) - 136))))) ? 1 : (((-1 + 4398046511103) ? (max(2069994026018281733, 2069994026018281730)) : ((((arr_6 [i_2] [i_1] [i_0]) ? 4294967292 : (arr_5 [i_0]))))))))) : ((((((2827991729 << (((((arr_5 [i_0]) - 136)) - 12))))) ? 1 : (((-1 + 4398046511103) ? (max(2069994026018281733, 2069994026018281730)) : ((((arr_6 [i_2] [i_1] [i_0]) ? 4294967292 : (arr_5 [i_0])))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_14 = ((!(~2)));
                                var_15 = ((4294967292 / -2069994026018281715) + (((-(arr_10 [i_4 - 1] [i_4] [11])))));
                            }
                        }
                    }
                    var_16 = (arr_8 [i_0] [i_1] [i_1]);
                    var_17 = (((((((max(251, -2069994026018281715)) > (arr_6 [i_0] [i_0 + 2] [i_0 - 3]))))) + (arr_0 [6] [i_0 - 3])));
                }
            }
        }
    }
    var_18 &= 0;
    var_19 = (var_4 / var_8);
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 10;i_5 += 1)
    {
        for (int i_6 = 2; i_6 < 9;i_6 += 1)
        {
            {
                var_20 ^= (min((arr_13 [i_6 - 1] [i_6 - 1]), (arr_13 [i_6 - 1] [i_6 + 1])));
                var_21 &= ((max((~1), 0)) + ((-((((arr_6 [i_5] [i_5] [i_6]) < 1))))));
            }
        }
    }
    #pragma endscop
}
