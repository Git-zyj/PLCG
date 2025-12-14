/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228066
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228066 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228066
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
    for (int i_0 = 4; i_0 < 8; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                var_11 += ((/* implicit */signed char) arr_2 [i_1]);
                arr_6 [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-1342)) ? (1345451723) : (1345451701)));
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 3) 
                {
                    arr_10 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) var_0);
                    arr_11 [i_2] [i_1] = ((/* implicit */short) (-(((/* implicit */int) arr_9 [i_0 + 4] [i_0 + 4]))));
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        var_12 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_1] [i_1] [i_1])) ? (arr_4 [i_0] [i_1] [i_3]) : (((/* implicit */int) arr_9 [i_0 - 2] [i_3]))));
                        var_13 ^= arr_8 [i_0] [i_0 - 1] [i_0 - 2];
                        arr_14 [i_0] [i_0] [(signed char)10] [i_2] [i_3] = (~(((/* implicit */int) arr_5 [i_2] [i_1] [i_0 - 2])));
                    }
                    arr_15 [(unsigned short)3] [i_1] [i_1] [10] = ((/* implicit */_Bool) ((arr_8 [i_0 + 3] [i_0 + 2] [i_0 - 3]) ? (((/* implicit */int) arr_9 [i_0 - 4] [i_0 + 3])) : (((/* implicit */int) arr_8 [i_0 + 1] [i_0 - 2] [i_0 - 4]))));
                }
                for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                {
                    var_14 *= ((/* implicit */signed char) ((((/* implicit */_Bool) (((~(var_8))) * (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_0 + 3])))))) ? (((/* implicit */long long int) ((arr_7 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 - 1]) ? (((/* implicit */int) arr_9 [i_0 - 4] [i_0 - 1])) : (arr_4 [i_0 + 1] [i_1] [i_4 - 1])))) : (max((arr_16 [i_1] [i_0]), (((/* implicit */long long int) arr_8 [(unsigned short)1] [i_1] [i_0]))))));
                    var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) ((unsigned int) max((arr_3 [i_4 - 1] [i_0 - 1] [i_4]), (arr_3 [i_4 - 1] [i_0 - 2] [i_1])))))));
                }
                for (unsigned int i_5 = 2; i_5 < 11; i_5 += 2) 
                {
                    var_16 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */signed char) (!((_Bool)1)))), (arr_0 [i_0 + 1] [i_0 - 4]))))) & (max((((/* implicit */long long int) max((arr_4 [i_5] [i_1] [i_0]), (((/* implicit */int) arr_0 [i_1] [i_0]))))), (arr_3 [i_0 + 1] [i_5 - 1] [i_5 + 1])))));
                    var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) arr_5 [i_0 - 4] [0LL] [i_5 - 1]))));
                    /* LoopSeq 3 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        arr_22 [i_6] [i_6] [i_6] [i_0] = ((/* implicit */_Bool) ((min((((/* implicit */long long int) (-(((/* implicit */int) arr_5 [i_0] [i_5] [i_6]))))), (((arr_7 [i_0] [i_1] [(_Bool)1] [i_6]) ? (arr_12 [i_0] [i_0]) : (((/* implicit */long long int) -1418993847)))))) ^ (((((/* implicit */_Bool) arr_12 [i_0 + 4] [i_5 - 2])) ? (arr_12 [i_0 + 4] [i_5 - 2]) : (arr_12 [i_0 + 4] [i_5 - 2])))));
                        arr_23 [i_0 + 2] [(unsigned short)11] [i_6] = ((/* implicit */signed char) (-(((/* implicit */int) arr_0 [i_0] [i_1]))));
                    }
                    for (unsigned char i_7 = 0; i_7 < 12; i_7 += 1) 
                    {
                        arr_27 [i_5] [i_1] |= var_9;
                        var_18 = ((/* implicit */_Bool) min((((((/* implicit */int) arr_18 [i_1] [i_5] [i_5] [i_5 - 2])) / (((/* implicit */int) arr_18 [i_0] [i_0] [i_0] [i_5 - 2])))), (((/* implicit */int) ((_Bool) arr_18 [i_1] [i_1] [i_1] [i_5 - 2])))));
                        arr_28 [i_7] [i_7] [i_7] [6] [6] = ((/* implicit */int) max((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)10)) * ((+(((/* implicit */int) arr_18 [i_7] [i_1] [i_1] [10LL]))))))), (max((((/* implicit */long long int) (~(((/* implicit */int) arr_7 [(unsigned char)11] [i_1] [i_1] [i_1]))))), (((arr_16 [i_0] [i_7]) ^ (arr_19 [i_5])))))));
                    }
                    /* vectorizable */
                    for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
                    {
                        var_19 = ((/* implicit */_Bool) max((var_19), ((!(((/* implicit */_Bool) arr_29 [i_8 + 1]))))));
                        var_20 &= ((/* implicit */int) ((arr_12 [i_0] [i_5]) ^ (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_1] [i_8])))));
                        var_21 = arr_13 [i_0 + 1];
                    }
                    var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_9 [i_0 - 1] [i_5 - 1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_0] [i_0] [i_1] [i_0] [i_1]))) : (((((/* implicit */_Bool) ((long long int) arr_5 [i_0] [i_1] [i_5]))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_0] [11] [i_5] [i_0] [i_5] [6]))) : (arr_2 [i_0]))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_18 [i_0] [i_0] [i_1] [i_5])))))))));
                }
                arr_32 [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2267567506U)) ? (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_0]))) : (arr_19 [i_0])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 0LL))))) : ((~(((/* implicit */int) arr_21 [(signed char)7] [0ULL] [i_0] [(_Bool)1] [(signed char)5] [(signed char)5])))))))));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned char) ((((unsigned int) var_4)) << ((((~(((((/* implicit */int) var_5)) * (((/* implicit */int) var_3)))))) + (110)))));
}
