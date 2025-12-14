/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4732
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4732 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4732
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
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        arr_3 [i_0] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)250))) : (max((arr_2 [i_0]), (((/* implicit */long long int) (_Bool)1))))))) ? ((((_Bool)0) ? ((+(((/* implicit */int) (unsigned short)50604)))) : (((((/* implicit */_Bool) 3ULL)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_10)))))) : (((/* implicit */int) (_Bool)1))));
        arr_4 [i_0] [i_0] = ((/* implicit */_Bool) (+((((_Bool)1) ? (((var_5) ? (arr_2 [i_0]) : (arr_2 [i_0]))) : (arr_2 [i_0])))));
    }
    var_13 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-60))))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) var_6)) : (var_12)))))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)111))))) ? ((~(((/* implicit */int) (signed char)-82)))) : (((/* implicit */int) (signed char)9)))) : (((((/* implicit */_Bool) 40331960683034258LL)) ? (min((-1919633384), (((/* implicit */int) var_10)))) : (((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (_Bool)1))))))));
    var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-16618)) ? (3557540710949572852LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */int) ((((/* implicit */int) ((-2936736543749948116LL) <= (((/* implicit */long long int) ((/* implicit */int) (signed char)-9)))))) != (((/* implicit */int) var_0))))) : (((/* implicit */int) var_4))));
    var_15 = min((max((((((/* implicit */_Bool) var_6)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))))))), (((/* implicit */long long int) max((var_6), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned char)100))))))));
}
