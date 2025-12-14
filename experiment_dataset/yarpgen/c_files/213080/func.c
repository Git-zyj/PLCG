/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213080
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213080 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213080
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
    var_10 = ((/* implicit */unsigned int) (-(((/* implicit */int) (short)109))));
    var_11 |= ((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? ((~(var_8))) : (var_8)));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 2; i_0 < 17; i_0 += 1) 
    {
        var_12 = ((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_0 [i_0 - 2] [i_0 + 1])) ? (arr_0 [i_0 - 2] [i_0 + 1]) : (arr_0 [i_0 - 2] [i_0 + 1]))))))));
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            /* LoopSeq 1 */
            for (short i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                /* LoopSeq 1 */
                for (int i_3 = 2; i_3 < 17; i_3 += 2) 
                {
                    var_13 = ((/* implicit */signed char) arr_7 [i_2] [i_0 + 1] [i_0 + 1]);
                    var_14 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-21)) ? (((/* implicit */int) (short)109)) : (2127148784)));
                }
                var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) ((((/* implicit */_Bool) (~(1201615697)))) ? (((((/* implicit */_Bool) (short)-25053)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) arr_8 [i_1] [i_1] [(unsigned char)14] [i_1] [0LL] [i_2])))) : (arr_5 [i_0]))))));
            }
            var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) min((((/* implicit */unsigned long long int) arr_1 [(signed char)12])), (((((/* implicit */unsigned long long int) -2147483642)) ^ (16526750006398913661ULL))))))));
        }
    }
}
