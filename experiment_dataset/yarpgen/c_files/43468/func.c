/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43468
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43468 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43468
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
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        var_11 ^= ((/* implicit */long long int) max((((12434484775447623737ULL) * (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0])) + (((/* implicit */int) var_0))))))), (((/* implicit */unsigned long long int) (+(arr_3 [7] [i_0]))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            arr_8 [i_0] [(unsigned short)8] = ((/* implicit */_Bool) var_3);
            var_12 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)40518)) - (((/* implicit */int) (signed char)15))));
        }
        arr_9 [i_0] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 12434484775447623737ULL)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_6 [i_0] [i_0] [i_0]))))), (((var_1) - (var_1)))));
    }
    var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) min((var_1), (6012259298261927878ULL)))) ? (min((6012259298261927870ULL), (((/* implicit */unsigned long long int) 4655485565041470433LL)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) | (((/* implicit */unsigned long long int) ((long long int) (unsigned short)52026))))))));
    var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 6012259298261927881ULL)) ? (((/* implicit */int) ((var_8) == (((/* implicit */unsigned long long int) var_4))))) : (((/* implicit */int) var_0))));
}
