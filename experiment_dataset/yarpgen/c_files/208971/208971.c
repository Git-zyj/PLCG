/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208971
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208971 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208971
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_3 [i_0] = ((((((var_0 ? var_13 : 4294967295))) ? (!1) : (~var_2))));
        arr_4 [2] = (((((~(arr_1 [i_0])))) ? (((!(arr_1 [i_0])))) : (max(3586, 2147483647))));
    }
    for (int i_1 = 2; i_1 < 14;i_1 += 1)
    {
        var_14 = ((((min((~4426279257393034020), (~2145126614)))) ? (max((((arr_7 [i_1] [i_1]) ? 3604 : 4122187295)), (((61950 ? 64 : 2))))) : (~var_0)));
        var_15 *= ((!(((((max(1, 32758))) ? 1 : (max(32735, -765203668)))))));
        arr_9 [i_1] = ((~(min((((!(arr_6 [i_1 - 1] [i_1 - 2])))), -183))));
        arr_10 [i_1] = (((min((min(var_13, var_13), var_13)))));
    }
    var_16 = (max((max(((1 ? 4 : 37303)), var_10)), (max(((var_13 ? 252 : var_4)), var_4))));
    #pragma endscop
}
