/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243078
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243078 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243078
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_18 = (min((((!(!3381372040)))), (max(var_4, (!9015956743234401476)))));
                var_19 = ((((min(var_9, (arr_1 [i_0 - 3])))) ? (((var_12 || (arr_1 [i_0 - 3])))) : ((max(54, (arr_1 [i_1]))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            {
                var_20 = (min((max(-var_15, (arr_9 [6] [i_3]))), (((!(65520 | var_0))))));
                var_21 ^= (!205);
                var_22 = ((var_15 ? (((((arr_10 [17] [17] [i_3]) <= var_17)))) : var_17));
            }
        }
    }
    #pragma endscop
}
