/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220037
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220037 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220037
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_17 = ((194 ? ((1 ? (arr_2 [i_2]) : ((((-2147483647 - 1) && 20524))))) : (((-2147483647 - 1) & (max(20520, 132919981))))));
                    arr_10 [i_0] = ((max(1, 32748)));
                    var_18 = ((((max(((((arr_5 [i_0] [i_1]) ? (arr_6 [i_0] [i_0] [i_0]) : 62))), ((var_15 ? var_9 : (arr_9 [i_0] [i_2])))))) ? (((var_13 - 189) ? (var_5 - var_11) : var_3)) : (arr_7 [i_2] [10] [7] [i_0])));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 23;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 23;i_4 += 1)
        {
            {
                var_19 = (~var_6);
                var_20 = (max(var_20, ((min((arr_14 [i_3] [i_4]), (arr_13 [i_4]))))));
                var_21 = (max(var_21, (((1 ? ((((!((((arr_14 [i_4] [i_3]) ? var_11 : (arr_14 [i_4] [14])))))))) : (((((109 ? 1 : (arr_11 [i_3] [i_3])))) ? (-127 - 1) : 14683036003626997631)))))));
            }
        }
    }
    var_22 |= (!var_6);
    #pragma endscop
}
