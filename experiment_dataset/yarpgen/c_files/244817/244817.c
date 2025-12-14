/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244817
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244817 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244817
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        var_19 *= ((((((0 == (arr_3 [i_0]))) ? (arr_1 [i_0 - 1]) : (arr_2 [i_0 - 2]))) != (((((var_8 ? -19 : (arr_3 [i_0])))) ? (((274 < (arr_2 [i_0])))) : var_8))));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 13;i_2 += 1)
            {
                {
                    var_20 = ((!((max(((min(33423360, -19))), (arr_6 [i_2 - 1] [i_1]))))));
                    var_21 = (min(var_21, -24308));
                    var_22 = ((!(((var_15 ? var_1 : 0)))));
                }
            }
        }
        arr_9 [i_0] [i_0] = ((((((-2147483647 - 1) | (arr_4 [i_0])))) ? ((5449 ? (-21 ^ var_3) : (var_18 != -3))) : (((!(arr_0 [i_0]))))));
        var_23 = ((((min((((!(arr_2 [12])))), (max(var_12, -19))))) ? ((-((min(var_4, 124))))) : ((((arr_8 [i_0 - 1] [i_0] [i_0 + 1]) && (arr_8 [i_0 - 1] [i_0] [2]))))));
        var_24 = ((var_2 ? (arr_6 [i_0 - 2] [i_0 - 2]) : ((max((min(510, (arr_4 [i_0]))), (((!(arr_5 [i_0] [8] [i_0])))))))));
    }
    var_25 = (-(((!(((var_8 ? var_5 : var_2)))))));
    #pragma endscop
}
