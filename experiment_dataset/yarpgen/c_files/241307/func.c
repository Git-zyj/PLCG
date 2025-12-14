/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241307
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241307 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241307
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
    var_16 |= ((/* implicit */short) max((((/* implicit */unsigned long long int) var_4)), (((((/* implicit */_Bool) ((((/* implicit */int) var_0)) - (((/* implicit */int) var_12))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_11)))) : (var_6)))));
    /* LoopNest 2 */
    for (signed char i_0 = 4; i_0 < 11; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                arr_5 [i_1] [i_0] [i_0 + 2] |= min((((/* implicit */long long int) (short)14093)), (max((((/* implicit */long long int) ((unsigned int) (_Bool)0))), (4641722386402067426LL))));
                var_17 |= ((/* implicit */unsigned char) ((unsigned long long int) arr_0 [i_0] [i_0 + 3]));
                /* LoopNest 2 */
                for (short i_2 = 2; i_2 < 12; i_2 += 4) 
                {
                    for (unsigned short i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        {
                            var_18 ^= ((/* implicit */signed char) (!(((/* implicit */_Bool) var_9))));
                            var_19 += ((/* implicit */short) ((((/* implicit */long long int) (+(((0U) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [(unsigned short)2])))))))) < ((-(((var_7) << (((((arr_0 [i_2] [i_3]) + (3935106722975560339LL))) - (50LL)))))))));
                        }
                    } 
                } 
                var_20 |= ((/* implicit */unsigned short) ((((var_12) ? (var_3) : (((((/* implicit */_Bool) arr_8 [(unsigned short)4] [8U] [i_1] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (arr_3 [i_1] [i_0]))))) / (((/* implicit */unsigned long long int) (-(((unsigned int) var_13)))))));
            }
        } 
    } 
}
