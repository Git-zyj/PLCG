/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42590
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42590 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42590
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
    var_12 = var_3;
    var_13 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((short) var_3))), (((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)0))))) ? (min((((/* implicit */unsigned long long int) var_9)), (var_4))) : (((/* implicit */unsigned long long int) ((int) 1513126809)))))));
    var_14 = ((/* implicit */unsigned int) var_4);
    var_15 = ((/* implicit */unsigned long long int) (+(max((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_5)) : (var_0))), (((/* implicit */int) ((short) 7549174833811906770LL)))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) ((((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) 5258743121021155520ULL)) ? (((/* implicit */int) arr_1 [i_0] [15U])) : (((/* implicit */int) arr_0 [i_0] [i_0])))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) max(((signed char)-126), (var_5))))))) : (max(((~(((/* implicit */int) (signed char)-126)))), (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) var_7)) : (-618823412))))))))));
        var_17 *= min((arr_3 [11] [i_0]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max(((unsigned short)14075), (((/* implicit */unsigned short) (short)0))))) ? (((/* implicit */int) arr_1 [19LL] [i_0])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0])))))))));
    }
    for (long long int i_1 = 0; i_1 < 15; i_1 += 1) 
    {
        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_4 [i_1]))))) ? (((((/* implicit */_Bool) ((signed char) (signed char)127))) ? (((/* implicit */unsigned int) min((63), (((/* implicit */int) (signed char)48))))) : (((unsigned int) arr_2 [i_1])))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) 536870911LL))) ? (((/* implicit */int) arr_4 [i_1])) : (1801941343))))));
        var_19 = ((/* implicit */unsigned short) ((short) (!(((/* implicit */_Bool) arr_3 [i_1] [i_1])))));
    }
}
