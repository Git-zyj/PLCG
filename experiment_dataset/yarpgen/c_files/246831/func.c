/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246831
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246831 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246831
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
    var_11 += ((/* implicit */short) ((((/* implicit */unsigned int) var_7)) % (((((/* implicit */_Bool) (~(13210101950421466229ULL)))) ? ((~(var_0))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (_Bool)0)) != (((/* implicit */int) var_4))))))))));
    var_12 = ((/* implicit */_Bool) (+((+(var_3)))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        var_13 = ((/* implicit */_Bool) (+(((arr_0 [i_0]) ? (((((/* implicit */_Bool) 2006985389602206858LL)) ? (arr_1 [i_0]) : (arr_1 [i_0]))) : (((/* implicit */unsigned int) (+(var_9))))))));
        var_14 = ((((/* implicit */_Bool) ((((var_5) && ((_Bool)1))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((var_3) > (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))))))) : (((((/* implicit */_Bool) 7739272098772658801ULL)) ? (4051240550U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_8)), (arr_1 [i_0])))) ? (max((((/* implicit */unsigned long long int) arr_0 [i_0])), (10707471974936892814ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535)))))));
        var_15 += ((/* implicit */_Bool) (((~(761339937669349607LL))) ^ (((/* implicit */long long int) ((/* implicit */int) arr_0 [(short)2])))));
    }
}
