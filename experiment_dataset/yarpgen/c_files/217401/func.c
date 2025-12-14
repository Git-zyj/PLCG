/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217401
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217401 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217401
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
    for (short i_0 = 4; i_0 < 20; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    var_13 = ((/* implicit */int) arr_4 [7ULL] [i_1] [7ULL]);
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (signed char i_4 = 2; i_4 < 21; i_4 += 2) 
                        {
                            {
                                var_14 += ((/* implicit */unsigned short) (-(((/* implicit */int) (_Bool)1))));
                                arr_13 [i_0] [i_3] [(unsigned short)19] [i_3] [i_4 - 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_2] [i_2] [i_2] [i_2] [(unsigned char)7])) ? (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))) + (arr_10 [i_3] [i_1]))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65507)))));
                                var_15 = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_12 [i_4 + 1] [i_4] [i_4 - 1] [i_4 - 2] [i_4 - 2] [i_4 + 2] [i_4])) + (((/* implicit */int) (short)-12169)))) + (((/* implicit */int) min((((/* implicit */unsigned short) arr_12 [(signed char)19] [i_1] [(short)22] [i_1] [i_1] [i_1] [i_1])), (max(((unsigned short)28), (((/* implicit */unsigned short) (unsigned char)205)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_5 = 0; i_5 < 23; i_5 += 1) 
    {
        for (unsigned short i_6 = 0; i_6 < 23; i_6 += 4) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                {
                    arr_20 [i_5] [i_5] [i_5] = ((/* implicit */_Bool) max((((arr_19 [i_5]) + (((/* implicit */long long int) ((/* implicit */int) (unsigned short)40701))))), (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)23)))))));
                    arr_21 [i_5] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_5] [i_6] [i_6] [i_7])) & (((/* implicit */int) arr_6 [16ULL] [i_7] [i_6] [i_5]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_6] [i_6] [i_5] [16U])) ? (((((/* implicit */int) arr_4 [(signed char)11] [i_6] [i_6])) + (((/* implicit */int) arr_18 [i_5] [i_5] [i_5])))) : ((~(((/* implicit */int) var_1))))))) : (((((/* implicit */_Bool) (short)12166)) ? (511ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)22850)))))));
                    var_16 ^= ((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) arr_11 [i_5] [i_5] [i_5] [i_5] [i_5]))) || (max((var_5), (arr_5 [i_5] [i_6] [i_7])))))), (((unsigned int) 5341810460544813681LL))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */long long int) var_10);
}
