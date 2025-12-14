/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217113
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217113 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217113
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
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) min((((/* implicit */int) ((unsigned short) var_18))), (((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)20030))))) ? (((/* implicit */int) (unsigned short)42066)) : ((~(((/* implicit */int) (unsigned short)1984))))))));
        var_19 ^= ((/* implicit */unsigned short) min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned short)45505)) : (((/* implicit */int) (unsigned short)65535)))), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_16))))));
        /* LoopSeq 2 */
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 4) /* same iter space */
        {
            var_20 *= ((/* implicit */unsigned short) max((((/* implicit */int) (((~(((/* implicit */int) (unsigned short)1008)))) != (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned short)11987)) : (((/* implicit */int) (unsigned short)47219))))))), (((((/* implicit */_Bool) ((((/* implicit */int) var_11)) >> (((((/* implicit */int) var_7)) - (14913)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_13))))) : (((((/* implicit */int) (unsigned short)5)) - (((/* implicit */int) var_13))))))));
            arr_7 [i_0] [i_0] [i_1] = var_2;
        }
        for (unsigned short i_2 = 0; i_2 < 19; i_2 += 4) /* same iter space */
        {
            var_21 *= ((/* implicit */unsigned short) (+(((((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned short)65533)))) ^ ((~(((/* implicit */int) (unsigned short)9986))))))));
            var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) (((~(((/* implicit */int) (unsigned short)65535)))) & (min((((((/* implicit */int) var_18)) | (((/* implicit */int) var_12)))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned short)14086)) : (((/* implicit */int) var_8)))))))))));
        }
        arr_10 [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned short) var_15)))));
        arr_11 [i_0] = ((unsigned short) (+(((/* implicit */int) ((unsigned short) var_2)))));
    }
    var_23 = ((/* implicit */unsigned short) min((var_23), (((unsigned short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_6)) : (((((/* implicit */int) var_5)) - (((/* implicit */int) var_18)))))))));
    var_24 *= ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)45520)) / (((/* implicit */int) min((min((var_4), (var_3))), (var_14))))));
    var_25 = ((unsigned short) (~((~(((/* implicit */int) (unsigned short)61440))))));
    var_26 ^= ((/* implicit */unsigned short) max((((((((/* implicit */int) (unsigned short)65535)) << (((((/* implicit */int) var_17)) - (59759))))) ^ (((/* implicit */int) var_0)))), (((/* implicit */int) (unsigned short)8250))));
}
