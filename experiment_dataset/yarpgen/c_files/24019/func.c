/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24019
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24019 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24019
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [(unsigned short)20] [4ULL] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))) / (((((/* implicit */long long int) (+(((/* implicit */int) arr_2 [i_0]))))) + (max((((/* implicit */long long int) arr_1 [i_0] [(unsigned short)16])), (4137184792748516429LL)))))));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_9 [i_2] [i_1] [i_0] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_0]))) + (arr_7 [i_0] [i_0] [i_0])));
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_19 = ((/* implicit */int) arr_7 [i_0] [i_0] [i_0]);
                        /* LoopSeq 3 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [(unsigned short)15] = ((/* implicit */_Bool) var_4);
                            arr_18 [i_0] [i_1] [i_1] [i_3] [i_4] [i_1] = ((/* implicit */signed char) max((((int) arr_4 [i_0] [i_1] [(unsigned char)14])), ((~(((/* implicit */int) arr_16 [i_0]))))));
                        }
                        for (short i_5 = 2; i_5 < 23; i_5 += 2) /* same iter space */
                        {
                            var_20 += ((/* implicit */short) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */int) var_2)) + (((/* implicit */int) arr_1 [2ULL] [i_5 + 2])))))) || (((/* implicit */_Bool) var_1))));
                            arr_23 [i_0] [i_0] [i_0] [i_3] = -798134018352439438LL;
                            var_21 = ((/* implicit */unsigned short) max((((((var_3) | (((/* implicit */unsigned int) ((/* implicit */int) var_17))))) & (((/* implicit */unsigned int) ((/* implicit */int) max((var_11), (((/* implicit */unsigned char) var_5)))))))), (((/* implicit */unsigned int) ((((((/* implicit */long long int) var_1)) / (-4137184792748516439LL))) >= (arr_7 [i_5 + 1] [i_5] [(unsigned short)1]))))));
                            var_22 = (!(((/* implicit */_Bool) ((((/* implicit */int) var_8)) - (((/* implicit */int) arr_8 [i_5 + 2] [i_5 + 1]))))));
                        }
                        /* vectorizable */
                        for (short i_6 = 2; i_6 < 23; i_6 += 2) /* same iter space */
                        {
                            arr_27 [i_0] [i_0] [(unsigned char)13] [i_3] [(unsigned char)13] = ((/* implicit */unsigned int) arr_25 [10U] [i_1] [i_2] [i_3] [i_6 + 1]);
                            var_23 += ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_15 [i_6 + 1] [i_6 - 2] [i_6 - 1] [i_6 - 1] [i_6 + 1] [i_6 + 1] [i_6 + 1]))) | (var_15)));
                            var_24 = ((/* implicit */unsigned long long int) (-(arr_26 [i_2] [i_3] [i_2] [i_0] [i_2] [i_0] [i_0])));
                        }
                        var_25 = ((/* implicit */unsigned char) ((((((/* implicit */int) (unsigned char)199)) | (arr_26 [i_0] [i_1] [i_2] [i_3] [i_3] [i_1] [i_3]))) & (((((/* implicit */_Bool) arr_26 [i_0] [i_0] [i_0] [i_0] [i_2] [i_2] [i_3])) ? (((/* implicit */int) (unsigned char)199)) : (arr_26 [(unsigned char)12] [i_1] [i_1] [(signed char)14] [i_1] [(signed char)14] [i_1])))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned long long int i_7 = 2; i_7 < 21; i_7 += 3) 
                        {
                            var_26 &= ((/* implicit */int) arr_7 [i_0] [i_1] [4]);
                            arr_32 [i_0] [i_1] [i_0] [i_3] [i_1] [i_3] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) -1300903349)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)194))));
                        }
                    }
                    arr_33 [(signed char)6] [(signed char)6] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_0])) ? (max((((/* implicit */int) max((arr_20 [i_0] [i_0] [i_0]), ((unsigned char)77)))), (((((/* implicit */int) arr_5 [23LL] [i_2])) | (((/* implicit */int) arr_29 [i_0] [i_1] [i_1] [i_1] [i_2] [i_1] [i_2])))))) : (((/* implicit */int) ((unsigned char) (~(arr_7 [i_0] [i_1] [i_0])))))));
                    /* LoopSeq 1 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        var_27 -= arr_16 [i_2];
                        arr_36 [3U] = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [(unsigned short)2])) ? ((~(((((/* implicit */int) arr_20 [i_0] [i_0] [i_0])) >> (((arr_24 [i_0] [i_1] [i_2]) - (3525663773U))))))) : (((((var_9) + (2147483647))) >> (((-4137184792748516439LL) + (4137184792748516450LL)))))));
                        var_28 &= ((/* implicit */unsigned int) arr_1 [i_0] [i_0]);
                    }
                }
            } 
        } 
    }
    var_29 += var_17;
    var_30 = ((/* implicit */_Bool) var_12);
}
