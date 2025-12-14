/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193164
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193164 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193164
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((!(!var_4)));
        var_10 = ((+(((((arr_1 [i_0]) != (arr_0 [i_0]))) ? var_1 : (max(var_7, var_4))))));
        var_11 = ((max((arr_1 [i_0 + 1]), ((max(-596299078, (arr_0 [1])))))));
    }
    var_12 = ((((min((!-596299078), -var_2))) ? var_0 : -596299070));
    var_13 = (max(var_7, var_9));
    #pragma endscop
}
