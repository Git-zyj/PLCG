/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240927
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240927 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240927
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
    var_17 = ((/* implicit */unsigned int) ((max((((/* implicit */unsigned long long int) var_5)), (var_9))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_14) ^ (((/* implicit */long long int) ((/* implicit */int) var_11)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((18446744073709551615ULL) != (var_16))))) : (((var_1) & (((/* implicit */long long int) ((/* implicit */int) (signed char)127))))))))));
    var_18 |= ((/* implicit */long long int) ((((unsigned long long int) max(((signed char)127), (((/* implicit */signed char) (_Bool)1))))) != (((/* implicit */unsigned long long int) var_3))));
    var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) min((134217664U), (((/* implicit */unsigned int) var_13))))), (((var_9) >> (((var_5) + (4062600571298635932LL)))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) max(((signed char)110), (((/* implicit */signed char) (_Bool)0))))) && (((/* implicit */_Bool) (+(var_15)))))))) : (((((/* implicit */_Bool) var_4)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) max((var_7), (var_7)))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((((/* implicit */int) (signed char)120)) & (var_12))), (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))))))));
                var_20 = ((/* implicit */long long int) ((((/* implicit */int) var_10)) <= (((/* implicit */int) ((((/* implicit */_Bool) -1388320559)) || (((/* implicit */_Bool) arr_4 [i_0])))))));
                var_21 = ((/* implicit */unsigned short) var_5);
                var_22 = ((/* implicit */unsigned int) arr_1 [i_1]);
                var_23 = ((/* implicit */unsigned short) arr_4 [i_0]);
            }
        } 
    } 
    var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_14)) ? (var_3) : (var_3)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) : (((/* implicit */int) (short)-10820))));
}
