/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222969
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222969 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222969
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                var_11 &= (((arr_2 [i_1 + 1]) ? (min((arr_2 [i_1 - 1]), (arr_2 [i_1 - 1]))) : (min(198, (arr_2 [i_1 + 1])))));
                arr_6 [i_1] [i_1] [i_1 - 1] = (min((((var_3 / (arr_3 [i_0] [i_0])))), ((var_5 ? var_0 : (arr_0 [i_1 + 1] [i_1])))));
            }
        }
    }
    var_12 = (((((55 ? var_0 : (!var_1)))) ? ((~((min(3620, 198))))) : -var_3));
    var_13 = var_4;
    /* LoopNest 3 */
    for (int i_2 = 1; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 22;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 22;i_4 += 1)
            {
                {
                    var_14 = ((~(var_3 & var_9)));
                    arr_13 [i_3] [i_3] = 6611464457981525492;
                    var_15 = (min(var_15, (((((var_4 != (arr_11 [i_3 + 1] [2] [i_3 - 1]))) ? ((min((arr_11 [i_2 - 1] [0] [i_4]), (arr_9 [16])))) : (((((126 ? 249 : var_0))) ? ((((arr_11 [i_4] [8] [4]) ? 204 : var_2))) : (max((-32767 - 1), var_4)))))))));
                }
            }
        }
    }
    #pragma endscop
}
