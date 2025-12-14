/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198906
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198906 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198906
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_2 [4] [i_0] = (((max(112, (arr_0 [i_0])))));
        arr_3 [i_0] [i_0] = (((arr_1 [i_0]) ? ((max((arr_1 [19]), (arr_1 [i_0])))) : (~var_4)));
        var_11 = (((arr_0 [i_0]) << (((arr_0 [13]) ? (arr_1 [i_0]) : 16242319941589654082))));
        arr_4 [i_0] = -123;
    }
    var_12 &= ((((min((!var_7), (min(819366212, 4194303))))) ? var_8 : var_6));
    #pragma endscop
}
