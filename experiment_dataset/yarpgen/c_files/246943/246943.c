/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246943
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246943 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246943
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_20 = (552077271 - (((var_19 + 9223372036854775807) << (((!(-127 - 1)))))));
                var_21 = ((-(arr_0 [i_0] [i_1])));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_22 = ((((((!(arr_2 [i_0] [i_0] [i_0]))))) | (arr_2 [i_3] [i_2] [i_0])));
                                var_23 = (arr_5 [i_4] [i_2] [i_0]);
                                var_24 = (min(var_24, (arr_6 [i_4] [i_0] [i_0] [i_1])));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 16;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 16;i_6 += 1)
                    {
                        {
                            var_25 = (min(var_25, (min((arr_7 [i_6] [10] [i_1] [i_0] [i_0]), 1))));
                            var_26 = (min(var_26, (((((!(arr_14 [i_0] [i_1] [i_0]))) ? 1 : ((-(arr_2 [i_0] [i_1] [i_5]))))))));
                            var_27 = ((((arr_10 [i_0] [i_0] [6] [i_0] [2]) + (((-(arr_12 [i_0] [i_0] [0] [3])))))));
                            var_28 = (((arr_6 [8] [14] [i_1] [i_6]) > (max((arr_7 [i_0] [i_1] [12] [i_5] [i_6]), var_9))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 19;i_8 += 1)
        {
            {
                var_29 = min(((((((2102093894 < (arr_21 [i_7] [i_7])))) | (!2192873385)))), ((~(arr_18 [i_8]))));
                var_30 ^= var_4;
            }
        }
    }
    var_31 = ((((min(var_5, (var_19 | var_6)))) || 61957));
    var_32 *= var_16;
    #pragma endscop
}
