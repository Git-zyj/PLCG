/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39088
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)132)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */long long int) ((/* implicit */int) max(((unsigned char)118), ((unsigned char)152))))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [(short)9])))))));
        var_19 = ((/* implicit */long long int) (((~(((/* implicit */int) max((var_16), (((/* implicit */short) var_11))))))) ^ (((((/* implicit */_Bool) ((((/* implicit */_Bool) 0LL)) ? (694795865U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0])))))) ? ((+(((/* implicit */int) (unsigned char)255)))) : (((/* implicit */int) var_11))))));
    }
    var_20 = var_1;
    var_21 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) (~(var_4)))) ? (((/* implicit */unsigned long long int) var_5)) : (max((((/* implicit */unsigned long long int) var_15)), (var_4)))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 4) 
    {
        var_22 |= ((/* implicit */unsigned int) max(((+(((/* implicit */int) arr_2 [(short)16])))), (((((/* implicit */int) max((((/* implicit */unsigned char) var_10)), ((unsigned char)254)))) ^ (((/* implicit */int) arr_0 [i_1]))))));
        var_23 *= ((/* implicit */_Bool) max((((((/* implicit */_Bool) (unsigned char)30)) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_1)))) : (var_5))), (((/* implicit */long long int) ((unsigned int) arr_0 [i_1])))));
        var_24 = ((/* implicit */unsigned char) (((!(var_10))) && (((/* implicit */_Bool) ((long long int) 16903679083351291914ULL)))));
    }
}
