/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236391
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236391 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236391
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
    var_13 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (short)-22807)), (18446744073709551612ULL))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 1; i_2 < 16; i_2 += 3) 
                {
                    for (unsigned short i_3 = 1; i_3 < 15; i_3 += 3) 
                    {
                        {
                            var_14 *= ((/* implicit */unsigned int) 886425249777865072ULL);
                            var_15 = ((/* implicit */unsigned int) 3ULL);
                            var_16 += ((/* implicit */unsigned int) (signed char)27);
                        }
                    } 
                } 
                var_17 = ((/* implicit */unsigned short) ((unsigned long long int) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)65535))))), (((16717821944263511810ULL) / (1728922129446039810ULL))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) var_3);
    var_19 = ((/* implicit */_Bool) var_11);
    var_20 += ((((/* implicit */int) var_7)) * (((/* implicit */int) var_10)));
}
