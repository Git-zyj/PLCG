/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197585
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197585 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197585
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
    for (signed char i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) arr_1 [0U]))));
                arr_5 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65522))) & (max((((/* implicit */unsigned int) arr_2 [i_0] [i_1])), (var_16)))))) ? (min((((/* implicit */int) max((var_3), (arr_1 [(short)0])))), (((((/* implicit */int) (signed char)22)) | (((/* implicit */int) arr_3 [i_0] [12ULL] [i_1])))))) : (var_0)));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 15; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        {
                            var_18 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_11 [i_0] [i_3])) ? (arr_10 [i_1] [11U]) : (((/* implicit */long long int) var_2))));
                            var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) var_14))));
                        }
                    } 
                } 
                var_20 = ((/* implicit */unsigned int) ((signed char) arr_3 [i_0] [i_1] [i_1]));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned char) var_12);
    /* LoopSeq 2 */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        var_22 = ((/* implicit */_Bool) max((var_22), (max((arr_12 [i_4]), (max((arr_12 [i_4]), (arr_12 [i_4])))))));
        arr_14 [i_4] = ((/* implicit */int) ((min((((/* implicit */unsigned long long int) arr_4 [i_4] [i_4] [i_4])), (arr_0 [i_4]))) | (((/* implicit */unsigned long long int) ((arr_11 [(_Bool)1] [i_4]) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_4] [i_4] [i_4]))))))));
        arr_15 [6LL] [i_4] = ((/* implicit */unsigned short) arr_10 [(unsigned char)11] [i_4]);
        var_23 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [(unsigned short)10] [i_4] [(unsigned short)10])) ? (arr_8 [i_4] [(unsigned char)8] [i_4]) : (((/* implicit */int) arr_3 [i_4] [i_4] [i_4]))))) ? (((((/* implicit */_Bool) min((arr_1 [i_4]), (((/* implicit */unsigned char) arr_3 [i_4] [i_4] [i_4]))))) ? (arr_10 [10] [i_4]) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (signed char)-22)) : (((/* implicit */int) var_14))))))) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_4])))));
    }
    /* vectorizable */
    for (unsigned short i_5 = 0; i_5 < 20; i_5 += 1) 
    {
        var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_16 [i_5] [i_5])) ? (((/* implicit */int) var_6)) : (var_2)));
        var_25 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_16 [i_5] [11])) <= (((/* implicit */int) arr_16 [i_5] [i_5]))));
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 20; i_6 += 2) 
        {
            for (unsigned short i_7 = 1; i_7 < 18; i_7 += 2) 
            {
                {
                    var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_21 [i_7 + 2])) ? (((/* implicit */int) arr_24 [(unsigned short)13] [i_6] [i_7 - 1] [i_6])) : (var_10))))));
                    var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_20 [i_7 - 1])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_5))));
                    /* LoopNest 2 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        for (unsigned int i_9 = 0; i_9 < 20; i_9 += 1) 
                        {
                            {
                                arr_31 [i_5] [i_6] [i_9] [i_8] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)14)) & (((/* implicit */int) arr_30 [(signed char)4] [i_7 + 2] [i_7] [i_8] [i_9]))));
                                var_28 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_20 [i_9])) ? (((/* implicit */long long int) ((/* implicit */int) arr_24 [(signed char)3] [i_7 + 2] [i_7] [i_6]))) : (((arr_27 [i_5] [i_5] [i_6] [(short)5] [(short)5] [i_9]) % (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_6] [i_7 + 2] [i_9])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_32 [i_5] = ((/* implicit */short) (~(((/* implicit */int) arr_24 [i_5] [i_5] [i_5] [i_5]))));
    }
}
