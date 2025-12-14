/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34594
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34594 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34594
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_0] [i_0] = (max((((arr_1 [i_1]) ? 3 : (((!(arr_6 [i_1])))))), 19));
                arr_8 [i_0] = ((((((var_10 + 2147483647) << (((max(116, 17128382659907531891)) - 17128382659907531891))))) ? var_12 : -20));
                arr_9 [6] [i_1] = ((((min(((39880 ? (arr_4 [i_0] [i_0]) : 16161)), 1))) ? var_8 : (((((var_3 ? (arr_2 [i_1]) : (arr_2 [i_0])))) ? -28891 : -25850))));
            }
        }
    }
    var_17 = 0;
    var_18 = ((((-(1774027897 / var_10))) & (((17994 + var_8) ? (~1) : ((max(var_10, 35671)))))));
    #pragma endscop
}
