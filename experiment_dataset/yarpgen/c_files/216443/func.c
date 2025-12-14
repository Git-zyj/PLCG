/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216443
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216443 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216443
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
    var_18 = ((/* implicit */unsigned int) ((min((((((/* implicit */_Bool) var_9)) ? (var_12) : (((/* implicit */unsigned long long int) var_15)))), (((/* implicit */unsigned long long int) var_17)))) | (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)91)))));
    var_19 = ((/* implicit */int) ((short) (short)-21310));
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 23; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (signed char i_2 = 1; i_2 < 23; i_2 += 4) 
            {
                {
                    var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) (~(min((((/* implicit */long long int) ((((/* implicit */_Bool) 1574643573U)) ? (1574643573U) : (2720323722U)))), (((((/* implicit */long long int) 1574643573U)) / (var_3))))))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 24; i_4 += 1) 
                        {
                            {
                                var_21 -= ((/* implicit */signed char) (-(((((/* implicit */_Bool) 2720323717U)) ? ((+(((/* implicit */int) (signed char)3)))) : ((~(((/* implicit */int) (signed char)-92))))))));
                                arr_14 [0LL] [i_0] [i_2] [i_0] [i_0 - 1] = max((((unsigned long long int) 11778200082095652337ULL)), (((/* implicit */unsigned long long int) ((long long int) (!(((/* implicit */_Bool) 5703028628852086876LL)))))));
                                var_22 = ((/* implicit */long long int) ((int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_13)), (var_16)))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)92))))) : (max((((/* implicit */unsigned long long int) 1822066271)), (6668543991613899278ULL))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */long long int) ((signed char) (!(((/* implicit */_Bool) (short)19868)))));
    var_24 = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (var_12)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_14)))) : (min((((/* implicit */unsigned long long int) (signed char)-122)), (6668543991613899279ULL))))));
}
