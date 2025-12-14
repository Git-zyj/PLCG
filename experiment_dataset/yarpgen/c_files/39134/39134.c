/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39134
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39134 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39134
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_16;

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        arr_3 [i_0] = 6304655606333628798;
        arr_4 [i_0] = 6304655606333628797;
        var_18 = (min(var_18, (((1236516003293437360 < (32768 * 4294967278))))));
        var_19 = 2047;
        arr_5 [i_0] [i_0] = ((!((min(var_4, (min(-5449527465157396964, var_3)))))));
    }
    var_20 = (((max(var_10, -83)) * -var_14));
    var_21 = (max(34685, var_2));
    #pragma endscop
}
