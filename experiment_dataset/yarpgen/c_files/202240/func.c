/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202240
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202240 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202240
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
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 24; i_4 += 2) 
                        {
                            {
                                var_12 = ((/* implicit */signed char) max((((((/* implicit */_Bool) ((arr_5 [i_1]) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))) ? (((long long int) (unsigned char)246)) : (min((arr_2 [i_2] [i_2]), (((/* implicit */long long int) (_Bool)0)))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0])) - (((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0]))))) ? (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (unsigned char)5)) : (((/* implicit */int) (_Bool)1))))) : (var_7))))));
                                arr_13 [i_0] [i_1] [i_2] [i_2] [i_4] = ((/* implicit */signed char) ((((/* implicit */long long int) (+(((/* implicit */int) arr_1 [i_0]))))) & (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_4)))));
                                arr_14 [i_2] = (unsigned char)156;
                                arr_15 [i_0] [i_1] [i_2] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? (arr_3 [i_2] [i_3]) : (((/* implicit */long long int) max((((/* implicit */int) var_8)), (var_10))))));
                            }
                        } 
                    } 
                    var_13 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) & (arr_2 [i_2] [i_0])))) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (((((/* implicit */_Bool) var_3)) ? (arr_2 [i_1] [i_1]) : (arr_2 [i_1] [i_2])))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */signed char) (unsigned char)99);
    var_15 = ((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? (((((var_9) + (2147483647))) >> (((var_11) - (13114222027964156427ULL))))) : (((((/* implicit */int) ((short) var_1))) & (((((var_3) + (2147483647))) << (((var_11) - (13114222027964156443ULL)))))))));
}
