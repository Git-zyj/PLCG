/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191001
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191001 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191001
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((((110 ? 1 : -var_7))) < ((var_10 ? var_13 : (((var_4 ? var_16 : -12)))))));
    var_20 = (((((((51079 ? 110 : 122)) * (var_5 <= var_12)))) ? 16213952636876826923 : (var_9 || var_4)));

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] = -6452645256953954578;
        arr_3 [2] = var_10;
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        arr_6 [i_1] [i_1] = var_6;
        arr_7 [i_1] = (!31);
    }
    #pragma endscop
}
