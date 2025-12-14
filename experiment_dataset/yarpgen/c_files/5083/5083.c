/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5083
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5083 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5083
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        var_15 ^= ((((((arr_3 [i_0 - 2] [i_0 + 3]) + 2147483647)) << (((((arr_3 [i_0 + 4] [i_0 - 2]) + 113)) - 20)))));
                        arr_10 [2] [i_2] [i_0] [i_0] [i_1] [i_0] = (((((((arr_4 [i_1] [i_2] [i_2]) | (arr_8 [i_0] [i_1] [i_2] [i_1])))) + 1177977683458023721)));
                    }
                    for (int i_4 = 0; i_4 < 15;i_4 += 1)
                    {
                        var_16 = (i_0 % 2 == zero) ? ((((((((1177977683458023721 ? 1177977683458023717 : (-2147483647 - 1)))) ? (((((arr_2 [i_1] [i_2] [i_4]) <= (arr_1 [i_0]))))) : (arr_9 [i_0] [i_0] [i_0 - 1] [i_0 + 3] [i_0]))) << (((min(1149523215, (arr_9 [i_0] [i_4] [13] [i_1] [i_0]))) - 1149523173))))) : ((((((((1177977683458023721 ? 1177977683458023717 : (-2147483647 - 1)))) ? (((((arr_2 [i_1] [i_2] [i_4]) <= (arr_1 [i_0]))))) : (arr_9 [i_0] [i_0] [i_0 - 1] [i_0 + 3] [i_0]))) << (((((min(1149523215, (arr_9 [i_0] [i_4] [13] [i_1] [i_0]))) - 1149523173)) - 3611589838)))));
                        arr_13 [i_2] [i_1] [14] [i_2] [i_0] = (arr_9 [i_0] [1] [i_2] [i_2] [i_0]);
                        var_17 = (max(var_17, 3145444080));
                    }
                    var_18 -= (arr_1 [i_1]);
                }
            }
        }
    }
    var_19 = var_14;
    var_20 = (min(var_20, 3145444102));
    var_21 = 18;
    #pragma endscop
}
