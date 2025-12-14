/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235180
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
    var_14 = ((/* implicit */unsigned int) var_5);
    var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) max((var_11), (var_6)))) ^ (((/* implicit */int) ((unsigned short) var_2)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) -1)) ? (6637274700969595210ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)21237))))) : (((/* implicit */unsigned long long int) ((1268349707) | (-1540024134))))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        arr_2 [(short)8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_6)) : (var_13)))) ? (((((((/* implicit */_Bool) -2079677629)) ? (((/* implicit */int) (unsigned short)61999)) : (((/* implicit */int) (unsigned char)93)))) >> (((/* implicit */int) (!(((/* implicit */_Bool) 2079677629))))))) : ((-(2079677635)))));
        arr_3 [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_3)) ? (var_8) : (((/* implicit */int) var_10)))) >= (((/* implicit */int) ((var_5) >= (((/* implicit */int) var_3)))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 3) 
    {
        arr_7 [i_1] = ((/* implicit */int) (~((+(var_9)))));
        arr_8 [i_1] = ((/* implicit */int) ((unsigned long long int) (~(((/* implicit */int) var_4)))));
    }
}
