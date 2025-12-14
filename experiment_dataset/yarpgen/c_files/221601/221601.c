/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221601
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221601 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221601
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 += ((var_9 - ((min(var_7, 15049022095594434605)))));
    var_19 &= (((var_8 ? (max(15, 1285957584)) : (((789417414497944167 ? -118 : var_2))))) * var_9);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_20 = ((var_14 - ((-(arr_1 [i_0 + 4] [i_0 + 1])))));
                arr_6 [i_1] [i_1] &= min((!var_3), ((25768 ? (arr_1 [i_0 + 1] [i_0 + 2]) : (arr_1 [i_0 + 1] [i_0 + 2]))));
            }
        }
    }
    #pragma endscop
}
