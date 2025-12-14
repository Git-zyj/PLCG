/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222695
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222695 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222695
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
    var_19 *= ((/* implicit */_Bool) var_3);
    var_20 = ((/* implicit */int) ((((/* implicit */int) (signed char)-11)) > (((/* implicit */int) (_Bool)1))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 10; i_1 += 3) 
        {
            {
                var_21 = ((/* implicit */short) (signed char)63);
                var_22 = ((/* implicit */long long int) (+(((/* implicit */int) arr_5 [i_1 + 2] [i_1 + 2] [i_1 + 2]))));
                /* LoopNest 3 */
                for (unsigned int i_2 = 3; i_2 < 12; i_2 += 1) 
                {
                    for (unsigned char i_3 = 1; i_3 < 13; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 14; i_4 += 4) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) << ((((-(1776842936U))) - (2518124355U))))))));
                                var_24 = ((/* implicit */unsigned char) var_9);
                                arr_15 [i_0] [i_0] [i_2] [i_3] [i_2] [i_4] [i_4] |= ((/* implicit */unsigned int) min((min((((/* implicit */long long int) min((((/* implicit */unsigned short) (_Bool)1)), (arr_11 [i_0] [i_1] [i_0] [i_0])))), (-8129534633555565275LL))), (((((((/* implicit */_Bool) (unsigned short)65535)) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) (short)28594))))) - (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_4] [i_3 - 1] [i_1 + 1] [i_1])))))));
                            }
                        } 
                    } 
                } 
                var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) arr_4 [i_1 + 2] [i_1 + 2]))))) ? (((((/* implicit */int) arr_4 [i_1 + 4] [i_1 + 4])) - (((/* implicit */int) (unsigned char)31)))) : (((((/* implicit */_Bool) (unsigned short)1)) ? (((/* implicit */int) arr_4 [i_1 - 1] [i_1 + 2])) : (((/* implicit */int) arr_4 [i_1 + 1] [i_1 + 2]))))));
            }
        } 
    } 
}
