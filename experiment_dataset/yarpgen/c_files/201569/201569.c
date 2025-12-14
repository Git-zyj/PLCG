/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201569
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201569 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201569
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_10;
    var_16 -= (min(var_13, (max(var_11, var_7))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_17 = (max(var_17, (((((-32745 ^ (99 & 716966761))) == (!12087030660288425505))))));

                for (int i_2 = 2; i_2 < 11;i_2 += 1)
                {
                    arr_9 [i_0] |= ((min((~var_11), (arr_6 [i_2 + 2] [i_2 - 2] [i_2 - 2]))));
                    arr_10 [i_2] [i_1] [i_2] = ((!((((arr_6 [i_2 + 2] [i_2 - 1] [i_2 + 2]) ? (arr_8 [i_2 + 2] [i_2 - 1] [i_2 + 2]) : (arr_3 [i_2 + 3] [i_2 + 4] [i_2 - 1]))))));
                }
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    var_18 = var_14;
                    arr_13 [i_1] [i_0] = ((~(~1023)));
                    var_19 = (min(var_19, 7321620152940804974));
                }
            }
        }
    }
    #pragma endscop
}
