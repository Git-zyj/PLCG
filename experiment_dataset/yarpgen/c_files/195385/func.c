/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195385
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195385 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195385
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
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 1; i_2 < 12; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_9 [i_0] = ((_Bool) (unsigned short)59343);
                            arr_10 [i_0] [i_0] [i_0] [(_Bool)1] = ((/* implicit */short) (unsigned short)17952);
                        }
                    } 
                } 
                var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_8))) >= (var_4))))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) arr_5 [i_1] [i_0] [i_0])) : (arr_3 [i_0] [i_0]))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)24))))))))));
                var_14 = ((/* implicit */unsigned char) (unsigned short)17965);
                var_15 = ((/* implicit */long long int) max((var_15), (((long long int) ((unsigned int) ((unsigned short) 2355312985U))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_4 = 1; i_4 < 12; i_4 += 4) 
                {
                    arr_13 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_4 + 1])) ? (((var_2) - (3331336976U))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)62862)))));
                    var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_0] [i_1] [0U] [i_4 - 1])) ? ((-(((/* implicit */int) (unsigned short)17988)))) : (((/* implicit */int) (unsigned short)47586))));
                    var_17 = ((/* implicit */_Bool) ((unsigned char) var_10));
                    arr_14 [i_0] [i_1] [i_0] [i_4] = ((/* implicit */unsigned short) ((short) arr_8 [(signed char)7] [i_4 + 1] [i_4] [i_4 + 1]));
                }
            }
        } 
    } 
    var_18 = ((/* implicit */short) ((unsigned int) (unsigned short)47593));
    var_19 = ((/* implicit */short) ((((unsigned int) ((short) (unsigned short)47603))) != (((/* implicit */unsigned int) ((/* implicit */int) var_5)))));
    var_20 = ((/* implicit */long long int) ((var_1) - (((((var_12) >> (((var_1) - (16215876600916626956ULL))))) - (((/* implicit */unsigned long long int) (~(2355312985U))))))));
    var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) ((long long int) 1970124420111272437ULL)))));
}
