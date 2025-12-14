/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24237
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24237 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24237
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        var_12 -= ((max((((var_2 ? var_4 : var_0)), ((var_9 ? (arr_0 [i_0 + 2]) : var_11))))));
        var_13 |= ((-((var_3 ? var_10 : var_5))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 13;i_3 += 1)
                {
                    {
                        var_14 += (arr_5 [i_3] [i_1] [i_1]);
                        arr_11 [i_3] [i_0] [i_3] [i_1] [i_2] [i_3 + 1] = (((((-var_6 ? 22252 : ((min(var_0, var_3)))))) ? (((22251 ? 22232 : (144 > 149)))) : -var_8));
                    }
                }
            }
        }
        arr_12 [i_0] = (min((arr_5 [9] [i_0 + 3] [i_0 + 3]), (!29014)));
    }
    for (int i_4 = 0; i_4 < 18;i_4 += 1)
    {
        arr_17 [15] = min(((!(arr_16 [i_4]))), (arr_16 [i_4]));
        /* LoopNest 2 */
        for (int i_5 = 1; i_5 < 15;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                {
                    var_15 ^= (((var_3 << (arr_15 [i_6]))));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 18;i_7 += 1)
                    {
                        for (int i_8 = 2; i_8 < 15;i_8 += 1)
                        {
                            {
                                var_16 ^= (max(((((max(var_4, var_4))) ? (((~(arr_23 [i_8] [i_5] [i_5] [i_7])))) : ((var_5 ? var_8 : var_9)))), (((min(var_3, var_10))))));
                                arr_30 [i_6] = var_7;
                            }
                        }
                    }
                    var_17 = (max(var_17, ((max(((max((arr_22 [i_5 + 3] [i_5 + 3] [i_5 + 2] [i_4]), var_8))), var_5)))));
                }
            }
        }
    }
    var_18 &= ((((!(((var_9 ? var_7 : var_5)))))));
    #pragma endscop
}
