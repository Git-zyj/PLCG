/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242761
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242761 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242761
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
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (short)10980)) : (((/* implicit */int) var_14))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)250))) ^ (((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) - (var_5))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) ((unsigned int) (short)19258)))))));
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            var_17 += ((/* implicit */long long int) ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (short)-1)))) & (((((_Bool) 2147483647)) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)250)) < (((/* implicit */int) var_11))))) : (((/* implicit */int) ((unsigned char) arr_3 [i_0] [i_1])))))));
            var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_13)))) | (((((/* implicit */_Bool) var_2)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0])))))));
        }
        var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) arr_4 [i_0]))) << (((((/* implicit */int) ((unsigned char) arr_0 [i_0]))) - (36))))))));
        var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((742688356) / (((/* implicit */int) (unsigned char)5))))) ? (((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) arr_3 [i_0] [i_0])) : (((/* implicit */int) var_14)))) : (((/* implicit */int) ((signed char) var_12)))));
    }
    var_21 += ((/* implicit */signed char) ((unsigned char) 1497200921U));
    /* LoopSeq 1 */
    for (signed char i_2 = 0; i_2 < 23; i_2 += 1) 
    {
        arr_10 [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-24836)) ? (-786658594) : (((/* implicit */int) (unsigned char)250))))) ? (((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)5297))) & (var_2))) & (((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_2])) ? (2797766391U) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_9 [i_2]))))));
        arr_11 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */long long int) 1497200921U)) / (var_8))) < (((long long int) arr_8 [i_2])))))) % (((((var_2) + (9223372036854775807LL))) >> (((((/* implicit */int) arr_8 [i_2])) - (26110)))))));
    }
}
