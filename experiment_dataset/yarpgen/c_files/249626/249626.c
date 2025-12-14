/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249626
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249626 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249626
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, (((((max(((min(var_17, -11117))), ((var_12 ? var_0 : var_0))))) ? (min((((1 ? var_17 : var_12))), (min(var_15, var_6)))) : (((((min(11117, 11109))) ? ((max(var_14, var_10))) : ((max(var_5, var_11)))))))))));
    var_19 = (max((min(((1 ? var_12 : var_15)), (((1777346766 ? 32767 : var_8))))), ((min((max(var_1, -32767)), ((min(1, var_12))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_4 [i_1] = ((((min((min(var_12, (arr_1 [i_0]))), (min((arr_3 [i_1] [i_1] [i_1]), (arr_1 [i_1])))))) ? ((((max(var_4, var_10))) ? (max(11147148105723807518, (arr_3 [i_1] [i_0] [i_1]))) : ((min(1135362221, (arr_1 [i_1])))))) : ((((max((arr_2 [i_0]), 1156798559))) ? (max(var_4, 7299595967985744113)) : ((min((arr_1 [i_1]), var_11)))))));
                arr_5 [i_0] [i_1] [i_1] = (max((min(((min((arr_3 [i_1] [0] [i_1]), 1))), ((var_6 ? 1 : 7299595967985744121)))), (min((min(var_3, (arr_1 [6]))), ((max(-16, (arr_1 [i_0]))))))));
                var_20 = (min(var_20, ((max((min((min(-32767, var_16)), ((((arr_1 [i_1]) ? -1270762213 : var_12))))), ((min(((var_4 ? var_9 : var_4)), (min((arr_1 [i_1]), 126976))))))))));
                arr_6 [i_1] [i_1] = ((((min((((arr_2 [i_0]) ? (arr_2 [6]) : (arr_2 [i_0]))), ((((arr_0 [i_0]) ? 176 : 16384)))))) ? ((max((min((arr_1 [i_1]), var_12)), (min(126980, var_13))))) : (min(((max(126980, 1684337767))), ((1 ? (arr_2 [i_1]) : (arr_1 [i_0])))))));
            }
        }
    }
    #pragma endscop
}
