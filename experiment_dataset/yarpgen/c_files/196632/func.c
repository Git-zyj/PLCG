/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196632
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196632 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196632
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
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                /* LoopSeq 3 */
                for (short i_2 = 0; i_2 < 21; i_2 += 4) 
                {
                    var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) (short)-8098))));
                    arr_7 [(_Bool)1] [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)178)) / (((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */int) (unsigned char)111)) : (((/* implicit */int) arr_6 [i_2] [i_1] [i_0] [i_0]))))));
                }
                for (short i_3 = 3; i_3 < 19; i_3 += 2) 
                {
                    var_20 ^= ((/* implicit */_Bool) (-((-(((/* implicit */int) (!(((/* implicit */_Bool) var_15)))))))));
                    var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_9 [i_1] [i_0]))))) ? ((+(var_15))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_9 [i_1] [i_3 + 1]), (arr_9 [i_0] [i_3])))))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0])) / (arr_3 [i_3])))) ? ((~(((/* implicit */int) (_Bool)1)))) : (((((/* implicit */int) arr_1 [i_3])) & (((/* implicit */int) (short)14766)))))) : (((/* implicit */int) (short)-32746))));
                }
                for (unsigned char i_4 = 0; i_4 < 21; i_4 += 4) 
                {
                    arr_13 [i_1] [(_Bool)1] = ((/* implicit */int) arr_11 [i_1] [11U]);
                    var_22 -= ((/* implicit */_Bool) (+(((/* implicit */int) min((arr_1 [i_0]), (arr_1 [i_1]))))));
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 21; i_5 += 4) 
                    {
                        for (short i_6 = 2; i_6 < 18; i_6 += 2) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned char) ((signed char) ((unsigned short) min(((signed char)-64), (((/* implicit */signed char) var_18))))));
                                var_24 &= ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */int) (_Bool)1)), (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (short)-21773)) : (((/* implicit */int) (signed char)109))))))) ? (((/* implicit */int) (unsigned char)191)) : (((/* implicit */int) arr_17 [i_6 + 2] [i_5] [i_4] [i_1] [i_0] [i_0]))));
                                var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_17)) ? (((((/* implicit */_Bool) ((short) (unsigned char)171))) ? (((((/* implicit */_Bool) arr_11 [i_1] [i_5])) ? (((/* implicit */int) arr_14 [i_6 + 1] [(signed char)10] [i_4] [i_1] [(signed char)3])) : (arr_3 [i_1]))) : (((/* implicit */int) arr_14 [i_4] [i_4] [i_5] [i_6 - 2] [i_6 + 2])))) : (((((/* implicit */int) (short)21533)) - (((((/* implicit */int) arr_6 [i_1] [i_4] [i_5] [i_6])) + (((/* implicit */int) var_4))))))));
                                var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-((-(arr_3 [i_5])))))) ? (((/* implicit */int) arr_18 [i_6 + 1] [i_4] [i_1] [i_0])) : (((/* implicit */int) (((~(((/* implicit */int) arr_8 [i_6] [(unsigned short)17])))) <= (((/* implicit */int) ((var_18) || (((/* implicit */_Bool) arr_3 [(unsigned char)4]))))))))));
                            }
                        } 
                    } 
                }
                arr_20 [i_1] [i_0] = ((/* implicit */long long int) arr_17 [i_1] [i_1] [(short)7] [i_0] [i_0] [i_0]);
            }
        } 
    } 
    /* LoopSeq 1 */
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */int) var_9)) ^ (((/* implicit */int) var_0)))) : (((/* implicit */int) max((var_1), (((/* implicit */short) arr_1 [i_7])))))))) ? (((/* implicit */int) arr_15 [i_7] [i_7] [i_7] [i_7])) : ((~(((/* implicit */int) var_16))))));
        var_28 = ((/* implicit */_Bool) max((var_28), (((_Bool) arr_11 [(signed char)15] [2LL]))));
        /* LoopNest 3 */
        for (short i_8 = 0; i_8 < 11; i_8 += 2) 
        {
            for (signed char i_9 = 0; i_9 < 11; i_9 += 2) 
            {
                for (short i_10 = 0; i_10 < 11; i_10 += 2) 
                {
                    {
                        arr_30 [i_10] [i_9] [i_9] [i_8] [i_7] = ((/* implicit */signed char) ((((/* implicit */int) ((short) (+(((/* implicit */int) var_18)))))) - ((+(((/* implicit */int) min((arr_22 [i_7]), (((/* implicit */unsigned short) (short)-21533)))))))));
                        arr_31 [5] [i_8] [i_10] = ((/* implicit */signed char) ((((((/* implicit */int) (short)12750)) % (((/* implicit */int) (unsigned char)194)))) / (((((/* implicit */_Bool) (~(arr_25 [i_10] [i_9])))) ? (((arr_8 [i_8] [i_10]) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_12 [i_7] [(short)0] [i_10])))) : (((/* implicit */int) arr_18 [i_10] [i_9] [i_8] [i_7]))))));
                    }
                } 
            } 
        } 
        var_29 = ((/* implicit */short) arr_19 [i_7] [i_7] [i_7] [(short)20] [i_7] [i_7] [i_7]);
    }
}
