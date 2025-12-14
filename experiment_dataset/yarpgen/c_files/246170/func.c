/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246170
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246170 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246170
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
    var_12 = ((/* implicit */unsigned short) min((min((((/* implicit */unsigned long long int) 4611123068473966592LL)), ((~(7745787964015576670ULL))))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (_Bool)1)), (var_10))))));
    var_13 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) max((var_11), (((/* implicit */long long int) max((var_5), (var_9))))))) > (min((min((((/* implicit */unsigned long long int) var_4)), (7745787964015576675ULL))), (((/* implicit */unsigned long long int) var_1))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) var_3);
        var_14 = var_3;
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) || (((/* implicit */_Bool) arr_1 [i_0] [i_0])))))) >= (((arr_1 [i_0] [i_0]) / (arr_1 [i_0] [i_0])))));
        var_15 += ((/* implicit */signed char) ((((/* implicit */_Bool) min((var_3), (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)61931)))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : ((+(var_8)))));
        var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-115)) ? (((/* implicit */int) (signed char)-96)) : (((((/* implicit */int) (signed char)114)) | (((/* implicit */int) ((signed char) (signed char)-101)))))));
    }
}
