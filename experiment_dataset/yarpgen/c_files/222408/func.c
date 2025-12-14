/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222408
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222408 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222408
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
    var_19 &= (unsigned char)235;
    /* LoopSeq 1 */
    for (short i_0 = 2; i_0 < 13; i_0 += 3) 
    {
        var_20 ^= ((/* implicit */short) var_10);
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) min((((/* implicit */long long int) min(((unsigned char)232), (((/* implicit */unsigned char) (signed char)77))))), ((+(var_11)))));
        arr_3 [i_0] [i_0 - 1] = ((/* implicit */unsigned short) max(((~(((/* implicit */int) var_17)))), (((((/* implicit */int) var_18)) & (((/* implicit */int) (signed char)-86))))));
        arr_4 [i_0] [7ULL] = ((/* implicit */long long int) ((((/* implicit */int) ((((((/* implicit */_Bool) 213921936660392019ULL)) ? (arr_0 [i_0 - 2] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))))) >= (max((arr_0 [i_0] [i_0]), (((/* implicit */unsigned long long int) var_9))))))) >> ((((~((~(((/* implicit */int) arr_1 [i_0] [i_0])))))) - (48332)))));
    }
}
