/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30083
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30083 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30083
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
    var_18 = ((/* implicit */short) (((!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) var_10)) : (var_0)))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 2265464972U)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (_Bool)1))))) : ((~((~(var_12)))))));
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned char)225)) ? (-1018361597) : (((/* implicit */int) var_14)))) % ((~(((/* implicit */int) (unsigned char)225))))))) ? (((((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) -421819324)))) ? (((15342612534374338511ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)225))))) : (((/* implicit */unsigned long long int) ((3083156962U) & (((/* implicit */unsigned int) ((/* implicit */int) (short)-27230)))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 18010000462970880ULL)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_14))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_11))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)19))) - (var_17)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 2; i_0 < 21; i_0 += 4) 
    {
        var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_1))))) ? (((15500142727179567751ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)97))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)180)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)159))) : (2921658119U))))));
        var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) ((((((/* implicit */_Bool) (unsigned char)150)) || (((/* implicit */_Bool) var_15)))) ? (((((/* implicit */int) arr_0 [i_0 + 2])) % (((/* implicit */int) var_5)))) : ((((_Bool)1) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_1 [i_0])))))))));
    }
}
