/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193334
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193334 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193334
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
    for (long long int i_0 = 3; i_0 < 13; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */int) ((unsigned int) ((var_7) < (((/* implicit */int) (short)32764)))));
        var_10 = ((/* implicit */signed char) max((((/* implicit */unsigned int) ((_Bool) (!((_Bool)1))))), (max(((+(arr_0 [i_0 - 2]))), (arr_1 [i_0 - 1])))));
    }
    for (unsigned int i_1 = 0; i_1 < 18; i_1 += 3) 
    {
        var_11 = ((/* implicit */int) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_6))))) : (max((arr_4 [i_1] [i_1]), (((/* implicit */unsigned int) arr_3 [i_1] [16ULL])))))) < (min((((((/* implicit */unsigned int) ((/* implicit */int) var_4))) * (arr_4 [i_1] [(unsigned short)8]))), (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (-1029861333))))))));
        var_12 += max((((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [(unsigned short)2] [(unsigned short)2])) & (((/* implicit */int) arr_3 [2U] [i_1]))))), ((~(((((/* implicit */_Bool) arr_4 [14U] [14U])) ? (arr_4 [(_Bool)1] [i_1]) : (4294967295U))))));
    }
    for (unsigned short i_2 = 2; i_2 < 17; i_2 += 4) 
    {
        arr_7 [i_2 - 2] = var_7;
        arr_8 [i_2 - 2] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max((((/* implicit */long long int) (unsigned short)24752)), (arr_5 [i_2 + 1] [i_2 + 1])))), (((unsigned long long int) ((unsigned short) (signed char)-39)))));
        var_13 = ((/* implicit */short) ((((/* implicit */long long int) var_1)) ^ (((((/* implicit */_Bool) arr_3 [i_2] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_2] [i_2]))) : ((-9223372036854775807LL - 1LL))))));
    }
    var_14 = ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (var_1) : (min((var_1), (((/* implicit */int) var_6))))));
}
