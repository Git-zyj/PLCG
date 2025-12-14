/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192164
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192164 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192164
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
    for (short i_0 = 1; i_0 < 11; i_0 += 2) 
    {
        var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((((/* implicit */int) arr_0 [i_0])) * (((/* implicit */int) arr_1 [i_0] [i_0 + 1])))) : (((/* implicit */int) max((arr_1 [i_0] [i_0]), (arr_1 [(short)12] [(short)12]))))))) ? (((/* implicit */int) arr_0 [i_0])) : (max((((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0])))), (((/* implicit */int) arr_0 [i_0]))))));
        /* LoopNest 3 */
        for (long long int i_1 = 2; i_1 < 13; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                for (short i_3 = 0; i_3 < 14; i_3 += 1) 
                {
                    {
                        arr_9 [i_3] [i_2] [i_2] [i_1 - 2] [i_0] = ((((/* implicit */int) arr_4 [i_1] [i_1] [i_1])) * (((/* implicit */int) arr_5 [i_1 + 1] [i_0 + 3] [i_0])));
                        var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) min((min((((unsigned int) arr_2 [i_0] [i_1])), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_4 [i_1] [i_1] [i_1])) : (((/* implicit */int) arr_1 [i_0 + 2] [i_0]))))))), (((/* implicit */unsigned int) min((((/* implicit */int) arr_1 [i_2] [i_2])), ((~(((/* implicit */int) arr_7 [i_0] [i_1] [i_1] [i_2] [i_2] [i_3]))))))))))));
                        arr_10 [i_0 - 1] [i_1] [i_0 - 1] [i_2] [i_0 - 1] [i_3] = ((/* implicit */short) min((((arr_6 [i_0 + 2]) ? (((((/* implicit */_Bool) arr_3 [i_3] [i_2])) ? (((/* implicit */int) arr_7 [i_0] [i_1] [i_1] [i_2] [i_3] [i_3])) : (((/* implicit */int) arr_0 [i_3])))) : (((/* implicit */int) arr_7 [i_3] [i_3] [(unsigned short)13] [i_3] [i_3] [i_3])))), (((/* implicit */int) arr_7 [(unsigned short)7] [(unsigned short)7] [(unsigned short)7] [i_1] [i_2] [i_3]))));
                        var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_2] [i_2] [i_1])) ? (((((/* implicit */int) arr_4 [i_0] [i_0] [i_3])) % (((/* implicit */int) arr_5 [i_1] [i_1] [i_1])))) : (((/* implicit */int) min((((/* implicit */short) arr_4 [i_0] [i_0] [i_0])), (arr_8 [i_0] [i_0] [(signed char)11] [i_0]))))))) ? (max((((/* implicit */int) min(((unsigned short)0), (((/* implicit */unsigned short) arr_4 [i_2] [i_1] [i_2]))))), (((((/* implicit */_Bool) (unsigned short)65518)) ? (((/* implicit */int) (unsigned short)49286)) : (((/* implicit */int) (unsigned short)0)))))) : (((/* implicit */int) arr_6 [4U]))));
                        var_21 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_0] [i_0 + 2] [i_1] [i_2] [i_2] [i_3])) ^ (((/* implicit */int) arr_7 [i_0] [i_1] [i_0] [i_3] [i_0] [i_0]))))) ? (((((/* implicit */int) arr_4 [i_1 - 2] [i_0 + 2] [i_0 + 2])) + (((/* implicit */int) max((((/* implicit */short) arr_1 [i_1] [i_3])), (arr_0 [i_0])))))) : (max((((((/* implicit */_Bool) arr_5 [i_3] [i_3] [i_2])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_8 [i_3] [i_2] [i_0] [i_0])))), (((((/* implicit */_Bool) arr_3 [i_0] [i_2])) ? (((/* implicit */int) arr_3 [i_0] [i_2])) : (((/* implicit */int) arr_3 [i_0] [i_0]))))))));
                    }
                } 
            } 
        } 
        var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) ((((/* implicit */int) max((((/* implicit */unsigned short) max((((/* implicit */unsigned char) arr_6 [i_0])), (arr_1 [i_0] [i_0 + 3])))), (min((((/* implicit */unsigned short) (unsigned char)168)), ((unsigned short)28132)))))) % (max((((((/* implicit */int) arr_3 [i_0] [i_0])) - (((/* implicit */int) arr_3 [i_0] [i_0])))), (((((/* implicit */_Bool) arr_1 [i_0] [i_0 + 1])) ? (((/* implicit */int) arr_5 [i_0] [7] [i_0])) : (((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))))))));
    }
    for (unsigned short i_4 = 0; i_4 < 11; i_4 += 1) 
    {
        var_23 = min((((/* implicit */unsigned short) arr_1 [i_4] [i_4])), (arr_5 [i_4] [i_4] [i_4]));
        arr_13 [i_4] [i_4] |= ((/* implicit */unsigned short) ((((arr_12 [i_4]) ? (((/* implicit */int) arr_7 [i_4] [(short)5] [i_4] [i_4] [i_4] [i_4])) : (((/* implicit */int) arr_11 [i_4])))) / (((/* implicit */int) arr_1 [i_4] [i_4]))));
    }
    /* LoopNest 2 */
    for (short i_5 = 0; i_5 < 14; i_5 += 1) 
    {
        for (signed char i_6 = 4; i_6 < 13; i_6 += 1) 
        {
            {
                var_24 |= ((/* implicit */short) arr_2 [i_5] [i_5]);
                /* LoopNest 2 */
                for (int i_7 = 1; i_7 < 13; i_7 += 1) 
                {
                    for (int i_8 = 2; i_8 < 10; i_8 += 1) 
                    {
                        {
                            var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_18 [i_8 + 2])) ? (((/* implicit */int) max((arr_0 [i_5]), (arr_17 [i_5])))) : (((/* implicit */int) arr_24 [i_7] [i_7] [i_7 + 1] [i_8 + 3]))))), (((((/* implicit */_Bool) (unsigned short)2)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)18))) : (12U))))))));
                            arr_25 [i_5] [i_7] [i_7] [i_5] = ((/* implicit */short) max((max((((((/* implicit */int) arr_20 [i_5] [i_6] [i_6] [i_8])) & (((/* implicit */int) arr_24 [i_8] [i_7] [i_6] [i_5])))), ((~(((/* implicit */int) arr_22 [i_7] [i_5])))))), (((((/* implicit */int) ((short) arr_20 [i_5] [i_5] [i_5] [i_5]))) * (((arr_14 [i_6] [i_6]) ? (((/* implicit */int) arr_8 [i_5] [i_5] [i_7] [i_7])) : (((/* implicit */int) arr_24 [i_7] [i_7] [i_6] [i_5]))))))));
                        }
                    } 
                } 
                var_26 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [(_Bool)1] [i_6 - 2])) ? (((/* implicit */int) arr_22 [(signed char)6] [i_6 - 3])) : (((/* implicit */int) arr_22 [6] [i_6 - 4]))))) ? (((((((/* implicit */int) arr_22 [(short)8] [i_6 + 1])) + (2147483647))) << (((((((/* implicit */int) arr_22 [(unsigned char)0] [i_6 + 1])) + (6395))) - (9))))) : (((((/* implicit */_Bool) arr_22 [12] [i_6 + 1])) ? (((/* implicit */int) arr_22 [(unsigned short)12] [i_6 - 3])) : (((/* implicit */int) arr_22 [(unsigned char)10] [i_6 + 1]))))));
                var_27 = ((/* implicit */short) ((((((((/* implicit */_Bool) arr_20 [i_5] [i_5] [i_6] [i_5])) ? (arr_21 [i_5] [i_5] [i_5] [i_5]) : (((/* implicit */int) arr_14 [i_6] [(short)6])))) >= (((((/* implicit */_Bool) arr_17 [i_6])) ? (((/* implicit */int) arr_0 [i_6])) : (((/* implicit */int) arr_1 [i_6] [i_5])))))) ? (((/* implicit */int) arr_23 [i_5] [i_5] [i_5] [i_6 - 2])) : (min(((-(((/* implicit */int) arr_3 [i_5] [i_6])))), (((/* implicit */int) arr_6 [i_6 - 1]))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned int i_9 = 0; i_9 < 16; i_9 += 3) 
    {
        var_28 ^= ((/* implicit */int) ((unsigned short) min((arr_28 [(signed char)14] [(signed char)14]), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_26 [i_9]))))))));
        var_29 = ((/* implicit */int) max((((((/* implicit */_Bool) max((((/* implicit */long long int) arr_29 [i_9])), (arr_28 [i_9] [i_9])))) ? (((((/* implicit */_Bool) arr_28 [i_9] [i_9])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_9]))) : (arr_27 [i_9]))) : (((((/* implicit */_Bool) arr_29 [i_9])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_9]))) : (arr_27 [i_9]))))), (((/* implicit */unsigned int) ((short) (~(((/* implicit */int) arr_29 [i_9]))))))));
        var_30 = ((/* implicit */short) min((var_30), (((/* implicit */short) arr_27 [i_9]))));
    }
}
