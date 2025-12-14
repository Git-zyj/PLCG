/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237502
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237502 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237502
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
    for (signed char i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (short i_1 = 3; i_1 < 10; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                {
                    arr_8 [i_1] [i_1 - 2] [(unsigned char)11] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((unsigned int) arr_5 [9ULL] [i_1] [i_2] [2ULL]))), (((((/* implicit */_Bool) (unsigned char)204)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (9223372036854775790LL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (((((/* implicit */_Bool) arr_5 [i_1 - 2] [i_1] [i_1 + 2] [i_1 - 2])) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1 - 1] [i_1] [(short)2] [i_1 - 1])))))));
                    var_14 = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_3 [i_1]), (var_11))))) > (((arr_0 [(unsigned short)2]) + (((/* implicit */unsigned long long int) var_12)))))));
                    /* LoopSeq 2 */
                    for (signed char i_3 = 2; i_3 < 11; i_3 += 2) /* same iter space */
                    {
                        arr_11 [i_1] [i_1] = ((((((/* implicit */_Bool) min((((/* implicit */unsigned short) (signed char)-109)), ((unsigned short)50876)))) && (((/* implicit */_Bool) var_5)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((unsigned short) arr_0 [(unsigned short)2])), (((/* implicit */unsigned short) (signed char)-122)))))) : (var_1));
                        arr_12 [i_0] [i_1] [i_2] [6U] &= ((/* implicit */int) (+(min((arr_0 [i_3 + 2]), (arr_0 [i_3 - 1])))));
                    }
                    for (signed char i_4 = 2; i_4 < 11; i_4 += 2) /* same iter space */
                    {
                        var_15 ^= ((/* implicit */short) (+(var_1)));
                        arr_15 [i_0] [i_0] [i_1] [i_4] = ((/* implicit */unsigned short) (~(min((((unsigned long long int) arr_14 [i_0] [i_0] [i_0] [i_1])), (((/* implicit */unsigned long long int) min((var_10), (((/* implicit */unsigned int) arr_5 [i_0] [i_1] [i_1] [(unsigned short)10])))))))));
                    }
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) var_4))));
    /* LoopNest 2 */
    for (short i_5 = 2; i_5 < 11; i_5 += 3) 
    {
        for (short i_6 = 2; i_6 < 10; i_6 += 1) 
        {
            {
                arr_21 [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? ((~(((((/* implicit */_Bool) (signed char)22)) ? (((/* implicit */int) (signed char)-117)) : (arr_20 [i_6] [i_5] [i_5]))))) : (((/* implicit */int) (unsigned short)4264))));
                var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) 9223372036854775788LL))));
                arr_22 [i_5] [i_6] [i_5] = ((/* implicit */signed char) min(((~(min((((/* implicit */unsigned int) arr_3 [i_5])), (arr_13 [i_5]))))), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_1 [i_5 + 1])))))));
                arr_23 [i_5] = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) arr_6 [i_5] [i_5])) ? (((var_5) | (((/* implicit */long long int) ((/* implicit */int) var_3))))) : (((/* implicit */long long int) ((/* implicit */int) ((short) (short)30190)))))));
                var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) ((18446744073709551601ULL) & (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-60))))) & (((((/* implicit */_Bool) arr_6 [i_5] [(unsigned char)6])) ? (2173310085U) : (2121657211U)))))))))));
            }
        } 
    } 
}
