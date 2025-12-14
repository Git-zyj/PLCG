/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37855
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37855 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37855
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 3; i_0 < 17; i_0 += 4) 
    {
        var_14 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_1 [i_0 + 2] [i_0 + 2])) ? (((/* implicit */int) arr_1 [i_0 + 1] [i_0 + 2])) : (((/* implicit */int) arr_1 [i_0 + 2] [i_0 + 1])))) == (((/* implicit */int) min((((/* implicit */short) (unsigned char)54)), ((short)-25922))))));
        var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_0 [i_0 - 1] [i_0])))))));
        var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) max((((/* implicit */int) min(((signed char)123), ((signed char)-103)))), ((~(((/* implicit */int) (signed char)-123)))))))));
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_1 = 2; i_1 < 16; i_1 += 1) 
    {
        arr_6 [i_1] [i_1 + 1] = ((/* implicit */unsigned char) ((short) arr_3 [i_1 - 2]));
        var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) ((unsigned int) arr_1 [i_1 + 1] [i_1 + 1])))));
        var_18 += ((/* implicit */unsigned char) ((long long int) (unsigned char)210));
    }
    for (long long int i_2 = 0; i_2 < 17; i_2 += 4) 
    {
        arr_10 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_2] [i_2])) ? (max((-1LL), (((/* implicit */long long int) (signed char)(-127 - 1))))) : (((/* implicit */long long int) (~(((/* implicit */int) arr_9 [i_2])))))));
        var_19 = ((/* implicit */short) (+(((/* implicit */int) max((arr_5 [i_2]), ((signed char)-125))))));
    }
    var_20 &= ((/* implicit */long long int) (((+(((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_11))))) == (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_9)) != (((((/* implicit */_Bool) (unsigned char)124)) ? (((/* implicit */int) (unsigned short)12345)) : (((/* implicit */int) var_10))))))))));
}
