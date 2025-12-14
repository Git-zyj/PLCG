/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235203
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235203 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235203
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                var_16 -= ((~((((((arr_3 [i_0] [i_0] [1]) ? var_4 : var_5))) ? 1 : ((max((arr_4 [i_1 + 1] [i_1 + 1]), (arr_3 [2] [i_1] [1]))))))));
                arr_5 [i_1] [i_1] [i_1 - 1] = ((+((((((arr_1 [i_0]) ? (arr_0 [i_0]) : (arr_3 [i_0] [i_1] [i_1])))) ? (arr_1 [7]) : (((min(var_0, (arr_2 [i_0] [i_1])))))))));
                arr_6 [i_1] [i_1] [i_0] = (((max(7025, ((-3076643258044438370 ? var_0 : -32746))))) ? (((min((arr_3 [3] [i_1] [2]), (arr_3 [i_0] [i_1 - 1] [i_1]))))) : ((32761 / ((~(arr_0 [i_0]))))));
            }
        }
    }
    var_17 = (max(var_17, (((((((max(3076643258044438369, var_10)) / (~-32752)))) ? var_6 : ((1 ? (var_11 % -16698) : ((var_1 ? 1 : var_3)))))))));
    var_18 = (max(var_18, (((((min((((var_14 ? 1 : var_9))), var_13))) ? ((var_13 + ((((-127 - 1) ? var_3 : -32748))))) : ((-9198757986390421386 ? ((544985376604455747 ? 12948163222794482120 : 1)) : ((min(var_5, (-2147483647 - 1)))))))))));
    var_19 = ((var_11 || ((min(((-117 ? -544985376604455720 : 12948163222794482108)), ((min(var_9, var_2))))))));
    #pragma endscop
}
