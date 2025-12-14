/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224409
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224409 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224409
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
    for (int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_10 [i_2] [i_0] [i_0] = ((/* implicit */signed char) max((((/* implicit */long long int) ((((((/* implicit */_Bool) (-2147483647 - 1))) || ((_Bool)1))) ? ((+(((/* implicit */int) var_8)))) : ((~(((/* implicit */int) (signed char)-104))))))), ((~(arr_5 [i_0])))));
                    var_12 = ((/* implicit */short) (((!(((/* implicit */_Bool) arr_4 [i_2])))) ? (((arr_7 [i_0] [i_1] [i_1] [i_1]) - (((/* implicit */int) var_10)))) : (((/* implicit */int) (((-(1104451549))) < (((/* implicit */int) (unsigned short)58465)))))));
                    var_13 = ((/* implicit */long long int) ((short) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)6322))))) ? (((/* implicit */unsigned int) arr_7 [i_1] [i_0] [i_1] [i_0])) : (arr_4 [i_2]))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 23; i_4 += 1) 
                        {
                            {
                                arr_18 [i_4] [i_4] = ((/* implicit */signed char) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_13 [i_0] [i_2] [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)59836))))), (((((/* implicit */_Bool) arr_4 [i_0])) ? (arr_13 [i_1] [i_1] [i_1]) : (((/* implicit */long long int) 776880708U))))));
                                var_14 = ((/* implicit */short) ((((min((((/* implicit */int) (unsigned short)65535)), (1073741823))) <= (((/* implicit */int) var_8)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) max((((/* implicit */unsigned short) var_5)), ((unsigned short)59836)))) - (max((((/* implicit */int) (_Bool)0)), (var_0)))))) : (1147889297320289533ULL)));
                                var_15 = ((/* implicit */signed char) ((max((((/* implicit */unsigned int) var_0)), (((unsigned int) (unsigned short)54532)))) + (((/* implicit */unsigned int) arr_11 [i_1]))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((var_10), (var_9)))) ? (((((/* implicit */_Bool) var_1)) ? ((+(((/* implicit */int) (unsigned short)54532)))) : (var_0))) : (((/* implicit */int) (short)-6545))));
}
