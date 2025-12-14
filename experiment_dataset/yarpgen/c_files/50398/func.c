/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50398
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50398 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50398
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
    var_19 = 13265511755003261977ULL;
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        var_20 *= ((/* implicit */unsigned short) ((((arr_0 [i_0]) & (((/* implicit */unsigned int) ((/* implicit */int) var_3))))) * (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) 2841468485U))))))));
        var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)59146)) ? (((/* implicit */unsigned long long int) 4294967295U)) : (13265511755003262000ULL)));
        arr_2 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 11010848103444721636ULL)) ? (2657952638U) : (16777215U)))) ? (((/* implicit */unsigned long long int) max((var_1), (var_4)))) : (((13265511755003261979ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)245)))))));
    }
    for (unsigned int i_1 = 0; i_1 < 20; i_1 += 3) 
    {
        var_22 -= ((/* implicit */unsigned int) max((((((/* implicit */_Bool) min((var_11), (((/* implicit */unsigned long long int) var_2))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_3 [i_1])))), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 2973535052U)) || (((/* implicit */_Bool) arr_3 [7])))))) < (min((arr_4 [i_1]), (var_2))))))));
        arr_5 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1]))) < (var_2)));
        var_23 = ((((/* implicit */_Bool) ((unsigned int) (unsigned short)59136))) ? (((((/* implicit */_Bool) 3665625342U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)6415))) : (6793090575580482607ULL))) : (((/* implicit */unsigned long long int) min((arr_4 [i_1]), (arr_4 [i_1])))));
        var_24 = (~((~(536868864U))));
    }
}
