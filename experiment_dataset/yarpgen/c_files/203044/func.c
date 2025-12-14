/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203044
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203044 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203044
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
    var_15 = ((/* implicit */int) min(((~((+(18446744073709551615ULL))))), (((/* implicit */unsigned long long int) 0))));
    var_16 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))) ? (((/* implicit */int) (_Bool)0)) : (max((((/* implicit */int) (signed char)-19)), (-592191550)))))) ? ((+((-(((/* implicit */int) var_7)))))) : (((((/* implicit */_Bool) ((((/* implicit */int) var_5)) | (var_6)))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_3)))) : ((+(((/* implicit */int) var_4))))))));
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_1 = 1; i_1 < 14; i_1 += 4) 
        {
            arr_5 [i_0] [i_1] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_4))))));
            /* LoopNest 2 */
            for (long long int i_2 = 2; i_2 < 14; i_2 += 4) 
            {
                for (unsigned char i_3 = 0; i_3 < 16; i_3 += 3) 
                {
                    {
                        arr_10 [i_0] |= ((((/* implicit */int) var_14)) - (((/* implicit */int) arr_6 [i_0] [i_1 - 1] [i_1 - 1])));
                        var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) var_12))));
                        arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) var_0);
                    }
                } 
            } 
            /* LoopNest 2 */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                for (long long int i_5 = 3; i_5 < 14; i_5 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_6 = 0; i_6 < 16; i_6 += 4) 
                        {
                            var_18 = ((/* implicit */long long int) var_7);
                            arr_19 [7U] [i_5] [i_5] [i_5] [i_6] [i_5] [i_4] = (~(var_8));
                            var_19 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_3))));
                            var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) (-(((/* implicit */int) (signed char)-61)))))));
                        }
                        var_21 ^= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_5)) : (var_6)))) / (18446744073709551615ULL)));
                    }
                } 
            } 
        }
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_7 = 0; i_7 < 16; i_7 += 2) 
        {
            /* LoopSeq 3 */
            for (signed char i_8 = 0; i_8 < 16; i_8 += 4) /* same iter space */
            {
                /* LoopNest 2 */
                for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
                {
                    for (long long int i_10 = 0; i_10 < 16; i_10 += 2) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) arr_27 [i_0] [i_8] [i_9]))))))))));
                            var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) < (((/* implicit */int) arr_32 [i_9 + 1] [i_9] [i_9 + 1] [i_9 + 1] [i_9 + 1]))));
                            var_24 = ((unsigned long long int) 17092060842397338297ULL);
                            var_25 = ((/* implicit */unsigned long long int) (((-(var_6))) >> (((/* implicit */int) ((unsigned short) arr_28 [i_9])))));
                        }
                    } 
                } 
                arr_34 [0LL] [i_7] [0LL] = ((/* implicit */unsigned char) var_9);
            }
            for (signed char i_11 = 0; i_11 < 16; i_11 += 4) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned char i_12 = 0; i_12 < 16; i_12 += 2) 
                {
                    for (unsigned char i_13 = 0; i_13 < 16; i_13 += 1) 
                    {
                        {
                            var_26 = ((/* implicit */unsigned int) ((arr_13 [i_13] [i_11] [i_0]) - (((((/* implicit */_Bool) var_3)) ? (1ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                            var_27 += ((/* implicit */unsigned long long int) (!((_Bool)1)));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_14 = 0; i_14 < 16; i_14 += 2) 
                {
                    for (int i_15 = 0; i_15 < 16; i_15 += 2) 
                    {
                        {
                            var_28 = ((/* implicit */_Bool) (-(((/* implicit */int) var_5))));
                            var_29 += ((/* implicit */unsigned char) (-(((var_6) + (((/* implicit */int) var_1))))));
                            arr_50 [i_7] [i_11] [i_14] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_0] [i_7] [i_0] [i_14]))) == (((arr_24 [i_7] [i_7] [i_7] [i_15]) & (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))));
                        }
                    } 
                } 
                var_30 = ((((/* implicit */_Bool) var_11)) ? (arr_30 [i_11] [11ULL] [i_11] [i_7] [(signed char)5] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))));
            }
            for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
            {
                var_31 = ((/* implicit */unsigned long long int) max((var_31), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_48 [i_0])) ? (((/* implicit */int) arr_15 [i_7] [i_7] [i_16] [i_0] [i_16] [i_0])) : (((/* implicit */int) arr_48 [i_7])))))));
                var_32 = ((/* implicit */long long int) var_1);
            }
            /* LoopSeq 2 */
            for (int i_17 = 2; i_17 < 13; i_17 += 2) /* same iter space */
            {
                arr_55 [i_0] [i_7] [i_17] [i_17] = ((/* implicit */unsigned int) (((!((_Bool)1))) ? ((~(425101002098389614ULL))) : (((((/* implicit */_Bool) var_11)) ? (13ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_45 [13LL] [7ULL] [1U] [1U] [i_17])))))));
                var_33 = ((/* implicit */_Bool) var_14);
            }
            for (int i_18 = 2; i_18 < 13; i_18 += 2) /* same iter space */
            {
                var_34 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) & (arr_24 [i_18 + 3] [(_Bool)1] [i_18 + 1] [i_18 + 1])));
                /* LoopSeq 2 */
                for (unsigned long long int i_19 = 1; i_19 < 12; i_19 += 1) /* same iter space */
                {
                    var_35 = ((/* implicit */_Bool) 2668969683332275132ULL);
                    arr_61 [i_0] [i_7] [i_0] [11ULL] = ((var_10) % (((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_3))))));
                }
                for (unsigned long long int i_20 = 1; i_20 < 12; i_20 += 1) /* same iter space */
                {
                    arr_64 [i_20] [i_20 + 2] = ((/* implicit */_Bool) ((unsigned long long int) (~(((/* implicit */int) var_4)))));
                    var_36 *= ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1))) : (((((/* implicit */_Bool) 394732198U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (18446744073709551615ULL))));
                }
            }
            var_37 = ((/* implicit */signed char) var_7);
            arr_65 [i_7] [0ULL] [i_0] &= ((/* implicit */long long int) (-(((/* implicit */int) var_3))));
            var_38 = ((/* implicit */unsigned int) min((var_38), (((/* implicit */unsigned int) (-(((/* implicit */int) ((signed char) 15532370473215491324ULL))))))));
        }
        var_39 = ((/* implicit */short) max((var_39), (((/* implicit */short) ((max((25ULL), (((/* implicit */unsigned long long int) ((arr_17 [i_0] [0ULL] [i_0] [i_0] [i_0]) ? (((/* implicit */int) var_14)) : (var_6)))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [(unsigned char)7] [i_0] [i_0] [i_0] [i_0]))))))));
    }
    /* vectorizable */
    for (unsigned long long int i_21 = 1; i_21 < 14; i_21 += 1) 
    {
        var_40 = ((/* implicit */short) var_7);
        var_41 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) var_11)) * (((/* implicit */int) var_0))))) ? (arr_66 [i_21 - 1] [i_21 - 1]) : (((/* implicit */long long int) ((/* implicit */int) var_2)))));
    }
    for (unsigned short i_22 = 0; i_22 < 11; i_22 += 3) 
    {
        arr_71 [i_22] = ((/* implicit */short) arr_54 [i_22] [i_22] [i_22] [i_22]);
        /* LoopSeq 1 */
        for (long long int i_23 = 0; i_23 < 11; i_23 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned char i_24 = 0; i_24 < 11; i_24 += 2) 
            {
                for (long long int i_25 = 0; i_25 < 11; i_25 += 4) 
                {
                    {
                        var_42 = ((/* implicit */unsigned long long int) var_0);
                        arr_80 [i_22] [i_22] = ((/* implicit */long long int) arr_69 [6LL] [i_25]);
                        var_43 = ((/* implicit */long long int) max((var_43), (((/* implicit */long long int) ((short) ((arr_44 [i_22] [i_23] [i_22]) ? (((/* implicit */int) arr_44 [i_22] [i_23] [i_24])) : (((/* implicit */int) var_12))))))));
                    }
                } 
            } 
            arr_81 [i_22] [i_23] = ((/* implicit */_Bool) max(((~(((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) | (13ULL))))), (((/* implicit */unsigned long long int) (-(((((/* implicit */int) (unsigned short)50237)) / (((/* implicit */int) (short)-26)))))))));
        }
    }
}
