/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30067
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30067 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30067
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
    var_20 = ((/* implicit */signed char) (short)(-32767 - 1));
    var_21 = ((/* implicit */unsigned int) var_9);
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 17; i_4 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */long long int) var_13);
                                var_23 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)50259)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 18; i_5 += 4) 
                    {
                        for (unsigned short i_6 = 2; i_6 < 14; i_6 += 4) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned short) ((unsigned char) max((min((919809229U), (((/* implicit */unsigned int) (unsigned short)50240)))), (((/* implicit */unsigned int) arr_6 [i_6 + 2])))));
                                arr_19 [i_0] [i_6] [i_2] [i_5] [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) var_9))));
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)50266))));
                }
            } 
        } 
    } 
}
