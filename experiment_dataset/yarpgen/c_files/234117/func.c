/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234117
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234117 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234117
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) (((((!(((/* implicit */_Bool) arr_1 [i_0])))) ? (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-19)) || (((/* implicit */_Bool) (short)-27110))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)53249))))))) ^ (((/* implicit */int) max((((/* implicit */unsigned short) arr_0 [i_0])), ((unsigned short)25))))));
        var_14 = ((/* implicit */signed char) min((var_14), (arr_0 [i_0])));
        var_15 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_0])) - (((/* implicit */int) arr_2 [i_0])))))));
    }
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */int) (unsigned char)229)) > (((/* implicit */int) (unsigned short)53274)))) ? (((/* implicit */int) min(((unsigned short)53236), ((unsigned short)12310)))) : (((((/* implicit */int) (unsigned short)12286)) ^ (((/* implicit */int) (unsigned short)53244))))))) || (((/* implicit */_Bool) (((!(((/* implicit */_Bool) (unsigned short)53242)))) ? (((((/* implicit */int) (unsigned short)12298)) << (((((/* implicit */int) (unsigned short)53258)) - (53257))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) (unsigned short)59913))))))))));
    var_17 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) var_9)), (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)12294))) / (3557339242U)))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) var_13)) : (36028762659225600ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) -4612562331421285682LL)) || (((/* implicit */_Bool) (unsigned short)53235))))))))));
}
