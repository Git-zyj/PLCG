/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3422
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3422 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3422
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
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                {
                    var_20 ^= ((((/* implicit */_Bool) min((arr_2 [i_0]), (arr_2 [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((max((2147483647), (((/* implicit */int) (unsigned char)255)))) >= (((/* implicit */int) (unsigned short)65535)))))) : (((unsigned int) var_16)));
                    var_21 -= ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */int) arr_5 [i_0] [i_0])) >= (((/* implicit */int) arr_5 [i_0] [i_1])))))));
                    var_22 = ((/* implicit */unsigned char) ((((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_19)))))) >= (-1)));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 13; i_4 += 2) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) ((((unsigned int) arr_7 [i_2] [i_3])) >= (((/* implicit */unsigned int) ((/* implicit */int) (((+(((/* implicit */int) arr_8 [i_0] [i_0])))) >= (((/* implicit */int) arr_2 [i_0])))))))))));
                                var_24 = ((/* implicit */signed char) 818133916U);
                            }
                        } 
                    } 
                    var_25 &= ((/* implicit */signed char) min((((/* implicit */long long int) (~(((/* implicit */int) (signed char)112))))), (min((arr_11 [i_0] [i_0] [7LL] [i_1] [(signed char)1] [i_0]), (((/* implicit */long long int) var_15))))));
                }
            } 
        } 
    } 
    var_26 = ((/* implicit */unsigned char) 6469600726903609411LL);
    var_27 -= ((/* implicit */_Bool) ((max((4294967295U), (((/* implicit */unsigned int) ((((/* implicit */int) var_6)) | (((/* implicit */int) (_Bool)1))))))) | (var_18)));
    var_28 = ((/* implicit */signed char) ((unsigned char) 3476833402U));
}
