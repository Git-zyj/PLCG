/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234044
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234044 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234044
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 *= var_6;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 9;i_4 += 1)
                        {
                            {
                                var_17 = (((((-497993018 - (max((arr_6 [6]), var_2))))) ? ((((((arr_5 [i_2] [i_4 + 1]) ^ (arr_8 [i_3] [i_2] [i_2] [6])))) ? (max((arr_5 [i_0] [0]), var_7)) : (((var_14 ? (arr_11 [i_0] [i_1] [i_1] [i_2] [0] [i_4]) : (arr_1 [i_0])))))) : ((max((arr_10 [i_2 - 1] [i_4 - 1] [i_4 - 1] [i_2] [i_4] [1] [i_4]), (arr_10 [i_2 - 1] [i_4 - 1] [i_4] [i_2] [i_4] [i_4 + 1] [i_2]))))));
                                var_18 *= min(7011, (((~1) ^ (~6))));
                                arr_13 [0] [i_1] [0] [i_3] [i_2] = (((min((((arr_0 [i_1]) / (arr_3 [2] [8] [i_0]))), (arr_2 [i_4 + 1] [i_3] [i_0]))) * -19633));
                                var_19 ^= ((35 ? (arr_6 [i_2 - 1]) : (arr_12 [i_3] [4] [i_3] [i_3] [i_3] [i_3] [i_3])));
                            }
                        }
                    }
                    var_20 = (max(var_20, ((((((~(arr_3 [i_0] [3] [i_2])))) ? ((((arr_1 [i_1]) ? 19628 : var_3))) : (min(7011, (arr_6 [8]))))))));
                    var_21 = (arr_10 [i_2] [i_2 - 1] [i_2] [i_2] [i_1] [i_2] [i_0]);
                    var_22 = (max((((45 ? 3880099329848298469 : 12851))), (min(-3170265869479844586, 19618))));
                }
            }
        }
    }
    #pragma endscop
}
