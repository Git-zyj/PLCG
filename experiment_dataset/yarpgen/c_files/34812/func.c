/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34812
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34812 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34812
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
    var_11 = ((/* implicit */short) ((((/* implicit */_Bool) min((var_2), (((/* implicit */long long int) var_1))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((_Bool) var_8)) || (((/* implicit */_Bool) max(((short)-4068), (((/* implicit */short) var_1))))))))) : ((+(min((((/* implicit */long long int) var_8)), (var_2)))))));
    var_12 |= ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((unsigned int) (short)-16637)) <= (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (var_10) : (var_10)))))))) + (0U)));
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 15; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (unsigned int i_2 = 1; i_2 < 15; i_2 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (short i_3 = 0; i_3 < 16; i_3 += 2) /* same iter space */
                    {
                        var_13 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) ((((/* implicit */int) arr_5 [i_0] [i_1] [(unsigned char)6] [i_3])) < (((/* implicit */int) var_4))))), (((unsigned short) var_10)))))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((((var_10) + (2147483647))) >> (((((/* implicit */int) var_3)) - (6236)))))) : (arr_7 [i_3] [i_2 + 1] [i_1] [i_0 + 1] [i_0] [i_0 + 1])))));
                        arr_9 [i_3] [i_2 - 1] [(_Bool)1] [i_0] = ((/* implicit */unsigned char) arr_2 [i_1] [i_0]);
                    }
                    for (short i_4 = 0; i_4 < 16; i_4 += 2) /* same iter space */
                    {
                        var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) var_1))) ? (((/* implicit */unsigned int) min((min((var_0), (((/* implicit */int) var_6)))), (((((/* implicit */_Bool) arr_11 [i_0] [(unsigned short)9] [i_2 - 1])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_9))))))) : (min((4294967295U), (((/* implicit */unsigned int) (signed char)-73)))))))));
                        arr_14 [i_0] [i_0] [i_2] [13LL] = ((/* implicit */unsigned char) min((((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_4] [i_2 + 1] [i_0 - 1])) || (((/* implicit */_Bool) arr_8 [i_4] [i_2 - 1] [i_1] [i_1] [i_0] [i_0]))))), (((((/* implicit */_Bool) arr_8 [i_0 + 1] [i_0 - 1] [i_0] [(signed char)1] [i_2] [i_4])) ? (((/* implicit */int) arr_3 [12U] [(signed char)14] [i_1])) : (((/* implicit */int) arr_8 [i_4] [i_4] [i_4] [i_2 - 1] [i_1] [i_0 + 1]))))));
                    }
                    for (signed char i_5 = 0; i_5 < 16; i_5 += 1) 
                    {
                        var_15 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (+(var_2)))) ? (arr_10 [i_2 - 1] [i_2 - 1] [i_5] [(signed char)12]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)254))))) + (((/* implicit */unsigned int) (-(((/* implicit */int) arr_6 [i_0 + 1])))))));
                        arr_17 [i_5] [i_2 + 1] [15U] [(short)15] [i_5] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) (unsigned char)127)))) || (var_8)));
                    }
                    /* LoopSeq 2 */
                    for (int i_6 = 1; i_6 < 15; i_6 += 1) 
                    {
                        arr_21 [i_6] [i_6] [(signed char)2] [i_1] [i_6] [i_0 + 1] = (short)2840;
                        var_16 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))) >= (min((-245409958199956439LL), (((/* implicit */long long int) arr_7 [i_0 - 1] [i_6] [i_1] [i_2] [i_6] [i_6]))))));
                    }
                    for (long long int i_7 = 0; i_7 < 16; i_7 += 4) 
                    {
                        var_17 += var_5;
                        var_18 = ((/* implicit */_Bool) min((var_18), (((((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) arr_4 [i_2 - 1]))))) <= (((((/* implicit */_Bool) arr_4 [i_2 - 1])) ? (((/* implicit */int) arr_4 [i_2 - 1])) : (((/* implicit */int) var_3))))))));
                        arr_24 [(unsigned short)7] [(short)0] [i_2] [(unsigned char)12] [i_7] = min((((/* implicit */int) var_8)), ((-(((/* implicit */int) var_8)))));
                        arr_25 [i_0] [i_1] [i_2 + 1] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_13 [i_7])))) ? (((/* implicit */int) arr_11 [i_2 - 1] [i_0 + 1] [i_0 + 1])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [(unsigned char)8] [(unsigned char)2])))))))) || (((/* implicit */_Bool) arr_4 [(short)10]))));
                    }
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
    {
        var_19 *= ((/* implicit */short) ((var_8) ? (((/* implicit */int) ((_Bool) var_1))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_20 [i_8] [i_8] [i_8] [i_8] [i_8])) || (var_8))))));
        arr_28 [i_8] = ((/* implicit */signed char) (~(var_7)));
        var_20 = ((/* implicit */signed char) (-(max((((((var_2) + (9223372036854775807LL))) << (((((/* implicit */int) var_6)) - (43117))))), (((((/* implicit */_Bool) arr_3 [i_8] [(unsigned char)3] [i_8])) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))))));
    }
    /* LoopNest 3 */
    for (unsigned char i_9 = 0; i_9 < 10; i_9 += 3) 
    {
        for (unsigned short i_10 = 0; i_10 < 10; i_10 += 2) 
        {
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                {
                    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_11] [i_10] [i_10] [5ULL])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_9] [1U] [i_11] [i_11]))) : (3966829548U)))) ? (((((/* implicit */unsigned int) ((((/* implicit */_Bool) -245409958199956447LL)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_5 [i_9] [5] [i_10] [i_9]))))) & (arr_7 [i_9] [i_10] [i_10] [(unsigned short)7] [i_11] [i_11]))) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))));
                    arr_36 [i_11] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_22 [(signed char)9] [i_9] [i_10] [i_11] [i_11]) / (arr_22 [i_9] [i_9] [i_10] [i_10] [i_11])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_30 [(_Bool)1] [i_10])) * (((/* implicit */int) var_4))))) : (max((((/* implicit */unsigned long long int) var_0)), ((+(arr_20 [i_9] [i_9] [(unsigned char)13] [(_Bool)1] [11LL])))))));
                    var_22 -= ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_11] [8LL] [i_9] [i_9] [i_9])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_32 [i_10]))))) ? (arr_13 [i_10]) : (((/* implicit */int) ((unsigned char) var_7))))) != (((/* implicit */int) var_4))));
                    var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) min((((var_2) - (((/* implicit */long long int) ((int) arr_5 [i_9] [i_10] [i_9] [i_9]))))), (((/* implicit */long long int) var_3)))))));
                    arr_37 [i_11] = ((/* implicit */short) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)214))) : (708573003U)));
                }
            } 
        } 
    } 
}
