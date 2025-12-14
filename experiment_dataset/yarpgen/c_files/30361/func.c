/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30361
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30361 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30361
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
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (long long int i_1 = 4; i_1 < 21; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-94))) - (((arr_3 [i_1 - 2] [i_1 - 3]) << (((/* implicit */int) ((((/* implicit */int) (signed char)-105)) < (((/* implicit */int) arr_5 [i_0] [i_1 - 3])))))))));
                    arr_9 [i_2] [0U] [(_Bool)1] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) max((arr_6 [i_1 + 3] [i_2] [i_2] [(unsigned short)6]), (((/* implicit */unsigned short) (signed char)66)))))) > (min((((unsigned int) arr_0 [i_0])), (var_16)))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((unsigned int) (signed char)-67)) + (var_0)))) ? (max(((-(-7007634694614724625LL))), (((/* implicit */long long int) var_5)))) : (((/* implicit */long long int) (~(((var_5) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)-67)))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_3 = 3; i_3 < 6; i_3 += 4) 
    {
        for (unsigned short i_4 = 0; i_4 < 10; i_4 += 4) 
        {
            {
                /* LoopNest 3 */
                for (short i_5 = 0; i_5 < 10; i_5 += 3) 
                {
                    for (short i_6 = 0; i_6 < 10; i_6 += 3) 
                    {
                        for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
                        {
                            {
                                arr_22 [i_7 + 1] [i_6] [i_3] [i_4] [i_3] = ((/* implicit */unsigned short) (signed char)88);
                                var_20 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_5 [i_3 + 2] [i_5]))));
                                arr_23 [i_3] = ((/* implicit */unsigned long long int) (signed char)-93);
                                arr_24 [(_Bool)1] [i_3] [i_5] [i_3] [i_7 + 1] = ((/* implicit */unsigned int) ((((max((((/* implicit */unsigned int) var_7)), (var_18))) / (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)112)) && (((/* implicit */_Bool) var_3)))))))) > (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (signed char)-100)))) : (-530559707))))));
                                arr_25 [i_3] [i_3] [i_5] [i_6] [i_6] [i_7] [i_3] = ((/* implicit */unsigned int) ((((min((((((/* implicit */_Bool) (signed char)-62)) ? (530559682) : (530559716))), (-530559707))) + (2147483647))) << (((((/* implicit */int) (unsigned char)215)) - (215)))));
                            }
                        } 
                    } 
                } 
                arr_26 [i_3] = ((/* implicit */unsigned long long int) var_13);
                var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) * (((/* implicit */int) arr_10 [i_3 + 1]))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)74))))) : (((((/* implicit */_Bool) var_18)) ? (((/* implicit */unsigned long long int) arr_16 [i_3] [i_3 + 3] [(_Bool)1] [i_4])) : (var_17))))))));
            }
        } 
    } 
}
