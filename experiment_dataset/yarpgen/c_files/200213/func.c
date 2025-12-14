/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200213
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200213 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200213
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
        for (long long int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 21; i_2 += 2) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned long long int) (-((~(var_5)))));
                            var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 8021164653127740076LL)) ? (((/* implicit */int) (signed char)102)) : (((/* implicit */int) (unsigned short)65535))));
                            var_17 = ((/* implicit */unsigned short) (-(max((var_10), (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-102)))))))));
                        }
                    } 
                } 
                var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_4 [i_0]))))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 2) 
    {
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            {
                arr_17 [i_5] [i_5] = ((/* implicit */unsigned int) (((((~(var_5))) == (((/* implicit */long long int) (~(((/* implicit */int) (signed char)106))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(arr_10 [i_4] [i_4] [i_4] [i_4])))) ? (((/* implicit */int) arr_2 [i_4] [i_5])) : (((/* implicit */int) arr_4 [i_4]))))) : (((((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_4]))) <= (2302667444U))) ? (((((/* implicit */_Bool) var_13)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_4] [i_4]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_12 [i_4])), (arr_4 [i_4])))))))));
                /* LoopSeq 1 */
                for (signed char i_6 = 0; i_6 < 15; i_6 += 4) 
                {
                    var_19 &= ((/* implicit */long long int) max((arr_10 [i_4] [i_4] [i_5] [i_6]), (((/* implicit */unsigned int) var_7))));
                    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_16 [0] [i_5] [i_5])) ? (arr_19 [i_4] [i_4] [i_4]) : (((/* implicit */unsigned long long int) var_5))))))) ? (((long long int) ((((/* implicit */_Bool) (short)-30621)) ? (arr_10 [i_6] [i_6] [i_5] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_4] [i_5] [15LL])))))) : (((/* implicit */long long int) ((((((/* implicit */int) (signed char)-102)) + (2147483647))) >> (((((/* implicit */int) (signed char)127)) - (98))))))));
                }
            }
        } 
    } 
    /* LoopSeq 1 */
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        arr_23 [i_7] = ((/* implicit */signed char) (~(((((((/* implicit */unsigned long long int) 16252928U)) >= (arr_21 [i_7] [i_7]))) ? (404389048) : (((/* implicit */int) ((((/* implicit */unsigned long long int) 16252906U)) <= (arr_21 [(_Bool)1] [i_7]))))))));
        var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((((_Bool) ((arr_21 [i_7] [i_7]) | (((/* implicit */unsigned long long int) var_5))))) ? (((/* implicit */long long int) arr_22 [i_7] [i_7])) : (((((/* implicit */_Bool) 9223372036854775807LL)) ? (35184371957760LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)26))))))))));
        /* LoopSeq 1 */
        for (int i_8 = 1; i_8 < 18; i_8 += 4) 
        {
            var_22 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_25 [i_8] [i_8] [i_8])) ? (((/* implicit */int) arr_24 [i_7] [i_7])) : (((((/* implicit */_Bool) (signed char)-32)) ? (((/* implicit */int) (unsigned char)246)) : (((/* implicit */int) (unsigned char)255))))))));
            arr_27 [i_7] = ((/* implicit */unsigned long long int) ((long long int) ((((unsigned long long int) (signed char)-105)) * (((/* implicit */unsigned long long int) min((arr_22 [i_8 + 1] [i_7]), (arr_22 [i_7] [i_7])))))));
        }
    }
    /* LoopNest 2 */
    for (unsigned short i_9 = 0; i_9 < 18; i_9 += 3) 
    {
        for (unsigned char i_10 = 3; i_10 < 16; i_10 += 2) 
        {
            {
                arr_32 [i_9] [i_10] [i_10 + 1] |= (~(min((((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-30621))))), (min((((/* implicit */unsigned long long int) arr_6 [i_9] [i_10 - 3] [i_9])), (arr_5 [i_10] [i_10] [i_9]))))));
                var_23 &= ((/* implicit */signed char) (~(((/* implicit */int) ((arr_5 [i_10 - 2] [i_10 + 2] [i_10 + 1]) == (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-30621))))))));
            }
        } 
    } 
    var_24 += ((/* implicit */unsigned int) (-(var_0)));
}
