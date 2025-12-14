/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52588
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52588 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52588
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
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 23; i_4 += 3) 
                        {
                            {
                                var_16 -= ((/* implicit */unsigned int) ((long long int) max((((((((/* implicit */int) var_14)) + (2147483647))) << (((((/* implicit */int) var_9)) - (1))))), (((/* implicit */int) arr_12 [i_0] [i_1] [i_2] [i_1] [i_4])))));
                                var_17 = ((/* implicit */short) var_11);
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(arr_10 [i_0] [i_0] [(unsigned char)0] [i_1] [i_0] [i_2])))) ? (((/* implicit */int) (unsigned char)249)) : (((/* implicit */int) max((var_2), ((unsigned char)236))))))) & (((((/* implicit */_Bool) var_2)) ? ((+(arr_4 [i_2] [i_2]))) : (((/* implicit */unsigned int) min((arr_1 [(unsigned char)3]), (((/* implicit */int) (_Bool)1))))))))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */long long int) (unsigned short)65535);
    var_20 = ((/* implicit */long long int) (+(((var_12) ? (((/* implicit */int) var_6)) : (((/* implicit */int) ((((/* implicit */int) var_12)) <= (var_7))))))));
    var_21 -= (short)-24636;
}
