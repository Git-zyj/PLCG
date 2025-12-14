/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192013
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192013 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192013
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
    for (unsigned short i_0 = 2; i_0 < 7; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        {
                            arr_10 [i_0 + 3] [i_1] [i_2] [i_3] [i_0 + 3] [i_3] = ((/* implicit */short) ((((((/* implicit */_Bool) ((unsigned char) 5658199434900267424ULL))) ? (((/* implicit */long long int) ((unsigned int) var_1))) : (min((((/* implicit */long long int) -1735176844)), (-3195492254846261050LL))))) >= (arr_4 [i_0] [i_1] [i_2])));
                            var_16 -= ((/* implicit */unsigned int) arr_9 [i_0] [i_0] [i_0] [i_0 + 1] [i_3] [i_3]);
                            var_17 = ((short) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) 0ULL)))) - (((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_1] [6LL] [i_2] [i_3])) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_2])))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned int i_4 = 0; i_4 < 10; i_4 += 4) 
                {
                    for (signed char i_5 = 2; i_5 < 9; i_5 += 4) 
                    {
                        for (long long int i_6 = 0; i_6 < 10; i_6 += 2) 
                        {
                            {
                                arr_20 [i_0] [i_0 + 1] [i_0] [i_0] [i_0] [i_0] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) < (var_3))))) != (((((/* implicit */_Bool) arr_3 [i_0] [i_6])) ? (((/* implicit */long long int) ((/* implicit */int) (short)-20691))) : (-3195492254846261061LL))))))) : (0U)));
                                var_18 = ((/* implicit */_Bool) ((min((arr_8 [i_5] [i_5] [i_5 + 1] [i_0 + 3] [i_0]), (arr_8 [i_6] [i_6] [i_6] [i_0 - 2] [i_0]))) % (((arr_8 [i_6] [i_6] [i_6] [i_0 - 1] [i_0]) / (arr_8 [i_6] [i_6] [i_4] [i_0 + 1] [i_0])))));
                            }
                        } 
                    } 
                } 
                var_19 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((arr_11 [i_0] [i_0 + 1] [i_1] [i_1]) ? (((/* implicit */int) var_8)) : (((((/* implicit */_Bool) 18057682151439039393ULL)) ? (((/* implicit */int) (unsigned char)92)) : (((/* implicit */int) var_8))))))) % ((((!(arr_11 [i_0] [i_0] [i_0] [i_0]))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_9 [i_0] [i_1] [i_0] [i_0] [i_1] [(short)1]))))) : (14624765203882789001ULL)))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_7 = 1; i_7 < 17; i_7 += 4) 
    {
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            {
                var_20 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) max((3195492254846261064LL), (((/* implicit */long long int) (unsigned short)16))))) ? ((~(((/* implicit */int) var_6)))) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)16)) < (((/* implicit */int) (unsigned char)10))))))), (((/* implicit */int) ((unsigned short) max((((/* implicit */unsigned short) var_10)), (arr_26 [i_7] [i_8])))))));
                arr_27 [i_8] [i_7] [i_8] = ((/* implicit */long long int) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) ((var_12) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_7] [i_8])))))) * (((/* implicit */int) ((arr_24 [i_7]) < (arr_24 [i_7]))))))) : (((((((/* implicit */_Bool) arr_22 [i_8])) ? (arr_24 [i_7]) : (arr_24 [i_7]))) >> ((((-(((/* implicit */int) var_10)))) + (1402)))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_9 = 0; i_9 < 14; i_9 += 2) 
    {
        for (short i_10 = 0; i_10 < 14; i_10 += 2) 
        {
            for (int i_11 = 1; i_11 < 11; i_11 += 2) 
            {
                {
                    var_21 = ((/* implicit */unsigned char) arr_21 [i_10]);
                    /* LoopNest 2 */
                    for (long long int i_12 = 0; i_12 < 14; i_12 += 2) 
                    {
                        for (unsigned char i_13 = 4; i_13 < 13; i_13 += 2) 
                        {
                            {
                                var_22 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min(((-(0U))), (((/* implicit */unsigned int) (!((_Bool)1))))))) ? (((((/* implicit */_Bool) ((unsigned char) var_9))) ? (((/* implicit */int) ((arr_24 [i_12]) >= (((/* implicit */unsigned long long int) 4294967295U))))) : (((/* implicit */int) var_5)))) : (min((((/* implicit */int) (short)-10012)), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_21 [i_13])) : (((/* implicit */int) var_2))))))));
                                var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) ((((/* implicit */int) min((arr_36 [i_9] [i_10] [i_11 + 3]), (((/* implicit */short) arr_40 [(unsigned short)5] [i_10] [i_11 + 3] [i_13 - 4] [i_13]))))) ^ (((((/* implicit */_Bool) arr_38 [i_9] [i_11] [i_11 + 3] [i_13 - 4] [i_13])) ? (((/* implicit */int) arr_40 [i_10] [i_10] [i_11 + 3] [i_13 - 4] [i_13])) : (((/* implicit */int) arr_35 [i_10] [i_11 + 1] [i_13] [i_13 - 4] [i_13 - 3])))))))));
                                var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (arr_37 [i_13] [i_13 - 3] [i_11 + 3] [i_12] [i_13]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_35 [i_9] [i_13 - 3] [i_10] [i_12] [2U])))))) || (((((/* implicit */_Bool) arr_35 [i_12] [i_13 - 3] [i_10] [i_12] [i_13])) && (((/* implicit */_Bool) arr_35 [i_11] [i_13 - 2] [i_13] [i_12] [i_13])))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_14 = 0; i_14 < 11; i_14 += 4) 
    {
        for (short i_15 = 0; i_15 < 11; i_15 += 2) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_16 = 1; i_16 < 10; i_16 += 4) 
                {
                    for (unsigned long long int i_17 = 1; i_17 < 10; i_17 += 2) 
                    {
                        for (unsigned short i_18 = 0; i_18 < 11; i_18 += 1) 
                        {
                            {
                                var_25 = ((/* implicit */unsigned short) (~(((unsigned long long int) ((((/* implicit */_Bool) 14624765203882788995ULL)) ? (((/* implicit */int) (unsigned char)175)) : (1058337127))))));
                                var_26 = ((/* implicit */unsigned long long int) arr_29 [i_14]);
                                var_27 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_33 [i_14] [i_16] [i_17])) / (arr_45 [i_14] [i_14])))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_5))))) : (arr_37 [i_15] [i_16 + 1] [i_16 - 1] [i_16 + 1] [i_16 + 1])))) ? (((((((/* implicit */_Bool) arr_50 [i_14] [i_15] [i_16] [i_17] [i_15])) && (((/* implicit */_Bool) arr_50 [i_14] [i_14] [(unsigned short)2] [i_14] [i_14])))) ? (((/* implicit */int) (short)-25613)) : (((((/* implicit */_Bool) (unsigned short)1023)) ? (((/* implicit */int) (unsigned short)2047)) : (((/* implicit */int) (_Bool)1)))))) : (((((/* implicit */int) arr_44 [i_14])) * (((((/* implicit */_Bool) arr_49 [i_15] [i_18])) ? (((/* implicit */int) arr_44 [i_14])) : (((/* implicit */int) arr_52 [i_18] [i_17] [i_15] [i_14]))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_19 = 0; i_19 < 11; i_19 += 4) 
                {
                    for (int i_20 = 0; i_20 < 11; i_20 += 1) 
                    {
                        {
                            var_28 = ((/* implicit */signed char) ((((long long int) ((((/* implicit */_Bool) 12)) && (((/* implicit */_Bool) (unsigned char)92))))) % (((/* implicit */long long int) ((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_32 [i_15] [i_20])) ? (((/* implicit */int) arr_28 [i_14])) : (((/* implicit */int) arr_32 [i_19] [i_15])))))))));
                            var_29 = ((/* implicit */unsigned int) (unsigned char)115);
                            var_30 = ((/* implicit */unsigned char) var_12);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_21 = 0; i_21 < 11; i_21 += 4) 
                {
                    for (long long int i_22 = 0; i_22 < 11; i_22 += 4) 
                    {
                        {
                            var_31 = ((/* implicit */long long int) arr_39 [i_14] [i_14] [i_14] [i_14] [i_14] [i_14]);
                            arr_65 [i_14] [i_15] [i_21] [i_22] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_47 [i_14] [i_14] [i_21])) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_44 [i_14])))) : (((/* implicit */int) arr_62 [i_14] [i_15]))))) || (((/* implicit */_Bool) (unsigned char)0))));
                            var_32 = ((/* implicit */unsigned long long int) min((var_32), (((/* implicit */unsigned long long int) (short)-24))));
                            var_33 = ((/* implicit */unsigned char) (!(((min((arr_37 [i_14] [i_21] [(_Bool)0] [i_14] [i_14]), (((/* implicit */unsigned long long int) (unsigned char)243)))) > (((/* implicit */unsigned long long int) arr_42 [i_14]))))));
                            var_34 = ((/* implicit */unsigned char) ((long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_58 [i_14] [i_14] [i_14] [i_14])) ? (4294967295U) : (((/* implicit */unsigned int) -2147483645))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
