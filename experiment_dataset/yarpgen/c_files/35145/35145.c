/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35145
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35145 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35145
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_18 *= ((24206 ? (min(192685223, 24226)) : ((min((arr_1 [i_0]), (-9223372036854775807 - 1))))));
        arr_2 [9] |= (arr_0 [11]);
        var_19 += ((((((arr_1 [i_0]) ? (arr_1 [i_0]) : 73))) == 1));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        var_20 *= (min(((10693192737876246241 ? (((arr_4 [i_1]) ? 59215 : (-9223372036854775807 - 1))) : (min(9223372036854775807, 256)))), 2010493726));
        var_21 = (min(var_21, (((((min(-9223372036854775807, 4294967291)))) ? 248 : ((max((arr_4 [i_1]), 42480)))))));
    }
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        /* LoopNest 3 */
        for (int i_3 = 1; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 23;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 23;i_5 += 1)
                {
                    {
                        var_22 = (((arr_12 [i_5]) ? 1 : (arr_11 [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3 - 1])));
                        var_23 = (min(var_23, ((max(((((arr_10 [i_3 - 1]) || 24242))), 0)))));
                    }
                }
            }
        }
        var_24 = 1;
    }
    var_25 = (min(var_25, ((max(((var_0 - ((1 ? 41295 : 31)))), 156)))));
    var_26 = var_8;
    #pragma endscop
}
