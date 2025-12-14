/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192459
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192459 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192459
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 &= (-127 - 1);
    var_19 = ((((!(((var_1 ? var_17 : -9095152241558038723))))) ? var_0 : ((min(var_12, 6000788550016043775)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 20;i_1 += 1)
        {
            {
                var_20 = (((-(arr_5 [i_0]))));
                var_21 = (((((-9223372036854775788 ? 381562488 : (-32767 - 1)))) ? ((((((var_5 ? (arr_7 [i_0 + 2] [i_0]) : (arr_4 [i_0]))) < var_8)))) : (arr_7 [i_0] [i_0])));
            }
        }
    }

    for (int i_2 = 0; i_2 < 13;i_2 += 1) /* same iter space */
    {
        var_22 += (((((min(var_2, (arr_6 [i_2]))))) >= (min(((-24062 ? 123 : var_16)), (-127 - 1)))));
        arr_12 [i_2] = ((((((arr_4 [i_2]) + (arr_4 [i_2])))) ? (arr_4 [i_2]) : (min((arr_4 [i_2]), (arr_4 [i_2])))));
    }
    for (int i_3 = 0; i_3 < 13;i_3 += 1) /* same iter space */
    {
        arr_15 [i_3] = (min((arr_5 [i_3]), (((-var_17 >= (arr_10 [i_3] [i_3]))))));
        arr_16 [i_3] = ((((min(((18 ? (arr_14 [i_3]) : 17154813777080351471)), ((((arr_7 [i_3] [i_3]) < (arr_11 [i_3] [i_3]))))))) ? (((var_8 ? ((min(23379, 125))) : ((min(38, 13)))))) : ((var_10 & (min(1291930296629200144, 1))))));
        arr_17 [i_3] [i_3] |= (min((arr_14 [i_3]), ((3499966817 ? 645535008 : 0))));
    }
    #pragma endscop
}
