/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209990
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209990 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209990
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_16 += 255;
        var_17 = ((((224 << ((((min(255, var_8))) - 54)))) < 724420880));
        var_18 = 590924060;
        var_19 = 255;
    }
    var_20 = (max(var_20, ((((((((max(var_2, var_14))) ? (!43816) : (var_8 >= 1427375706)))) ? 0 : var_8)))));
    var_21 = (((((min(var_4, 1)) / 30991)) / (max(-65293, (min(var_5, var_12))))));
    #pragma endscop
}
