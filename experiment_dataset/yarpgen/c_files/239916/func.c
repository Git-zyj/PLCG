/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239916
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    var_15 = ((/* implicit */unsigned char) max((((unsigned int) arr_6 [i_2])), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_0])) && (((/* implicit */_Bool) arr_6 [i_0])))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 2; i_3 < 13; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 16; i_4 += 2) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)59389)))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) var_5))))) : (arr_11 [i_0] [i_2] [i_3 - 2])))));
                                var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)6138)) && (((/* implicit */_Bool) (unsigned char)61))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) var_5);
}
