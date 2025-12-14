/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249679
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249679 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249679
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
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        var_14 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)3))))) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : ((+(0)))))));
        var_15 ^= ((/* implicit */short) ((((/* implicit */int) arr_0 [i_0])) > (((((/* implicit */_Bool) -1LL)) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0]))))));
    }
    for (unsigned int i_1 = 0; i_1 < 24; i_1 += 4) 
    {
        var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((-1LL) + (((/* implicit */long long int) ((/* implicit */int) (signed char)48)))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)27059))) : (((506680892385347221LL) | (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))))));
        var_17 = ((/* implicit */unsigned char) var_3);
    }
    for (unsigned short i_2 = 0; i_2 < 16; i_2 += 4) 
    {
        arr_8 [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 27)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))) : (-1LL)))) ? ((-(((/* implicit */int) (signed char)-102)))) : (((/* implicit */int) ((_Bool) arr_7 [i_2] [i_2])))));
        var_18 ^= ((/* implicit */signed char) ((((/* implicit */int) min((((((/* implicit */_Bool) arr_2 [i_2])) && (((/* implicit */_Bool) (unsigned short)34593)))), (arr_6 [i_2])))) - (((/* implicit */int) ((short) (unsigned short)8695)))));
        arr_9 [i_2] [i_2] = ((/* implicit */unsigned short) ((var_2) / (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)34593)))))));
        arr_10 [i_2] = ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (unsigned short)0))));
    }
    var_19 = ((/* implicit */unsigned char) var_4);
}
