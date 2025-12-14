/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202741
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202741 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202741
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) var_6))));
    /* LoopSeq 2 */
    for (long long int i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        var_19 = ((((/* implicit */_Bool) var_14)) ? (arr_2 [i_0]) : (min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) arr_1 [i_0] [i_0]))))), (max((((/* implicit */long long int) arr_1 [i_0] [i_0 + 1])), (arr_2 [i_0 - 1]))))));
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (long long int i_2 = 2; i_2 < 8; i_2 += 2) 
            {
                for (long long int i_3 = 0; i_3 < 10; i_3 += 3) 
                {
                    {
                        arr_11 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */signed char) ((short) -4437631109462852228LL));
                        var_20 = min((((/* implicit */long long int) (+(((/* implicit */int) arr_4 [i_2 + 2] [i_0 + 1] [i_0 - 1]))))), (max((((/* implicit */long long int) var_5)), (-4437631109462852228LL))));
                    }
                } 
            } 
        } 
        var_21 = ((/* implicit */signed char) max((((/* implicit */long long int) arr_3 [i_0 - 1] [i_0 + 1])), (((var_14) ^ (-4437631109462852228LL)))));
    }
    /* vectorizable */
    for (short i_4 = 3; i_4 < 13; i_4 += 3) 
    {
        var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_12 [i_4 - 2])) ? (((/* implicit */long long int) (+(((/* implicit */int) var_3))))) : (arr_13 [i_4 - 3])));
        var_23 = ((/* implicit */short) ((67108863LL) >= (67108863LL)));
        var_24 = ((/* implicit */short) arr_14 [i_4 + 1]);
    }
    var_25 = ((/* implicit */short) ((((/* implicit */_Bool) var_14)) ? (4437631109462852203LL) : (((/* implicit */long long int) (((+(((/* implicit */int) var_6)))) + (((/* implicit */int) var_6)))))));
    var_26 = ((/* implicit */long long int) max((var_26), (-4437631109462852213LL)));
}
