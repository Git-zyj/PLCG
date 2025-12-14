/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54804
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54804 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54804
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
    var_14 ^= ((/* implicit */_Bool) ((signed char) ((((/* implicit */long long int) ((((/* implicit */_Bool) 1230408091U)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_6))))) / (var_12))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (int i_1 = 4; i_1 < 9; i_1 += 3) 
        {
            for (short i_2 = 2; i_2 < 7; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */long long int) ((((unsigned long long int) (short)(-32767 - 1))) >= (((/* implicit */unsigned long long int) max((var_9), (((/* implicit */long long int) arr_7 [i_1 - 2] [i_1 - 4] [i_2 + 2])))))));
                    arr_9 [i_0] [i_2] [i_2] = ((/* implicit */_Bool) min((((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) arr_5 [i_2] [i_1] [i_0])))))), (min((((((/* implicit */_Bool) (signed char)17)) ? (((/* implicit */int) (signed char)23)) : (((/* implicit */int) (signed char)-24)))), ((-(1728392407)))))));
                    arr_10 [i_2] [i_1 - 3] [i_2 + 3] [i_1 - 3] = ((/* implicit */int) (~(min((((/* implicit */long long int) ((unsigned char) var_0))), (((long long int) 2097151LL))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        for (short i_4 = 0; i_4 < 11; i_4 += 4) 
                        {
                            {
                                arr_16 [i_2] [5LL] [i_2 + 4] [i_0] [i_2] = ((/* implicit */unsigned long long int) (~(max((((/* implicit */int) max((var_3), (var_6)))), (((((/* implicit */int) var_1)) % (arr_0 [i_0])))))));
                                var_16 = ((/* implicit */short) ((arr_2 [i_0] [i_0]) << (((((/* implicit */int) ((unsigned short) (+(((/* implicit */int) (signed char)-18)))))) - (65518)))));
                                var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) ((((/* implicit */_Bool) ((arr_4 [i_1 - 4]) + (((((/* implicit */_Bool) 1728392408)) ? (((/* implicit */unsigned long long int) var_0)) : (arr_11 [i_3] [i_3] [i_3] [i_3] [i_3])))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2097175LL)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (signed char)23))))) : ((+(((var_1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_8))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
    {
        for (unsigned int i_6 = 0; i_6 < 20; i_6 += 1) 
        {
            for (long long int i_7 = 2; i_7 < 18; i_7 += 2) 
            {
                {
                    var_18 = ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) (signed char)-24)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_7 + 1] [i_7 + 1] [i_5 + 1]))) : (arr_17 [i_5 + 1] [i_5 + 1]))));
                    /* LoopNest 2 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        for (signed char i_9 = 3; i_9 < 19; i_9 += 1) 
                        {
                            {
                                var_19 -= ((/* implicit */signed char) (((+(((((((/* implicit */int) (short)(-32767 - 1))) + (2147483647))) >> (((((/* implicit */int) var_4)) + (32638))))))) << ((((+(-9223372036854775801LL))) - (-9223372036854775804LL)))));
                                var_20 += (!(((/* implicit */_Bool) (-(((/* implicit */int) var_13))))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_2))))) : (((((/* implicit */unsigned long long int) 2147483392)) % (9699492101039750666ULL)))))) ? (((((/* implicit */_Bool) ((unsigned short) 488739353))) ? (((/* implicit */int) min((var_3), (var_6)))) : (((/* implicit */int) ((unsigned char) (unsigned char)72))))) : ((-(((((/* implicit */int) arr_20 [i_5] [i_6] [i_7 - 1])) | (((/* implicit */int) var_4))))))));
                }
            } 
        } 
    } 
}
