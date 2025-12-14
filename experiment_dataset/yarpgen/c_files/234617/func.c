/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234617
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234617 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234617
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
    for (unsigned short i_0 = 1; i_0 < 6; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    var_13 &= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_2])) ? (arr_9 [i_2] [i_1] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_2])))))) ? (((/* implicit */int) arr_1 [i_2])) : (((/* implicit */int) ((_Bool) arr_8 [i_0 + 1] [i_2]))))) < (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_2])))))));
                    /* LoopSeq 1 */
                    for (int i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        var_14 ^= ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_0 + 1] [i_2])) / (((/* implicit */int) arr_0 [i_0]))))) ? (arr_11 [i_0] [i_1] [i_1] [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_6 [i_0])) > (((/* implicit */int) arr_8 [i_1] [i_2]))))))))));
                        arr_13 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_7 [i_0])) || (((/* implicit */_Bool) min((((/* implicit */short) arr_1 [i_0])), (arr_6 [i_0 + 3]))))));
                        var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_7 [i_2])), (((arr_10 [i_2] [i_1] [i_2] [i_2]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 - 1]))) : (arr_4 [i_1] [i_2])))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(arr_12 [(_Bool)1] [i_1] [4U] [i_3]))))) : (min((arr_4 [i_0 + 2] [i_2]), (((/* implicit */unsigned int) arr_8 [i_0] [i_2]))))))))))));
                        var_16 = ((/* implicit */unsigned long long int) max((var_16), (max((((/* implicit */unsigned long long int) min((arr_0 [i_0 + 2]), (arr_0 [i_0 - 1])))), (((unsigned long long int) arr_11 [i_0 + 1] [i_0 + 1] [i_0 + 4] [i_0 + 2]))))));
                    }
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        arr_17 [(short)8] [i_1] [i_2] |= ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 + 2]))) / (((((/* implicit */_Bool) arr_3 [i_0])) ? (arr_4 [i_0] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_2])))))));
                        var_17 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned short) arr_9 [i_0] [i_0] [i_0]))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1]))) | (arr_9 [i_0] [i_2] [i_4]))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_15 [i_0] [i_1])) && (((/* implicit */_Bool) arr_7 [i_0]))))))));
                    }
                    /* vectorizable */
                    for (signed char i_5 = 4; i_5 < 9; i_5 += 1) 
                    {
                        var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) (~(((/* implicit */int) ((arr_9 [i_2] [i_1] [i_2]) < (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_2] [i_1])))))))))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_6 = 0; i_6 < 10; i_6 += 4) 
                        {
                            arr_22 [i_0] = ((/* implicit */signed char) ((arr_21 [i_0] [i_0 + 3] [i_0 + 4] [i_0] [i_1] [(unsigned short)2] [i_5 + 1]) / (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_0])) - (((/* implicit */int) arr_14 [i_0] [i_0] [i_1] [i_0] [i_0] [i_6])))))));
                            arr_23 [i_0] = ((/* implicit */_Bool) ((((/* implicit */long long int) (+(((/* implicit */int) arr_15 [i_0] [i_1]))))) / (arr_9 [i_0] [i_0 + 2] [i_0 + 1])));
                            var_19 = ((/* implicit */_Bool) arr_2 [i_0]);
                        }
                    }
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        var_20 += ((/* implicit */short) (((((!(((/* implicit */_Bool) arr_2 [i_0])))) || (((/* implicit */_Bool) (~(arr_19 [i_0] [i_0] [i_2] [i_2] [i_7])))))) ? (((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_0 + 4])) ? (((/* implicit */int) ((unsigned char) arr_20 [i_0] [i_0] [i_0] [i_2] [i_0] [i_0] [i_0]))) : (((/* implicit */int) min((arr_2 [i_0 + 4]), (((/* implicit */signed char) arr_10 [i_2] [i_1] [i_2] [i_2]))))))) : (((((/* implicit */_Bool) arr_25 [i_0 + 1] [i_2] [i_0] [i_0 + 4])) ? (arr_25 [i_0] [i_2] [i_0] [i_0 + 4]) : (arr_25 [i_0] [i_2] [i_0] [i_0 + 4])))));
                        arr_26 [i_0 + 4] [i_0 + 4] [i_2] [i_0] [i_7] [i_0 + 4] = ((/* implicit */signed char) ((int) ((((/* implicit */_Bool) arr_2 [i_0 + 4])) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_0]))) & (arr_21 [(_Bool)1] [i_1] [i_1] [i_0] [i_2] [i_7] [(_Bool)1]))) : (((/* implicit */unsigned long long int) ((arr_1 [i_0]) ? (((/* implicit */int) arr_10 [i_0] [i_1] [i_2] [i_7])) : (((/* implicit */int) arr_18 [i_0] [i_1] [i_2] [i_7] [i_0] [i_7]))))))));
                        arr_27 [i_0] [i_0] = ((/* implicit */long long int) ((int) (~(((((/* implicit */int) arr_24 [i_7] [i_2] [i_0])) ^ (((/* implicit */int) arr_8 [i_0] [i_0])))))));
                        arr_28 [i_0] [i_0] [(_Bool)1] [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) ((unsigned char) arr_7 [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (~(((/* implicit */int) arr_16 [i_0] [i_1] [i_2] [i_7]))))))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_14 [i_0] [i_1] [i_0] [i_2] [i_0] [i_7])) | (((/* implicit */int) arr_12 [i_7] [1U] [i_0 - 1] [i_0 - 1]))))), ((~(arr_21 [i_0] [i_1] [i_2] [i_0] [i_0] [(_Bool)1] [i_7])))))));
                        var_21 ^= ((/* implicit */unsigned long long int) ((_Bool) arr_24 [i_0 + 4] [i_1] [i_2]));
                    }
                    arr_29 [i_0] [i_1] [i_2] = ((/* implicit */unsigned char) (((+((+(((/* implicit */int) arr_16 [i_2] [i_0 + 2] [i_0 + 2] [(unsigned short)0])))))) ^ (min((((/* implicit */int) arr_8 [i_0] [i_0])), (((((/* implicit */int) arr_5 [i_0] [i_0])) - (((/* implicit */int) arr_15 [i_0] [i_0]))))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) (+(((((/* implicit */_Bool) var_5)) ? ((-(((/* implicit */int) var_7)))) : (((/* implicit */int) ((unsigned char) var_7))))))))));
}
