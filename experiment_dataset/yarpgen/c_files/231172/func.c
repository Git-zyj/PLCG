/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231172
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231172 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231172
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
    var_14 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-117)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 15; i_2 += 3) 
                {
                    for (signed char i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        for (signed char i_4 = 0; i_4 < 15; i_4 += 3) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((32767U), (((/* implicit */unsigned int) (unsigned char)37))))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_3))) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_0])))));
                                var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-32757)) ? (var_3) : (((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_9 [(signed char)7] [i_1] [i_1] [i_1] [(signed char)14])) || (((/* implicit */_Bool) (unsigned char)2))))))))));
                            }
                        } 
                    } 
                } 
                var_17 = ((long long int) (!(((/* implicit */_Bool) (unsigned short)0))));
                var_18 += ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_9 [i_1] [4U] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_4 [i_0] [i_1] [i_0] [i_1]))))) >= (((((/* implicit */_Bool) arr_9 [i_1] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0]))) : (var_13)))));
                var_19 += ((/* implicit */signed char) -6931128223320761294LL);
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) max((var_13), (var_5)))) - ((((_Bool)1) ? (((/* implicit */unsigned long long int) var_8)) : (var_1)))))) ? ((+(((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) * (var_1))))) : (((/* implicit */unsigned long long int) (-(var_10))))));
}
