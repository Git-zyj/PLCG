/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22295
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22295 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22295
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned long long int) ((arr_1 [i_0] [i_0]) && (((/* implicit */_Bool) var_8))));
        var_18 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) var_11)) < (18446744073709551615ULL)));
    }
    for (short i_1 = 0; i_1 < 23; i_1 += 3) 
    {
        var_19 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) ^ (((11367697536859464312ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)30165)))))));
        arr_9 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_8 [i_1])) != (min((-1729923961), (-1729923961)))));
    }
    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */int) var_14)), ((+(((/* implicit */int) (signed char)41))))))) ? ((~(1729923948))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) ((1729923965) == (((/* implicit */int) var_0))))) : (((int) -1729923961))))));
    /* LoopNest 2 */
    for (short i_2 = 2; i_2 < 17; i_2 += 1) 
    {
        for (unsigned short i_3 = 0; i_3 < 20; i_3 += 3) 
        {
            {
                var_21 = (((~(arr_7 [i_2 - 1]))) + (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_7))))));
                var_22 = ((/* implicit */short) ((((((/* implicit */_Bool) (short)3346)) ? (((/* implicit */int) arr_13 [i_2 + 3])) : (((/* implicit */int) arr_13 [i_2 + 1])))) | (((/* implicit */int) max(((unsigned char)255), (((/* implicit */unsigned char) (_Bool)0)))))));
                var_23 = min((((/* implicit */int) min(((unsigned short)0), (((/* implicit */unsigned short) (unsigned char)127))))), ((((~(((/* implicit */int) arr_3 [i_3])))) % ((~(((/* implicit */int) var_17)))))));
            }
        } 
    } 
}
