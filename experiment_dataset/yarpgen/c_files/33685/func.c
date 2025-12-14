/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33685
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33685 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33685
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
    var_17 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) var_1))) == (2097088LL))) ? ((~(((/* implicit */int) var_6)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) var_7)))))))) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) / (((var_16) - (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))))) : (((2097082LL) - (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) -5624262107759267216LL)) || (((/* implicit */_Bool) var_5))))))))));
    var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) var_14))));
    var_19 = ((/* implicit */unsigned char) (_Bool)0);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 16; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        for (signed char i_4 = 3; i_4 < 13; i_4 += 2) 
                        {
                            {
                                arr_15 [i_4] [i_1] [i_2] [i_1] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */long long int) (-(((/* implicit */int) var_14))))) - ((-(max((-2097079LL), (2097055LL)))))));
                                arr_16 [(signed char)2] [(signed char)2] [(signed char)2] [(signed char)2] [(signed char)2] [(signed char)2] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) 6286316108836305600LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) ((signed char) (unsigned short)0))))) : ((~(arr_7 [i_4 + 3] [i_4] [i_4 + 3])))));
                            }
                        } 
                    } 
                } 
                arr_17 [i_1] = max((((/* implicit */int) var_6)), ((-(((/* implicit */int) var_5)))));
            }
        } 
    } 
}
