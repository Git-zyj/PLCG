/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195541
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195541 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195541
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
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))) + (((var_13) + (((/* implicit */long long int) ((/* implicit */int) var_3))))))) - (((/* implicit */long long int) ((/* implicit */int) var_2)))));
        arr_3 [i_0] [i_0] &= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) min((var_7), (((/* implicit */int) var_2))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-83)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_1))))))) ? (((/* implicit */int) min((arr_1 [13LL] [i_0]), (((/* implicit */short) (signed char)66))))) : ((-(((/* implicit */int) min((var_4), ((unsigned char)81))))))));
        arr_4 [(short)5] [(short)5] = ((/* implicit */long long int) min((min((((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)124))) : (arr_0 [i_0] [i_0]))), (((/* implicit */unsigned long long int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)-102)))))), (((/* implicit */unsigned long long int) max(((+(((/* implicit */int) var_4)))), (((/* implicit */int) min((((/* implicit */short) var_4)), (arr_1 [i_0] [i_0])))))))));
    }
    for (short i_1 = 0; i_1 < 17; i_1 += 3) 
    {
        arr_7 [i_1] [(signed char)2] = ((/* implicit */short) (_Bool)1);
        var_16 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) var_0)) | (-1)))) ? (((/* implicit */int) min((((/* implicit */short) (signed char)-13)), (arr_5 [i_1])))) : (((/* implicit */int) arr_5 [i_1]))));
    }
    var_17 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(((/* implicit */int) max((var_1), (((/* implicit */unsigned char) var_11))))))))));
}
