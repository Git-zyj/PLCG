/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4320
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4320 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4320
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
    var_19 &= var_15;
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    arr_9 [i_2] |= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_10))))) & (max((var_6), (((/* implicit */unsigned long long int) var_17))))));
                    /* LoopNest 2 */
                    for (short i_3 = 2; i_3 < 19; i_3 += 1) 
                    {
                        for (short i_4 = 3; i_4 < 19; i_4 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((var_7), (((/* implicit */unsigned int) var_18))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : ((-(var_4)))));
                                var_21 = ((/* implicit */short) var_12);
                                var_22 = ((/* implicit */unsigned short) var_5);
                                var_23 &= ((/* implicit */unsigned long long int) var_16);
                                var_24 = ((/* implicit */int) min((var_24), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) ((((/* implicit */unsigned long long int) var_13)) <= (var_2))))))));
                            }
                        } 
                    } 
                    arr_17 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */unsigned short) (~((~(((/* implicit */int) var_5))))));
                    var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((((/* implicit */int) (unsigned short)42855)) > (((/* implicit */int) (signed char)-57)))) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))))))));
                    arr_18 [i_2] = ((/* implicit */short) var_16);
                }
            } 
        } 
    } 
}
