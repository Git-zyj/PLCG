/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31741
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31741 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31741
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            var_10 = (max((arr_2 [i_1 - 1] [i_1 - 1]), var_5));
            arr_4 [12] = arr_0 [18];
            arr_5 [i_0] [i_0] = (((arr_0 [9]) * ((min(21, 1)))));
        }
        var_11 = (max(var_11, ((!(((var_8 / ((-172030124 ? var_7 : -172030151)))))))));
        var_12 |= (max(((-172030124 ? -55 : var_5)), ((-172030136 ? 55297 : var_0))));
    }
    for (int i_2 = 0; i_2 < 20;i_2 += 1) /* same iter space */
    {
        arr_9 [i_2] = ((((((((arr_0 [7]) || (arr_8 [17])))) - (var_6 <= var_9))) >> (((max((!var_8), var_3)) - 1613774539))));
        arr_10 [i_2] [i_2] = (arr_7 [i_2] [i_2]);
        arr_11 [7] = (((((172030106 ? (883158502 << 23) : 4095))) ? (arr_1 [i_2]) : ((((max((arr_1 [2]), var_9))) ? (((arr_0 [i_2]) ? (arr_3 [i_2]) : (arr_1 [i_2]))) : (max(var_7, var_9))))));
        arr_12 [2] = (((((7128114352624981777 % 52) >= (arr_3 [i_2]))) ? (((arr_3 [8]) ? (arr_3 [i_2]) : (arr_3 [i_2]))) : (arr_3 [i_2])));
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 25;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {
            {
                var_13 = (((((1 ? 33 : 30))) ? (arr_16 [i_3] [i_3]) : (((((arr_16 [6] [10]) ? var_3 : (arr_14 [i_4] [22]))) + (arr_15 [i_3])))));
                var_14 = (min((max(((var_9 ? (arr_16 [18] [13]) : (arr_16 [i_3] [1]))), var_0)), (max((((arr_16 [3] [11]) * var_4)), (arr_15 [i_3])))));
            }
        }
    }
    var_15 ^= var_8;
    #pragma endscop
}
