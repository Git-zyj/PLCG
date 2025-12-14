/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48856
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48856 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48856
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 1;

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            arr_5 [i_0] = (min(((-(max(2147467264, 5)))), ((min((min(493747474, 11054)), (~var_14))))));
            var_16 = 11051;
        }
        arr_6 [i_0] [i_0] = ((!((max((arr_2 [i_0] [i_0]), var_1)))));
        arr_7 [i_0] = 1073741824;
        var_17 = (((max((min(-11063, var_5)), var_2)) * ((min((20 / 36028797018963967), (arr_1 [i_0]))))));
    }
    var_18 = (max(var_18, (3753770315855152010 || 222)));
    #pragma endscop
}
