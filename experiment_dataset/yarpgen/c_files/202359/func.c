/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202359
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202359 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202359
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        var_17 = ((/* implicit */unsigned int) min((var_17), ((+(76452635U)))));
        arr_4 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) ? (arr_2 [i_0]) : (arr_2 [i_0])));
    }
    for (unsigned char i_1 = 0; i_1 < 20; i_1 += 1) 
    {
        var_18 = ((/* implicit */long long int) ((unsigned int) ((1294224570U) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))))));
        var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) (-(1294224570U))))) ? (((/* implicit */long long int) max((((/* implicit */unsigned int) ((unsigned char) 12LL))), (arr_7 [i_1] [i_1])))) : (((((/* implicit */_Bool) 3493053069U)) ? (((/* implicit */long long int) (-(895347041U)))) : (arr_5 [i_1])))));
        var_20 |= ((/* implicit */unsigned int) ((arr_6 [i_1] [18LL]) >= (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [16] [i_1]))))))));
        var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) var_1))));
        var_22 = (i_1 % 2 == 0) ? (((/* implicit */unsigned int) ((((/* implicit */long long int) arr_6 [i_1] [i_1])) * (max((((((/* implicit */long long int) arr_7 [i_1] [i_1])) + (arr_5 [i_1]))), (((/* implicit */long long int) (!(((/* implicit */_Bool) 1496400586)))))))))) : (((/* implicit */unsigned int) ((((/* implicit */long long int) arr_6 [i_1] [i_1])) / (max((((((/* implicit */long long int) arr_7 [i_1] [i_1])) + (arr_5 [i_1]))), (((/* implicit */long long int) (!(((/* implicit */_Bool) 1496400586))))))))));
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 19; i_2 += 2) 
    {
        for (long long int i_3 = 0; i_3 < 19; i_3 += 1) 
        {
            for (unsigned int i_4 = 0; i_4 < 19; i_4 += 1) 
            {
                {
                    var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) var_1))));
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 19; i_5 += 1) 
                    {
                        for (unsigned char i_6 = 2; i_6 < 17; i_6 += 1) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 2910503786U)) || (((/* implicit */_Bool) 1496400586))));
                                var_25 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_13 [i_2] [i_3] [i_5] [i_5]))));
                            }
                        } 
                    } 
                    var_26 = var_15;
                    var_27 = arr_17 [i_4] [4LL] [i_4] [i_3] [i_2];
                    /* LoopNest 2 */
                    for (int i_7 = 3; i_7 < 17; i_7 += 1) 
                    {
                        for (long long int i_8 = 2; i_8 < 17; i_8 += 1) 
                        {
                            {
                                var_28 = ((/* implicit */signed char) ((var_6) * (((/* implicit */unsigned int) ((/* implicit */int) (signed char)111)))));
                                var_29 = ((/* implicit */int) ((min((arr_26 [i_2] [i_3] [i_4] [i_4] [i_4] [(signed char)0] [i_8]), (((((/* implicit */_Bool) arr_6 [i_3] [i_4])) ? (arr_23 [i_2] [i_2] [i_3] [i_4] [2LL] [i_2] [i_8]) : (1384463511U))))) == (((/* implicit */unsigned int) ((/* implicit */int) min((min((var_2), (((/* implicit */unsigned char) (signed char)14)))), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_8)))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
