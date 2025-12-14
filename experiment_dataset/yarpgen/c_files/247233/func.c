/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247233
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247233 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247233
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
    for (unsigned short i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */unsigned short) ((arr_0 [i_1]) == (((((/* implicit */_Bool) ((unsigned short) -2824803607617256920LL))) ? (arr_4 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535)))))));
                var_15 ^= ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? ((-(((((/* implicit */_Bool) var_0)) ? (-2824803607617256915LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))))))) : (((/* implicit */long long int) (+(((((/* implicit */unsigned int) ((/* implicit */int) var_8))) - (3576677425U)))))));
                var_16 ^= ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (unsigned short)65527))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_0)))) : (min((arr_0 [i_0 - 1]), (((/* implicit */long long int) ((((/* implicit */int) var_1)) * (((/* implicit */int) var_8))))))));
                var_17 = ((/* implicit */unsigned int) min((var_17), (max((((/* implicit */unsigned int) var_9)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned short)65527)) : (((/* implicit */int) arr_2 [i_0 + 1] [i_0 + 1]))))) ? (max((var_0), (((/* implicit */unsigned int) (unsigned short)65535)))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [(unsigned short)16])))))))));
            }
        } 
    } 
    var_18 = ((/* implicit */int) (unsigned short)65525);
    /* LoopNest 2 */
    for (long long int i_2 = 0; i_2 < 12; i_2 += 1) 
    {
        for (short i_3 = 0; i_3 < 12; i_3 += 1) 
        {
            {
                var_19 |= ((/* implicit */unsigned short) var_5);
                /* LoopNest 3 */
                for (unsigned int i_4 = 0; i_4 < 12; i_4 += 1) 
                {
                    for (unsigned int i_5 = 3; i_5 < 11; i_5 += 3) 
                    {
                        for (unsigned short i_6 = 3; i_6 < 8; i_6 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned long long int) ((unsigned int) ((unsigned int) arr_4 [i_6 - 1])));
                                var_21 ^= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_12 [i_2] [(unsigned short)8] [i_4] [i_2])) ? (((((/* implicit */_Bool) (short)29434)) ? (((/* implicit */unsigned int) var_6)) : (arr_14 [i_2] [i_3] [i_4] [i_5]))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)16))))) == (((/* implicit */unsigned int) (-(arr_16 [i_6 + 1] [i_6 + 3] [i_6 + 3] [i_6 + 4] [i_6 - 1] [i_6 + 4]))))));
                            }
                        } 
                    } 
                } 
                var_22 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_10)) ? (arr_11 [i_3] [i_3] [i_2]) : (arr_11 [i_2] [i_2] [i_2]))) / (max((((/* implicit */unsigned long long int) arr_3 [i_2] [i_3] [i_3])), (arr_11 [i_2] [i_2] [i_2])))));
            }
        } 
    } 
}
