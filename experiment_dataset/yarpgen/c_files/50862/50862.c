/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50862
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50862 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50862
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_16 += ((((max(var_11, var_11)) << (((~var_5) - 4608630455135494907)))));
        var_17 ^= 44504;
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        var_18 = var_4;
        var_19 = ((((max((max(3130596259, 63)), (21032 - 435458744)))) ? (((((var_8 ? var_6 : 51451))) ? (max(10323837491216669256, 1634095491)) : (~var_6))) : (((max(12487413122915274, var_14)) / (max(10068802723011615164, var_12))))));
        var_20 = max(44509, (max(520123311, 12701738412870894565)));
    }
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        var_21 = 4258062432;
        var_22 = (((((-(var_4 || 91)))) || (((max(38251, var_8))))));
    }
    var_23 = ((((var_1 ? var_11 : ((max(var_12, var_3))))) <= ((((!((max(var_15, var_10)))))))));
    var_24 = (((3928500205392160025 && 78) && var_2));
    #pragma endscop
}
