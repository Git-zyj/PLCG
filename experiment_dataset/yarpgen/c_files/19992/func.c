/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19992
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19992 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19992
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
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (unsigned int i_2 = 2; i_2 < 15; i_2 += 4) 
            {
                {
                    var_11 ^= ((/* implicit */long long int) arr_6 [i_2 - 1] [i_2] [(unsigned short)6]);
                    /* LoopNest 2 */
                    for (long long int i_3 = 3; i_3 < 14; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 12; i_4 += 1) 
                        {
                            {
                                var_12 -= ((/* implicit */unsigned int) ((unsigned short) (unsigned short)63431));
                                var_13 = ((/* implicit */unsigned int) max((var_13), (((var_7) + (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_9 [i_2 - 1] [i_4 + 1]))))))));
                                arr_13 [i_3] [i_1] = ((/* implicit */int) (unsigned short)2104);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) ((var_7) >> (((((/* implicit */int) (short)16376)) - (16374)))))))) ? (((/* implicit */unsigned long long int) var_7)) : (((((var_0) <= (((/* implicit */unsigned int) var_4)))) ? (0ULL) : (((/* implicit */unsigned long long int) var_3)))))))));
    var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (((var_2) * (var_9))))) : (((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)63451))) : (var_9))) : (((unsigned int) (short)-16361))))));
}
