/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246387
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246387 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246387
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
    for (long long int i_0 = 1; i_0 < 18; i_0 += 2) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */short) max((((/* implicit */int) arr_0 [i_0])), ((~(((/* implicit */int) (short)-18494))))));
        arr_3 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (signed char)33)) ? (((/* implicit */int) (unsigned char)254)) : (((/* implicit */int) (_Bool)1)))) & (((/* implicit */int) (unsigned short)26478))))) ? (((/* implicit */long long int) max((((/* implicit */int) (_Bool)1)), (-200613875)))) : (max(((+(var_9))), (((/* implicit */long long int) (!((_Bool)0))))))));
    }
    for (long long int i_1 = 1; i_1 < 18; i_1 += 2) /* same iter space */
    {
        var_13 = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)241)) & (((/* implicit */int) (_Bool)1))));
        var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) 67076096ULL))));
    }
    var_15 = ((/* implicit */unsigned long long int) var_0);
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_2 = 4; i_2 < 18; i_2 += 1) 
    {
        var_16 = ((/* implicit */unsigned long long int) (unsigned char)245);
        var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (18446744073642475520ULL) : (((/* implicit */unsigned long long int) -846016009))))) ? (((/* implicit */int) ((((/* implicit */_Bool) -200613887)) && (((/* implicit */_Bool) arr_7 [i_2]))))) : (((/* implicit */int) ((unsigned short) (unsigned short)26289)))));
        arr_8 [i_2] [i_2] = (!(((/* implicit */_Bool) arr_6 [i_2 - 1])));
    }
    for (unsigned short i_3 = 1; i_3 < 15; i_3 += 1) 
    {
        var_18 = (+(max((arr_6 [i_3 + 2]), (arr_6 [i_3 + 2]))));
        var_19 = min((min((((/* implicit */long long int) (_Bool)1)), (((((/* implicit */_Bool) (unsigned char)227)) ? (arr_9 [(short)15]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))), (((/* implicit */long long int) arr_1 [i_3])));
    }
}
