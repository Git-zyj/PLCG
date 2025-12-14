/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208306
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208306 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208306
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
    var_13 ^= ((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))) : (((unsigned int) var_1)))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 1; i_0 < 17; i_0 += 4) 
    {
        var_14 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_2 [i_0 + 1])) : (arr_0 [i_0 + 2])))) : (((((/* implicit */_Bool) (unsigned char)194)) ? (((/* implicit */unsigned long long int) 97841865U)) : (268435455ULL)))));
        var_15 = ((/* implicit */unsigned int) ((long long int) arr_2 [i_0 - 1]));
        var_16 |= ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0 - 1]))) < (var_10)));
        var_17 *= ((/* implicit */unsigned long long int) var_11);
    }
    /* LoopSeq 1 */
    for (signed char i_1 = 1; i_1 < 23; i_1 += 4) 
    {
        var_18 = 1660236664U;
        var_19 |= ((/* implicit */unsigned int) min((((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) arr_4 [i_1 + 2])) : (((/* implicit */int) var_4)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))));
        var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) ((unsigned char) arr_3 [i_1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)14421))) : (((((/* implicit */_Bool) (unsigned short)62082)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)222)))))));
    }
    var_21 = ((/* implicit */unsigned long long int) var_6);
}
