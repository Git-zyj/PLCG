/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23240
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23240 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23240
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
    var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) ((((/* implicit */_Bool) (-(var_8)))) ? ((((~(((/* implicit */int) var_3)))) / (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_7)) : (var_9))))) : (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) (signed char)-69)), (3960820974517368046LL))))))))))));
    var_15 = ((/* implicit */unsigned long long int) var_3);
    var_16 = ((/* implicit */long long int) var_10);
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        var_17 ^= ((/* implicit */short) ((((((10139594747014600228ULL) ^ (var_0))) | (((/* implicit */unsigned long long int) 1430557647)))) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))));
        var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))) | (var_4))))));
        var_19 = ((/* implicit */unsigned long long int) min((var_19), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) * (((((/* implicit */_Bool) ((var_1) ^ (((/* implicit */unsigned long long int) arr_0 [i_0]))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_5))))) : (((unsigned long long int) var_7))))))));
    }
    for (unsigned char i_1 = 0; i_1 < 23; i_1 += 4) 
    {
        arr_6 [i_1] = (!(((((/* implicit */_Bool) arr_4 [i_1])) || (((/* implicit */_Bool) 2147483644)))));
        var_20 = ((/* implicit */int) arr_5 [i_1]);
    }
    /* vectorizable */
    for (unsigned short i_2 = 0; i_2 < 17; i_2 += 4) 
    {
        var_21 = ((/* implicit */int) min((var_21), (((((((/* implicit */int) var_13)) == (((/* implicit */int) (unsigned char)202)))) ? (((/* implicit */int) ((((/* implicit */int) (signed char)118)) == (((/* implicit */int) var_5))))) : ((+(((/* implicit */int) arr_4 [i_2]))))))));
        arr_10 [i_2] = ((((/* implicit */int) var_3)) ^ (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (short)-32767)) : (((/* implicit */int) var_13)))));
    }
}
