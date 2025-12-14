/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226250
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226250 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226250
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
    var_18 = ((/* implicit */short) (+(((((/* implicit */_Bool) ((var_7) % (var_13)))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)6427))))) : ((-(18446744073709551615ULL)))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 3; i_0 < 10; i_0 += 2) 
    {
        var_19 = ((((/* implicit */int) ((min((2690495742U), (((/* implicit */unsigned int) arr_0 [i_0] [i_0])))) < (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_0 [5LL] [i_0])))))))) % (min((((((/* implicit */_Bool) (signed char)126)) ? (((/* implicit */int) arr_0 [(short)0] [(short)7])) : (((/* implicit */int) arr_0 [i_0 + 1] [i_0 - 1])))), (((/* implicit */int) arr_1 [i_0] [i_0])))));
        arr_2 [i_0] [(short)12] = ((/* implicit */unsigned short) ((max((((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (var_7) : (var_7))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) && (((/* implicit */_Bool) arr_1 [i_0] [i_0 - 3]))))))) < (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) ((long long int) arr_0 [i_0] [12ULL])))))));
        var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) (((+(((/* implicit */int) min((arr_1 [(unsigned short)7] [7U]), (((/* implicit */unsigned short) var_11))))))) % (((/* implicit */int) ((unsigned short) ((((/* implicit */int) arr_1 [i_0] [i_0])) % (((/* implicit */int) arr_0 [(short)1] [i_0 + 2])))))))))));
    }
    for (unsigned short i_1 = 0; i_1 < 21; i_1 += 1) 
    {
        arr_5 [i_1] [i_1] &= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_4 [i_1])))) % ((+(arr_3 [i_1] [i_1])))));
        var_21 = ((/* implicit */unsigned long long int) min((((unsigned short) var_2)), (((/* implicit */unsigned short) min((((unsigned char) arr_4 [i_1])), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) < (arr_3 [(signed char)15] [(unsigned short)8])))))))));
    }
    var_22 = ((/* implicit */_Bool) (signed char)-124);
}
