/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212405
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212405 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212405
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
    for (long long int i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) ((max((((/* implicit */unsigned int) ((unsigned char) arr_1 [i_0] [i_0 + 1]))), (((arr_1 [(unsigned short)13] [i_0]) ^ (arr_0 [0LL]))))) == (((/* implicit */unsigned int) ((/* implicit */int) ((arr_0 [i_0 + 2]) == (arr_0 [i_0 + 1]))))))))));
        var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) max((((((/* implicit */_Bool) (short)-3956)) ? (((/* implicit */unsigned long long int) 1922344113U)) : (5674001082614885715ULL))), (((/* implicit */unsigned long long int) arr_1 [i_0 - 1] [i_0 + 2])))))));
        /* LoopSeq 1 */
        for (long long int i_1 = 1; i_1 < 18; i_1 += 1) 
        {
            var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) (+(((unsigned long long int) arr_3 [i_1 + 1] [i_1])))))));
            var_21 = ((/* implicit */long long int) var_14);
        }
    }
    var_22 += ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 281474976710655LL)) ? (-1165156770884031991LL) : (((((/* implicit */_Bool) 4019955438441904198ULL)) ? (-3200448077166130877LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))))))))));
}
