/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230005
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230005 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230005
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
    for (long long int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (signed char i_1 = 2; i_1 < 19; i_1 += 4) 
        {
            {
                arr_7 [7ULL] [7ULL] = ((/* implicit */unsigned short) arr_3 [i_0]);
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 21; i_4 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(arr_8 [i_0] [(signed char)0])))) ? (((/* implicit */long long int) (~(((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) arr_12 [i_4] [i_1] [i_1] [i_2]))))))) : (((long long int) var_3))));
                                var_18 = 72057319160020992LL;
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_5 = 0; i_5 < 21; i_5 += 3) 
                {
                    for (unsigned int i_6 = 0; i_6 < 21; i_6 += 3) 
                    {
                        {
                            var_19 *= ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (~(((((/* implicit */int) var_11)) / (((/* implicit */int) (signed char)118))))))), (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) var_1)) : (var_13)))));
                            var_20 ^= ((/* implicit */_Bool) (~((+(164590965U)))));
                        }
                    } 
                } 
                var_21 = ((/* implicit */signed char) (+(((((((/* implicit */int) arr_14 [i_0] [i_1 + 1] [i_1 - 2] [i_1 - 1] [i_0])) + (2147483647))) >> (((((((/* implicit */unsigned long long int) var_8)) & (var_13))) - (134513173ULL)))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_7 = 0; i_7 < 13; i_7 += 3) 
    {
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_9 = 0; i_9 < 13; i_9 += 2) 
                {
                    for (unsigned char i_10 = 0; i_10 < 13; i_10 += 3) 
                    {
                        for (unsigned long long int i_11 = 0; i_11 < 13; i_11 += 2) 
                        {
                            {
                                var_22 = ((/* implicit */long long int) var_6);
                                var_23 = max((((long long int) ((((/* implicit */_Bool) var_6)) ? (arr_30 [(unsigned short)8] [i_9] [i_10]) : (((/* implicit */long long int) var_4))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) (+(var_0))))))));
                                var_24 |= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(arr_20 [i_8]))))) & (min((((/* implicit */unsigned long long int) var_12)), (arr_8 [i_7] [i_7])))));
                                arr_33 [i_8] [(short)8] = ((/* implicit */long long int) arr_15 [i_7] [i_7] [i_8] [i_9] [i_9] [i_9] [i_11]);
                            }
                        } 
                    } 
                } 
                var_25 |= ((/* implicit */unsigned int) (((-(var_6))) <= (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)0)))))));
                arr_34 [i_8] [(unsigned char)1] [i_7] = ((/* implicit */unsigned char) arr_3 [6ULL]);
            }
        } 
    } 
}
