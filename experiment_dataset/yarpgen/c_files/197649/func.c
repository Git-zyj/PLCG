/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197649
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197649 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197649
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
    var_20 = ((/* implicit */unsigned int) ((((/* implicit */long long int) var_12)) + (max((((long long int) (short)32765)), (-8LL)))));
    var_21 = ((/* implicit */signed char) ((((/* implicit */int) var_14)) < (((/* implicit */int) (unsigned char)12))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 3; i_0 < 14; i_0 += 3) /* same iter space */
    {
        var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (((/* implicit */int) arr_0 [i_0 + 3])) : (var_0)));
        var_23 = ((/* implicit */short) ((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) (~(((/* implicit */int) (short)-1793)))))));
        var_24 = ((/* implicit */unsigned short) var_7);
        var_25 = ((/* implicit */unsigned short) var_15);
        var_26 = ((/* implicit */_Bool) min((var_26), ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) -7255948827801561290LL)) ? (7255948827801561292LL) : (7255948827801561290LL))))))));
    }
    for (short i_1 = 3; i_1 < 14; i_1 += 3) /* same iter space */
    {
        var_27 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) (signed char)-84)) ? (9177302621440982920LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-22412)))))))) ? (((/* implicit */int) ((((/* implicit */int) arr_3 [(short)6])) <= (((/* implicit */int) arr_3 [(short)2]))))) : (((/* implicit */int) ((((var_0) != (var_0))) || (((/* implicit */_Bool) min((((/* implicit */int) arr_3 [(short)2])), (var_12)))))))));
        var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) ((10380711067256969624ULL) << (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 7995121611341846086LL)) ? (((/* implicit */int) (short)1793)) : (arr_4 [(unsigned short)0] [(unsigned short)0]))))))))))));
        var_29 ^= ((/* implicit */unsigned char) ((unsigned short) 0U));
    }
}
