/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38360
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38360 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38360
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1) /* same iter space */
    {
        var_12 = 1;
        var_13 = ((~((((~1412) || ((((arr_2 [i_0]) << (31 - 29)))))))));
        var_14 = ((~(((4087789315351634180 || (arr_1 [i_0]))))));
        var_15 = ((arr_0 [i_0]) <= ((-((var_4 ? (arr_0 [i_0]) : var_7)))));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1) /* same iter space */
    {
        var_16 = 1123740825718097157;
        var_17 = ((((~(arr_4 [i_1]))) > ((((((arr_2 [i_1]) >> 1))) ? ((var_10 ? var_9 : var_8)) : 0))));
    }
    var_18 = var_11;
    /* LoopNest 2 */
    for (int i_2 = 4; i_2 < 9;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            {
                var_19 ^= ((((36032 ? (~63) : (((arr_2 [i_2 + 1]) ? var_1 : var_3)))) > (arr_3 [i_2])));
                var_20 = (((((~(arr_2 [i_2 - 2])))) ? (((257954038 && (var_0 && var_11)))) : (~var_9)));
            }
        }
    }
    #pragma endscop
}
