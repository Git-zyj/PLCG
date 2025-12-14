/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31091
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31091 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31091
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_12 = ((((max(var_6, 18393)))) ? (~57) : (((~((157 ? var_7 : (arr_3 [i_0] [i_1])))))));
                arr_5 [i_1] [i_1] = var_7;
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 2; i_2 < 12;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 13;i_4 += 1)
            {
                {
                    arr_16 [i_2] [i_3] &= ((44 >= ((((((arr_14 [i_3]) ? 161 : 32767))) ? ((var_8 ? var_10 : 56)) : var_10))));
                    var_13 = (max(var_13, (max((var_0 > 32), (((var_0 - var_1) ? ((-(arr_13 [i_3] [i_3] [i_2]))) : -var_7))))));
                    var_14 = (max((arr_8 [i_2 - 2] [i_3] [i_4]), (arr_8 [i_2 - 1] [i_4] [i_4])));
                }
            }
        }
    }
    var_15 = (min(var_15, var_3));
    var_16 = ((-((max(198, 52)))));
    #pragma endscop
}
