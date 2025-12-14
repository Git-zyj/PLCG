/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26920
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26920 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26920
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_12 = ((((min(var_7, -231))) ? (max(-9223372036854775779, (253 == var_11))) : ((((((((arr_2 [i_0]) <= 1))) == -144))))));
                arr_6 [8] [i_1] = ((var_6 ^ ((((max(var_5, var_8))) ? (((arr_1 [i_0] [i_0]) ? -9223372036854775767 : -480916064)) : (((arr_0 [i_0] [i_1]) | var_1))))));
            }
        }
    }
    var_13 = (max(var_13, var_4));
    var_14 = (max(231, var_3));
    /* LoopNest 3 */
    for (int i_2 = 1; i_2 < 18;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 17;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 18;i_4 += 1)
            {
                {
                    var_15 += ((((((((arr_7 [i_2]) & -480916062))) ? (arr_9 [i_2] [i_2]) : (20238 ^ -110))) % ((-(((var_7 != (arr_9 [1] [i_2]))))))));
                    var_16 = (((((((min(215, var_5))) ? var_11 : ((205 ? (arr_11 [i_2] [6] [i_2 - 1]) : -480916064))))) ? ((((-1808308545 == var_11) > ((var_4 ? (-127 - 1) : (arr_7 [i_3 + 2])))))) : var_7));
                }
            }
        }
    }
    #pragma endscop
}
