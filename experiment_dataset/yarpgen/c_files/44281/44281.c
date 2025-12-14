/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44281
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44281 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44281
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (491620490 ? -619319531 : 13402);
    var_16 = (max(var_16, ((((-32158 ? var_13 : var_3))))));

    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        var_17 = (max(var_17, (max(((((min(-18104, 305359328192882138))) ? (!1865519412) : (arr_2 [i_0 - 2]))), ((~(((arr_0 [i_0]) ? (arr_0 [i_0 - 1]) : (arr_0 [i_0])))))))));
        var_18 += max((arr_0 [i_0 - 1]), -15721);
    }
    var_19 = -var_10;
    #pragma endscop
}
