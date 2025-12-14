/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213339
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213339 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213339
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(((-((min(97, var_0))))), 34022));
    var_21 = ((!(31537 - 34022)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_22 = (max((((34024 >= (arr_1 [i_0 - 1])))), (((((31522 ? var_19 : var_16))) ? 34022 : ((~(arr_2 [i_1])))))));
                var_23 = ((((((((var_14 ? 34027 : var_10))) ? (min(var_9, 34027)) : (((31508 / (arr_0 [i_0]))))))) ? (((((arr_1 [i_0 - 1]) >= -31509)))) : ((31515 / (arr_1 [i_0 + 1])))));
                var_24 = ((-(arr_3 [i_0 - 1])));
            }
        }
    }
    var_25 -= ((34036 ? ((((34020 + var_3) / ((31515 ? 31517 : 34047))))) : (min((min(var_15, var_3)), ((min(34044, var_0)))))));
    var_26 = (max(var_26, ((((((min(var_3, 34027)) + 2147483647)) << (((((var_2 ? 34018 : var_11))) - 34018)))))));
    #pragma endscop
}
