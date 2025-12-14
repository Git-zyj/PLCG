/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218517
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218517 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218517
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
    for (int i_0 = 3; i_0 < 11; i_0 += 2) 
    {
        arr_2 [(short)5] [1U] = ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-36)) ? (10198945154778973781ULL) : (((/* implicit */unsigned long long int) 4294967293U))))) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) max((((/* implicit */short) (_Bool)1)), ((short)20)))))));
        var_19 = ((/* implicit */long long int) max((var_19), ((((_Bool)1) ? (((((/* implicit */_Bool) max((((/* implicit */short) var_2)), ((short)1)))) ? (((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-1))) : (-448147678633563743LL))) : (((/* implicit */long long int) ((/* implicit */int) (!((_Bool)1))))))) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned char) arr_1 [i_0 + 1])), (max(((unsigned char)230), ((unsigned char)232)))))))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 4) 
    {
        var_20 |= ((/* implicit */_Bool) (~(((((/* implicit */_Bool) (signed char)64)) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) arr_1 [i_1]))))));
        var_21 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((max((((/* implicit */long long int) var_5)), (var_18))) | (-1904765583340490354LL)))) ? (((((/* implicit */_Bool) (short)30902)) ? (8910866770801388010ULL) : (((/* implicit */unsigned long long int) 4276665279977911862LL)))) : (max((max((((/* implicit */unsigned long long int) var_7)), (16275278765800471699ULL))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)12))))))));
        arr_5 [i_1] &= ((/* implicit */unsigned int) var_11);
    }
    var_22 = (unsigned short)3845;
    var_23 &= ((/* implicit */unsigned char) var_4);
}
