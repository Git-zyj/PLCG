/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243468
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243468 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243468
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        var_10 = ((/* implicit */long long int) max((var_10), (((/* implicit */long long int) ((((/* implicit */long long int) max((arr_1 [i_0]), (arr_1 [(_Bool)1])))) == (((((/* implicit */_Bool) arr_1 [i_0])) ? (var_5) : (((/* implicit */long long int) arr_1 [i_0])))))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (int i_1 = 3; i_1 < 24; i_1 += 4) 
        {
            var_11 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((25U) >= (1355960199U))))) < ((+(arr_1 [i_0])))));
            var_12 = ((/* implicit */unsigned int) var_0);
            var_13 = ((/* implicit */unsigned int) (~(((arr_2 [i_1]) >> (0ULL)))));
            var_14 ^= ((/* implicit */unsigned long long int) arr_1 [i_1 - 2]);
            var_15 += ((/* implicit */unsigned char) (~(((/* implicit */int) (short)-5121))));
        }
        /* vectorizable */
        for (unsigned long long int i_2 = 2; i_2 < 24; i_2 += 2) 
        {
            var_16 = ((/* implicit */int) ((((arr_6 [i_2]) ? (arr_0 [i_0] [i_2]) : (arr_4 [i_0] [i_0]))) >= (((/* implicit */unsigned long long int) var_5))));
            var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) ((unsigned long long int) arr_2 [i_2 - 2])))));
            var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) (+(((long long int) arr_5 [(short)23] [(short)23])))))));
        }
        for (unsigned char i_3 = 0; i_3 < 25; i_3 += 4) 
        {
            arr_10 [i_0] [i_3] [i_3] = ((/* implicit */long long int) (+(((/* implicit */int) arr_9 [i_0] [i_3]))));
            var_19 = ((((((long long int) var_8)) + (9223372036854775807LL))) >> (((((arr_1 [i_0]) ^ (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)75)) >> (((-432582641) + (432582668)))))))) - (4003667208U))));
            var_20 |= ((/* implicit */unsigned char) (~(max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) 432582640))))), (1607877199U)))));
        }
    }
    for (short i_4 = 0; i_4 < 14; i_4 += 3) 
    {
        var_21 = ((/* implicit */_Bool) ((signed char) var_7));
        var_22 = ((/* implicit */unsigned long long int) max((var_22), (((((/* implicit */_Bool) (-(((/* implicit */int) arr_6 [i_4]))))) ? ((-(max((((/* implicit */unsigned long long int) (_Bool)0)), (1928577230188649775ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) max((((/* implicit */int) arr_7 [i_4] [i_4])), (22))))))))));
        var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)59698)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_4]))) : (arr_5 [i_4] [12])));
    }
    var_24 = ((((/* implicit */_Bool) 2687090096U)) ? (((((/* implicit */_Bool) max((((/* implicit */long long int) var_2)), (8589934591LL)))) ? (((((/* implicit */_Bool) var_8)) ? (-8589934592LL) : (((/* implicit */long long int) ((/* implicit */int) var_0))))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_4)))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (short)16383)) ? (((/* implicit */int) (unsigned short)5838)) : (((/* implicit */int) (unsigned short)29729))))));
    var_25 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (+(var_5)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (var_7))))) * (((/* implicit */long long int) ((((/* implicit */_Bool) max((-8388957588312328511LL), (((/* implicit */long long int) var_1))))) ? (max((((/* implicit */unsigned int) var_6)), (var_2))) : (3392968286U))))));
}
