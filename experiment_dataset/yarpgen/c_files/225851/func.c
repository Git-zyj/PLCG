/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225851
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225851 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225851
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
    var_19 = ((/* implicit */long long int) (((!(var_4))) && (var_13)));
    var_20 = ((/* implicit */long long int) max((((((((/* implicit */int) var_0)) != (((/* implicit */int) var_13)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_16))) >= (var_15))))) : (min((var_14), (((/* implicit */unsigned long long int) var_7)))))), (((/* implicit */unsigned long long int) max((max((((/* implicit */unsigned short) (unsigned char)180)), ((unsigned short)44138))), (((/* implicit */unsigned short) max((var_4), (var_7)))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) ((((/* implicit */int) var_4)) - (((((/* implicit */int) (unsigned short)0)) + (((/* implicit */int) (unsigned short)17)))))))));
        var_22 = ((/* implicit */int) (+((-9223372036854775807LL - 1LL))));
        var_23 = ((arr_0 [i_0]) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_0 [i_0])));
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) /* same iter space */
    {
        var_24 *= ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (!(arr_0 [(unsigned short)16])))))))));
        var_25 = ((/* implicit */int) max((2061015385U), (((/* implicit */unsigned int) (_Bool)1))));
        var_26 &= ((/* implicit */signed char) arr_2 [i_1 - 1]);
        var_27 -= ((/* implicit */unsigned int) var_5);
    }
    for (unsigned long long int i_2 = 4; i_2 < 23; i_2 += 2) 
    {
        var_28 = ((/* implicit */_Bool) max((var_28), (((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_6 [i_2 - 4]))))) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) var_4)), (arr_6 [i_2 - 4]))))) : ((+(arr_5 [i_2 + 1] [i_2 - 4]))))))));
        var_29 = ((/* implicit */short) (+(min((((/* implicit */long long int) var_13)), (((((/* implicit */_Bool) (unsigned short)18)) ? (arr_4 [i_2 - 3] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_2 - 2])))))))));
    }
    var_30 ^= ((/* implicit */_Bool) var_14);
}
