/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226940
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226940 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226940
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 |= var_2;
    var_17 = 30881;
    var_18 &= (max((var_1 && var_11), var_0));
    var_19 |= (((((-7101 ? var_6 : (min(-31344, 384115399))))) & var_4));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            {
                arr_5 [9] [9] [i_1] = ((((8450 ? 4764237 : 18002323681251462255)) != (!6468)));
                var_20 = 36028797018439680;
                arr_6 [i_0] [6] [i_1] &= ((((max((arr_3 [i_1 + 1] [8] [1]), (arr_3 [i_1 - 2] [i_1 - 2] [i_0])))) ? ((min(-92, -400348681))) : (max(4168247356296598123, (arr_3 [i_1 + 1] [i_1] [i_0])))));
                var_21 &= (arr_4 [i_1 - 2] [i_1 - 3]);
                arr_7 [i_0] [8] [8] |= 19731;
            }
        }
    }
    #pragma endscop
}
