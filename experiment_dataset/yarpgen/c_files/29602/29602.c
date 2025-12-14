/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29602
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29602 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29602
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        arr_4 [i_0] = (arr_3 [i_0 + 1]);
        var_14 = (max(var_14, ((((-127 - 1) ? (arr_3 [i_0 + 2]) : (arr_3 [i_0 + 1]))))));
        arr_5 [i_0] = (arr_3 [i_0 + 2]);
        var_15 = (min(var_15, 103));
    }
    for (int i_1 = 3; i_1 < 11;i_1 += 1)
    {
        var_16 = (min(var_16, ((((3171113606 ? 32767 : ((min(6, (arr_6 [i_1] [i_1]))))))))));
        var_17 = (max(var_17, ((max((arr_6 [i_1 + 2] [i_1 + 4]), ((min((arr_6 [i_1 + 2] [i_1 + 4]), (arr_6 [i_1 + 2] [i_1 + 4])))))))));
    }
    for (int i_2 = 3; i_2 < 10;i_2 += 1)
    {
        arr_10 [i_2] = 128;
        arr_11 [4] = (arr_9 [4] [i_2 + 1]);
    }
    var_18 = ((26911 ? ((max(5, (max(56563, 250))))) : 1));
    #pragma endscop
}
