/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206525
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206525 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206525
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
    for (signed char i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        var_13 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-55)) ? (arr_1 [i_0 + 1] [i_0]) : (((/* implicit */long long int) arr_0 [i_0 + 1] [i_0 + 1]))))) ? (((/* implicit */long long int) (~(((/* implicit */int) var_3))))) : (((((/* implicit */long long int) ((/* implicit */int) var_9))) + (((((/* implicit */_Bool) var_3)) ? (arr_1 [(_Bool)1] [(_Bool)1]) : (((/* implicit */long long int) arr_0 [i_0] [i_0])))))));
        arr_3 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_7) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_2 [i_0 + 1]))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)124)) ? (((/* implicit */int) arr_2 [i_0 + 1])) : (((/* implicit */int) arr_2 [i_0 + 1]))))) : (arr_0 [i_0 + 1] [i_0 + 1])));
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9258491921204621814ULL)) && (((/* implicit */_Bool) (+(((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_1] [i_1]))) ^ ((-9223372036854775807LL - 1LL)))))))));
        arr_8 [i_1] = ((/* implicit */short) (-((-(((/* implicit */int) (_Bool)1))))));
        var_15 *= ((/* implicit */short) max((((var_6) << (((((/* implicit */int) var_2)) - (29654))))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) || (arr_7 [i_1 - 1] [i_1 - 1]))))));
    }
    var_16 = ((/* implicit */long long int) var_5);
    var_17 = ((/* implicit */unsigned char) ((((((/* implicit */int) (unsigned char)137)) << ((((~(((/* implicit */int) var_10)))) - (23))))) | (((((/* implicit */_Bool) ((var_4) & (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))) ? (((((/* implicit */_Bool) 2274113006766608920LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */int) var_2)) << (((((/* implicit */int) (short)(-32767 - 1))) + (32771)))))))));
    var_18 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (-(((/* implicit */int) var_5))))), (max((var_6), (((/* implicit */long long int) var_5))))));
    var_19 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */int) var_0)) >> (((((/* implicit */int) var_10)) + (35))))) : (((/* implicit */int) max((((/* implicit */unsigned short) var_9)), (var_12))))))));
}
