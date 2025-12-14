/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197568
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
    var_14 = ((((/* implicit */int) var_0)) | (min((((/* implicit */int) min((((/* implicit */unsigned char) (signed char)78)), ((unsigned char)31)))), (min((var_6), (((/* implicit */int) var_3)))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        var_15 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) ((13ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-92)))))) : (min((arr_0 [i_0] [i_0]), (((/* implicit */int) var_2)))))) : (((/* implicit */int) var_0))));
        var_16 = ((/* implicit */signed char) max((arr_0 [i_0] [i_0]), (((/* implicit */int) max((max(((unsigned char)163), (((/* implicit */unsigned char) arr_1 [i_0])))), (((/* implicit */unsigned char) arr_1 [9LL])))))));
        var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_0 [i_0] [i_0]), (((/* implicit */int) var_10))))) ? (min((((((/* implicit */_Bool) (short)-29748)) ? (((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])) : (var_4))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_1 [i_0]))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */int) var_0)), (arr_0 [i_0] [i_0])))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) arr_1 [(unsigned short)11]))))) : (((/* implicit */int) arr_1 [i_0])))))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 23; i_1 += 4) 
    {
        arr_4 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (2858939492139980744LL))) : (((/* implicit */long long int) arr_3 [i_1]))));
        arr_5 [i_1] [i_1] = 2102489349;
        arr_6 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_1] [i_1])) || (((/* implicit */_Bool) arr_3 [i_1]))));
        arr_7 [i_1] = ((/* implicit */int) ((arr_3 [i_1]) < (arr_3 [i_1])));
    }
    var_18 = ((/* implicit */signed char) (unsigned short)65535);
}
