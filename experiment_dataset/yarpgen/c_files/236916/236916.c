/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236916
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 *= (((var_6 || var_17) && ((max(120, ((58 ? 245 : 14454)))))));
    var_20 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_4 [i_0 - 1] [5] = (min(((-14441 ? (arr_1 [9] [i_0 - 1]) : (arr_1 [i_0] [i_0 + 1]))), (max((arr_1 [i_0] [i_0 - 1]), (arr_1 [12] [i_0 - 1])))));
                arr_5 [i_0] [i_0] = (((arr_2 [i_0] [i_0]) | (((((!(arr_2 [i_0] [i_0]))) && ((!(arr_3 [17] [0]))))))));
            }
        }
    }
    var_21 += ((((((var_12 / var_16) ? var_6 : var_4))) ? ((min((4286578688 >= -114), ((var_17 ? 14464 : var_11))))) : (max(7748917561197864442, 4095))));
    #pragma endscop
}
