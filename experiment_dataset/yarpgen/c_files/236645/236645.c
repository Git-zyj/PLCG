/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236645
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236645 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236645
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((((-24316 / 2147418112) + var_7))) || ((((min(4294967295, var_2)) - 224)))));
    var_19 = (max(var_19, ((max((22099 | var_0), ((max((~43438), var_16))))))));

    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        var_20 = (min(var_20, (((3915514856855773430 ? ((1 + (arr_1 [8]))) : ((max((arr_1 [14]), (arr_1 [14])))))))));
        var_21 = ((var_10 ? ((~(((arr_1 [i_0]) ? (arr_0 [i_0 + 1]) : (-32767 - 1))))) : var_1));
        var_22 = ((1161928098 / 3788) * 733961027);
        var_23 = (((var_3 ^ var_14) | (~var_3)));
    }
    #pragma endscop
}
