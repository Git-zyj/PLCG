/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54736
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54736 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54736
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
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 1) 
                {
                    for (unsigned char i_3 = 2; i_3 < 23; i_3 += 1) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned short) 2406613940U);
                            arr_9 [i_0] [i_1] [i_2] [i_2] [i_3] = ((/* implicit */unsigned int) (short)-26144);
                        }
                    } 
                } 
                var_20 *= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(((/* implicit */int) (!(var_0)))))))));
                var_21 = ((/* implicit */signed char) ((((((((/* implicit */int) (short)-26144)) + (2147483647))) << (((((/* implicit */int) (unsigned short)12070)) - (12070))))) - (((/* implicit */int) ((unsigned char) var_13)))));
            }
        } 
    } 
    var_22 = ((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_16))))))))));
    var_23 = ((/* implicit */signed char) var_4);
    var_24 = ((/* implicit */unsigned long long int) var_6);
}
