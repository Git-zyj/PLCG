/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21891
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21891 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21891
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (~-9223372036854775787);

    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        arr_4 [i_0] [i_0 - 1] = (max((((arr_2 [i_0 - 2]) ? 6343542877699174766 : (arr_2 [i_0 - 2]))), ((min((arr_2 [i_0 + 2]), (arr_2 [i_0 - 1]))))));
        var_20 *= (arr_2 [i_0]);
        arr_5 [i_0] [i_0] = min((max(232, -23)), 23);
    }
    #pragma endscop
}
