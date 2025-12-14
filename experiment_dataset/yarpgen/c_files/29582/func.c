/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29582
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29582 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29582
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
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        var_12 = ((/* implicit */_Bool) (-(((/* implicit */int) var_8))));
        arr_3 [i_0] = ((/* implicit */signed char) (((~(((/* implicit */int) arr_1 [i_0])))) * (((/* implicit */int) arr_2 [i_0] [i_0]))));
        var_13 = ((/* implicit */int) ((short) 1466147533U));
    }
    for (unsigned long long int i_1 = 2; i_1 < 15; i_1 += 4) 
    {
        arr_7 [i_1 - 2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 2828819763U)) * (5796075718504311421ULL)))) && (((/* implicit */_Bool) max((((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)78))))), (arr_4 [4ULL]))))));
        var_14 = ((/* implicit */_Bool) var_6);
        var_15 = ((/* implicit */_Bool) 2828819757U);
        var_16 += ((((/* implicit */_Bool) ((((arr_6 [i_1 + 1] [i_1 + 4]) + (9223372036854775807LL))) >> (((/* implicit */int) arr_5 [i_1 + 1]))))) ? (((((/* implicit */_Bool) arr_4 [i_1 - 2])) ? (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)65535))))) : (arr_6 [i_1] [i_1 + 2]))) : (((/* implicit */long long int) ((((unsigned int) var_6)) * (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-13)))))))));
    }
    var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) max(((!(((/* implicit */_Bool) (signed char)24)))), (((var_1) && ((!(((/* implicit */_Bool) 7ULL)))))))))));
    var_18 = ((/* implicit */unsigned long long int) ((var_0) ? ((+(((((/* implicit */int) (unsigned char)85)) % (var_9))))) : (max((var_9), (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-104)))))))));
}
