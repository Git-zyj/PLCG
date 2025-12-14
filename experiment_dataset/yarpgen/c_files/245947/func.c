/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245947
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245947 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245947
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
    var_20 += ((/* implicit */unsigned short) var_11);
    /* LoopNest 3 */
    for (unsigned char i_0 = 3; i_0 < 10; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 1; i_3 < 10; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 8; i_4 += 1) 
                        {
                            {
                                var_21 += ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-12754)) ? ((((((((-9223372036854775807LL - 1LL)) + (9223372036854775807LL))) + (9223372036854775807LL))) >> (((((/* implicit */int) (unsigned char)194)) - (150))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 10ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_2]))) : (var_9))))))) == (min((((((/* implicit */_Bool) 180562058)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-2429))) : (18446744073709551606ULL))), (((/* implicit */unsigned long long int) arr_3 [i_2] [i_3 + 1]))))));
                                var_22 = ((/* implicit */unsigned short) (-(841971809)));
                                var_23 = ((/* implicit */unsigned int) (+(((((/* implicit */int) arr_12 [i_0] [i_1] [i_2] [i_3 - 1] [i_4 - 1])) / (((/* implicit */int) (_Bool)1))))));
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */int) arr_0 [i_0] [i_2]);
                    arr_13 [i_0] = ((/* implicit */signed char) (+((-(1015808)))));
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */unsigned char) (-(var_2)));
}
