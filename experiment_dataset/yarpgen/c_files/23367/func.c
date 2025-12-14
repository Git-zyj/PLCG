/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23367
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23367 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23367
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 22; i_0 += 3) 
    {
        for (signed char i_1 = 2; i_1 < 21; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (short i_2 = 1; i_2 < 22; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 23; i_4 += 4) 
                        {
                            {
                                var_16 += var_9;
                                var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) ((_Bool) var_5)))));
                                var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) && ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) -3083330384395998869LL)) ? (((/* implicit */int) (unsigned short)28014)) : (((/* implicit */int) var_1)))))))));
                                arr_14 [i_0] [i_0] [i_0] [i_1] [i_4] = ((/* implicit */signed char) 13ULL);
                            }
                        } 
                    } 
                } 
                arr_15 [i_0] = (+(((((/* implicit */_Bool) arr_12 [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_1 + 2] [(unsigned char)21] [i_1] [i_0 + 1])) ? (max((((/* implicit */unsigned int) arr_10 [i_0] [i_1] [i_0] [i_1])), (var_9))) : (min((((/* implicit */unsigned int) arr_5 [i_0])), (var_2))))));
            }
        } 
    } 
    var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) var_11))));
    var_20 += ((/* implicit */unsigned int) (unsigned short)0);
    var_21 *= ((/* implicit */short) ((((((((/* implicit */_Bool) var_1)) ? (-8685915744142658126LL) : (((/* implicit */long long int) ((/* implicit */int) var_1))))) == (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)120)))))))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) max((var_14), (var_14))))) < ((~(var_15)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) var_0)), (14U)))))))));
}
