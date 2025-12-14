/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216561
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216561 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216561
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
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    arr_7 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)118)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-99))) : (min((((/* implicit */unsigned long long int) ((var_18) ? (-6226415614821113607LL) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))), ((((_Bool)1) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 23; i_4 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) (unsigned char)244)) ? ((((_Bool)1) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) arr_4 [i_3])))) : (((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [3U] [(unsigned short)22] [(unsigned short)19])))), (((/* implicit */int) ((unsigned char) var_12)))));
                                arr_12 [i_2] [i_2] [i_2] = ((/* implicit */short) (+(((/* implicit */int) (unsigned char)148))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_4)) << (((((/* implicit */int) (signed char)37)) - (29)))))) ? (((((((/* implicit */int) var_13)) + (2147483647))) >> (((/* implicit */int) var_6)))) : (((/* implicit */int) var_17))))) ? (max((((var_18) ? (-6226415614821113614LL) : (((/* implicit */long long int) ((/* implicit */int) var_13))))), (((/* implicit */long long int) ((_Bool) var_14))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (~(1152921504606846975ULL)))) ? (((/* implicit */int) max((var_17), (((/* implicit */unsigned short) (short)-10410))))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_7)))))))));
}
