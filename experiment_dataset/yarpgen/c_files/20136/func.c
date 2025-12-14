/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20136
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20136 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20136
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
    var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) var_2))));
    var_15 = ((/* implicit */signed char) var_12);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        var_16 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_7)))))));
        var_17 = ((/* implicit */long long int) arr_2 [i_0]);
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (short i_2 = 2; i_2 < 13; i_2 += 3) 
            {
                {
                    var_18 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_8 [i_2] [i_2 + 3] [i_2])) ^ (((/* implicit */int) arr_8 [i_2] [i_0] [i_0]))));
                    arr_10 [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) (-(arr_6 [i_2])))) ? ((+(arr_6 [i_1]))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_8 [i_2] [i_2] [i_2])) | (((/* implicit */int) arr_2 [i_0])))))));
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        arr_13 [i_0] [i_2] = 14496310435755285091ULL;
                        arr_14 [i_0] [i_0] [i_0] [(_Bool)1] [i_2] = ((/* implicit */unsigned int) var_0);
                    }
                    for (signed char i_4 = 0; i_4 < 16; i_4 += 3) 
                    {
                        /* LoopSeq 3 */
                        for (signed char i_5 = 0; i_5 < 16; i_5 += 3) 
                        {
                            var_19 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_12 [i_1] [i_2 + 1] [i_2] [i_2] [i_2 + 3]))));
                            arr_22 [i_0] [i_2] [i_0] [i_0] [i_0] = (signed char)-22;
                            var_20 = ((/* implicit */long long int) ((-5400217727872067695LL) < (((/* implicit */long long int) (~(((/* implicit */int) var_6)))))));
                            arr_23 [i_0] [i_1] [i_2 - 2] [i_2] [i_4] [i_2] = ((/* implicit */unsigned int) arr_9 [i_5] [i_4] [i_2 + 2]);
                        }
                        for (short i_6 = 0; i_6 < 16; i_6 += 3) 
                        {
                            var_21 = ((/* implicit */_Bool) (~(((/* implicit */int) ((unsigned char) var_6)))));
                            var_22 *= ((((/* implicit */_Bool) arr_16 [i_0] [9U] [i_2 - 2] [i_2 + 3])) && (((/* implicit */_Bool) arr_20 [4U] [i_0] [i_2 + 1] [i_2 - 1] [4U])));
                            arr_26 [(signed char)8] [i_2 - 2] [i_2] [i_4] [i_2] = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)177)) | (((/* implicit */int) var_6))));
                            var_23 = ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned char)158))));
                            var_24 ^= ((/* implicit */_Bool) (+((-(((/* implicit */int) (unsigned short)57432))))));
                        }
                        for (int i_7 = 0; i_7 < 16; i_7 += 1) 
                        {
                            arr_30 [i_2] [i_0] [i_0] [i_0] [i_0] [(signed char)4] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_29 [i_1] [i_2] [i_2] [2] [i_2 - 1] [i_2 - 1])) ? (((/* implicit */int) arr_29 [i_0] [i_0] [i_2] [i_1] [i_2 - 2] [i_2 + 1])) : (((/* implicit */int) arr_4 [i_2] [i_2] [i_2 - 2]))));
                            var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) (short)1984))));
                            arr_31 [i_2] [i_4] [i_1] [i_1] [i_2] = ((arr_20 [i_2] [i_1] [i_2 + 3] [i_4] [i_7]) <= (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_0] [(signed char)9] [i_0] [i_0] [i_0] [i_0] [i_0])))))));
                        }
                        var_26 -= ((/* implicit */unsigned short) arr_5 [i_0] [i_0]);
                    }
                }
            } 
        } 
    }
    /* LoopSeq 1 */
    for (unsigned short i_8 = 0; i_8 < 17; i_8 += 4) 
    {
        arr_34 [i_8] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-16746)) ? (arr_33 [i_8] [i_8]) : (((((/* implicit */_Bool) arr_33 [i_8] [i_8])) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (arr_33 [i_8] [i_8])))))) ? ((~(arr_33 [i_8] [i_8]))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-78)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)62)))))) && (((((/* implicit */_Bool) arr_32 [i_8])) || (((/* implicit */_Bool) arr_32 [i_8]))))))))));
        var_27 = ((/* implicit */_Bool) ((short) var_3));
        var_28 = ((/* implicit */unsigned char) ((arr_33 [i_8] [i_8]) - (((/* implicit */long long int) ((/* implicit */int) ((arr_32 [i_8]) < (arr_32 [i_8])))))));
        arr_35 [i_8] = (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (~(arr_33 [(signed char)15] [i_8])))), (((arr_32 [(unsigned short)9]) & (arr_32 [i_8])))))));
    }
}
