/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50407
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50407 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50407
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
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 12; i_1 += 2) 
        {
            {
                arr_5 [i_1] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(var_6)))) ? (((/* implicit */int) (_Bool)1)) : ((~(((int) var_11))))));
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (signed char i_3 = 3; i_3 < 12; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 15; i_4 += 3) 
                        {
                            {
                                arr_16 [i_3] [i_2] [i_3 + 2] = ((/* implicit */signed char) arr_9 [i_0] [i_0]);
                                var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) (~(1825151093))))));
                                var_16 = ((/* implicit */unsigned short) arr_14 [i_0] [i_2] [i_2] [i_1 - 1] [i_0]);
                            }
                        } 
                    } 
                } 
                arr_17 [i_0] [2U] [i_0] = ((/* implicit */int) var_7);
                var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_4)))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)10567)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (var_9)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (_Bool)1))))) ? (min((var_7), (((/* implicit */unsigned long long int) var_14)))) : (((/* implicit */unsigned long long int) max((var_9), (((/* implicit */unsigned int) (signed char)-18)))))))));
    var_19 ^= var_3;
}
