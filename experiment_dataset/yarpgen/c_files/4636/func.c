/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4636
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4636 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4636
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
    for (long long int i_0 = 1; i_0 < 16; i_0 += 1) 
    {
        var_10 += ((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_0 + 1])) - (((/* implicit */int) (unsigned char)1))));
        /* LoopSeq 2 */
        for (unsigned char i_1 = 3; i_1 < 13; i_1 += 4) 
        {
            var_11 -= ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_1])) && (((/* implicit */_Bool) arr_1 [i_0])))))));
            arr_6 [i_1] [(_Bool)1] [i_0 + 1] = (unsigned char)232;
        }
        for (long long int i_2 = 1; i_2 < 16; i_2 += 3) 
        {
            arr_10 [i_0 - 1] = ((/* implicit */long long int) ((9223372036854775807LL) == (((/* implicit */long long int) ((/* implicit */int) (unsigned char)250)))));
            var_12 = ((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned long long int) arr_3 [i_2] [i_2]))));
        }
        var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) (+(arr_5 [i_0] [i_0] [i_0 - 1]))))));
        arr_11 [i_0] = ((((/* implicit */_Bool) (signed char)127)) ? (arr_4 [i_0 - 1]) : (arr_4 [i_0 - 1]));
        var_14 -= ((/* implicit */long long int) (unsigned char)255);
    }
    var_15 = ((/* implicit */unsigned int) (+((((!(((/* implicit */_Bool) (unsigned char)155)))) ? (((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_7)))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned char)230))))))));
    var_16 += ((/* implicit */signed char) (!(((/* implicit */_Bool) ((long long int) 4294967295U)))));
}
