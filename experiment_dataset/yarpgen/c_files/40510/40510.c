/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40510
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40510 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40510
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (1 <= var_15);
    var_17 = (max(var_17, var_3));

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        var_18 = 124;
        var_19 = ((260096 != (min(65535, 260096))));
        var_20 = (max(var_20, 260096));
        var_21 = (((((max(-11, 260105)) >= (4294707211 > -10))) ? 8 : (((-14078 || 12344910455716155214) ? ((1342372183 ? 794666706 : 3349006587)) : (max((arr_0 [i_0] [i_0]), (arr_1 [i_0])))))));
    }
    var_22 &= -6875481097433075103;
    #pragma endscop
}
