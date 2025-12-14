/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33247
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
    for (signed char i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 10; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 11; i_2 += 2) 
                {
                    for (unsigned char i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        for (signed char i_4 = 2; i_4 < 9; i_4 += 4) 
                        {
                            {
                                arr_15 [i_4] [i_4] [i_2] [i_0] [i_4] [i_2] = ((/* implicit */short) (signed char)127);
                                arr_16 [(short)8] [i_0] [i_0] [i_0] [(_Bool)1] [i_4] [(_Bool)1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_0] [i_2])) ? (((/* implicit */int) ((((((/* implicit */_Bool) (signed char)-121)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)121)))) > (((/* implicit */int) ((arr_4 [i_4] [7] [i_4]) > (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127))))))))) : (((/* implicit */int) (((_Bool)1) || (((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (signed char)0)))))))));
                            }
                        } 
                    } 
                } 
                arr_17 [i_0] [i_0] [i_0] = ((/* implicit */signed char) (~(arr_6 [i_0] [i_0])));
                arr_18 [i_1] [i_1] [i_0] = ((/* implicit */int) (+(((((/* implicit */_Bool) ((arr_7 [i_0] [i_0] [i_0] [i_0]) / (((/* implicit */long long int) arr_13 [i_0]))))) ? ((-(arr_2 [i_1]))) : (((/* implicit */long long int) ((arr_6 [i_0] [i_1]) / (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))))));
                /* LoopNest 3 */
                for (unsigned int i_5 = 0; i_5 < 11; i_5 += 1) 
                {
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        for (signed char i_7 = 0; i_7 < 11; i_7 += 4) 
                        {
                            {
                                arr_26 [i_0] [i_7] = ((/* implicit */int) ((arr_14 [i_6] [i_6] [i_5] [i_6] [2] [i_1]) + (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) * (310189933))))));
                                arr_27 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_10 [i_0] [0LL] [i_0] [i_0]);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned short i_8 = 1; i_8 < 20; i_8 += 2) 
    {
        arr_32 [i_8] = ((/* implicit */short) arr_31 [i_8]);
        /* LoopSeq 4 */
        for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
        {
            arr_36 [i_8] [i_8] [4LL] = ((/* implicit */unsigned int) ((((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) arr_31 [16ULL])) > (arr_34 [i_9] [i_9] [i_9]))))) * (((((arr_28 [i_9] [(short)22]) + (9223372036854775807LL))) << (((arr_31 [12U]) - (1721176084))))))) != (((/* implicit */long long int) ((/* implicit */int) (((-(arr_34 [i_8] [i_8] [i_8]))) > (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-122)))))))));
            arr_37 [i_8] = ((/* implicit */signed char) arr_29 [i_8]);
            /* LoopNest 2 */
            for (unsigned char i_10 = 0; i_10 < 23; i_10 += 4) 
            {
                for (unsigned short i_11 = 0; i_11 < 23; i_11 += 4) 
                {
                    {
                        arr_42 [i_8] [4U] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)48)) || (((/* implicit */_Bool) (short)-31652))));
                        /* LoopSeq 1 */
                        for (int i_12 = 0; i_12 < 23; i_12 += 3) 
                        {
                            arr_45 [i_8] [i_8] [20LL] [i_10] [i_10] [i_8] [i_12] = ((/* implicit */short) ((((((/* implicit */_Bool) ((unsigned short) arr_29 [i_8]))) ? (((arr_28 [(short)2] [i_11]) % (((/* implicit */long long int) ((/* implicit */int) arr_44 [i_8] [i_9] [i_10] [i_11] [i_10]))))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) (signed char)-82)))))) * (((/* implicit */long long int) (~(((((/* implicit */int) arr_29 [i_8])) | (((/* implicit */int) arr_40 [i_10] [i_10] [(signed char)21] [3ULL] [i_10] [i_10])))))))));
                            arr_46 [i_8] [i_8] [i_8 - 1] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_28 [22ULL] [i_8])) && (((/* implicit */_Bool) arr_31 [i_8]))))))) == (arr_34 [i_8] [i_9] [(unsigned short)1])));
                            arr_47 [i_8] [8] [i_10] [i_11] [i_12] [i_10] [i_8] = ((/* implicit */unsigned char) ((((((_Bool) -310189934)) || (((/* implicit */_Bool) ((unsigned int) 310189933))))) || (((/* implicit */_Bool) (signed char)60))));
                            arr_48 [i_10] [i_9] [i_8] [i_11] [i_12] [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */long long int) (~(((/* implicit */int) arr_39 [i_12] [i_12]))))) | (((arr_41 [i_9] [i_9] [i_9]) ^ (((/* implicit */long long int) ((/* implicit */int) (signed char)0)))))))) ? (((/* implicit */long long int) (~((~(((/* implicit */int) (_Bool)1))))))) : (((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)123)) ? (3038620054U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) & (((arr_41 [(unsigned char)20] [(unsigned char)20] [(unsigned char)20]) & (((/* implicit */long long int) ((/* implicit */int) arr_30 [i_11])))))))));
                        }
                        arr_49 [i_8] [i_9] [i_8] = ((/* implicit */signed char) (short)10836);
                        arr_50 [i_8] = ((/* implicit */_Bool) (-(((/* implicit */int) ((signed char) (signed char)8)))));
                    }
                } 
            } 
            arr_51 [2U] = arr_43 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8];
        }
        /* vectorizable */
        for (int i_13 = 3; i_13 < 22; i_13 += 3) 
        {
            arr_56 [i_13] [(_Bool)0] [i_13] = ((/* implicit */int) (signed char)-125);
            arr_57 [i_8] [i_8] = ((/* implicit */unsigned int) (((-(2427873003U))) == (((/* implicit */unsigned int) ((int) (signed char)-121)))));
            arr_58 [i_8] [i_8] [i_13] = ((/* implicit */long long int) ((arr_40 [i_13] [i_13 + 1] [i_8] [i_13] [i_13] [(signed char)16]) ? (((((/* implicit */int) (_Bool)0)) % (((/* implicit */int) (short)-27158)))) : ((-(((/* implicit */int) arr_35 [i_8] [i_8] [15U]))))));
        }
        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
        {
            arr_62 [i_8] [i_8] = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((unsigned char) (signed char)118))) ? (((((/* implicit */_Bool) (short)27158)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (9103805728675225340ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_61 [i_8])) * (((/* implicit */int) arr_55 [(unsigned char)11]))))))) > (((/* implicit */unsigned long long int) 1720938485U))));
            arr_63 [i_8] [i_8] [i_14] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_40 [i_14] [i_14] [i_14] [i_14] [i_14] [i_14])) * (((/* implicit */int) (short)-7986))))) * ((((_Bool)1) ? (2900731247U) : (2013265920U)))));
            arr_64 [0] [i_14] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)31651)) || (((-1272213762865408421LL) == (((/* implicit */long long int) ((((/* implicit */int) arr_38 [(_Bool)1] [i_14] [i_14] [i_14])) % (((/* implicit */int) arr_39 [(unsigned char)15] [i_14])))))))));
        }
        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
        {
            arr_68 [i_8] [i_8] [(signed char)2] = ((/* implicit */int) ((signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-118))) * (((((/* implicit */_Bool) 1272213762865408421LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)31680))) : (2900731261U))))));
            arr_69 [i_15] [i_8] [i_15] = ((/* implicit */long long int) ((-1937697639) == (((/* implicit */int) (unsigned char)0))));
        }
    }
}
