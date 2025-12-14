/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242055
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242055 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242055
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
    var_15 = ((/* implicit */unsigned short) var_0);
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) ((int) (+(max((((/* implicit */unsigned int) (signed char)67)), (var_0)))))))));
        arr_4 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (-1459460553) : (((/* implicit */int) (unsigned short)21101))))) ? (((/* implicit */int) ((short) ((((/* implicit */int) var_1)) ^ (((/* implicit */int) (signed char)0)))))) : (((/* implicit */int) ((signed char) (+(((/* implicit */int) var_1))))))));
        var_17 ^= ((/* implicit */short) max((var_0), (((/* implicit */unsigned int) ((unsigned char) arr_1 [i_0])))));
    }
    for (unsigned int i_1 = 0; i_1 < 21; i_1 += 3) 
    {
        arr_8 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_11)), (arr_6 [i_1] [i_1])))) || (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (14316319082606325632ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)21059)))))) && (((/* implicit */_Bool) max((var_0), (var_5))))))));
        var_18 = ((var_13) / (((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_1] [i_1])) ? (((/* implicit */int) arr_6 [i_1] [i_1])) : (((/* implicit */int) arr_6 [i_1] [i_1]))))));
        var_19 += ((((/* implicit */int) ((short) (signed char)-79))) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_1] [i_1]))))));
    }
    var_20 = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */int) var_3)) * (((/* implicit */int) (short)-21060)))));
    var_21 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) ((signed char) (unsigned short)0)))));
}
