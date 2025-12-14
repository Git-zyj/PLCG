/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191823
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191823 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191823
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((-(((-11416110419696695025 >= ((min(24481365, 24))))))));
    var_16 = (min(((((7761 % 8915) && ((max(65535, 32768)))))), 246169175));
    var_17 = ((-(max((max(246169186, 4048798114)), (!246169190)))));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_18 = (max(var_18, -90));
        var_19 = ((((min(-6492, ((max(1, 64786)))))) + ((-7 / (min(4048798092, 144115188075855871))))));
    }
    var_20 = (((max((252 != 1154), (min(9, 134217216)))) * ((241 % (134217216 | 19458)))));
    #pragma endscop
}
