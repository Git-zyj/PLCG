/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5206
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5206 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5206
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
    var_10 *= ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) var_2)))) ? (((((/* implicit */_Bool) var_5)) ? (var_9) : (((/* implicit */int) var_1)))) : (1343038976)))), (4294967295U)));
    var_11 = ((/* implicit */unsigned int) var_6);
    var_12 = ((/* implicit */_Bool) ((short) ((var_1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_2)) > (var_0))))) : ((~(18446744073709551603ULL))))));
    var_13 = ((/* implicit */signed char) var_9);
    /* LoopNest 3 */
    for (signed char i_0 = 4; i_0 < 19; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 18; i_4 += 4) 
                        {
                            {
                                var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) min((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_7 [i_0 + 1] [i_4 - 1])) : (((/* implicit */int) var_6)))), (((((/* implicit */_Bool) arr_7 [i_0 + 1] [i_4 + 3])) ? (((/* implicit */int) var_3)) : ((-2147483647 - 1)))))))));
                                arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] &= ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_12 [i_4 + 2] [i_0 - 1] [i_2] [i_3] [i_4] [i_1]))))) ? (((((/* implicit */_Bool) var_0)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) & (14900235975680070679ULL))) : (((unsigned long long int) 5357544835139541455ULL)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!((!(((/* implicit */_Bool) var_0))))))))));
                                arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] &= ((/* implicit */signed char) max((18446744073709551592ULL), (((/* implicit */unsigned long long int) 13U))));
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */unsigned short) ((((/* implicit */int) ((short) (+(49152))))) % ((-(((/* implicit */int) arr_5 [i_0] [i_1] [i_0]))))));
                    var_16 += ((/* implicit */unsigned short) (~(((((/* implicit */int) arr_11 [i_0 - 3])) ^ (((/* implicit */int) arr_11 [i_0 + 1]))))));
                }
            } 
        } 
    } 
}
