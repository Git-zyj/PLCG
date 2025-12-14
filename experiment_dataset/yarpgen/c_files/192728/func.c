/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192728
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192728 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192728
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
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    arr_9 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_3 [i_0]), (((/* implicit */unsigned int) ((unsigned short) arr_6 [i_0] [i_1] [i_2])))))) ? (((((/* implicit */_Bool) min((((/* implicit */short) (signed char)-22)), ((short)15546)))) ? (((/* implicit */int) ((signed char) 7221224710231992300LL))) : (((((/* implicit */int) var_2)) >> (((((/* implicit */int) arr_7 [i_0] [(signed char)6] [i_1] [i_2])) - (114))))))) : (((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) ((((/* implicit */int) var_8)) != (((/* implicit */int) (signed char)49))))) : (((((/* implicit */int) var_10)) ^ (((/* implicit */int) (unsigned char)45))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        for (int i_4 = 1; i_4 < 9; i_4 += 3) 
                        {
                            {
                                var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)16320)) ? (((/* implicit */int) (signed char)-28)) : (((/* implicit */int) arr_13 [i_0] [i_0] [i_4]))));
                                arr_16 [(signed char)2] [(unsigned char)0] [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) (_Bool)1))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_5 = 1; i_5 < 10; i_5 += 2) 
    {
        for (long long int i_6 = 1; i_6 < 8; i_6 += 4) 
        {
            {
                arr_21 [i_5 + 1] [i_5] [i_6 - 1] = ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_17 [5] [i_5 + 1])) ? (((/* implicit */int) arr_18 [i_5])) : (((/* implicit */int) (unsigned char)37)))), ((~(((/* implicit */int) var_6))))));
                var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_18 [i_5 - 1])) : (((/* implicit */int) var_1))))))) != ((+(((var_4) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0))))))))))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (~(var_5)))), (max((((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) var_2)), ((unsigned char)137)))), (var_4)))));
    var_15 |= ((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) min((((/* implicit */signed char) (_Bool)0)), (var_10)))) : (((((/* implicit */int) var_6)) | (((/* implicit */int) (unsigned char)218)))))) : (((/* implicit */int) ((((/* implicit */int) var_8)) <= (((((/* implicit */_Bool) var_10)) ? (-1) : (((/* implicit */int) var_6)))))))));
}
