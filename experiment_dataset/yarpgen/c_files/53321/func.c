/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53321
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53321 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53321
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
    var_11 = ((/* implicit */unsigned char) min((((/* implicit */long long int) (signed char)0)), (((((/* implicit */_Bool) max(((unsigned short)60264), ((unsigned short)60287)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 9223372036854775800LL)) || (((/* implicit */_Bool) (unsigned short)5272)))))) : (max((var_7), (((/* implicit */long long int) (unsigned short)60236))))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */int) min((((var_1) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (short)-22703)), ((unsigned short)60264))))) : (min((((/* implicit */long long int) 4079107681U)), ((-9223372036854775807LL - 1LL)))))), (((((/* implicit */_Bool) (unsigned short)37374)) ? (-9223372036854775807LL) : (((/* implicit */long long int) -942273671))))));
        var_12 = ((/* implicit */unsigned long long int) min((max((((/* implicit */unsigned char) (_Bool)1)), (arr_1 [i_0]))), (max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) 14568650523826529683ULL))))), (arr_1 [i_0])))));
    }
}
