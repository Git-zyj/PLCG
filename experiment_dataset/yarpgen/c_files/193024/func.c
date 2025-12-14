/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193024
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193024 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193024
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
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)82)) ? (((/* implicit */int) var_13)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)6868)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)50))) : (34359738367ULL)))) ? (((/* implicit */int) ((signed char) var_11))) : (((/* implicit */int) ((((/* implicit */int) var_16)) == (((/* implicit */int) var_14)))))))));
    var_19 = ((/* implicit */unsigned char) min((max((max((1831694821U), (((/* implicit */unsigned int) (signed char)-70)))), (((/* implicit */unsigned int) var_0)))), (((/* implicit */unsigned int) (!((!(var_3))))))));
    var_20 = ((/* implicit */long long int) var_6);
    var_21 &= ((/* implicit */signed char) var_12);
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_22 = ((/* implicit */int) ((((/* implicit */_Bool) (((+(0ULL))) | (((/* implicit */unsigned long long int) min((arr_0 [i_0]), (((/* implicit */unsigned int) (signed char)50)))))))) ? (((/* implicit */unsigned int) (+(2147483647)))) : (((((/* implicit */_Bool) 134217727U)) ? (14U) : (((/* implicit */unsigned int) ((/* implicit */int) var_16)))))));
        arr_2 [(signed char)20] [(signed char)20] |= ((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_0])) >> (((((/* implicit */int) min((((unsigned short) var_0)), (((/* implicit */unsigned short) arr_1 [i_0]))))) - (51)))));
        var_23 = ((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) arr_1 [i_0])) ? (1831694821U) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))));
    }
}
