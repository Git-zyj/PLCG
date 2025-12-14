/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247140
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247140 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247140
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
    var_20 = ((/* implicit */unsigned short) var_17);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        var_21 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)30445)))))) | (((((/* implicit */_Bool) (unsigned char)96)) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0])))));
        var_22 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) 1831192833)) ? (((/* implicit */int) (signed char)-108)) : (((/* implicit */int) (signed char)-108))))) > (arr_1 [i_0] [i_0]))))) + (min((((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_1 [i_0] [(unsigned char)7]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [(unsigned char)5]))))), (((/* implicit */long long int) arr_0 [i_0]))))));
    }
    /* LoopSeq 1 */
    for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 2) 
    {
        var_23 |= ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)183))) > ((~(2586570717U)))));
        var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) arr_1 [i_1] [i_1]))));
        var_25 = ((/* implicit */signed char) 520093696ULL);
        arr_5 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((signed char) (-(((/* implicit */int) (unsigned short)46975)))));
    }
    var_26 = ((/* implicit */short) max((((/* implicit */unsigned short) max((((/* implicit */signed char) (!(((/* implicit */_Bool) var_3))))), (var_18)))), (var_11)));
    var_27 |= ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */int) var_18)), (((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) (signed char)109)) : (((/* implicit */int) (unsigned char)0))))))) ? (((/* implicit */int) var_18)) : (((((/* implicit */_Bool) 17415727151277987913ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)177))))));
}
