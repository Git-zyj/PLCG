/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37450
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37450 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37450
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
    var_19 = ((/* implicit */unsigned short) (+(5416646821102235835ULL)));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        arr_4 [(unsigned short)10] = ((/* implicit */unsigned short) (((+(((((/* implicit */_Bool) 1073676288U)) ? (5416646821102235835ULL) : (((/* implicit */unsigned long long int) var_9)))))) != (((/* implicit */unsigned long long int) min((((/* implicit */int) arr_1 [i_0])), ((~(((/* implicit */int) var_18)))))))));
        var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) ((((/* implicit */int) ((13030097252607315766ULL) < (13030097252607315766ULL)))) < (((/* implicit */int) max((arr_1 [i_0]), ((short)16565))))))) : ((((-(((/* implicit */int) var_8)))) ^ ((~(((/* implicit */int) arr_3 [i_0] [i_0]))))))));
        var_21 = ((/* implicit */unsigned short) (-((-(((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (short)16565)) : (((/* implicit */int) arr_1 [i_0]))))))));
        var_22 += ((/* implicit */unsigned char) min((arr_0 [i_0]), (((/* implicit */long long int) ((((((/* implicit */int) min((var_12), (((/* implicit */short) arr_2 [i_0]))))) + (2147483647))) << (((((/* implicit */int) (signed char)127)) - (127))))))));
        var_23 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned short) ((((/* implicit */unsigned long long int) 3989677022U)) & (13030097252607315781ULL)))))));
    }
    for (unsigned long long int i_1 = 1; i_1 < 15; i_1 += 3) 
    {
        var_24 = ((/* implicit */unsigned short) max((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-127))) / (14U))))))), (((arr_2 [i_1 - 1]) ? (((/* implicit */int) arr_5 [i_1 - 1])) : (((/* implicit */int) arr_2 [i_1 + 1]))))));
        var_25 = ((/* implicit */signed char) max((((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1 + 1]))) & (arr_0 [i_1 + 1]))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_0 [i_1 - 1]) >> (((arr_0 [i_1]) - (5871816709741418406LL)))))) ? (((/* implicit */int) arr_6 [i_1 - 1])) : (((/* implicit */int) arr_5 [i_1 + 1])))))));
    }
}
