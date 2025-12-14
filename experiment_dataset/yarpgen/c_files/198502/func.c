/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198502
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198502 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198502
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
    var_14 = ((((/* implicit */_Bool) min((var_5), (((/* implicit */unsigned long long int) var_2))))) ? (((/* implicit */int) ((short) max((-1LL), (((/* implicit */long long int) 2087275906)))))) : (((/* implicit */int) var_2)));
    var_15 = ((/* implicit */unsigned int) (~(min(((~(var_5))), (((/* implicit */unsigned long long int) var_2))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) <= (((unsigned int) 2087275906)));
        arr_3 [i_0] = ((/* implicit */signed char) (-(((/* implicit */int) (unsigned char)45))));
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_16 *= ((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_1 [i_1 - 1])) ? (((/* implicit */int) arr_1 [i_1 - 1])) : (((/* implicit */int) (signed char)-1))))));
            arr_8 [i_2] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1 - 1]))) == (((unsigned int) ((((/* implicit */_Bool) arr_4 [i_2] [i_1 - 1])) ? (((/* implicit */int) (unsigned char)55)) : (((/* implicit */int) (short)24720)))))));
            var_17 ^= ((/* implicit */_Bool) min((((/* implicit */unsigned int) max((((/* implicit */int) (unsigned char)56)), (695707444)))), (((((/* implicit */_Bool) -2087275906)) ? (3912833368U) : (966138459U)))));
            var_18 = ((/* implicit */int) max((var_18), ((+(((/* implicit */int) (signed char)0))))));
        }
        var_19 = ((/* implicit */int) (!(((/* implicit */_Bool) (~(min((2146435072U), (((/* implicit */unsigned int) arr_6 [i_1] [i_1])))))))));
    }
    var_20 = var_9;
}
