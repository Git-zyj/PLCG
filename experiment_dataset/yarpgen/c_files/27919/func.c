/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27919
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
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_0 [12U]) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0])))))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_0 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))))) : (((/* implicit */long long int) ((unsigned int) -7528659374406371072LL)))));
        var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0])))) == (((/* implicit */int) arr_1 [i_0])))))));
    }
    for (long long int i_1 = 0; i_1 < 20; i_1 += 4) 
    {
        var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1])) ? (arr_5 [i_1]) : (arr_5 [i_1])))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_1])) || (((/* implicit */_Bool) arr_5 [i_1]))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_1])) || (((/* implicit */_Bool) arr_5 [i_1]))))))))));
        arr_6 [8U] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(arr_4 [i_1] [15U])))) ? (((long long int) arr_4 [i_1] [i_1])) : (((/* implicit */long long int) ((arr_5 [i_1]) >> (((arr_4 [i_1] [i_1]) - (8514595717704302212LL))))))));
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned int) ((((((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_1])) ? (arr_5 [i_1]) : (arr_5 [i_1])))) - (((-7528659374406371081LL) & (7528659374406371064LL))))) < (((((/* implicit */long long int) arr_5 [i_1])) / (arr_4 [i_1] [(unsigned short)12])))));
    }
    for (unsigned int i_2 = 0; i_2 < 20; i_2 += 3) 
    {
        var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) ((unsigned int) min((arr_10 [i_2] [i_2]), (((/* implicit */long long int) arr_5 [i_2]))))))));
        var_20 = ((/* implicit */unsigned int) ((max(((!(((/* implicit */_Bool) 3444125402U)))), (((((/* implicit */_Bool) 181675182U)) && (((/* implicit */_Bool) 229376U)))))) && (((((/* implicit */_Bool) 7528659374406371053LL)) && (((/* implicit */_Bool) 7528659374406371065LL))))));
    }
    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_2))) + (var_6)))) ? (((/* implicit */long long int) min((var_3), (var_16)))) : (((((/* implicit */_Bool) var_8)) ? (var_12) : (((/* implicit */long long int) var_16))))))) ? (((/* implicit */unsigned int) (((((~(((/* implicit */int) var_2)))) + (2147483647))) >> (((max((var_16), (((/* implicit */unsigned int) var_15)))) - (1792054285U)))))) : ((((~(var_11))) + (var_1)))));
    var_22 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((unsigned short) ((unsigned int) var_6))))));
    var_23 = ((/* implicit */unsigned short) var_10);
    var_24 -= ((/* implicit */long long int) ((unsigned short) var_16));
}
