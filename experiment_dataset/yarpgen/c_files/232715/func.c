/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232715
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232715 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232715
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
    var_10 = ((/* implicit */unsigned short) (-(((var_2) / (((/* implicit */long long int) ((((/* implicit */int) var_5)) & (((/* implicit */int) var_4)))))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 3; i_1 < 15; i_1 += 3) 
        {
            for (signed char i_2 = 2; i_2 < 14; i_2 += 3) 
            {
                {
                    var_11 &= ((/* implicit */signed char) arr_0 [i_1 - 3]);
                    arr_7 [i_2] = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) arr_2 [i_0] [i_1 + 2])), (((((/* implicit */_Bool) 30082464U)) ? (30082457U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)127)))))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned int i_3 = 1; i_3 < 13; i_3 += 3) 
        {
            for (signed char i_4 = 1; i_4 < 16; i_4 += 4) 
            {
                for (unsigned int i_5 = 0; i_5 < 17; i_5 += 1) 
                {
                    {
                        var_12 = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) var_1)) ? (arr_8 [i_3 + 1] [i_3] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_3 + 3]))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (signed char i_6 = 0; i_6 < 17; i_6 += 3) 
                        {
                            arr_19 [i_4] = ((/* implicit */unsigned char) (-(arr_17 [i_5] [i_4 + 1] [i_3 + 2] [i_3 + 4])));
                            arr_20 [i_0] [i_0] [i_4] [i_4] [i_0] [i_6] [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) arr_15 [i_6] [i_4] [i_4] [i_4 - 1] [i_3 + 2] [i_0])) ? (arr_8 [i_3 + 4] [i_3 + 3] [i_3 + 3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_10 [(signed char)11] [(signed char)11] [(signed char)11]))))));
                            var_13 = ((/* implicit */int) ((((/* implicit */unsigned int) arr_12 [i_6] [i_4] [i_3] [i_0])) + (((((/* implicit */unsigned int) ((/* implicit */int) var_7))) + (arr_16 [i_6] [i_5] [i_3 + 3] [i_3 + 3] [i_3] [i_0])))));
                            arr_21 [i_0] [i_3] [i_3 + 4] [i_3 + 4] [i_4] [10U] [i_6] = ((/* implicit */long long int) ((arr_3 [i_6]) ? (((((/* implicit */int) var_4)) % (arr_10 [i_0] [i_3] [i_6]))) : (((((/* implicit */int) var_3)) ^ (((/* implicit */int) var_4))))));
                        }
                        var_14 |= ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) arr_18 [i_5] [i_4] [i_3] [i_3] [i_0] [i_0]))) && (((/* implicit */_Bool) (-(((/* implicit */int) var_0)))))))), (((((((/* implicit */_Bool) 7)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)43498))) : (30082467U))) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_5] [i_3] [i_0])))))));
                    }
                } 
            } 
        } 
        var_15 = ((/* implicit */unsigned short) ((short) ((unsigned long long int) arr_18 [(_Bool)1] [i_0] [i_0] [i_0] [i_0] [i_0])));
        var_16 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0] [i_0])) ? (arr_9 [i_0]) : (var_6)))))) ? (((unsigned int) ((((/* implicit */_Bool) arr_13 [i_0] [i_0] [(unsigned char)8])) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [i_0])))))) : (max((((unsigned int) var_4)), (var_6)))));
    }
    for (int i_7 = 2; i_7 < 13; i_7 += 4) 
    {
        var_17 = ((/* implicit */long long int) ((((((/* implicit */int) (signed char)-19)) + (2147483647))) >> (((((/* implicit */int) (signed char)-19)) + (48)))));
        var_18 -= ((/* implicit */unsigned int) (((((-(arr_0 [i_7]))) + (9223372036854775807LL))) << (((((((/* implicit */int) arr_1 [i_7] [i_7])) + (102))) - (37)))));
        arr_24 [i_7 - 1] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_11 [i_7])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_7]))) : (arr_8 [i_7 - 1] [i_7 - 2] [(unsigned char)11]))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_22 [i_7 - 2]), (arr_22 [i_7 - 2])))))));
    }
}
