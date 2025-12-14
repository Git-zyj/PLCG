/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197066
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197066 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197066
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
    for (signed char i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        var_16 -= ((/* implicit */unsigned int) ((((((((/* implicit */int) arr_1 [i_0])) | (((/* implicit */int) (unsigned char)244)))) << ((((((-9223372036854775807LL - 1LL)) | (9223372036854775807LL))) + (19LL))))) * ((~(((/* implicit */int) arr_1 [i_0]))))));
        arr_4 [i_0] [i_0] = ((/* implicit */long long int) (+((~((-(arr_3 [i_0])))))));
        var_17 = ((/* implicit */unsigned char) ((long long int) (~((+(((/* implicit */int) (_Bool)0)))))));
        var_18 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)255)))))) & (max((((/* implicit */long long int) (unsigned char)38)), (9223372036854775807LL)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((long long int) arr_1 [i_0])) == (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)0))))))))) : (((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */long long int) arr_3 [i_0])) : (arr_0 [i_0])))));
    }
    for (unsigned int i_1 = 0; i_1 < 14; i_1 += 1) 
    {
        var_19 = ((/* implicit */signed char) ((((/* implicit */int) arr_1 [i_1])) >> (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1]))) >= (((arr_6 [i_1]) ? (((/* implicit */long long int) ((/* implicit */int) (short)14749))) : (9223372036854775807LL))))))));
        var_20 += ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1]))) / (571313812U)))) <= (((((/* implicit */long long int) arr_3 [i_1])) / (-9223372036854775805LL)))))) : (((/* implicit */int) max((((/* implicit */short) arr_2 [i_1])), (max((((/* implicit */short) arr_1 [i_1])), (arr_5 [i_1]))))))));
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */_Bool) ((arr_3 [i_1]) << (((/* implicit */int) arr_6 [i_1]))))) || (((/* implicit */_Bool) max((0U), (arr_3 [i_1])))))))));
    }
    var_21 = ((/* implicit */unsigned int) var_1);
}
