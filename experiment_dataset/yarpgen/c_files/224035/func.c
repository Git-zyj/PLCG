/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224035
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224035 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224035
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
    var_14 *= ((/* implicit */unsigned int) ((((int) 784234081553729737ULL)) + (var_0)));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 2; i_2 < 23; i_2 += 2) 
            {
                {
                    var_15 = ((/* implicit */_Bool) (~(min((((/* implicit */int) ((_Bool) var_10))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (signed char)32)) : (268402688)))))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        for (long long int i_4 = 1; i_4 < 23; i_4 += 2) 
                        {
                            {
                                arr_15 [i_0] [i_0] [0] [i_1] [i_0] [i_0] [i_4 + 1] = ((/* implicit */short) (~(((((/* implicit */_Bool) ((signed char) (signed char)9))) ? (17662509992155821879ULL) : ((((_Bool)1) ? (17662509992155821878ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
                                arr_16 [i_2 + 1] [i_1] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) (+(((((/* implicit */int) arr_2 [i_2 - 1] [i_3])) - (var_11))))))));
                                var_16 = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_12 [i_4 + 1] [i_1] [i_1] [i_0] [14] [14])) | (var_2))) != (((/* implicit */int) ((signed char) 1895915620U)))));
                                var_17 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) ((((/* implicit */int) (short)2047)) * (((/* implicit */int) var_4)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_4] [i_4 + 1] [i_4 + 1] [i_2 - 2])) && (((/* implicit */_Bool) ((arr_12 [i_0] [i_1] [i_1] [i_2] [13] [i_4]) ? (((/* implicit */int) (short)-17179)) : (((/* implicit */int) (_Bool)1)))))))) : (((/* implicit */int) ((((/* implicit */int) var_1)) != (((/* implicit */int) (_Bool)1)))))));
                                var_18 = ((/* implicit */long long int) ((var_5) ^ (((((/* implicit */int) ((((/* implicit */int) (short)28400)) > (((/* implicit */int) (unsigned short)65535))))) << ((+(((/* implicit */int) (_Bool)1))))))));
                            }
                        } 
                    } 
                    arr_17 [i_2 - 2] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [i_0]);
                }
            } 
        } 
    } 
}
