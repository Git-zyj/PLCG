/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228010
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228010 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228010
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
    for (long long int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 1; i_2 < 22; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        for (long long int i_4 = 2; i_4 < 20; i_4 += 3) 
                        {
                            {
                                var_11 ^= ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)19))) + ((+((-(var_0)))))));
                                var_12 = ((/* implicit */unsigned short) max((var_2), ((~(((((/* implicit */_Bool) (unsigned short)48)) ? (((/* implicit */unsigned long long int) var_6)) : (var_2)))))));
                                var_13 = ((/* implicit */unsigned long long int) ((max((arr_5 [(unsigned short)16] [(unsigned short)7] [i_2 + 1] [i_4 - 2]), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)19))) : (var_0))))) == (((/* implicit */long long int) ((/* implicit */int) (short)0)))));
                            }
                        } 
                    } 
                } 
                var_14 = ((/* implicit */unsigned int) (+((~(((/* implicit */int) (unsigned short)65516))))));
            }
        } 
    } 
    var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) (short)0)), (18446744073709551615ULL))), ((+(var_4)))))) || (((/* implicit */_Bool) var_6))));
}
