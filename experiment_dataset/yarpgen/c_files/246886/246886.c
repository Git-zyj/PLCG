/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246886
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246886 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246886
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_18 = (min((((((44 ? 50 : 3325))) ? (((arr_4 [i_0]) / (arr_6 [i_0] [i_0] [i_0]))) : (((min((arr_5 [i_0 - 1]), 32764)))))), ((((arr_3 [i_0] [i_0 - 1]) / ((-(arr_0 [i_0] [i_1]))))))));
                var_19 = (min((((min(11977388841586545850, 90)) - (((min(62210, 8267)))))), (max((((arr_1 [i_0] [i_1]) ? (arr_4 [i_0]) : 14521910608149901672)), (arr_4 [i_0])))));
                var_20 = (max(var_20, -2254437282852036905));
            }
        }
    }
    var_21 = ((((((!(var_7 < var_15))))) == ((((max(var_3, var_13))) ? var_7 : (min(18446744073709551615, var_5))))));

    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        var_22 ^= ((!(arr_10 [i_2])));
        arr_11 [i_2] = ((arr_9 [i_2]) ? (arr_8 [i_2]) : (min(3325, 14521910608149901684)));
        var_23 = (arr_7 [i_2]);
    }
    var_24 = var_11;
    #pragma endscop
}
