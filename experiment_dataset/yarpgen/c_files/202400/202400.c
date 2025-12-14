/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202400
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202400 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202400
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((((var_13 ? ((min(1, -18075))) : (2048 % 108)))) != (max((min(var_4, (-9223372036854775807 - 1))), (!-64)))));
    var_20 = (min(((var_11 || (((var_17 ? var_11 : 33))))), ((!(((var_5 ? var_3 : 109)))))));
    var_21 = ((var_3 ? (min(589332145702393097, ((max(1, 54))))) : (((var_1 ? (var_0 + var_17) : var_18)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                {
                    var_22 = (min(var_22, (((104 ? 6589 : 5792187606279353984)))));
                    var_23 = (min(var_23, ((max((min(7843828110429643125, 1129513687)), 538928739)))));
                    var_24 = ((((((((arr_1 [i_0]) & var_13))) ? (arr_4 [11] [i_1]) : (arr_7 [i_0] [i_2 + 3] [i_1 - 2]))) == ((((((~(arr_1 [i_0])))) ? 32756 : ((104 * (arr_2 [8] [8]))))))));
                    arr_9 [i_0] [i_0] = 98;
                }
            }
        }
    }
    var_25 = var_15;
    #pragma endscop
}
