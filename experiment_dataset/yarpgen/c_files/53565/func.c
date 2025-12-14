/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53565
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
    var_19 = var_13;
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */short) (-(((/* implicit */int) ((arr_0 [i_0]) == (arr_0 [i_0]))))));
        var_20 *= ((/* implicit */short) ((((((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) (unsigned short)13660)) : (((/* implicit */int) arr_1 [i_0] [i_0])))) < (((/* implicit */int) ((((/* implicit */int) var_7)) == (((/* implicit */int) var_4))))))) ? (((((/* implicit */_Bool) (unsigned short)37857)) ? (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (arr_0 [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (unsigned short)40606))))));
        var_21 -= ((/* implicit */unsigned short) min((max((((/* implicit */unsigned long long int) (unsigned short)65534)), (arr_0 [i_0]))), (((((unsigned long long int) var_1)) | (((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) + (((/* implicit */int) (unsigned short)40594)))))))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_3)) & (((/* implicit */int) arr_1 [i_0] [i_0]))))) ? (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_0] [i_0])))) : (((/* implicit */int) arr_1 [i_0] [i_0]))));
    }
}
