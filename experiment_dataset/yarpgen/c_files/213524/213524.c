/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213524
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213524 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213524
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 32767;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_17 ^= (((98 ? 37288 : 1872866649)));
                                var_18 = ((min((arr_5 [2] [i_0 + 2] [i_0]), (arr_5 [i_0] [i_0 + 3] [i_0]))));
                                var_19 ^= (((max((!142), 2249600790429696)) - (arr_2 [i_0] [i_4])));
                                var_20 ^= (max(-2249600790429674, (-127 - 1)));
                                var_21 = (min((min(var_4, 1216)), ((max((arr_8 [i_3 - 2] [i_3 - 2] [i_3 - 1] [i_3 - 1]), (arr_8 [i_3 - 3] [i_3] [i_3 - 2] [i_3 + 1]))))));
                            }
                        }
                    }
                    arr_14 [1] [i_0] [i_2] [i_2] = ((31 ? 118 : 6));
                    var_22 = ((((arr_2 [i_1] [i_1]) ? (max(1401284429, (arr_5 [i_1] [5] [5]))) : (-2147483647 - 1))));
                }
            }
        }
    }
    var_23 &= (((13 + 18446744073709551615) * ((((max(var_15, var_2)))))));
    #pragma endscop
}
