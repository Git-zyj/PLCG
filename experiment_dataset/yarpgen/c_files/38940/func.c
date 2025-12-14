/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38940
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38940 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38940
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
    var_17 = ((/* implicit */short) (-(((/* implicit */int) var_16))));
    var_18 = ((/* implicit */signed char) var_3);
    var_19 = ((/* implicit */short) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_9))))) ? (((/* implicit */int) ((((/* implicit */int) var_12)) != (((/* implicit */int) var_0))))) : (((/* implicit */int) ((var_10) != (((/* implicit */int) var_16)))))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 4; i_2 < 22; i_2 += 3) 
            {
                {
                    var_20 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (arr_2 [i_1 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1 - 1] [i_1 - 1]))))))));
                    var_21 = ((/* implicit */unsigned int) ((min((arr_1 [i_2 - 4]), (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */unsigned int) 370107011)) : (1879048192U))))) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_1 - 1])))));
                    /* LoopNest 2 */
                    for (short i_3 = 2; i_3 < 21; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 23; i_4 += 3) 
                        {
                            {
                                var_22 *= ((/* implicit */int) var_12);
                                var_23 = ((/* implicit */signed char) ((var_15) != (((unsigned long long int) ((unsigned char) (signed char)-3)))));
                                var_24 &= ((/* implicit */unsigned short) (-(var_15)));
                                var_25 = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) arr_3 [i_2 - 1] [i_2 + 1])) ? (((/* implicit */int) arr_13 [i_1 - 1] [i_1 - 1] [9U] [i_1 - 1])) : (((/* implicit */int) arr_3 [i_2 - 4] [i_2 - 4])))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
