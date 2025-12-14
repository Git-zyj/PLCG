/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49747
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49747 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49747
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        var_10 = ((var_0 ? (((arr_1 [i_0]) ? (~var_8) : ((var_5 * (arr_1 [i_0]))))) : (((-(arr_1 [i_0]))))));
        var_11 = (!3803633682);
    }
    /* LoopNest 2 */
    for (int i_1 = 2; i_1 < 15;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            {
                arr_8 [11] = (((-17207 || -716068168) + (((arr_7 [i_1 - 2] [i_1 + 1] [i_1 + 1]) | (arr_7 [i_1 - 2] [i_1 + 1] [i_1 + 1])))));
                var_12 = ((!(((-((-(arr_2 [i_1]))))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 20;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 17;i_5 += 1)
            {
                {
                    var_13 *= ((-17207 ? ((-((214 ? 27 : 1)))) : 229));
                    var_14 = (min(var_14, (((((((arr_16 [18]) ? (arr_12 [i_3]) : ((24 ? -28886 : 214))))) | (((((-(arr_15 [i_3] [i_5 + 3] [i_5 + 1] [i_5])))) ? (((arr_10 [6]) ? var_5 : (arr_16 [16]))) : (arr_15 [i_5 - 1] [i_5 + 1] [i_5 + 3] [i_3]))))))));
                    var_15 += ((!(!448918520)));
                }
            }
        }
    }
    var_16 = (max(var_16, (!var_2)));
    #pragma endscop
}
