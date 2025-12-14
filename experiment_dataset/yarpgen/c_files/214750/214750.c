/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214750
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214750 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214750
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_12 = (min((arr_0 [i_0]), ((((arr_2 [i_1]) ? var_5 : ((((arr_1 [i_1] [i_2]) + var_10))))))));
                    var_13 = ((-((((((arr_1 [i_0] [i_2]) ? var_7 : (arr_5 [i_1] [i_1] [i_1] [i_2])))) ? (arr_2 [i_0]) : var_2))));
                    var_14 = (max(((((min(14785, -20427))) ? 10544878 : 14785)), (max((((arr_1 [i_0] [i_1]) - var_3)), ((~(arr_2 [i_0])))))));
                    arr_8 [i_1] [i_1] [i_0] [i_0] &= max(((((max((arr_5 [i_0] [i_0] [i_1] [i_0]), (arr_6 [i_0] [i_0])))) ? (((arr_5 [i_0] [i_1] [i_2] [i_2]) ? var_4 : var_2)) : -13048)), ((((min((arr_7 [i_0]), var_0))) + ((var_11 ? (arr_1 [i_0] [i_0]) : var_3)))));
                }
            }
        }
    }
    var_15 -= var_11;
    var_16 = ((((!(((var_4 ? var_0 : var_9))))) ? var_2 : var_3));
    #pragma endscop
}
