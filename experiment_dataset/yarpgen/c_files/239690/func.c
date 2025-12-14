/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239690
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239690 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239690
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
    var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) 4294967289U))));
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 11; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 10; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 12; i_4 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */_Bool) arr_3 [i_0 - 1] [i_0 - 1]);
                                var_22 &= ((/* implicit */long long int) min((((/* implicit */unsigned long long int) var_19)), (((unsigned long long int) arr_10 [i_0] [i_1] [i_2] [i_2] [i_4] [i_4]))));
                                var_23 = ((/* implicit */unsigned char) ((((((((((/* implicit */_Bool) arr_12 [i_0 + 1] [i_1] [i_2 - 1] [i_3] [(unsigned char)5])) ? (((/* implicit */int) arr_11 [i_0] [i_1] [i_2] [i_3] [i_4])) : (((/* implicit */int) arr_8 [i_1])))) + (2147483647))) << (((((((((/* implicit */int) (short)-27782)) + (2147483647))) >> (((var_15) - (2253124545U))))) - (2097124))))) | (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_1] [i_1] [i_2] [i_3] [i_4])) ? (arr_12 [i_4] [i_1] [(_Bool)1] [(unsigned char)3] [i_4]) : (((/* implicit */unsigned long long int) var_18))))) ? (((/* implicit */int) (signed char)86)) : (((/* implicit */int) arr_11 [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_2 + 1] [i_0 - 1]))))));
                                arr_14 [i_0] [i_1] [i_2] [10] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)111)) ? (((/* implicit */int) (unsigned short)18345)) : (((int) arr_0 [i_1] [(_Bool)1]))));
                            }
                        } 
                    } 
                    var_24 |= ((/* implicit */signed char) min((((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) arr_11 [i_0 - 1] [i_0] [i_0] [i_0 - 1] [i_2])) == (((/* implicit */int) arr_1 [i_0 + 1]))))) % (((/* implicit */int) arr_5 [i_2] [i_2 + 2] [i_2]))))), (max((var_18), (((/* implicit */unsigned int) ((short) (unsigned char)49)))))));
                    var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)0))))) % (4807430904659771622LL)))) ? (2218986715U) : (((unsigned int) arr_3 [i_0] [i_0 - 1]))));
                }
            } 
        } 
    } 
}
