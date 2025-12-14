/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222175
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222175 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222175
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
    for (unsigned int i_0 = 2; i_0 < 12; i_0 += 4) 
    {
        var_15 = ((/* implicit */unsigned int) (((+(6743836211084396046ULL))) & (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)105)))));
        var_16 = ((/* implicit */unsigned int) min((arr_0 [i_0] [i_0 + 2]), (arr_0 [i_0] [(unsigned char)3])));
        arr_3 [i_0 - 1] = (+(((/* implicit */int) (unsigned char)8)));
    }
    /* vectorizable */
    for (unsigned int i_1 = 4; i_1 < 11; i_1 += 3) /* same iter space */
    {
        var_17 = var_9;
        arr_7 [i_1] = ((/* implicit */_Bool) (-(var_9)));
        var_18 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_13) : (((/* implicit */unsigned long long int) var_12))))) ? (((/* implicit */int) ((short) var_12))) : (((/* implicit */int) var_2)));
        arr_8 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */int) (unsigned short)53666)) << (((((/* implicit */int) (signed char)-9)) + (9))))) : (((/* implicit */int) ((var_7) == (((/* implicit */unsigned long long int) var_3)))))));
        arr_9 [i_1] [i_1] = ((/* implicit */short) var_1);
    }
    for (unsigned int i_2 = 4; i_2 < 11; i_2 += 3) /* same iter space */
    {
        arr_12 [(unsigned short)1] [(unsigned char)11] = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 2016)) || (((/* implicit */_Bool) (signed char)67)))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_5 [i_2] [(signed char)0]))))) ? (((((/* implicit */_Bool) arr_10 [i_2 - 3] [i_2 - 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_12))) : (((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) 2147483647))))))))));
        arr_13 [i_2] = ((/* implicit */unsigned long long int) (-(((((/* implicit */int) var_1)) + (((/* implicit */int) arr_5 [i_2 + 1] [2]))))));
    }
    var_19 = ((/* implicit */int) ((((/* implicit */_Bool) 261888U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-9))) : (3032287146U)));
}
