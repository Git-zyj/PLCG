/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236168
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236168 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236168
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
    var_13 = ((/* implicit */long long int) var_4);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 25; i_2 += 2) 
                {
                    for (short i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 25; i_4 += 1) 
                        {
                            {
                                arr_13 [i_0] [i_1] [i_2] [i_4] [i_0] = ((/* implicit */long long int) (unsigned short)43889);
                                var_14 *= ((/* implicit */unsigned short) min((max(((unsigned char)247), ((unsigned char)49))), (((/* implicit */unsigned char) (signed char)16))));
                                arr_14 [i_0] [(unsigned short)13] [i_4] [i_0] [i_0] = ((/* implicit */long long int) var_4);
                            }
                        } 
                    } 
                } 
                var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) arr_4 [i_0] [19ULL] [16U]))));
                arr_15 [7U] [(unsigned short)14] = ((/* implicit */unsigned short) (unsigned char)29);
                arr_16 [i_0] [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_8 [i_0] [(unsigned short)14]), (((/* implicit */unsigned char) var_6))))) ? (((((/* implicit */_Bool) arr_12 [(short)6] [(short)0] [i_0] [i_1] [i_1])) ? (((/* implicit */int) arr_12 [20ULL] [i_1] [i_0] [i_1] [i_0])) : (((/* implicit */int) (unsigned char)162)))) : (((/* implicit */int) (signed char)96))));
                var_16 = ((/* implicit */short) ((((((/* implicit */_Bool) (unsigned char)105)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (signed char)15)) : (((/* implicit */int) arr_2 [i_1] [i_1] [i_0]))))) : (((((/* implicit */_Bool) arr_8 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) 1049117797U)) : (var_0))))) & (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_8 [i_0] [(short)23]))))), (max((var_10), (((/* implicit */unsigned int) arr_7 [(short)4] [(short)4] [8U] [8U])))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_5 = 0; i_5 < 22; i_5 += 2) 
    {
        for (unsigned int i_6 = 0; i_6 < 22; i_6 += 1) 
        {
            for (unsigned short i_7 = 0; i_7 < 22; i_7 += 2) 
            {
                {
                    var_17 = ((/* implicit */unsigned char) var_0);
                    arr_24 [i_6] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [11U] [i_6] [i_7])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned short)43862), (((/* implicit */unsigned short) var_6)))))) : (min((((/* implicit */unsigned long long int) ((unsigned int) arr_18 [(short)5] [i_7]))), (((((/* implicit */unsigned long long int) 4080U)) - (var_0)))))));
                }
            } 
        } 
    } 
}
