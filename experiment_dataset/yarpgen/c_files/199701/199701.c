/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199701
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199701 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199701
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        var_10 ^= (((arr_0 [i_0] [i_0]) & var_5));
        var_11 = (max(var_11, ((((arr_0 [i_0 + 1] [i_0 + 1]) ? (arr_0 [i_0 - 1] [i_0 - 1]) : (((arr_0 [i_0 + 1] [i_0 - 1]) << (var_0 - 7925157582118618330))))))));
        var_12 = (max(var_12, (arr_0 [i_0] [i_0])));
    }
    var_13 = (max(var_2, ((((3943090811 ? var_2 : var_2))))));
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            {
                var_14 = (((((min((arr_2 [1]), var_6))) ? (var_7 | var_4) : 0)));
                var_15 = (((1 == 0) - var_6));
                arr_6 [i_1] [i_1] [i_1] = ((min(1468842005, 4294967295)));
                var_16 = 42537;
            }
        }
    }
    var_17 = -3221046914237534284;
    #pragma endscop
}
