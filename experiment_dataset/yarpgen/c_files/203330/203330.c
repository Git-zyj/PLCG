/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203330
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203330 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203330
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    arr_8 [14] [14] [i_2] = min((arr_5 [i_2] [i_2]), (((!(arr_2 [i_1])))));
                    var_18 = (((((max((max(var_5, var_5)), (!var_14))))) + ((((min(var_13, 2190505604822103238))) ? -1719207247251571675 : (arr_7 [i_0] [i_1])))));
                    arr_9 [i_0] [i_0] [i_0] = (((!1719207247251571675) ^ (((arr_5 [i_1] [i_1]) ? (arr_5 [i_0] [i_0]) : var_0))));
                    arr_10 [i_0] [i_0] = (var_9 == var_16);
                }
            }
        }
    }
    var_19 = 1719207247251571663;

    /* vectorizable */
    for (int i_3 = 1; i_3 < 22;i_3 += 1)
    {
        var_20 &= ((arr_11 [i_3 + 1]) ? 1719207247251571674 : var_12);
        var_21 = (((((-9223372036854775807 - 1) ? var_0 : 64))) ? var_7 : ((-3400429204664494293 ? var_17 : (arr_11 [i_3 - 1]))));
        var_22 = 16224;
    }
    #pragma endscop
}
