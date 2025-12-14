/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19402
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19402 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19402
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
    var_13 = (unsigned char)255;
    /* LoopSeq 2 */
    for (unsigned char i_0 = 2; i_0 < 13; i_0 += 4) 
    {
        arr_3 [i_0 + 1] = ((29574367U) | (5U));
        var_14 = ((/* implicit */unsigned char) ((var_10) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_0 [i_0 - 1]))))));
    }
    for (unsigned short i_1 = 0; i_1 < 18; i_1 += 2) 
    {
        var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) ((0ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0))))))));
        var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) (unsigned short)32905)), (((((/* implicit */_Bool) 18U)) ? (((/* implicit */int) (unsigned char)20)) : (((/* implicit */int) (unsigned short)5860))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) ((short) (unsigned short)0))) : (((/* implicit */int) (unsigned short)0))))) : ((-(max((arr_4 [6ULL]), (((/* implicit */unsigned long long int) (unsigned short)26439))))))));
        var_17 += ((/* implicit */unsigned long long int) ((long long int) min((arr_4 [i_1]), (((/* implicit */unsigned long long int) arr_5 [i_1])))));
        arr_6 [i_1] = ((/* implicit */long long int) var_0);
    }
}
