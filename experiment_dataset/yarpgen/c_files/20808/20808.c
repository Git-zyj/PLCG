/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20808
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20808 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20808
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((((-((32762 ? var_5 : var_16))))) ? (8109899580697339598 || 8) : ((-(min(52556, 2116870927))))));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_3 [i_0] = (~12980);
        arr_4 [i_0] [i_0] &= (min(((min(52547, 2016))), ((((min(var_12, (arr_1 [19])))) ? (-9697 & 4201246463) : 1348106669))));
    }
    var_19 = ((58 ? ((((((var_15 ? 3217086362093557594 : 71))) || (!var_6)))) : var_16));
    var_20 = var_3;
    #pragma endscop
}
