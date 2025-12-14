/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235201
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235201 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235201
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
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) (+(min((((((/* implicit */_Bool) (short)11562)) ? (-2547319272978202144LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)26))))), (min((arr_2 [i_0]), (((/* implicit */long long int) var_6)))))))))));
        var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_0 [i_0]) ? (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_0 [i_0])))) : (((/* implicit */int) max((var_5), (var_11))))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (((!(arr_0 [i_0]))) || ((!(((/* implicit */_Bool) arr_2 [i_0])))))))));
        arr_3 [i_0] = ((/* implicit */_Bool) (+(((/* implicit */int) (!((!(arr_0 [i_0]))))))));
        var_18 = ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_12)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)46751))) ^ (arr_2 [i_0]))))))) ? (((((/* implicit */_Bool) ((arr_0 [i_0]) ? (arr_2 [(_Bool)1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)235)))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))) : (8493637240604514971LL))) : (((/* implicit */long long int) ((/* implicit */int) max((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0]))))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 2; i_1 < 13; i_1 += 4) /* same iter space */
    {
        var_19 = (+(arr_2 [i_1 + 4]));
        var_20 = ((/* implicit */unsigned short) ((((arr_0 [i_1]) || (((/* implicit */_Bool) var_9)))) ? (((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */int) (unsigned char)34)) : (((/* implicit */int) var_15)))) : (((/* implicit */int) arr_5 [8U]))));
    }
    for (unsigned int i_2 = 2; i_2 < 13; i_2 += 4) /* same iter space */
    {
        arr_8 [i_2] = ((/* implicit */long long int) var_4);
        arr_9 [i_2 - 1] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) ((signed char) 268435455U))) ? (((((/* implicit */int) arr_6 [i_2])) << (((arr_7 [15U]) - (8632784856026917544LL))))) : (((((/* implicit */_Bool) 7294380126370607032LL)) ? (((/* implicit */int) (unsigned short)9084)) : (((/* implicit */int) (short)-18192))))))));
    }
    var_21 = ((/* implicit */unsigned short) var_6);
    var_22 = ((/* implicit */signed char) (!(((/* implicit */_Bool) min(((~(((/* implicit */int) var_15)))), (((/* implicit */int) var_8)))))));
    var_23 = ((/* implicit */signed char) var_14);
}
