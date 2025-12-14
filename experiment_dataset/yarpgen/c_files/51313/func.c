/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51313
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51313 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51313
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
    var_17 = ((/* implicit */unsigned short) -2068243094);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (unsigned int i_1 = 2; i_1 < 8; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned char)231))));
                arr_6 [i_0] [i_1] |= ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_0 [i_1 - 1] [i_1 + 2])) ? (((/* implicit */unsigned int) var_12)) : (arr_0 [i_1 - 2] [i_1 - 2])))));
                /* LoopNest 3 */
                for (signed char i_2 = 1; i_2 < 9; i_2 += 4) 
                {
                    for (long long int i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 9; i_4 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */_Bool) min((var_19), ((!(((/* implicit */_Bool) (unsigned char)0))))));
                                var_20 = ((/* implicit */long long int) ((_Bool) ((((/* implicit */int) var_9)) / (((/* implicit */int) (unsigned char)243)))));
                                var_21 = ((/* implicit */int) var_3);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_22 += ((/* implicit */long long int) var_10);
}
