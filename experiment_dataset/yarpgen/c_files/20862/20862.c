/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20862
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20862 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20862
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1) /* same iter space */
    {
        var_17 = 0;
        var_18 = (var_0 & 4294967277);
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1) /* same iter space */
    {
        var_19 = (((((-((min(var_4, 15)))))) ? (~9223372036854775807) : (((min(var_15, (arr_4 [i_1])))))));
        var_20 = (((57463965 && 240) ? (min(((max(var_4, 57463959))), (((arr_0 [i_1] [i_1]) ? 57463966 : 2758829797)))) : var_3));
    }
    /* LoopNest 3 */
    for (int i_2 = 3; i_2 < 8;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            for (int i_4 = 4; i_4 < 7;i_4 += 1)
            {
                {
                    arr_15 [i_2] [i_2] [0] = var_9;
                    var_21 = ((~((min(5, 253)))));
                }
            }
        }
    }
    var_22 = (((var_7 ? 57463967 : (min(var_16, 255)))));
    var_23 = var_11;
    var_24 = var_11;
    #pragma endscop
}
