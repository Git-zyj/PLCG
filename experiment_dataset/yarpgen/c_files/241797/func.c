/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241797
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241797 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241797
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
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((var_0) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))) >= (((((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) var_3)))) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))));
    var_17 = ((/* implicit */unsigned short) ((unsigned int) var_12));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        var_18 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */short) (unsigned char)64)), (arr_0 [i_0])))) || (((/* implicit */_Bool) ((((/* implicit */int) var_12)) * (994247885))))))) <= (((/* implicit */int) ((unsigned short) (unsigned char)98)))));
        var_19 ^= ((/* implicit */signed char) (short)-17039);
        var_20 |= ((/* implicit */signed char) (~(((((/* implicit */int) arr_0 [i_0])) << (((((/* implicit */int) arr_0 [i_0])) - (4772)))))));
        var_21 += ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_10)) : (((((/* implicit */int) (unsigned char)65)) / (((/* implicit */int) (unsigned char)64))))))));
    }
    for (int i_1 = 0; i_1 < 14; i_1 += 3) 
    {
        arr_5 [i_1] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) max((arr_0 [i_1]), (arr_0 [i_1])))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)6))) : (29U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_0 [i_1])))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) * (var_0)))))));
        var_22 ^= ((/* implicit */unsigned long long int) max((((long long int) arr_0 [i_1])), (arr_3 [i_1])));
        var_23 = ((/* implicit */unsigned short) (+(min((((/* implicit */unsigned int) var_9)), (arr_1 [i_1])))));
    }
}
