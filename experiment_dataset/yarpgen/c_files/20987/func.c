/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20987
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20987 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20987
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
    var_19 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((short) var_1))), (var_11)));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 11; i_1 += 1) 
        {
            {
                var_20 += ((/* implicit */long long int) (+((+(((arr_1 [i_1]) * (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))))));
                arr_4 [i_0] [i_0] [i_0] = ((/* implicit */signed char) arr_0 [6LL] [6LL]);
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */short) max(((~(((/* implicit */int) var_14)))), (((/* implicit */int) ((short) (signed char)-85)))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 3) 
                {
                    var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-11075)) ? (((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_1] [i_2])) ? (6187388411035591741LL) : (((/* implicit */long long int) ((/* implicit */int) var_2))))) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [11LL] [(unsigned short)2] [i_0]))))))));
                    arr_9 [i_2] = ((/* implicit */long long int) ((((/* implicit */int) var_0)) - (((/* implicit */int) (short)4649))));
                    arr_10 [i_0] = ((/* implicit */unsigned long long int) (_Bool)1);
                    arr_11 [i_1] [5LL] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_2] [i_1 - 1] [i_1] [i_1 + 3])) ? (((/* implicit */int) arr_6 [i_1 + 2] [i_1 + 1] [i_1 + 1] [i_1 - 1])) : (((/* implicit */int) arr_6 [i_1 + 2] [i_1 + 2] [i_1] [i_1 + 1]))));
                    arr_12 [i_2] [i_1] [i_0] = ((/* implicit */short) ((140735340871680ULL) == (var_4)));
                }
                var_22 = ((/* implicit */long long int) max((((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) arr_6 [i_1 + 3] [2ULL] [i_1 + 3] [i_1 + 3])) : (((/* implicit */int) var_13)))), (((/* implicit */int) (unsigned short)8596))));
            }
        } 
    } 
    var_23 = ((/* implicit */short) min((((/* implicit */unsigned int) ((_Bool) max((4294967293U), (var_10))))), (var_10)));
}
