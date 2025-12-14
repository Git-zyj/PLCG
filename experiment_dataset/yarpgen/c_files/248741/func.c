/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248741
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248741 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248741
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
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        var_19 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 1415769848282322552ULL)) ? (((/* implicit */int) arr_2 [i_0])) : (var_14)));
        arr_3 [i_0] = ((((/* implicit */_Bool) (+(((/* implicit */int) (short)-19918))))) ? (((/* implicit */unsigned int) (((-(((/* implicit */int) (short)32767)))) ^ (((/* implicit */int) var_9))))) : (((unsigned int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (_Bool)1))))));
        var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) var_17))));
    }
    var_21 = max((((var_11) ? (min((((/* implicit */unsigned long long int) var_1)), (7ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_0) && (((/* implicit */_Bool) var_4)))))))), (((/* implicit */unsigned long long int) max((max((((/* implicit */unsigned int) (_Bool)1)), (2710352872U))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_6)))))))));
    var_22 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) ((unsigned int) 18446744073709551603ULL)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((154634795U), (((/* implicit */unsigned int) var_17))))) ? (((/* implicit */int) ((signed char) (signed char)100))) : (var_8)))) : (max((var_1), (((/* implicit */unsigned int) ((_Bool) (signed char)-126)))))));
}
