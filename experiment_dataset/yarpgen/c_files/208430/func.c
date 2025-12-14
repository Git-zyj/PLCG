/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208430
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208430 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208430
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
    var_11 = ((/* implicit */signed char) var_1);
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        arr_2 [i_0] [(_Bool)1] |= ((/* implicit */short) max((((/* implicit */unsigned long long int) arr_0 [i_0])), (((unsigned long long int) arr_0 [i_0]))));
        var_12 = ((/* implicit */long long int) max((((unsigned long long int) ((((/* implicit */_Bool) -1LL)) ? (((/* implicit */int) (signed char)104)) : (((/* implicit */int) arr_1 [i_0]))))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) min((((/* implicit */unsigned char) arr_0 [i_0])), (arr_1 [(signed char)21])))))))));
    }
    for (int i_1 = 1; i_1 < 16; i_1 += 2) 
    {
        var_13 = ((/* implicit */unsigned long long int) max((var_13), (((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-105))) < (arr_3 [(unsigned char)16])))) - (((((/* implicit */int) var_8)) / (arr_6 [i_1])))))) ? (((((/* implicit */_Bool) arr_5 [i_1 + 2])) ? (((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_4))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (signed char)111)))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) (signed char)-105)) || (((/* implicit */_Bool) arr_5 [7LL]))))))))))));
        /* LoopSeq 1 */
        for (unsigned int i_2 = 4; i_2 < 16; i_2 += 3) 
        {
            arr_10 [i_2] [17LL] [i_1] = ((/* implicit */unsigned int) ((long long int) max((((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_2]))) < (var_6)))), ((signed char)104))));
            arr_11 [i_1] [i_2] = ((/* implicit */unsigned long long int) min((((unsigned char) (signed char)-104)), (((/* implicit */unsigned char) ((arr_3 [i_2 + 1]) >= (arr_3 [i_2 - 1]))))));
        }
        arr_12 [17ULL] = ((/* implicit */_Bool) ((signed char) (signed char)111));
    }
    var_14 = (((~(((unsigned long long int) -2211770021463329207LL)))) << (((((/* implicit */int) var_8)) - (80))));
}
