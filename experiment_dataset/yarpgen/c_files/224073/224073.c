/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224073
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224073 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224073
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, (((~((((max(var_4, 1925251507))) ? 168 : ((var_2 << (var_2 - 3521371622610740051))))))))));
    var_17 = 2369715798;

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_18 = ((!var_6) * 1);
        var_19 = ((-1136030030 ? (-92 * 2369715801) : (((-(arr_1 [i_0]))))));
        arr_2 [i_0] = 281536064;
    }
    var_20 = (~var_0);
    #pragma endscop
}
