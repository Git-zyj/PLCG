/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39426
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39426 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39426
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
    var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)13572))))) ? (((/* implicit */unsigned long long int) max((max((var_9), (((/* implicit */int) var_2)))), (((/* implicit */int) ((4294967295U) != (((/* implicit */unsigned int) ((/* implicit */int) var_10))))))))) : (((((((/* implicit */_Bool) var_14)) ? (var_4) : (var_4))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0)))))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 2; i_0 < 22; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)240))) ^ (-5298589437647967764LL))) / (((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0])))))));
        var_16 |= ((/* implicit */unsigned long long int) (~(((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)0)), ((unsigned char)255))))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 25; i_1 += 3) /* same iter space */
    {
        var_17 |= ((/* implicit */signed char) var_2);
        arr_6 [i_1] = ((/* implicit */unsigned char) (~(-5298589437647967771LL)));
    }
    for (unsigned short i_2 = 0; i_2 < 25; i_2 += 3) /* same iter space */
    {
        var_18 = ((/* implicit */signed char) (+(((((((/* implicit */_Bool) 1234622971U)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_10)))) / (((/* implicit */int) ((((/* implicit */int) var_1)) >= (((/* implicit */int) var_6)))))))));
        var_19 = ((/* implicit */unsigned int) (((~(var_11))) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_3)) > (((/* implicit */int) arr_10 [i_2] [i_2]))))))));
        var_20 += ((/* implicit */signed char) ((((((/* implicit */_Bool) (signed char)109)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-15349))) : (-8793765023089970037LL))) % (((/* implicit */long long int) (~(((/* implicit */int) var_14)))))));
        arr_11 [(unsigned short)13] = ((/* implicit */long long int) ((short) -5298589437647967771LL));
        arr_12 [i_2] [i_2] = ((((/* implicit */unsigned int) (((_Bool)0) ? (((/* implicit */int) (unsigned char)63)) : (((/* implicit */int) (signed char)-38))))) > ((+((-(arr_8 [i_2]))))));
    }
}
