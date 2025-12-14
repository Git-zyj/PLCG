/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199757
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199757 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199757
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
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                var_19 = ((/* implicit */int) ((((/* implicit */_Bool) 312994296U)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [5ULL]))) : (((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) : (-1LL))) & (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0)))))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_2 [i_0])) : (var_10))) - (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (short)-17783)) : (((/* implicit */int) (short)32767)))))))));
                            var_21 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_0]))))) ? (((var_16) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)177))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_1] [(unsigned short)15])))))) + ((+(((((/* implicit */_Bool) (unsigned short)65535)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))))));
                        }
                    } 
                } 
                arr_9 [i_1] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_1])) ? (((/* implicit */int) arr_5 [i_0] [i_1] [(signed char)0])) : (((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))))));
            }
        } 
    } 
    var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) var_7))));
}
