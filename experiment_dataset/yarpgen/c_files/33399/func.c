/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33399
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33399 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33399
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
    for (signed char i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 3; i_2 < 12; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 13; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 4) 
                        {
                            {
                                arr_13 [i_2] [i_3] [i_2] [(unsigned short)5] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (_Bool)1)) : ((~(931837596)))));
                                var_17 += ((/* implicit */unsigned long long int) ((var_5) & (((((((/* implicit */int) arr_3 [i_0] [i_2 - 3] [i_2])) + (2147483647))) << (((((((/* implicit */int) var_12)) & (931837596))) - (156)))))));
                                var_18 = ((/* implicit */short) (~((+(((/* implicit */int) ((short) (unsigned char)74)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 13; i_5 += 4) 
                    {
                        for (short i_6 = 0; i_6 < 13; i_6 += 4) 
                        {
                            {
                                var_19 = -931837584;
                                var_20 = ((/* implicit */unsigned char) ((unsigned short) (~(((/* implicit */int) (unsigned char)74)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */signed char) var_2);
}
