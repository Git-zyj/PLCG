/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217136
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217136 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217136
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
    for (unsigned int i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 1; i_2 < 16; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        for (short i_4 = 1; i_4 < 17; i_4 += 3) 
                        {
                            {
                                arr_13 [i_2] [i_2 + 2] = ((/* implicit */signed char) var_10);
                                arr_14 [i_0] [i_0] [i_0] [i_0] [i_0 + 3] = ((/* implicit */unsigned int) arr_5 [i_0] [i_2 + 1] [i_4 + 1]);
                                var_12 = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) >= (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))) + (6429501474981214113ULL))))));
                                arr_15 [i_0 + 3] [6ULL] [i_2 + 2] [i_3] [i_4] = ((/* implicit */long long int) ((((/* implicit */int) var_7)) == (((/* implicit */int) (_Bool)1))));
                                var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) 9080688188252470082LL))));
                            }
                        } 
                    } 
                    arr_16 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */short) ((839107181U) > (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-14)))));
                    /* LoopNest 2 */
                    for (long long int i_5 = 2; i_5 < 16; i_5 += 2) 
                    {
                        for (signed char i_6 = 2; i_6 < 15; i_6 += 2) 
                        {
                            {
                                arr_24 [i_6] [i_1] [i_0] [i_5] [i_6] = ((/* implicit */unsigned long long int) (unsigned char)140);
                                var_14 -= (~(min((9LL), (((/* implicit */long long int) (signed char)3)))));
                                arr_25 [i_0] [(unsigned short)8] [i_0] [i_0] [i_0 + 3] = ((/* implicit */signed char) 3616948350U);
                                var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) (unsigned char)198))));
                                var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) arr_18 [i_2] [i_5] [i_2] [i_1]))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */short) (~(((/* implicit */int) var_7))));
    var_18 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) (unsigned char)200)))) ? (((((-2283033119655496924LL) != (((/* implicit */long long int) ((/* implicit */int) (signed char)76))))) ? (min((var_1), (((/* implicit */unsigned int) var_10)))) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_8))))))) : (((/* implicit */unsigned int) min((((((/* implicit */_Bool) 620227442313955430LL)) ? (((/* implicit */int) (unsigned char)82)) : (((/* implicit */int) (signed char)(-127 - 1))))), ((+(((/* implicit */int) (signed char)119)))))))));
    var_19 = ((/* implicit */unsigned int) ((var_11) >= (((/* implicit */long long int) min((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)253))) == (var_11)))), ((-(((/* implicit */int) var_10)))))))));
}
