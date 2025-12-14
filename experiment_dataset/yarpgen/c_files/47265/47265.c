/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47265
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47265 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47265
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_12 = (arr_4 [i_1] [i_0]);
                var_13 = (min(var_13, ((min(4, (arr_0 [i_1]))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 21;i_4 += 1)
            {
                {
                    var_14 += (arr_8 [i_2]);
                    arr_13 [i_4 - 1] [i_4] [1] [i_2] = (((arr_12 [i_3] [i_3] [i_4 - 1] [15]) + -8251037839547802669));
                    var_15 *= (arr_6 [i_2]);
                    var_16 = 43704;
                    var_17 = ((min(var_2, (arr_10 [i_3] [i_3] [i_4 + 1]))));
                }
            }
        }
    }
    var_18 = (~var_7);
    var_19 *= ((((((5 < 25173) << (((96 * var_4) - 5753664699975311123))))) ? 0 : 3));
    #pragma endscop
}
