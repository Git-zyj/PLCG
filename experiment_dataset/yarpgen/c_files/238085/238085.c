/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238085
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238085 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238085
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_10;

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] |= -8005;
        arr_3 [i_0] = ((((max(5, ((5 ? 0 : 5))))) ? var_14 : (~var_10)));
    }

    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        var_16 = (min(var_16, (((-((((-6 ? 11208862106893017525 : 8855845658497737648)) * ((-15997 ? 7237881966816534090 : 7237881966816534090)))))))));
        var_17 = min(65535, 1679661525);
    }
    #pragma endscop
}
