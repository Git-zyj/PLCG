/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215430
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215430 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215430
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
    var_17 = ((/* implicit */short) (+(max((18446744073709551615ULL), (var_7)))));
    var_18 = ((/* implicit */unsigned long long int) max((var_18), (((unsigned long long int) ((unsigned short) var_8)))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 17; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 16; i_2 += 4) 
            {
                {
                    var_19 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((arr_4 [i_1 - 1] [(signed char)10]) % (arr_4 [i_1 - 1] [4ULL]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1 + 1] [i_1 + 1])))));
                    var_20 = ((/* implicit */_Bool) arr_3 [i_1]);
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 16; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 16; i_4 += 3) 
                        {
                            {
                                var_21 *= ((/* implicit */unsigned short) ((unsigned char) 18446744073709551615ULL));
                                var_22 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_6 [i_3] [i_1] [i_3 - 1] [i_3 + 2])) ? (var_0) : (((/* implicit */int) arr_11 [i_3] [i_3 - 1] [i_1] [i_3] [(unsigned char)12])))) >> (min((2ULL), (((/* implicit */unsigned long long int) -1065235912))))));
                            }
                        } 
                    } 
                    var_23 += ((/* implicit */unsigned short) 6172989806581514357ULL);
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 1; i_5 < 16; i_5 += 1) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 18; i_6 += 3) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned char) ((((var_7) + (arr_4 [i_1 + 1] [i_1]))) | (((/* implicit */unsigned long long int) ((long long int) 1607218580)))));
                                var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) (short)28728))));
                                var_26 = ((/* implicit */unsigned short) min((15ULL), (((/* implicit */unsigned long long int) (unsigned short)7))));
                                var_27 = ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)240))))) & (var_6))) << (((/* implicit */int) (!(((/* implicit */_Bool) ((var_2) + (var_16)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_12)), (max((var_5), ((unsigned short)19910)))))) ? ((-(((/* implicit */int) (!(((/* implicit */_Bool) var_8))))))) : (((/* implicit */int) (unsigned char)255))));
}
