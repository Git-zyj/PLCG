/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231998
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 1140454092;
    var_12 = ((var_3 ? var_3 : ((((var_5 < var_3) ? var_0 : (!var_9))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_13 *= (((!(arr_0 [i_0 - 1]))));
                arr_7 [5] = (max((max(3986845336, 14411772683628023565)), 7803));
                var_14 |= (max(-var_0, (arr_5 [i_0 + 1])));
                arr_8 [i_0] [11] [i_1] = (min((arr_2 [i_0] [i_1]), var_4));
            }
        }
    }
    var_15 = 8070450532247928832;
    #pragma endscop
}
