/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242557
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242557 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242557
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 &= var_8;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_17 -= (((((arr_0 [i_1] [i_2]) ? (arr_3 [i_0] [i_0]) : (arr_0 [i_0] [i_0]))) == (max((~var_6), (((arr_3 [i_0] [22]) / 25029))))));
                    arr_7 [i_0] [i_1] [13] [i_2] = ((((max((((arr_4 [22] [i_1] [i_2]) ? (arr_0 [i_1] [i_2]) : 4)), ((1648985577 & (arr_2 [24])))))) ? (((arr_0 [i_0] [i_1]) ? (arr_1 [i_0]) : (arr_1 [i_1]))) : (arr_0 [22] [i_2])));
                }
            }
        }
    }
    var_18 += (((~var_5) ? ((((var_10 ^ var_11) < (max(var_15, -4381106482971483666))))) : (max(var_13, var_11))));
    #pragma endscop
}
