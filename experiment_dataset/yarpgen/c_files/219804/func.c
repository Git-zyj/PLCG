/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219804
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219804 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219804
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
    for (int i_0 = 3; i_0 < 10; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                {
                    {
                        arr_11 [i_0] [i_1] [(signed char)0] [i_1] [i_1] [(signed char)0] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_8 [i_1] [i_1] [i_2] [(_Bool)1] [i_1])) % ((~((+(((/* implicit */int) var_0))))))));
                        arr_12 [i_0] [i_2] [i_0] [i_3] [i_0] = ((/* implicit */short) ((-1702150508) & (((/* implicit */int) var_12))));
                        arr_13 [i_0] [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) (signed char)46))));
                        arr_14 [i_0 - 3] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((int) ((262143) - (((/* implicit */int) var_12)))));
                    }
                } 
            } 
        } 
        arr_15 [i_0] = max((((/* implicit */long long int) (-(((/* implicit */int) ((unsigned char) 14194816944753758771ULL)))))), ((-(((((/* implicit */_Bool) arr_0 [i_0])) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0 - 3] [i_0]))))))));
    }
    for (signed char i_4 = 2; i_4 < 13; i_4 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_5 = 0; i_5 < 15; i_5 += 4) 
        {
            for (int i_6 = 2; i_6 < 14; i_6 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        arr_25 [i_4 + 1] [i_6] [i_5] [i_4 + 1] [i_7] = ((/* implicit */unsigned char) ((short) ((arr_21 [i_6 + 1]) ? (((/* implicit */int) arr_22 [i_7] [i_5] [i_4])) : (max((arr_24 [i_4] [i_4] [i_5] [i_4] [i_7]), (((/* implicit */int) arr_16 [i_5])))))));
                        arr_26 [i_4] [i_4] [(short)0] [i_6] [i_4] = ((/* implicit */unsigned long long int) ((short) (~(((((/* implicit */_Bool) arr_22 [i_4] [(_Bool)1] [(_Bool)1])) ? (((/* implicit */int) arr_21 [i_4])) : (((/* implicit */int) arr_16 [i_5])))))));
                    }
                    /* LoopNest 2 */
                    for (signed char i_8 = 0; i_8 < 15; i_8 += 2) 
                    {
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            {
                                arr_32 [i_6] [i_5] [i_6] [i_8] = ((/* implicit */short) (+(2147483647)));
                                arr_33 [(unsigned char)13] [(unsigned char)13] [i_5] [i_6 - 1] [i_8] [i_9] [i_6] = ((/* implicit */_Bool) max((((/* implicit */int) (signed char)-77)), (-1702150501)));
                                arr_34 [i_9] [i_6] [i_6] [i_4] [i_6] [i_4] = var_7;
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 15; i_10 += 3) 
                    {
                        for (int i_11 = 1; i_11 < 14; i_11 += 3) 
                        {
                            {
                                arr_40 [i_4] [(_Bool)1] [i_6] [i_10] [i_6] = ((/* implicit */unsigned char) (+(3217965815U)));
                                arr_41 [i_11 - 1] [i_5] [i_5] [i_5] [i_5] [i_4 + 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */int) var_11)), (((((/* implicit */_Bool) var_2)) ? (var_3) : (((/* implicit */int) arr_21 [i_4]))))))) ? (((/* implicit */int) ((arr_30 [i_4] [i_4] [i_4 + 2]) || (((/* implicit */_Bool) ((((/* implicit */_Bool) -1LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_4 + 1] [i_5] [i_6]))) : (9526445183230028897ULL))))))) : (1702150507)));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_42 [i_4] = ((/* implicit */long long int) ((((/* implicit */int) var_6)) >> ((((~(((/* implicit */int) arr_35 [i_4 - 1] [i_4] [i_4] [i_4])))) + (3192)))));
        arr_43 [i_4] = ((((arr_31 [0LL] [i_4 + 2] [i_4 + 2] [i_4 - 2] [i_4] [i_4 + 2] [i_4]) ^ (arr_31 [i_4] [i_4] [i_4 - 2] [i_4 - 1] [i_4] [i_4 - 2] [i_4 + 2]))) & ((+(arr_31 [i_4] [(unsigned short)13] [i_4 - 2] [i_4 + 2] [i_4] [3ULL] [(unsigned short)2]))));
        /* LoopNest 3 */
        for (unsigned char i_12 = 0; i_12 < 15; i_12 += 4) 
        {
            for (long long int i_13 = 0; i_13 < 15; i_13 += 1) 
            {
                for (unsigned char i_14 = 0; i_14 < 15; i_14 += 2) 
                {
                    {
                        arr_54 [i_13] [i_12] [i_13] [i_4] = ((/* implicit */short) ((((((((/* implicit */_Bool) arr_47 [i_4] [i_12])) ? (((/* implicit */int) arr_21 [12U])) : (((/* implicit */int) arr_21 [i_4])))) & (((/* implicit */int) (_Bool)1)))) > (((/* implicit */int) ((((/* implicit */int) arr_39 [i_4 + 1] [i_4] [i_4 + 1] [i_13] [i_4 + 2])) > ((~(((/* implicit */int) (_Bool)1)))))))));
                        arr_55 [i_13] = ((/* implicit */unsigned long long int) (!(((((/* implicit */_Bool) arr_29 [i_12] [i_14])) || (((((/* implicit */_Bool) 2145386496LL)) || (((/* implicit */_Bool) var_2))))))));
                        arr_56 [i_14] [i_14] [i_14] [(unsigned short)7] [i_13] = ((/* implicit */_Bool) arr_28 [10] [i_12] [i_13] [5ULL]);
                    }
                } 
            } 
        } 
    }
    /* LoopNest 3 */
    for (unsigned long long int i_15 = 0; i_15 < 11; i_15 += 4) 
    {
        for (unsigned short i_16 = 0; i_16 < 11; i_16 += 2) 
        {
            for (long long int i_17 = 3; i_17 < 8; i_17 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_18 = 0; i_18 < 11; i_18 += 1) 
                    {
                        for (unsigned long long int i_19 = 0; i_19 < 11; i_19 += 4) 
                        {
                            {
                                arr_69 [i_15] [i_16] [i_17] [i_18] = ((/* implicit */unsigned short) ((int) (!(((/* implicit */_Bool) (~(arr_5 [i_17] [i_17])))))));
                                arr_70 [i_15] [i_15] [i_18] [i_15] = ((/* implicit */short) 13020888733972505608ULL);
                                arr_71 [i_16] [i_18] [i_19] &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) ((long long int) 6LL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -1702150512)) ? (((/* implicit */int) (unsigned char)184)) : (((/* implicit */int) (_Bool)1)))))))) : (max((((((/* implicit */int) arr_50 [i_19] [i_16])) / (var_3))), ((~(((/* implicit */int) arr_20 [i_19] [(unsigned char)0] [(unsigned char)0]))))))));
                                arr_72 [i_19] [i_18] [i_17 + 1] [i_18] [i_15] = ((/* implicit */signed char) (~(((/* implicit */int) ((unsigned short) (+(((/* implicit */int) (unsigned char)207))))))));
                            }
                        } 
                    } 
                    arr_73 [6ULL] [5] [5] [i_15] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) ((arr_59 [i_17]) >> (((/* implicit */int) (_Bool)1))))) ? (-1702150508) : ((+(arr_28 [i_17] [i_15] [i_16] [i_15])))))));
                }
            } 
        } 
    } 
    var_16 = (+(((((((/* implicit */unsigned int) -1702150504)) - (var_9))) * (((/* implicit */unsigned int) ((((/* implicit */_Bool) 16721981776749083841ULL)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (_Bool)1))))))));
}
