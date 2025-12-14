/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239995
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239995 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239995
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_5;
    var_12 += var_2;

    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        var_13 = (max(var_13, ((min(4294967295, 11318231756390711680)))));
        var_14 *= (min((((1048512 ? (arr_1 [i_0]) : 0))), (((((-1958360339 ? (arr_0 [23] [23]) : 3505865163789423037)) == (2796717014 <= -9919))))));

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 4; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    {
                        var_15 = ((((min(1498250281, var_9))) - 134217216));
                        var_16 *= 2796717014;
                    }
                }
            }
            var_17 = ((-9925 ? 115 : (((-((8159818797149335027 ? 9907 : (arr_2 [23] [i_0]))))))));
            var_18 += (((min(9693563834998176183, 2796717014)) >> var_3));
        }
    }
    #pragma endscop
}
