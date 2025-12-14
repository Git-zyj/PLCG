/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229501
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229501 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229501
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
    var_19 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */int) var_12)) + (((/* implicit */int) var_15)))) << (((((/* implicit */int) (unsigned char)197)) - (197)))))) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) 3255646732U)) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)127))))))))));
    var_20 = var_1;
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 14; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 15; i_2 += 4) 
                {
                    for (signed char i_3 = 2; i_3 < 14; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 14; i_4 += 2) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((unsigned short) (signed char)24))))))));
                                var_22 = ((/* implicit */short) (~(min((((/* implicit */int) arr_10 [i_0] [i_4] [i_0] [i_3 + 1] [(signed char)9])), (((((/* implicit */_Bool) arr_0 [i_3] [i_3])) ? (((/* implicit */int) arr_9 [i_0] [i_3])) : (((/* implicit */int) arr_6 [i_0]))))))));
                                var_23 *= ((/* implicit */signed char) min((18446744073709551603ULL), (((/* implicit */unsigned long long int) (signed char)126))));
                                var_24 ^= max(((signed char)124), ((signed char)-83));
                            }
                        } 
                    } 
                } 
                var_25 = ((/* implicit */unsigned int) (-(((/* implicit */int) max((((/* implicit */unsigned short) ((short) (signed char)-28))), (arr_8 [i_1 + 1]))))));
            }
        } 
    } 
}
