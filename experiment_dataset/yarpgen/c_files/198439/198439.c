/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198439
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198439 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198439
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, var_13));

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] = (9223372036854775807 || var_18);
        var_20 *= (-116 & -9223372036854775791);

        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            arr_6 [i_0] [i_0] [i_0] = (max(7046514025493911186, ((min(((11400230048215640397 ? 129 : 114)), (var_16 > 385640282646078326))))));
            var_21 += ((min((arr_1 [10] [10]), (arr_1 [1] [1]))));
            arr_7 [i_0] = (((11400230048215640429 ? (arr_5 [2] [6]) : -1)));
            arr_8 [i_0] = max((arr_5 [11] [i_1]), ((((min(-26467, 195))) ? 203 : ((-6853737239084003021 ? 1 : 9944562031408676269)))));
        }
    }
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        arr_11 [i_2] = ((-107 ? -9223372036854775804 : 61473));
        var_22 = ((~((((1 > (arr_9 [i_2]))) ? (((min(var_8, (arr_9 [i_2]))))) : ((186 ? -9223372036854775806 : 7050899730163247744))))));
        arr_12 [i_2] = (max(4091, ((((52 & 2599752476619250789) > 121)))));
    }
    var_23 = (((((max(11400230048215640424, var_17))) ? var_10 : var_13)));
    #pragma endscop
}
