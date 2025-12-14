/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207033
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207033 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207033
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                {
                    var_20 = (max((arr_6 [i_2] [i_2] [i_2 - 1] [i_2 - 1]), 1));
                    var_21 = (min((((16829283522937296747 ? (arr_0 [i_2 - 1]) : var_19))), ((((15539 ? var_0 : 16368)) * (((104 ? 34894 : (arr_7 [i_0] [4]))))))));
                }
            }
        }
    }
    var_22 = (min(((var_11 ? var_9 : var_8)), ((var_5 ? var_8 : (min(32759, 1471420990))))));
    var_23 = (max((((!var_5) ? -var_3 : var_6)), (min(1, ((var_18 ? 2147483647 : var_0))))));
    #pragma endscop
}
