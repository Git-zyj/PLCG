/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224927
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224927 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224927
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
    var_14 = ((/* implicit */unsigned short) var_8);
    var_15 = ((/* implicit */short) (unsigned char)181);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        var_16 += ((/* implicit */short) var_2);
        var_17 ^= ((((/* implicit */_Bool) (((-(((/* implicit */int) (unsigned short)37262)))) * (((((/* implicit */int) (unsigned char)167)) | (((/* implicit */int) var_7))))))) ? (((arr_1 [i_0]) ? (288230375614840832LL) : (((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_0])) / (((/* implicit */int) (_Bool)1))))))) : (((/* implicit */long long int) ((((((/* implicit */_Bool) -6344042357331778310LL)) ? (12U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0]))))) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))));
    }
    for (unsigned int i_1 = 0; i_1 < 17; i_1 += 4) 
    {
        arr_7 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_1] [i_1]))))) ? (min((((((/* implicit */_Bool) arr_5 [(signed char)1])) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))), ((+(0U))))) : (max((4194303U), (((/* implicit */unsigned int) (short)-6363))))));
        var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) (-9223372036854775807LL - 1LL)))));
    }
    var_19 = var_0;
}
