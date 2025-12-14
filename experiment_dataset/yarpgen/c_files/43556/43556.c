/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43556
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43556 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43556
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            {
                arr_7 [4] [6] [i_0 + 3] &= ((-var_14 || (arr_0 [6])));
                arr_8 [4] [2] [4] |= (min(((var_4 ? (arr_2 [1]) : 6571484360728322769)), (((!(arr_0 [4]))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 3; i_2 < 20;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 22;i_4 += 1)
            {
                {
                    arr_16 [i_2] [i_3] [i_4] = ((!((((arr_14 [i_2] [i_2] [i_2 + 2] [i_4]) % 6571484360728322779)))));
                    var_16 = var_1;
                    var_17 = 6571484360728322756;
                    var_18 += (((!var_15) ? (((!(arr_12 [i_4])))) : (13114 % 126)));
                }
            }
        }
    }
    #pragma endscop
}
