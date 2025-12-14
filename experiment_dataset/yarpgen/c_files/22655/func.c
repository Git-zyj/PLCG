/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22655
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22655 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22655
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
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) - (arr_2 [i_1]))))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 2; i_2 < 22; i_2 += 2) 
                {
                    for (long long int i_3 = 1; i_3 < 23; i_3 += 3) 
                    {
                        {
                            var_15 = ((/* implicit */short) (+(((((/* implicit */_Bool) -5560171659668419248LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_3 + 2] [i_3 - 1] [i_3 + 1] [i_2 + 2]))) : (arr_2 [i_2 - 2])))));
                            var_16 = ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)65535))));
                        }
                    } 
                } 
                arr_9 [18ULL] [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) (unsigned char)217)) != (((/* implicit */int) (_Bool)1))))) + ((~(((/* implicit */int) (_Bool)1))))));
            }
        } 
    } 
    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */int) var_2)) & (((/* implicit */int) (short)-3498)))) | (((/* implicit */int) (short)-3505))))) ? (((var_12) ? ((+(((/* implicit */int) var_1)))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (short)-3512)))))) : (((((((/* implicit */int) (unsigned char)137)) >> (((((/* implicit */int) var_8)) + (112))))) | (((/* implicit */int) var_4))))));
}
