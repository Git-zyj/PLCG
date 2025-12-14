/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50992
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50992 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50992
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 &= (-1118518558 <= var_9);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_18 |= (((((max((arr_0 [i_0]), (arr_0 [i_1])))) ? ((108 ? (arr_1 [i_0] [i_0]) : (arr_3 [1]))) : var_11)));
                arr_4 [i_0] [i_1] [i_0] = ((((((-5014865781461204914 == (arr_1 [i_0] [1]))))) ? (((((-1118518558 ? -1152595366827165654 : 0))) ? var_16 : (var_15 & 1152595366827165626))) : ((((6 < -10) | (((arr_2 [12] [i_1]) ? (arr_3 [i_1]) : 255)))))));
                arr_5 [i_1] = ((max((arr_0 [i_1]), 22)) >= (((((arr_2 [17] [i_1]) < (((!(arr_3 [i_1])))))))));
            }
        }
    }
    var_19 = (var_7 | var_10);
    #pragma endscop
}
