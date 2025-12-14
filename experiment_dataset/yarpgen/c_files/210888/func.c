/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210888
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210888 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210888
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
    var_13 = ((/* implicit */unsigned int) ((max((9390896726527171453ULL), (((/* implicit */unsigned long long int) (short)20099)))) >= (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_5)), (var_9)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)1))) | (3349028736U)))) : (((var_4) ? (var_12) : (8506518225661586899ULL)))))));
    var_14 = ((((/* implicit */int) ((((/* implicit */_Bool) min((9940225848047964701ULL), (((/* implicit */unsigned long long int) 813446425U))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))))) ^ (((/* implicit */int) min((((/* implicit */unsigned char) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) 4817932689378476381ULL))))), (max((var_1), (var_5)))))));
    var_15 = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((5849849191465498022ULL) <= (9940225848047964717ULL)))), (7ULL)));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (signed char i_1 = 2; i_1 < 9; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 2977839756541216004ULL)) && (((/* implicit */_Bool) -8629461924975061084LL)))))) != (((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))) | (arr_0 [(_Bool)1] [i_1 - 2]))) ^ (((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_0])) ? (arr_1 [i_0] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0])))))))));
                var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)65535)) - (((/* implicit */int) var_4))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) - (7336926052995473153ULL)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_10) : (((/* implicit */int) (signed char)-79))))) ? (min((((/* implicit */unsigned long long int) (short)23341)), (11109818020714078457ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max(((short)27729), (((/* implicit */short) (signed char)48)))))))) : (((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))) - (8506518225661586883ULL))) + (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) arr_4 [i_1 + 1]))))))))))));
            }
        } 
    } 
}
