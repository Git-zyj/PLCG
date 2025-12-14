/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211382
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211382 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211382
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            {
                var_11 = (((((((62185 == (arr_1 [i_1]))) ? (arr_3 [i_1]) : ((59690 ? var_0 : 59708))))) ? (((arr_0 [i_0] [i_1 - 1]) ? var_8 : 59708)) : (arr_0 [i_0] [i_0])));
                var_12 ^= (min(((((((arr_5 [i_0]) | 59690))) ? (arr_4 [i_1 + 1] [i_1 - 1]) : (((arr_3 [i_0]) ? 59676 : var_8)))), 5845));
            }
        }
    }
    var_13 = var_6;

    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 19;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 22;i_4 += 1)
            {
                {
                    arr_13 [i_2] = (((max((arr_0 [i_2] [i_4]), (arr_0 [i_2] [i_3 + 1]))) ? ((-(arr_0 [i_2] [i_2]))) : (arr_0 [i_2] [i_3 + 3])));
                    var_14 = (min(var_14, var_5));
                }
            }
        }
        arr_14 [i_2] [i_2] = 59708;
        var_15 = (min((arr_11 [i_2] [i_2]), -102));
        var_16 = (max(var_16, ((max(5834, 88)))));
        var_17 &= 232;
    }
    for (int i_5 = 0; i_5 < 15;i_5 += 1)
    {
        var_18 = (max(var_18, (+-79)));
        var_19 = (min((arr_4 [i_5] [i_5]), -947432310));
        var_20 = (arr_2 [i_5] [i_5]);
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 13;i_6 += 1)
    {
        var_21 = (((((5773340044111176605 ? 106111182 : (arr_6 [i_6])))) ? (arr_11 [14] [14]) : ((var_6 ? 48687 : -91))));
        arr_19 [i_6] = ((((((arr_2 [i_6] [i_6]) ? -17230 : (arr_4 [i_6] [i_6])))) == 17479160810223589227));
    }
    #pragma endscop
}
