/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193975
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193975 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193975
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
    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((var_11) ? (((/* implicit */int) (unsigned char)253)) : (((/* implicit */int) (unsigned char)9))))))) ? (((/* implicit */int) ((short) min((3695524082616167579ULL), (((/* implicit */unsigned long long int) var_4)))))) : (((/* implicit */int) var_11))));
    /* LoopSeq 1 */
    for (signed char i_0 = 3; i_0 < 8; i_0 += 2) 
    {
        var_21 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_1 [i_0])), (arr_0 [i_0])))) ? ((~(13484424408428295967ULL))) : (min((((/* implicit */unsigned long long int) (unsigned char)253)), (arr_0 [3U])))))) ? (((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) var_10)) ? (var_8) : (16777200U))))) : (max((((/* implicit */unsigned long long int) arr_1 [i_0 - 2])), (max((arr_0 [i_0]), (((/* implicit */unsigned long long int) (unsigned char)251))))))));
        var_22 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) min((((/* implicit */unsigned int) (short)27687)), (arr_1 [i_0])))) ? (((arr_0 [i_0]) * (((/* implicit */unsigned long long int) var_7)))) : (((/* implicit */unsigned long long int) ((int) arr_1 [i_0]))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (+(((/* implicit */int) var_11)))))))));
    }
}
