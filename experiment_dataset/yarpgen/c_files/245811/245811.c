/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245811
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245811 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245811
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_18 = 1447290141475854189;
        var_19 = (max(var_19, ((((var_1 != var_9) ? (arr_1 [i_0]) : var_7)))));
    }
    /* LoopNest 3 */
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                {
                    var_20 = ((((((var_1 ? var_1 : (arr_6 [i_3] [i_3] [i_2] [i_1]))) >= ((var_8 ? 1 : var_9)))) ? var_4 : (((var_2 ? (max((arr_4 [i_1] [i_1]), 666388615)) : ((((!(arr_6 [i_1] [i_1] [i_2] [i_3]))))))))));
                    arr_8 [i_1] [i_1] [i_1] = min(((-(arr_7 [i_3] [0] [i_3] [i_3]))), ((((2403803902448476144 < var_11) > ((((arr_6 [i_1] [i_3] [13] [i_3]) < -3)))))));
                }
            }
        }
    }
    #pragma endscop
}
