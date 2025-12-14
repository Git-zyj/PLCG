/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200828
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                {
                    var_18 = ((-((((~146) > (((arr_1 [11] [i_1]) / (arr_6 [i_0] [i_1] [i_0] [i_2 - 1]))))))));
                    var_19 = ((((((arr_7 [i_2 - 1] [i_2] [i_2] [i_2]) < (((arr_0 [i_2]) ? var_16 : (arr_7 [1] [1] [i_2] [i_1])))))) ^ ((((min((arr_3 [i_1]), (arr_2 [i_2 + 1] [i_1])))) ? ((((arr_5 [i_0] [i_0] [i_2 - 1]) != var_16))) : (((arr_5 [i_0] [i_1] [i_2]) | (arr_2 [i_0] [i_1])))))));
                    var_20 = (min(var_20, (((((((max(var_16, 2035933329))) || ((max((arr_7 [i_0] [i_0] [i_0] [i_0]), (arr_0 [i_2])))))) ? (max((~var_11), (((!(arr_4 [i_0] [i_1] [i_2])))))) : (-127 - 1))))));
                }
            }
        }
    }
    var_21 = var_10;
    var_22 = (min(-56, (((var_2 < 130) ? var_1 : ((min(var_1, -98)))))));
    var_23 = (max(var_16, ((max((min(var_3, var_7)), 1)))));
    var_24 += ((!((max((min(1099511626752, 3739100106)), 118)))));
    #pragma endscop
}
