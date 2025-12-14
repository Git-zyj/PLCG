/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208171
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208171 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208171
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
    var_20 = ((/* implicit */unsigned int) min((var_20), (var_17)));
    var_21 = ((/* implicit */unsigned int) var_3);
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        var_22 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) 1571991763)), ((+(((unsigned long long int) -22))))));
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) arr_1 [i_0] [i_0]);
        arr_4 [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [i_0])))) * (min((((/* implicit */int) arr_2 [i_0])), (((((/* implicit */_Bool) arr_0 [(unsigned short)1])) ? (((/* implicit */int) arr_2 [i_0])) : (arr_1 [i_0] [(short)6])))))));
    }
    for (unsigned long long int i_1 = 2; i_1 < 20; i_1 += 3) 
    {
        var_23 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1 - 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)254))) : (261888U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((arr_5 [i_1 - 1]), (arr_6 [i_1 - 2]))))) : (min((((/* implicit */unsigned int) arr_5 [i_1 - 2])), (((unsigned int) (_Bool)1))))));
        arr_7 [i_1] [i_1 - 2] = ((/* implicit */int) arr_5 [i_1]);
        arr_8 [i_1] = ((/* implicit */unsigned long long int) (+(min((((((/* implicit */int) (_Bool)0)) * (((/* implicit */int) (unsigned short)36657)))), (((/* implicit */int) arr_5 [i_1 - 2]))))));
        var_24 *= ((/* implicit */short) min(((+(((/* implicit */int) var_1)))), ((+(((/* implicit */int) arr_5 [i_1 - 1]))))));
    }
}
