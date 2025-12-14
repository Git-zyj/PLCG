/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202319
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202319 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202319
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
    for (unsigned short i_0 = 1; i_0 < 11; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 1) 
                {
                    for (unsigned int i_3 = 3; i_3 < 11; i_3 += 2) 
                    {
                        for (signed char i_4 = 0; i_4 < 12; i_4 += 2) 
                        {
                            {
                                var_12 -= ((/* implicit */_Bool) (~(((arr_11 [i_0 - 1] [i_2] [i_3 - 2] [i_3 - 3]) ? (((/* implicit */int) arr_11 [i_0 - 1] [i_1] [i_3 - 2] [i_3])) : (((/* implicit */int) arr_11 [i_0 + 1] [i_1] [i_3 - 1] [i_3 - 3]))))));
                                var_13 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)127)) << (((((/* implicit */int) arr_6 [i_0 - 1])) - (10)))))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_0 [i_0 + 1])) : (((/* implicit */int) arr_6 [i_0 + 1])))) : (((/* implicit */int) max(((signed char)-125), (arr_6 [i_0 + 1]))))));
                            }
                        } 
                    } 
                } 
                var_14 = ((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)124))) * (var_8))) & (((/* implicit */unsigned long long int) ((15) & (((/* implicit */int) max(((signed char)-122), (var_7))))))));
                /* LoopNest 2 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    for (unsigned char i_6 = 3; i_6 < 9; i_6 += 4) 
                    {
                        {
                            arr_20 [i_0 + 1] [i_1] [i_1] [i_5] [(short)11] [i_6] = ((/* implicit */short) ((unsigned short) ((long long int) var_4)));
                            var_15 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 1836389379715271568LL)) ? (((((/* implicit */int) (_Bool)0)) << (((((/* implicit */int) var_7)) - (63))))) : (((/* implicit */int) ((_Bool) (unsigned char)86))))))));
                            var_16 += ((((869981259) < ((-(((/* implicit */int) (unsigned short)13765)))))) ? (((/* implicit */int) var_1)) : (max((((((/* implicit */int) var_1)) ^ (((/* implicit */int) var_10)))), (((/* implicit */int) (short)-18710)))));
                            var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((unsigned long long int) (unsigned char)99)), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_1)), (16383LL))))))) ? (((arr_11 [i_0 + 1] [i_6] [i_6 + 2] [(unsigned char)10]) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_6 - 1] [i_1] [i_1]))) : (max((((/* implicit */long long int) arr_2 [i_5])), (var_6))))) : (((/* implicit */long long int) ((arr_13 [i_0] [i_0 + 1] [i_0 - 1] [i_6 - 1]) ? (((unsigned int) var_8)) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_5)))))))));
                        }
                    } 
                } 
                arr_21 [i_0 - 1] [i_1] = ((/* implicit */unsigned int) ((unsigned short) 869981271));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_7 = 0; i_7 < 15; i_7 += 3) 
    {
        for (signed char i_8 = 1; i_8 < 13; i_8 += 3) 
        {
            for (short i_9 = 0; i_9 < 15; i_9 += 2) 
            {
                {
                    var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) min((((/* implicit */unsigned short) var_1)), ((unsigned short)13765))))));
                    var_19 ^= ((/* implicit */int) (~(arr_24 [i_8 - 1] [i_8 + 1] [i_8 + 2])));
                    arr_28 [10] [i_9] = ((/* implicit */_Bool) var_7);
                    /* LoopNest 2 */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        for (unsigned long long int i_11 = 0; i_11 < 15; i_11 += 3) 
                        {
                            {
                                arr_34 [i_7] [i_8] [i_8] [i_10] [i_7] = ((/* implicit */unsigned long long int) (_Bool)1);
                                var_20 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)4095))))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (arr_29 [i_9] [i_8 + 2] [i_9] [(short)10] [i_11] [(short)1])))));
                                arr_35 [i_7] [i_8] [i_9] [i_10] [i_11] = ((((/* implicit */_Bool) max(((-(((/* implicit */int) (signed char)-127)))), (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)114)))))))) ? (((/* implicit */unsigned long long int) max((-869981283), (max((((/* implicit */int) var_11)), (-869981283)))))) : ((+(arr_23 [i_7]))));
                                var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) (short)23267))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_22 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? ((-(max((-1LL), (((/* implicit */long long int) (short)-19)))))) : (((/* implicit */long long int) (+(((((/* implicit */_Bool) (signed char)43)) ? (((/* implicit */int) (short)-4316)) : (((/* implicit */int) (unsigned short)13765)))))))));
}
