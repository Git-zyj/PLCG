/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38898
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38898 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38898
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, (((~((var_5 ? var_3 : ((3240575299688276460 ? var_3 : var_1)))))))));
    var_17 = ((((min(var_9, ((-32762 ? 3626238710 : -4272111715968675159))))) ? var_8 : (max((var_11 - var_9), ((min(-2, -120)))))));

    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] [2] = (min(((var_3 ? (arr_0 [i_0 - 2]) : (arr_0 [i_0 + 1]))), (((var_4 ? var_12 : var_10)))));
        var_18 = ((-((min(15, (arr_1 [i_0 - 2]))))));
        arr_3 [i_0] = (((((((min(-115, (arr_0 [i_0])))) ? ((min(var_15, (arr_1 [i_0])))) : ((var_4 ? (arr_1 [i_0]) : var_8))))) ? var_2 : (((((0 << (((arr_0 [i_0]) - 8695846166587539196))))) ? (arr_1 [i_0]) : var_12))));
    }

    /* vectorizable */
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        arr_8 [i_1] = var_7;
        arr_9 [i_1] = 4254855592690720638;
        var_19 = (max(var_19, var_7));

        for (int i_2 = 1; i_2 < 22;i_2 += 1)
        {
            var_20 = (max(var_20, var_15));
            var_21 = (max(var_21, (arr_10 [i_1] [i_1] [i_1])));
            var_22 = ((-2147483638 >= (arr_12 [i_2 - 1])));
        }
    }
    var_23 = (((min((max(var_4, var_2)), (((var_4 ? var_15 : var_9))))) < (((-((var_15 ? (-127 - 1) : var_5)))))));
    #pragma endscop
}
