/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27126
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27126 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27126
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
    var_20 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) 9319458715246164885ULL)))))))) % (((((/* implicit */_Bool) (~(15216774492945658646ULL)))) ? (11344274279452781579ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)60153)))))));
    var_21 = ((/* implicit */short) var_9);
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((var_13), (((/* implicit */long long int) ((((/* implicit */int) var_19)) ^ (((/* implicit */int) arr_1 [(unsigned char)1])))))))) ? (2778126421U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_14)) ? (((((/* implicit */int) var_3)) - (((/* implicit */int) arr_2 [i_0] [i_0])))) : (((/* implicit */int) var_9)))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) arr_2 [i_0] [i_0])) > (((/* implicit */int) (signed char)-37))))) & (((/* implicit */int) (_Bool)0))));
        var_23 ^= ((unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-27002))));
    }
}
