/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194708
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194708 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194708
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_12 = (((min((arr_2 [i_0] [i_0 - 3] [i_0 - 2]), -32761))) ? (125 - 1) : ((var_11 ? 1 : (arr_2 [15] [i_0 - 2] [i_0 - 2]))));

                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    var_13 *= (arr_1 [i_2]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_11 [i_4] [i_4] [i_4] [i_4] = ((((max(21, 1))) ? (((!-3181989209652724902) + (arr_9 [i_0] [i_0] [i_0 + 1] [i_0 - 3] [i_0]))) : (((137 >= ((~(arr_4 [i_1]))))))));
                                arr_12 [i_0] [i_0] [14] [i_0] [i_4] = (arr_5 [i_0] [11] [i_2]);
                                var_14 = max((~var_1), ((((15559 <= -6879639495927401455) == var_3))));
                            }
                        }
                    }
                    var_15 = var_9;
                }
            }
        }
    }
    var_16 = (min(var_16, ((min((((((var_10 ? 65535 : var_11)) << ((((var_11 ? var_1 : 2002453003)) - 16665040228069268722))))), var_6)))));
    var_17 = (2392565908313713775 < 42217);
    var_18 = (max(var_18, ((((((((((9223372036854775807 ? var_1 : var_5))) ? (~var_10) : 0)) + 2147483647)) << (var_1 - 16665040228069268725))))));
    var_19 = ((var_2 ? (((((-127 - 1) >= 31744)) ? ((var_4 ? var_10 : 14148094687710805571)) : var_7)) : -1957959474));
    #pragma endscop
}
