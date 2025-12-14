/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197202
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197202 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197202
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
    var_15 = ((/* implicit */long long int) min((min((((/* implicit */unsigned long long int) min((((/* implicit */int) var_8)), (1903388304)))), (((var_14) >> (((var_5) - (16481292354223793323ULL))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)108)))))) ? (max((var_9), (((/* implicit */long long int) var_13)))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-2))))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 2; i_0 < 21; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_1 = 1; i_1 < 21; i_1 += 1) 
        {
            var_16 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min(((~(((/* implicit */int) (unsigned short)65535)))), (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_4 [(_Bool)1] [i_1] [i_1]))))))) ? (((((long long int) arr_4 [14LL] [i_1] [i_1])) - (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_1 [i_1] [(unsigned char)11])))))) : (((/* implicit */long long int) min((var_10), (((/* implicit */int) ((_Bool) 0ULL))))))));
            var_17 = arr_5 [i_0] [16U];
            arr_6 [i_0] [i_1] [i_0] = (((-(7684986254387560509LL))) - (((/* implicit */long long int) min((var_7), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 327624345U)) && (arr_1 [i_0] [i_0]))))))));
        }
        var_18 = ((((((arr_0 [(_Bool)1]) < (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) max((arr_2 [i_0]), ((signed char)-2)))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (-1903388305) : (((/* implicit */int) (_Bool)1)))))) == (((/* implicit */int) ((((/* implicit */int) arr_2 [i_0 + 2])) < (var_10)))));
        arr_7 [(unsigned char)0] |= ((/* implicit */unsigned char) arr_0 [i_0]);
    }
    var_19 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((268435455U) >> (((((((/* implicit */int) (unsigned short)45461)) << (((var_7) - (3620919302U))))) - (5818992)))))) ? (var_4) : (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_12)), (var_0))))));
    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_1)), (max((var_11), (((/* implicit */unsigned long long int) var_2))))))) ? (max((((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (_Bool)1)) : (var_10)))), (max((var_9), (((/* implicit */long long int) 3304286644U)))))) : (((/* implicit */long long int) ((unsigned int) var_6)))));
}
