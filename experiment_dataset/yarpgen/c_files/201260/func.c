/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201260
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201260 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201260
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
    var_17 = var_15;
    var_18 = ((/* implicit */signed char) ((unsigned short) var_3));
    var_19 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))) ? (((var_6) % (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (signed char)127)))))))) ? (var_15) : (((/* implicit */long long int) ((((/* implicit */int) var_8)) << ((((~(((/* implicit */int) var_2)))) + (125)))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 3) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */long long int) ((unsigned char) (signed char)-97));
        arr_4 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned long long int) arr_0 [i_0])) : (((var_6) / (((/* implicit */unsigned long long int) var_9))))));
    }
    for (long long int i_1 = 0; i_1 < 20; i_1 += 3) /* same iter space */
    {
        var_20 = ((/* implicit */short) ((unsigned short) (((!(((/* implicit */_Bool) var_3)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1]))) : (var_6))));
        arr_7 [18U] [i_1] = ((/* implicit */int) (((!(((/* implicit */_Bool) arr_0 [(unsigned short)16])))) ? (min((((/* implicit */long long int) arr_0 [8LL])), (var_3))) : (((/* implicit */long long int) (~(arr_0 [(_Bool)1]))))));
        var_21 = ((/* implicit */signed char) var_9);
        var_22 ^= ((/* implicit */unsigned short) ((((/* implicit */long long int) max((((/* implicit */unsigned int) -997705824)), (((((/* implicit */unsigned int) arr_0 [18ULL])) - (0U)))))) - (((((/* implicit */long long int) max((((/* implicit */unsigned int) arr_1 [i_1])), (var_9)))) + (min((var_15), (((/* implicit */long long int) arr_0 [2U]))))))));
        var_23 = ((/* implicit */short) (((!(((/* implicit */_Bool) ((unsigned short) 4294967295U))))) ? (((((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) arr_2 [(unsigned short)18])))) ? (((/* implicit */int) max((((/* implicit */unsigned short) var_4)), (arr_1 [i_1])))) : (((((/* implicit */_Bool) arr_6 [i_1] [i_1])) ? (arr_0 [(unsigned char)10]) : (((/* implicit */int) arr_5 [i_1])))))) : (((((/* implicit */int) arr_1 [i_1])) << (((((/* implicit */int) arr_6 [i_1] [i_1])) - (228)))))));
    }
    var_24 = ((16U) ^ (min((var_9), (((/* implicit */unsigned int) min((((/* implicit */unsigned char) var_8)), ((unsigned char)64)))))));
}
