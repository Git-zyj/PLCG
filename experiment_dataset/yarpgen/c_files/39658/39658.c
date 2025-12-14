/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39658
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39658 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39658
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = (((min((148 * 47387), 18149)) < ((min((arr_2 [i_0 + 1]), var_3)))));
        arr_5 [i_0] = ((((-((min((arr_0 [i_0] [i_0]), 47387)))))) ^ ((0 + (arr_2 [i_0 - 1]))));
        arr_6 [8] [i_0] = (max(((-(!-79))), (((arr_2 [i_0 + 2]) ? (((arr_0 [i_0] [10]) & (arr_0 [i_0] [i_0]))) : 14277))));
        arr_7 [i_0] = (min((((!(50694 | 40681)))), 35671));
    }
    var_20 = var_2;
    var_21 = ((((-((max(var_13, 76))))) % var_15));
    var_22 += ((var_13 < (((min(var_9, 22))))));
    #pragma endscop
}
