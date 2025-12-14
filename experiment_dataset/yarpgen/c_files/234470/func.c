/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234470
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234470 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234470
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
    var_17 &= ((/* implicit */unsigned int) var_4);
    var_18 += ((/* implicit */int) ((unsigned int) var_0));
    var_19 = ((/* implicit */unsigned int) var_10);
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                {
                    var_20 = ((unsigned short) 0ULL);
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        for (int i_4 = 4; i_4 < 10; i_4 += 3) 
                        {
                            {
                                var_21 &= ((/* implicit */int) min((16939142518183901046ULL), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((16939142518183901037ULL), (((/* implicit */unsigned long long int) 2525952095U))))))))));
                                var_22 = (unsigned char)246;
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) ((var_3) <= (((/* implicit */unsigned int) 596911307)))))));
}
