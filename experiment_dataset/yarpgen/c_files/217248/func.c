/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217248
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
    var_11 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) 0U)))) ? (939524096U) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)170))))))));
    var_12 = ((/* implicit */short) var_9);
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 17; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 18; i_1 += 2) 
        {
            {
                /* LoopSeq 3 */
                for (int i_2 = 2; i_2 < 18; i_2 += 1) 
                {
                    var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 18U)) ? (((/* implicit */int) arr_3 [i_2 + 1])) : (((/* implicit */int) var_0))))))))));
                    var_14 = ((/* implicit */_Bool) (+(((/* implicit */int) ((min((var_10), (((/* implicit */long long int) -1411823461)))) > (((/* implicit */long long int) ((((/* implicit */int) var_1)) / (arr_0 [(signed char)5] [i_0 - 1])))))))));
                }
                for (unsigned char i_3 = 2; i_3 < 18; i_3 += 2) 
                {
                    arr_10 [i_3] [i_1] [i_1] [i_0 + 2] = ((/* implicit */unsigned long long int) ((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3355443199U)) || (((/* implicit */_Bool) (unsigned char)173))))), (var_7))) >= (((((/* implicit */_Bool) (~(((/* implicit */int) (short)-24443))))) ? (((arr_3 [i_0]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (13751120244061749921ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_1] [i_1] [i_1] [i_1])))))));
                    arr_11 [i_1] [i_1] [3] = ((/* implicit */unsigned int) arr_3 [i_0]);
                }
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    arr_14 [i_0] [i_1] [i_4] = ((/* implicit */short) (+(((arr_4 [i_1 - 1] [i_1] [i_0 + 2]) / (min((((/* implicit */int) arr_1 [1ULL])), (arr_4 [i_0] [i_1] [i_4])))))));
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 19; i_5 += 1) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 19; i_6 += 2) 
                        {
                            {
                                var_15 = ((/* implicit */_Bool) var_5);
                                arr_21 [i_1] = ((/* implicit */int) (!((!(((/* implicit */_Bool) 2207622686U))))));
                                var_16 -= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_0)) <= (((/* implicit */int) arr_8 [i_6] [i_0 - 1] [i_1 - 1] [i_5])))))) * (min((((/* implicit */unsigned int) var_4)), (arr_16 [i_0] [i_0] [i_0 + 1] [i_0 + 2] [i_1 + 1])))));
                            }
                        } 
                    } 
                }
                arr_22 [i_1] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (signed char)114)), (arr_17 [i_1] [i_1] [i_1] [i_1])))))) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_18 [i_1]) != (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (unsigned char)31))))))))) : (((((min((-2256476290421381175LL), (var_9))) + (9223372036854775807LL))) >> (((var_9) - (1983657371388641057LL)))))));
            }
        } 
    } 
    var_17 += ((/* implicit */unsigned char) var_8);
    /* LoopNest 2 */
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        for (unsigned int i_8 = 0; i_8 < 16; i_8 += 3) 
        {
            {
                arr_29 [i_8] = ((/* implicit */unsigned long long int) max((-1328710097), (1759395865)));
                /* LoopNest 3 */
                for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                {
                    for (unsigned char i_10 = 0; i_10 < 16; i_10 += 2) 
                    {
                        for (int i_11 = 3; i_11 < 14; i_11 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */int) min((((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (signed char)-123))))), (((((/* implicit */_Bool) (short)24443)) ? (9866245624244569069ULL) : (((/* implicit */unsigned long long int) 2207622686U))))));
                                arr_39 [i_7] [i_8] [i_9] [i_10] [i_11] |= ((/* implicit */unsigned int) ((-2914441391702018585LL) ^ (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1)))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
