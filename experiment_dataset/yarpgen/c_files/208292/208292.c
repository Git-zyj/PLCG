/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208292
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208292 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208292
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((((14688792984329658480 ? var_4 : var_7)))) ? ((min(1, (~var_11)))) : ((var_14 ? var_10 : var_8)));
    var_16 = ((((min(var_5, (var_5 * var_3)))) ? (min((((var_12 ? 12427 : 2))), var_4)) : ((min(var_9, var_9)))));

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_17 = (~var_7);
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 20;i_3 += 1)
                {
                    {
                        arr_12 [i_0] [17] [i_2] [i_0] [9] [i_0] = var_3;

                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            var_18 = (~4294967275);
                            arr_17 [i_0] = (max(((var_13 ? -var_2 : (!var_10))), ((2581644123 ? 1 : (arr_15 [i_0] [i_0] [i_0] [i_0] [i_0 - 1] [i_1] [i_2])))));
                            var_19 *= ((min(3114889896, var_14)));
                            arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] = var_9;
                        }
                        arr_19 [i_1] [i_0] [i_3] = (max((!2581644123), ((~(max(var_9, var_7))))));
                    }
                }
            }
        }
        var_20 ^= ((3757951089379893135 ? (min((((arr_0 [2]) ? 15169643815964094693 : (arr_2 [16]))), 1)) : (((~(min(var_10, var_13)))))));
    }
    var_21 -= var_11;
    #pragma endscop
}
