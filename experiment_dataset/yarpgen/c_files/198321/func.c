/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198321
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198321 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198321
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
    var_20 = ((/* implicit */unsigned short) (~(var_15)));
    var_21 = ((/* implicit */signed char) (((+(((/* implicit */int) (short)-14594)))) + (((/* implicit */int) var_18))));
    var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)126)) ? (-7713907789216976946LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65528)))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 2; i_0 < 21; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 21; i_1 += 1) 
        {
            for (unsigned int i_2 = 1; i_2 < 20; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        for (long long int i_4 = 0; i_4 < 22; i_4 += 3) 
                        {
                            {
                                var_23 += ((/* implicit */unsigned int) ((((((/* implicit */int) (short)14611)) < (((/* implicit */int) (signed char)-96)))) ? (min((((/* implicit */long long int) ((((/* implicit */_Bool) var_19)) ? (arr_7 [i_0] [i_0] [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-125)))))), (((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_3] [i_4]))) - (arr_3 [i_1]))))) : (((/* implicit */long long int) arr_4 [(unsigned short)15]))));
                                arr_13 [i_4] [i_4] [i_1] = ((/* implicit */unsigned char) ((signed char) min((((((/* implicit */_Bool) 2004499812)) ? (var_16) : (((/* implicit */unsigned int) ((/* implicit */int) (short)14611))))), ((+(arr_2 [i_0] [i_0]))))));
                                var_24 = ((/* implicit */unsigned short) (((~(((/* implicit */int) (unsigned short)61440)))) / (((/* implicit */int) min((((/* implicit */unsigned short) arr_0 [i_0 + 1])), (arr_1 [i_0 - 1] [i_1 - 1]))))));
                                arr_14 [i_4] [i_4] = ((/* implicit */signed char) min((((/* implicit */long long int) (~(((/* implicit */int) max((var_10), (arr_8 [i_3] [i_4]))))))), (((long long int) arr_2 [i_0 - 1] [i_2 + 2]))));
                            }
                        } 
                    } 
                    var_25 ^= ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_0 - 1])) || (((/* implicit */_Bool) arr_9 [i_0 - 1]))))), (max((arr_9 [i_0 + 1]), (arr_9 [i_0 + 1])))));
                    var_26 = ((/* implicit */signed char) (((-(((((/* implicit */_Bool) (unsigned short)55873)) ? (arr_9 [i_0]) : (((/* implicit */unsigned long long int) arr_3 [i_0])))))) - (((/* implicit */unsigned long long int) max(((-(arr_3 [18U]))), (((/* implicit */long long int) (-(arr_4 [15U])))))))));
                }
            } 
        } 
    } 
    var_27 = ((/* implicit */signed char) ((((/* implicit */int) var_6)) / ((-(((/* implicit */int) (short)14594))))));
}
