/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5272
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5272 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5272
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
    var_13 = var_3;
    var_14 = ((/* implicit */signed char) ((((/* implicit */int) (short)23316)) >> (((((/* implicit */int) (unsigned short)65518)) - (65501)))));
    /* LoopNest 3 */
    for (short i_0 = 2; i_0 < 22; i_0 += 2) 
    {
        for (signed char i_1 = 3; i_1 < 21; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        for (int i_4 = 4; i_4 < 23; i_4 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned short) ((1389043198U) - (((/* implicit */unsigned int) arr_3 [i_1] [(unsigned short)20] [i_4]))));
                                var_16 = ((/* implicit */_Bool) (+(((/* implicit */int) ((signed char) arr_4 [i_0 + 1] [i_1 + 1])))));
                            }
                        } 
                    } 
                    var_17 = max((((/* implicit */unsigned long long int) (((~(((/* implicit */int) (_Bool)0)))) * (((/* implicit */int) var_5))))), (((unsigned long long int) max((2905924104U), (((/* implicit */unsigned int) var_4))))));
                    var_18 += ((/* implicit */unsigned char) (~(max((((/* implicit */int) arr_2 [(unsigned char)11] [i_0 - 1] [i_2])), ((~(((/* implicit */int) var_9))))))));
                    arr_12 [i_0] [i_2] [i_1] [i_2] = ((/* implicit */_Bool) (unsigned short)0);
                    arr_13 [i_0] [i_2] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */int) (unsigned short)65528)), (arr_3 [i_0 + 1] [i_1] [i_1 - 3])))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0 - 2] [i_0] [i_1 + 1])) || (((/* implicit */_Bool) arr_3 [i_0 + 1] [i_0] [i_1 - 2]))))) : (arr_3 [i_0 - 2] [i_0] [i_1 - 1])));
                }
            } 
        } 
    } 
    var_19 = min((((/* implicit */unsigned long long int) var_6)), (((((((/* implicit */_Bool) (unsigned char)151)) ? (var_3) : (((/* implicit */unsigned long long int) var_10)))) << ((((+(((/* implicit */int) var_12)))) - (59))))));
    var_20 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) min((var_4), (((/* implicit */unsigned char) var_5)))))))), (min((var_3), (((/* implicit */unsigned long long int) var_2))))));
}
