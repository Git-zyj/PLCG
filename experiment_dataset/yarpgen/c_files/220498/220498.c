/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220498
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220498 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220498
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 1804337023231410793;

    for (int i_0 = 4; i_0 < 19;i_0 += 1)
    {
        var_21 = (max((((((1 ? var_12 : 1))) ? (~var_15) : var_10)), (((var_10 ? (var_7 / 1804337023231410793) : ((((!(arr_2 [i_0]))))))))));

        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            var_22 = (((--1) ? (((((((min(var_1, var_4)))) < ((253 ? var_14 : (arr_3 [i_0]))))))) : ((-(arr_5 [i_0 - 4])))));
            var_23 |= var_0;
            var_24 = (min(var_24, (max((max(((max(var_1, 2))), (min(var_11, 4005488438233151755)))), var_8))));
        }
        for (int i_2 = 3; i_2 < 19;i_2 += 1)
        {
            arr_8 [i_2] [i_2] = 1804337023231410793;
            var_25 |= ((((((arr_2 [i_0]) ? (arr_2 [i_0 + 1]) : 1))) ? var_12 : (((var_3 + 2147483647) << (((arr_2 [i_0 + 1]) - 36))))));
        }
    }
    for (int i_3 = 0; i_3 < 12;i_3 += 1)
    {
        var_26 |= (((((var_16 > (arr_7 [2])))) >> (var_3 + 110)));
        var_27 = ((((max((arr_1 [i_3]), 1804337023231410776))) ? (max((arr_7 [6]), (arr_1 [i_3]))) : (((!(arr_10 [i_3]))))));
    }
    /* LoopNest 2 */
    for (int i_4 = 2; i_4 < 8;i_4 += 1)
    {
        for (int i_5 = 1; i_5 < 9;i_5 += 1)
        {
            {
                arr_17 [i_4] [i_4] = ((-(arr_9 [i_4 + 3])));
                var_28 = (min(var_28, (((-((((var_6 && var_4) && (((var_3 ? 459265709 : var_10)))))))))));
            }
        }
    }
    var_29 = ((((max((0 - var_17), var_3))) ? 253 : var_19));
    #pragma endscop
}
