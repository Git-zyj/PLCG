/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243187
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243187 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243187
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
    var_10 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-17458)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_2)))) ? (((/* implicit */long long int) min((((/* implicit */int) var_9)), (var_4)))) : (((((/* implicit */_Bool) (signed char)88)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))))) : (max((((((/* implicit */_Bool) var_2)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) != (15426232179185712481ULL))))))));
    var_11 -= ((/* implicit */long long int) ((((unsigned int) 2194728288256LL)) % (((/* implicit */unsigned int) ((int) ((signed char) var_4))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 21; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */short) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_4 [i_1] [i_1])))) ? (((((/* implicit */_Bool) (short)17161)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (6921960020179838530LL) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1]))))))))) || (((((/* implicit */_Bool) 2566162946770459592ULL)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [15] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1] [i_1]))) : (6921960020179838530LL))))))));
                arr_5 [i_0] [i_1] [i_1] = ((((/* implicit */_Bool) (unsigned char)60)) ? (((/* implicit */int) (short)-17458)) : (((/* implicit */int) (_Bool)1)));
                arr_6 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((unsigned int) (+(((/* implicit */int) var_1)))));
                var_13 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)0) ? (4571497724095927244ULL) : (13816054881887052184ULL)))) ? (((((/* implicit */unsigned long long int) -6948807904510536314LL)) ^ (var_5))) : (((/* implicit */unsigned long long int) arr_1 [i_0] [i_1]))))) ? (((((/* implicit */long long int) ((/* implicit */int) min((arr_3 [(short)20]), ((_Bool)0))))) * (((long long int) var_3)))) : (((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [10U])) / (((/* implicit */int) arr_4 [14ULL] [i_1]))))) ? (((((/* implicit */_Bool) arr_2 [20] [i_0 - 1] [20LL])) ? (-6921960020179838541LL) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [(unsigned char)20] [i_1]))))) : (((/* implicit */long long int) (~(((/* implicit */int) var_1)))))))));
            }
        } 
    } 
}
