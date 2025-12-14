/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2127
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2127 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2127
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
    var_19 = ((/* implicit */signed char) min((((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)19299))) == (11621613259561189588ULL))))) : (((((/* implicit */_Bool) var_2)) ? (var_10) : (((/* implicit */unsigned long long int) 3183987795U)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_15) + (((/* implicit */unsigned int) ((/* implicit */int) (signed char)47)))))) ? (max((124382361U), (((/* implicit */unsigned int) var_12)))) : (max((((/* implicit */unsigned int) (unsigned char)255)), (3183987795U))))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        var_20 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)244)), (arr_0 [i_0])))) == (((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (signed char)-1)))))))) * (((((/* implicit */_Bool) (short)-2128)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) != (((/* implicit */int) (unsigned char)251)))))) : (max((((/* implicit */unsigned int) arr_1 [i_0] [i_0])), (4170584935U)))))));
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) (+((-(max((2789511679552896211ULL), (((/* implicit */unsigned long long int) arr_1 [i_0] [i_0]))))))));
        var_21 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_0 [i_0]))));
        var_22 = ((/* implicit */signed char) (+(((/* implicit */int) arr_0 [i_0]))));
        var_23 *= ((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((unsigned long long int) arr_1 [i_0] [i_0])) : (((/* implicit */unsigned long long int) min((2972157074U), (((/* implicit */unsigned int) (unsigned short)53822))))))));
    }
}
