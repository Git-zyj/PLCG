/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41951
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41951 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41951
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
    var_13 = ((/* implicit */signed char) (-(var_1)));
    var_14 ^= ((/* implicit */unsigned short) var_10);
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 16; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) max((((/* implicit */unsigned char) (signed char)-104)), ((unsigned char)203)))) ? (max((-950568502), (((/* implicit */int) (unsigned short)65535)))) : (((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) (unsigned short)34484)) : (((/* implicit */int) (signed char)-95))))))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 19; i_2 += 1) 
                {
                    for (signed char i_3 = 1; i_3 < 17; i_3 += 2) 
                    {
                        {
                            var_16 -= ((/* implicit */unsigned char) max((((/* implicit */long long int) min((var_3), (((/* implicit */unsigned int) min(((signed char)-104), ((signed char)95))))))), (((-9223372036854775805LL) - (((/* implicit */long long int) ((/* implicit */int) (short)-1969)))))));
                            var_17 -= ((/* implicit */_Bool) ((((/* implicit */unsigned int) (+(((/* implicit */int) var_11))))) - (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)75))) : (3U)))));
                        }
                    } 
                } 
            }
        } 
    } 
}
