/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26667
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26667 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26667
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 7;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        var_18 |= (arr_7 [i_0]);
                        arr_9 [i_0] [i_1] [i_2] [i_3] = ((!((max(247, 4682269459292136532)))));
                        var_19 = ((((max(((281474976710655 ? 281474976710655 : (arr_7 [i_0]))), (arr_5 [i_1 + 3] [i_1 - 3])))) ? ((min((arr_1 [i_1]), 1291928772))) : ((max(((57666 ? (arr_6 [i_3]) : var_8)), -281474976710656)))));
                    }
                    arr_10 [2] [i_1] [i_0] [i_0] = (min(0, (0 || 1)));
                    var_20 ^= (max(-18182929, var_14));
                    var_21 = (min(var_7, (min((arr_3 [i_0] [i_1 + 4]), (max((arr_4 [1]), (arr_2 [i_0] [i_0] [i_0])))))));
                }
            }
        }
    }
    var_22 = (!var_5);
    var_23 -= (!247);
    var_24 = (!var_13);
    #pragma endscop
}
