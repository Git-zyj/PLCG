/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216911
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216911 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216911
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min((min(10687305325409408267, ((min(1, 255))))), ((max(1, (min(5, 101)))))));
    var_16 = (min(((min(2467170, 128))), (min(((min(0, 108))), 1711578939))));
    var_17 = (min(-24, 32757));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_18 = (max((max((min(-6267466624183647780, 3492)), ((max(1, 1273075028))))), 147));
        var_19 = min((max((min(1, 4)), 18)), 1);
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        var_20 &= (max((max((max(1, 7759438748300143346)), ((min(115, 16))))), 20249));
        var_21 = (max(((min(-7228, ((min(-50, 0)))))), (max(22721630499856331, 423336261617065517))));
    }
    #pragma endscop
}
