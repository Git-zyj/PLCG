/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202513
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202513 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202513
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((((-610867060 ? var_3 : var_2))) ? -322275140 : 7130556765232635165)));
    var_18 = (var_13 - var_9);
    var_19 -= var_10;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] = var_10;
        var_20 = var_14;
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        var_21 = (min(var_21, ((var_12 ? (4673303805167528881 + 56) : -5768385996981854197))));

        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            var_22 = (-1989177805 ? (min((min(-2525135817717806621, var_5)), (((33263046 ? var_11 : var_3))))) : 4161879564);
            var_23 = (min(var_8, (min(var_6, (((var_11 ? var_0 : -18459)))))));
            var_24 = (max(var_24, ((-(((8891038052620925815 / -4689524750627836709) ? (1625317209546279804 / 1625317209546279804) : ((min(1139197739, -76)))))))));
        }
        var_25 -= (min(((-((var_0 ? -6909775253006650379 : 1136290842)))), ((((min(var_1, 3060905524))) ? var_10 : ((min(var_1, var_11)))))));
    }
    for (int i_3 = 0; i_3 < 14;i_3 += 1)
    {
        var_26 -= min(4261704249, var_7);
        var_27 = ((min(((min(2143906937, 19376)), (min(var_6, -1990578207))))));
    }
    var_28 = (max(var_28, var_6));
    #pragma endscop
}
