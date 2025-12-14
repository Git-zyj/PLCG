/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247307
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247307 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247307
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
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) (-(arr_1 [i_0]))))));
        var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)114)) ? (((/* implicit */unsigned long long int) arr_1 [i_0])) : (arr_0 [i_0])))) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 0ULL)))))))))));
    }
    for (short i_1 = 0; i_1 < 19; i_1 += 2) 
    {
        var_19 = ((/* implicit */unsigned int) min((min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) arr_3 [i_1]))))), ((-(arr_2 [i_1]))))), (((/* implicit */long long int) arr_3 [i_1]))));
        var_20 = max((((/* implicit */unsigned long long int) (-(4294967294U)))), (((unsigned long long int) (!(((/* implicit */_Bool) arr_2 [i_1]))))));
        arr_4 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_3 [i_1]), (arr_3 [i_1])))) ? (((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) arr_3 [i_1])))) : (((/* implicit */int) min((arr_3 [i_1]), (arr_3 [i_1]))))));
        var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) 396236812)) & (arr_2 [i_1])))) ? (max((((/* implicit */long long int) 396236812)), (arr_2 [i_1]))) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1])))))) ? (((/* implicit */unsigned long long int) max((((((/* implicit */int) arr_3 [i_1])) << (((arr_2 [i_1]) + (7621956000518864900LL))))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_1])))))))) : (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) (short)11274)) : (((/* implicit */int) arr_3 [i_1]))))), (min((((/* implicit */unsigned long long int) -396236803)), (10641950245174421747ULL))))))))));
    }
    var_22 = ((/* implicit */unsigned int) var_15);
    var_23 = ((/* implicit */signed char) var_14);
    var_24 = ((/* implicit */short) var_11);
}
