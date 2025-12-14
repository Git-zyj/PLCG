/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226569
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226569 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226569
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((-(min(var_3, (min(var_4, var_2))))));
    var_13 = (((((~((18431 ? 16338387444527505284 : var_10))))) || 44));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    var_14 = (((var_1 / 18415) * (((arr_3 [i_1] [i_0 - 4]) / var_3))));
                    arr_7 [i_0] [i_1] [i_2] = var_11;
                }
                arr_8 [i_1] [i_1] = (((((min(10114, 4095)))) ^ ((var_5 ? (((arr_2 [i_0]) ? (arr_4 [i_0] [i_1] [9]) : (arr_4 [i_0] [i_0] [i_1]))) : (((var_2 ? var_2 : 18431)))))));
                arr_9 [i_1] [i_1] [i_0] = (min(-32759, (((max(4294967295, 1)) - (((arr_2 [i_1]) ? 247 : (arr_4 [i_0] [i_0] [i_0])))))));
            }
        }
    }
    #pragma endscop
}
