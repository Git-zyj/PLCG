/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231396
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231396 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231396
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 |= var_8;
    var_18 = var_10;
    var_19 = 1;
    var_20 = (((((min(var_8, var_9)) / var_5)) <= -7357364157520558970));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            {
                arr_8 [i_0] [i_1] = ((~((~((max((arr_0 [i_0] [i_1]), (arr_7 [i_0] [i_0]))))))));
                arr_9 [i_0] [i_1] [i_0] = (((arr_6 [3] [i_1 + 1] [i_1 + 3]) ? (((arr_6 [i_1] [i_1 + 1] [i_1 - 3]) ? 198 : (arr_6 [i_1 - 1] [i_1 - 1] [i_1 + 3]))) : (((var_3 ? (arr_0 [i_1 - 1] [i_1 - 3]) : 122)))));
                arr_10 [9] [i_1 + 2] = (max(((((((var_0 + 2147483647) >> (((arr_2 [i_0]) - 64883))))) / (~-7357364157520558965))), 44476));
                var_21 *= (min((arr_7 [i_0] [i_1]), (min(var_6, ((max(var_7, (arr_5 [i_1] [i_0] [i_0]))))))));
            }
        }
    }
    #pragma endscop
}
