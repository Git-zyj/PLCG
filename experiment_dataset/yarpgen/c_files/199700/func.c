/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199700
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199700 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199700
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
    var_17 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)16736)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)255))))) && (((/* implicit */_Bool) var_1))));
    /* LoopSeq 1 */
    for (short i_0 = 3; i_0 < 16; i_0 += 3) 
    {
        arr_4 [i_0 - 1] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_1 [i_0 - 3])) ? (((/* implicit */int) arr_2 [i_0 + 1])) : (((/* implicit */int) var_0)))), (((/* implicit */int) min((arr_2 [i_0 - 3]), (arr_1 [i_0 - 2]))))));
        arr_5 [i_0 - 1] = ((/* implicit */_Bool) ((((/* implicit */int) (signed char)3)) % (((/* implicit */int) (short)32754))));
        arr_6 [i_0] [i_0 - 1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_0 - 3])) ? (((((/* implicit */_Bool) arr_3 [i_0 + 1])) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 - 2] [i_0 - 3]))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_2 [i_0 + 1])))))));
    }
    var_18 &= ((/* implicit */unsigned short) var_4);
    var_19 = ((/* implicit */unsigned long long int) ((((((((/* implicit */int) var_13)) % (((/* implicit */int) var_11)))) == ((((_Bool)0) ? (((/* implicit */int) (signed char)-124)) : (((/* implicit */int) (unsigned short)53786)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : ((~((-(3780625276U)))))));
    var_20 ^= ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) ((var_9) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_10))))))) ? (min((2397180791U), (((/* implicit */unsigned int) min((((/* implicit */int) (short)8188)), (2097024)))))) : (((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_14)))) ^ ((~(((/* implicit */int) var_7)))))))));
}
