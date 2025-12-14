/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43782
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
    var_12 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (short)14094))) + (((((/* implicit */_Bool) (-(23U)))) ? (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))))) : (max((2441686149895575488LL), (((/* implicit */long long int) var_7))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned short i_1 = 3; i_1 < 8; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    var_13 = ((((/* implicit */_Bool) (short)-32700)) ? (2058099555U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))));
                    arr_7 [i_2] [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) (signed char)0)) ? (13711897175373330848ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0))))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned int) min((((((/* implicit */unsigned long long int) var_7)) / (((4820363341959639562ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))))), (((/* implicit */unsigned long long int) 340423008))));
    /* LoopNest 2 */
    for (unsigned short i_3 = 0; i_3 < 19; i_3 += 2) 
    {
        for (unsigned int i_4 = 0; i_4 < 19; i_4 += 2) 
        {
            {
                /* LoopSeq 3 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    arr_16 [i_5] [i_4] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) & (2591095105U)))) ? (((/* implicit */int) arr_13 [(short)7] [i_4] [i_4] [i_4])) : ((~(((/* implicit */int) (unsigned short)43005))))));
                    /* LoopSeq 1 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        arr_20 [8ULL] [8ULL] = ((/* implicit */unsigned int) min(((-(((/* implicit */int) (unsigned short)1)))), ((-(var_7)))));
                        var_15 = ((/* implicit */signed char) ((((((arr_17 [i_4] [i_4] [i_6]) + (2147483647))) << (((((arr_17 [(_Bool)0] [(_Bool)0] [i_5]) + (632066569))) - (29))))) < (((/* implicit */int) ((unsigned short) min((((/* implicit */unsigned int) -47416109)), (var_6)))))));
                        var_16 = max((((((/* implicit */_Bool) (unsigned short)902)) ? (((/* implicit */int) (short)23670)) : (((/* implicit */int) (short)-32714)))), (((/* implicit */int) min((((/* implicit */signed char) (!(arr_11 [17U] [i_4] [i_4])))), ((signed char)-10)))));
                    }
                    arr_21 [(short)17] [i_4] [i_5] [i_5] = ((/* implicit */long long int) arr_14 [i_3] [i_4] [i_5]);
                }
                /* vectorizable */
                for (signed char i_7 = 0; i_7 < 19; i_7 += 4) 
                {
                    /* LoopNest 2 */
                    for (short i_8 = 1; i_8 < 17; i_8 += 1) 
                    {
                        for (unsigned long long int i_9 = 0; i_9 < 19; i_9 += 1) 
                        {
                            {
                                var_17 -= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_13 [(short)16] [i_9] [9ULL] [i_9])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_25 [i_3] [i_7] [i_8] [(unsigned char)15])))) >= (((/* implicit */int) (unsigned char)72))));
                                var_18 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_28 [(unsigned char)7] [(signed char)5] [i_8 + 1]))));
                            }
                        } 
                    } 
                    var_19 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_12 [i_3] [i_4] [i_7])) ? (((/* implicit */int) arr_28 [i_3] [i_4] [i_7])) : (arr_12 [i_3] [i_4] [i_7])));
                    /* LoopSeq 2 */
                    for (signed char i_10 = 1; i_10 < 15; i_10 += 4) /* same iter space */
                    {
                        var_20 *= ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_28 [i_3] [i_4] [i_7]))) < (3966153253U)))) >> (((/* implicit */int) arr_11 [i_7] [i_4] [i_3]))));
                        /* LoopSeq 2 */
                        for (long long int i_11 = 0; i_11 < 19; i_11 += 1) /* same iter space */
                        {
                            arr_34 [i_11] [i_11] [i_4] = ((/* implicit */_Bool) ((unsigned char) arr_22 [i_10 + 1] [i_10 + 1] [i_10] [i_10 + 1]));
                            var_21 = ((((/* implicit */_Bool) arr_29 [i_3] [i_4] [i_10] [i_10 - 1])) ? (((/* implicit */int) var_2)) : (arr_17 [i_10] [i_10 + 4] [i_7]));
                            var_22 = ((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) 11511837000442112729ULL)) ? (((/* implicit */int) arr_26 [1U] [i_10 + 2] [1U] [i_3])) : (((/* implicit */int) (short)32699)))));
                        }
                        for (long long int i_12 = 0; i_12 < 19; i_12 += 1) /* same iter space */
                        {
                            arr_39 [11U] [i_4] [i_7] [i_10] [i_12] [i_12] = (~(((/* implicit */int) (short)6559)));
                            arr_40 [i_3] [(unsigned short)13] [i_7] [i_10 + 1] [7] [i_7] = ((/* implicit */unsigned short) ((arr_29 [i_3] [i_10 + 4] [i_10 + 2] [i_10 + 1]) >= (((/* implicit */int) (unsigned short)48))));
                            var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -657135826)) ? (((/* implicit */int) arr_10 [i_12])) : ((-(((/* implicit */int) (unsigned short)40383))))));
                        }
                        /* LoopSeq 3 */
                        for (unsigned int i_13 = 0; i_13 < 19; i_13 += 2) 
                        {
                            var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_18 [i_4] [i_4] [i_4] [i_4] [i_4])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-22910))) : (arr_37 [i_10 + 1] [i_10 + 1] [i_10 + 3] [i_10 - 1] [i_10 - 1]))))));
                            var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_37 [i_10 - 1] [i_4] [i_4] [i_4] [i_4])) ? (arr_37 [i_10 + 2] [i_10] [i_10] [i_10 - 1] [i_10]) : (arr_37 [i_10 + 2] [i_10 + 4] [i_3] [i_10] [i_3])));
                            arr_43 [i_13] [4U] [(signed char)11] [(signed char)11] [i_7] [(signed char)11] [(signed char)11] = ((/* implicit */int) ((arr_42 [i_10] [(short)11] [i_10 + 1] [(unsigned char)12] [i_10]) <= (((/* implicit */unsigned long long int) -733346674380996333LL))));
                            var_26 -= ((/* implicit */short) var_4);
                            arr_44 [i_3] [i_4] = ((/* implicit */signed char) (!(((/* implicit */_Bool) 0U))));
                        }
                        for (int i_14 = 3; i_14 < 16; i_14 += 3) 
                        {
                            arr_48 [i_14] [i_14] = ((/* implicit */unsigned char) var_0);
                            var_27 = ((/* implicit */signed char) 2528224216U);
                        }
                        for (short i_15 = 2; i_15 < 16; i_15 += 3) 
                        {
                            var_28 = ((/* implicit */_Bool) ((var_8) / (((/* implicit */long long int) var_4))));
                            var_29 ^= ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) (signed char)-21)) ? (((/* implicit */int) arr_41 [i_3] [i_4] [i_7] [i_10] [i_10])) : (-1762832514)))));
                            arr_51 [12] [i_4] [(unsigned short)11] [i_10 + 1] [i_10 + 1] = ((/* implicit */unsigned int) (~(var_5)));
                            arr_52 [(_Bool)1] [(_Bool)1] [i_7] [(_Bool)1] [i_15 + 2] = ((/* implicit */unsigned int) ((((/* implicit */long long int) (-(var_7)))) ^ (((((/* implicit */_Bool) var_10)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) (short)14079)))))));
                        }
                    }
                    for (signed char i_16 = 1; i_16 < 15; i_16 += 4) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_17 = 0; i_17 < 19; i_17 += 2) 
                        {
                            var_30 = ((/* implicit */unsigned char) min((var_30), (((/* implicit */unsigned char) arr_24 [i_3] [i_4] [(signed char)11] [i_7] [i_16 + 4] [i_17]))));
                            arr_57 [i_17] [i_16 + 4] [0] [i_4] [i_3] |= ((/* implicit */int) ((((/* implicit */_Bool) ((signed char) var_9))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (var_5) : (((/* implicit */int) (signed char)56))))) : (arr_24 [i_16 + 3] [i_16] [i_16] [i_16 + 4] [i_16] [i_16 + 1])));
                            arr_58 [i_16] [(unsigned char)4] [(short)16] [i_3] = ((/* implicit */short) var_7);
                        }
                        var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_27 [10] [i_4] [i_16])) ? (((/* implicit */unsigned int) arr_32 [(signed char)15] [i_4] [i_4] [i_7] [i_16])) : (var_4)));
                    }
                    var_32 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1U)) ? (268435455U) : ((~(arr_15 [i_3])))));
                    /* LoopNest 2 */
                    for (unsigned int i_18 = 0; i_18 < 19; i_18 += 1) 
                    {
                        for (unsigned long long int i_19 = 0; i_19 < 19; i_19 += 2) 
                        {
                            {
                                arr_64 [i_3] [11U] [i_7] [11U] [i_19] = ((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))));
                                var_33 = ((/* implicit */unsigned short) (short)127);
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                {
                    arr_69 [i_20] [i_4] [i_20] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)197)) ? (((/* implicit */int) (short)-22892)) : (((/* implicit */int) (unsigned char)12))))) ? (var_8) : (arr_24 [i_3] [i_3] [i_3] [i_3] [(unsigned char)8] [i_3])));
                    arr_70 [(unsigned short)6] [i_4] |= ((/* implicit */int) ((3872158928U) << (((1152921504606846976ULL) - (1152921504606846961ULL)))));
                }
                arr_71 [i_4] [i_4] = ((/* implicit */_Bool) arr_23 [i_3] [i_4]);
                var_34 = ((/* implicit */unsigned short) max((var_34), (((/* implicit */unsigned short) (-(((((/* implicit */_Bool) var_10)) ? ((~(((/* implicit */int) (short)-13372)))) : (1762832514))))))));
            }
        } 
    } 
    var_35 = ((/* implicit */unsigned int) (-(((unsigned long long int) max((15U), (((/* implicit */unsigned int) 1448953355)))))));
}
