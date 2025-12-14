/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40847
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40847 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40847
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                var_19 ^= ((/* implicit */unsigned int) (((~(((/* implicit */int) (unsigned short)65535)))) >= (min((((/* implicit */int) (_Bool)1)), ((-(var_5)))))));
                /* LoopSeq 2 */
                for (int i_2 = 0; i_2 < 18; i_2 += 2) 
                {
                    var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) (-(((/* implicit */int) (signed char)-108)))))));
                    var_21 = ((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_1] [i_2]);
                }
                for (long long int i_3 = 1; i_3 < 16; i_3 += 4) 
                {
                    var_22 = ((/* implicit */unsigned int) min((var_6), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) (short)17190)) ? (((/* implicit */int) arr_3 [i_0] [i_1] [i_3])) : (((/* implicit */int) arr_2 [i_0] [i_0])))) <= (((int) arr_4 [i_0] [i_1] [i_3])))))));
                    arr_11 [i_3] &= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) 731777044)) < ((-(max((((/* implicit */unsigned long long int) (unsigned short)37882)), (9895030192266710637ULL)))))));
                }
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned long long int) var_15);
    var_24 = ((/* implicit */unsigned int) (short)-7);
}
