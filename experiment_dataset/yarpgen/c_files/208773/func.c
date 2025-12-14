/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208773
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208773 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208773
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
    var_14 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */long long int) (-(var_3)))) / (var_9)))) ? (((/* implicit */unsigned int) var_8)) : (var_10)));
    var_15 += ((/* implicit */unsigned int) var_0);
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        var_16 = ((((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)15))))) == (((/* implicit */long long int) var_10)))))) | (min((((((/* implicit */long long int) var_10)) & (arr_1 [i_0]))), (((/* implicit */long long int) 3459874024U)))));
        var_17 = ((/* implicit */unsigned int) ((min((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) var_2)) : (var_9))), (arr_1 [i_0]))) >= (((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) == (3459874024U))) ? (min((arr_1 [10ULL]), (((/* implicit */long long int) var_13)))) : (((/* implicit */long long int) ((/* implicit */int) ((3459874024U) > (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))))));
        arr_3 [i_0] = ((/* implicit */signed char) arr_1 [i_0]);
        arr_4 [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_0])) * (((/* implicit */int) arr_0 [i_0])))))));
    }
    for (unsigned int i_1 = 0; i_1 < 13; i_1 += 2) 
    {
        var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) (unsigned char)241))) ? (((((/* implicit */int) arr_7 [(_Bool)1])) * (((/* implicit */int) arr_7 [i_1])))) : ((~(((/* implicit */int) arr_7 [i_1])))))))));
        arr_9 [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)255)) - ((+(((/* implicit */int) max(((unsigned char)254), ((unsigned char)192))))))));
        arr_10 [i_1] [i_1] = ((/* implicit */unsigned long long int) var_6);
        arr_11 [i_1] [i_1] = ((/* implicit */_Bool) var_13);
        var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) arr_7 [(unsigned short)5]))));
    }
}
