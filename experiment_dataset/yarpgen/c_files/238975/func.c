/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238975
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238975 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238975
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
    /* vectorizable */
    for (signed char i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        var_18 += ((/* implicit */long long int) arr_1 [i_0]);
        arr_2 [(signed char)2] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0 + 2])) ? ((~(((/* implicit */int) (unsigned short)30548)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0])))))));
    }
    /* LoopSeq 1 */
    for (signed char i_1 = 0; i_1 < 14; i_1 += 1) 
    {
        arr_5 [i_1] [i_1] = ((/* implicit */unsigned int) arr_4 [i_1] [i_1]);
        arr_6 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) arr_0 [i_1]))) ? (min((((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1] [i_1]))) : (arr_3 [11ULL]))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_1])) || (((/* implicit */_Bool) arr_3 [i_1]))))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_4 [i_1] [i_1]))))));
        var_19 -= ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_1 [i_1])), (var_16)))))) ? (((/* implicit */int) arr_1 [i_1])) : ((~(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (unsigned short)10545)))))))));
        var_20 = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((((arr_0 [i_1]) >= (arr_0 [i_1]))) || (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_4 [i_1] [i_1])), (arr_0 [i_1]))))))), (((long long int) arr_0 [i_1]))));
    }
    var_21 = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) min((var_7), (((/* implicit */unsigned char) var_4))))) ? (var_11) : ((~(((/* implicit */int) var_1)))))));
}
