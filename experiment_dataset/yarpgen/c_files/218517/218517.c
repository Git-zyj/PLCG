/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218517
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218517 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218517
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        arr_2 [5] [1] = ((((((-36 ? 10198945154778973781 : 4294967293))) ? -1 : ((max(1, 20))))));
        var_19 = (max(var_19, ((1 ? ((((max(var_2, 1))) ? ((-1 ? -1 : -448147678633563743)) : (!1))) : (((min((arr_1 [i_0 + 1]), (max(230, 232))))))))));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        var_20 |= ((~((64 ? (arr_1 [i_1]) : (arr_1 [i_1])))));
        var_21 -= ((((((max(var_5, var_18)) | -1904765583340490354))) ? ((30902 ? 8910866770801388010 : 4276665279977911862)) : (max((max(var_7, 16275278765800471699)), ((max(1, 12)))))));
        arr_5 [i_1] &= var_11;
    }
    var_22 = 3845;
    var_23 &= var_4;
    #pragma endscop
}
