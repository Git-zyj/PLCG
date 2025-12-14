/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215923
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215923 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215923
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 15; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 2) 
                        {
                            {
                                var_19 += ((/* implicit */signed char) (~((+(4294967283U)))));
                                var_20 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_0 [i_0] [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (arr_0 [i_0] [i_0]))), (((/* implicit */unsigned long long int) arr_8 [i_4] [i_4] [i_3] [i_2] [i_1] [i_0]))));
                                var_21 = ((/* implicit */unsigned char) ((max((arr_7 [i_0] [i_2 + 2] [i_2] [i_2]), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_3])) ? (((/* implicit */int) arr_10 [i_4] [i_3] [i_2] [i_1] [i_0])) : (((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]))))))) < (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (signed char)-60)) : (((/* implicit */int) (signed char)60))))) ? (((/* implicit */long long int) ((/* implicit */int) var_17))) : (arr_8 [i_2] [i_2] [i_2] [i_2] [i_2 - 3] [i_2])))));
                                var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)75)))))));
                            }
                        } 
                    } 
                } 
                var_23 += ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_0]))));
                var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((arr_8 [i_0] [i_1] [i_0] [i_0] [i_1] [i_0]) <= (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_1]))))))) ^ (((arr_8 [i_1] [i_1] [i_0] [i_0] [i_0] [i_0]) ^ (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_0])))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_5 = 0; i_5 < 18; i_5 += 4) 
    {
        for (unsigned short i_6 = 0; i_6 < 18; i_6 += 1) 
        {
            for (unsigned char i_7 = 0; i_7 < 18; i_7 += 2) 
            {
                {
                    arr_21 [i_6] [i_7] = ((/* implicit */_Bool) ((max((((arr_19 [i_7] [i_6] [i_6] [i_5]) + (((/* implicit */unsigned long long int) 4294967291U)))), (((/* implicit */unsigned long long int) arr_8 [i_5] [i_5] [i_5] [i_6] [i_6] [i_7])))) - ((-(min((arr_0 [i_7] [i_5]), (((/* implicit */unsigned long long int) var_16))))))));
                    /* LoopNest 2 */
                    for (short i_8 = 0; i_8 < 18; i_8 += 1) 
                    {
                        for (short i_9 = 0; i_9 < 18; i_9 += 2) 
                        {
                            {
                                var_25 = ((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((arr_24 [i_5] [i_6] [i_7] [i_8] [i_8] [i_8] [i_9]) ? (arr_18 [i_5] [i_5] [i_5] [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_6] [i_6])))))))))));
                                var_26 = ((((((/* implicit */unsigned long long int) 4U)) < (((((/* implicit */_Bool) arr_5 [i_5] [i_9])) ? (((/* implicit */unsigned long long int) arr_7 [i_5] [i_6] [i_7] [i_8])) : (arr_19 [i_5] [i_6] [i_5] [i_5]))))) ? (4294967285U) : (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned short)11203)), (arr_2 [i_5])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)45))) : (arr_18 [i_5] [i_6] [i_8] [i_9]))));
                                var_27 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_5] [i_6] [i_6] [i_8] [i_9])) ? (((/* implicit */int) arr_25 [i_5] [i_6] [i_6] [i_8] [i_9])) : (((/* implicit */int) arr_25 [i_9] [i_8] [i_6] [i_6] [i_5]))))) ? (((/* implicit */unsigned int) ((((((/* implicit */int) arr_13 [i_5])) + (2147483647))) << (((((/* implicit */int) arr_20 [i_5] [i_6] [i_7] [i_9])) - (26)))))) : (max((var_4), (((/* implicit */unsigned int) arr_13 [i_5])))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_28 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_8))));
}
