/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47233
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47233 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47233
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 1; i_0 < 22; i_0 += 3) 
    {
        var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_0 + 2])) ? (((/* implicit */int) arr_1 [i_0 + 1])) : (((/* implicit */int) arr_1 [(unsigned short)1])))))));
        /* LoopSeq 3 */
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            var_21 = ((/* implicit */long long int) ((((arr_0 [i_1]) >= (((/* implicit */unsigned long long int) -5622275837373606460LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0 + 2]))) : (arr_0 [i_1])));
            var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [i_0 + 1])) ? (arr_0 [i_0 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0 + 1])))));
        }
        for (unsigned char i_2 = 0; i_2 < 24; i_2 += 2) 
        {
            var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) ((0U) > (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 - 1]))))))));
            var_24 = ((((/* implicit */_Bool) arr_4 [i_0 - 1] [i_0 - 1])) ? (((/* implicit */int) arr_4 [i_0 - 1] [i_0 - 1])) : (((/* implicit */int) var_4)));
        }
        for (unsigned short i_3 = 0; i_3 < 24; i_3 += 4) 
        {
            var_25 = ((/* implicit */unsigned int) ((var_13) && (arr_6 [i_0 - 1])));
            var_26 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 60360291392086114ULL)) ? (2017612633061982208LL) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_3])))))) ? (((((/* implicit */_Bool) -5622275837373606460LL)) ? (1970324836974592ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [7ULL]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0 + 1]))));
            var_27 = ((/* implicit */unsigned long long int) (_Bool)1);
            var_28 = ((/* implicit */unsigned long long int) max((var_28), (((/* implicit */unsigned long long int) ((arr_6 [(_Bool)1]) ? (((/* implicit */int) arr_6 [i_0 - 1])) : (((/* implicit */int) arr_6 [i_0 - 1])))))));
        }
        var_29 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)65535)) || (arr_6 [i_0])));
    }
    var_30 = ((/* implicit */unsigned short) (short)9238);
}
