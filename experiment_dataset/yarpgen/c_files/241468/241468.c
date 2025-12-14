/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241468
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241468 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241468
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((54 || (((var_13 ? 54 : -12895))))));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_15 = (((((arr_1 [i_0]) | (-12890 & 17710465963935182707))) & 3586387972521257616));
        var_16 = (arr_0 [i_0]);
    }
    for (int i_1 = 4; i_1 < 17;i_1 += 1)
    {
        var_17 = (((arr_4 [i_1]) || (((((~(arr_5 [i_1]))) << (6775902095396901733 - 6775902095396901733))))));
        var_18 = (!((min(736278109774368908, (arr_4 [i_1 - 2])))));
        var_19 = (((arr_2 [i_1 - 1] [i_1 + 1]) ? ((((arr_2 [i_1 - 3] [i_1 + 2]) / (arr_2 [i_1 - 3] [i_1 - 3])))) : 5211221294733352504));
    }
    var_20 = (var_0 << var_12);
    #pragma endscop
}
