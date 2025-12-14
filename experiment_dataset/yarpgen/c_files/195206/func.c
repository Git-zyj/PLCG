/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195206
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195206 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195206
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
    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1747457699275755188ULL)) ? (((/* implicit */int) max((var_4), (var_17)))) : (var_10)))) ? (((/* implicit */unsigned long long int) var_0)) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)88))) | (((((/* implicit */_Bool) 60427815)) ? (var_15) : (((/* implicit */unsigned long long int) var_6))))))));
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 16699286374433796427ULL)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (_Bool)0))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                var_21 = arr_2 [(unsigned char)18] [(unsigned char)18];
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 21; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_12 [i_0] [i_1] [i_2] [(short)18] &= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (arr_7 [i_0]) : (((/* implicit */long long int) var_8))))) ? (((/* implicit */int) arr_11 [i_3] [i_1] [i_1] [i_0])) : (((((/* implicit */_Bool) arr_4 [20LL])) ? (var_10) : (((/* implicit */int) (unsigned char)255)))))) << (((/* implicit */int) ((((-60427815) != (((/* implicit */int) (unsigned char)255)))) || (((/* implicit */_Bool) (~(((/* implicit */int) (short)-14230))))))))));
                            arr_13 [i_1] [i_2] [i_2] [i_3] = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_5)) : (var_10)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_1] [i_1])) ? (arr_8 [i_3] [17ULL]) : (((/* implicit */unsigned long long int) var_6))))))) && (((/* implicit */_Bool) var_13))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_4 = 2; i_4 < 24; i_4 += 3) 
    {
        for (unsigned char i_5 = 0; i_5 < 25; i_5 += 3) 
        {
            {
                arr_21 [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) (-(arr_14 [i_4])))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)22403))) >= (4782935164012766500ULL)))) : (((/* implicit */int) (_Bool)1))));
                /* LoopNest 3 */
                for (unsigned long long int i_6 = 0; i_6 < 25; i_6 += 3) 
                {
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        for (unsigned int i_8 = 0; i_8 < 25; i_8 += 3) 
                        {
                            {
                                arr_31 [i_4] [i_5] [i_6] [i_4] = ((/* implicit */short) min((max((((((/* implicit */_Bool) var_12)) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) var_5))))), (((/* implicit */long long int) var_11)))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32764)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (_Bool)1))))) ? (arr_14 [i_4]) : ((~(60427792))))))));
                                var_22 = ((/* implicit */short) 3797182943U);
                                var_23 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_24 [i_4] [i_4]), (((/* implicit */int) arr_29 [i_4] [i_4] [i_4 - 2] [i_4] [i_4] [i_4 + 1] [i_4]))))) ? (arr_14 [8]) : (((((/* implicit */_Bool) (short)14778)) ? (((/* implicit */int) max(((unsigned short)8191), (((/* implicit */unsigned short) (short)25574))))) : (((/* implicit */int) min((arr_19 [(unsigned short)0]), (((/* implicit */unsigned short) arr_22 [i_6] [i_4] [i_6] [i_7])))))))));
                                var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_4] [i_6] [i_8])) ? (((/* implicit */int) (unsigned char)254)) : (((((-1551318937) + (2147483647))) >> (((/* implicit */int) (_Bool)1))))))) ? ((+(var_12))) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
