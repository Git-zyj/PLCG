/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51974
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51974 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51974
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
    var_17 = ((/* implicit */short) var_13);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 15; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_0] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_1 + 1] [i_2] [2LL] [i_1 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) (short)0))) : (((long long int) 0U))))), (max((((((/* implicit */_Bool) var_6)) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) + (var_12))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 14; i_3 += 4) 
                    {
                        for (short i_4 = 1; i_4 < 13; i_4 += 4) 
                        {
                            {
                                var_18 -= ((((((/* implicit */_Bool) (~(var_3)))) ? (max((var_5), (((/* implicit */unsigned long long int) (short)8177)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_1])) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))) != (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)65535))))));
                                var_19 -= ((/* implicit */int) ((((/* implicit */_Bool) 2143289344U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)37))) : (579390188U)));
                            }
                        } 
                    } 
                    arr_17 [i_0] [i_1 + 1] [i_0] = ((/* implicit */unsigned short) ((var_9) + (((/* implicit */unsigned long long int) ((min((4294967290U), (4294967295U))) & (((var_3) + (((/* implicit */unsigned int) ((/* implicit */int) (signed char)127))))))))));
                }
            } 
        } 
    } 
}
