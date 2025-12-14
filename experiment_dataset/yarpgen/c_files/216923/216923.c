/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216923
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216923 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216923
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_13 = (((arr_3 [i_0 + 1]) + ((10179256763579181825 & (arr_1 [i_1] [i_0])))));
                var_14 = (((arr_0 [i_0 - 2]) ? ((14028750563425752194 & (arr_2 [i_1] [20] [i_0]))) : (((~((var_1 ? var_12 : (arr_0 [i_1]))))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 24;i_4 += 1)
            {
                {
                    var_15 = ((var_7 ? (((arr_7 [i_2]) << (((((arr_4 [i_2]) ? var_9 : (arr_8 [i_2] [i_3]))) + 14420)))) : ((((-1 ? 4417993510283799420 : 7936))))));
                    var_16 = (((((55 << (109 - 96)))) ? 18398188 : (((((arr_10 [i_2] [i_2] [i_4] [i_4]) == (arr_10 [i_2] [i_3] [i_4] [i_4])))))));
                    var_17 = ((~((-((-6760418883756595760 | (arr_9 [i_3] [i_2] [i_2])))))));
                }
            }
        }
    }
    var_18 = (max(((((-19539 ? -2147483634 : -7936)))), 13908755187022880472));
    #pragma endscop
}
