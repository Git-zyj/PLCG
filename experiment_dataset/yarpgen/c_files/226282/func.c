/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226282
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226282 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226282
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
    /* vectorizable */
    for (int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        var_16 = ((/* implicit */unsigned short) 1);
        var_17 = ((/* implicit */unsigned int) ((arr_0 [3ULL]) ? (((/* implicit */int) (signed char)88)) : ((~(((/* implicit */int) var_3))))));
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 3; i_1 < 23; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                for (long long int i_3 = 1; i_3 < 24; i_3 += 1) 
                {
                    {
                        var_18 = ((/* implicit */int) max((var_18), (((8) >> (((/* implicit */int) ((1) < (((/* implicit */int) (unsigned short)45313)))))))));
                        var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_8 [(_Bool)1] [i_2] [i_1] [i_0])) : (((/* implicit */int) arr_8 [i_0] [3] [i_0] [i_0])))))));
                        arr_10 [2U] [2U] [(unsigned char)1] [i_2] = ((/* implicit */_Bool) arr_9 [i_1 + 1] [9U] [i_2] [i_3 - 1] [(short)7] [10]);
                        /* LoopSeq 2 */
                        for (int i_4 = 0; i_4 < 25; i_4 += 2) 
                        {
                            var_20 = ((/* implicit */signed char) ((unsigned int) ((short) arr_8 [(short)20] [i_1 + 1] [(short)20] [i_3])));
                            arr_13 [i_4] [i_2] [(short)20] = ((/* implicit */_Bool) ((((int) 12)) >> (((((((/* implicit */int) (short)8)) * (((/* implicit */int) arr_4 [i_0] [(unsigned short)23] [(short)11] [(unsigned char)3])))) - (629)))));
                            arr_14 [i_2] [i_2] = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) arr_4 [(unsigned short)4] [1LL] [(_Bool)1] [(_Bool)1])) ? (((/* implicit */int) arr_11 [i_2] [12] [i_2] [i_2] [i_1 - 1] [i_2])) : (((/* implicit */int) arr_11 [i_2] [i_2] [i_2] [i_3] [i_2] [i_2])))));
                            var_21 = arr_8 [i_0] [(signed char)2] [i_0] [i_0];
                            var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) var_6))));
                        }
                        for (long long int i_5 = 0; i_5 < 25; i_5 += 1) 
                        {
                            var_23 = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) 1)) ? (((/* implicit */int) (short)0)) : (arr_1 [i_0]))));
                            var_24 += ((/* implicit */_Bool) var_14);
                            var_25 = ((((/* implicit */int) arr_15 [i_3 + 1] [i_1 - 1] [i_1 - 3] [i_0] [(signed char)3] [(_Bool)1])) * (((/* implicit */int) arr_4 [i_1] [i_1 - 3] [i_1 - 2] [i_3 - 1])));
                            var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) ((_Bool) arr_5 [i_0] [i_1] [i_1 + 1] [i_3])))));
                        }
                    }
                } 
            } 
        } 
    }
    for (unsigned char i_6 = 0; i_6 < 17; i_6 += 1) 
    {
        var_27 = arr_8 [i_6] [(signed char)6] [i_6] [i_6];
        var_28 = ((/* implicit */int) max((var_28), (((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_9 [i_6] [i_6] [i_6] [i_6] [(short)11] [(_Bool)1]), (arr_6 [(_Bool)1] [(_Bool)1] [0] [i_6])))) ? (((/* implicit */long long int) (-(-7)))) : (((long long int) 6))))) ? (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_16 [(_Bool)1] [i_6] [(_Bool)1] [i_6])) ? (((/* implicit */int) arr_19 [(_Bool)1] [i_6])) : (((/* implicit */int) arr_9 [(short)7] [i_6] [i_6] [i_6] [(unsigned char)3] [i_6])))))) : (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) (unsigned char)68)) && (((/* implicit */_Bool) var_14))))))))));
        var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 8)) ? (((/* implicit */int) min((arr_9 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6]), (arr_2 [i_6])))) : (((/* implicit */int) ((unsigned short) arr_3 [i_6] [i_6] [i_6])))))) ? (-4) : (((/* implicit */int) ((16) <= (1420807803))))));
        arr_20 [(signed char)16] = ((/* implicit */unsigned short) arr_15 [i_6] [i_6] [i_6] [i_6] [i_6] [23]);
    }
    /* LoopNest 2 */
    for (short i_7 = 0; i_7 < 17; i_7 += 1) 
    {
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            {
                var_30 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_11 [i_7] [i_7] [(signed char)10] [i_8] [i_7] [i_7])) ? (((/* implicit */int) arr_15 [i_7] [i_7] [8LL] [i_7] [8LL] [8LL])) : (((/* implicit */int) arr_15 [12ULL] [i_8] [i_8] [(short)12] [i_8] [(unsigned char)21])))) - (((((/* implicit */int) arr_11 [i_7] [i_7] [(unsigned char)1] [22LL] [i_7] [i_7])) + (((/* implicit */int) arr_11 [i_7] [i_8] [(signed char)20] [3] [i_7] [i_7]))))));
                var_31 = ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)15)) - (-857804882)));
                /* LoopSeq 2 */
                for (short i_9 = 1; i_9 < 13; i_9 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_10 = 2; i_10 < 14; i_10 += 4) 
                    {
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            {
                                var_32 = ((/* implicit */unsigned int) max((var_32), (((/* implicit */unsigned int) arr_24 [i_10]))));
                                var_33 = ((/* implicit */signed char) max((var_33), (((/* implicit */signed char) arr_2 [i_7]))));
                                var_34 = ((/* implicit */short) arr_5 [i_10 + 1] [i_10 + 2] [i_10 + 1] [i_10 - 1]);
                                var_35 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(-16)))) ? (var_12) : (((/* implicit */int) arr_17 [i_9 - 1] [i_9 + 1] [i_7]))));
                                var_36 += ((/* implicit */short) ((int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -7)) ? (-4) : (6)))))));
                            }
                        } 
                    } 
                    arr_35 [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) ((int) arr_7 [i_9 + 2] [i_9 - 1] [i_9 + 1]))) || (((/* implicit */_Bool) (-(3707458531U))))));
                    /* LoopNest 2 */
                    for (unsigned char i_12 = 0; i_12 < 17; i_12 += 1) 
                    {
                        for (unsigned char i_13 = 0; i_13 < 17; i_13 += 3) 
                        {
                            {
                                var_37 = ((/* implicit */unsigned short) ((((((_Bool) arr_0 [i_7])) ? (((int) arr_34 [(signed char)15] [i_8] [i_9] [i_9] [i_12] [i_12])) : (max((-14), (var_8))))) - (((((/* implicit */_Bool) 1)) ? (((/* implicit */int) ((_Bool) -13))) : (((/* implicit */int) ((_Bool) arr_15 [i_8] [i_8] [i_8] [i_8] [i_8] [(unsigned short)20])))))));
                                var_38 = ((((/* implicit */_Bool) var_4)) ? (max((((/* implicit */int) arr_6 [i_7] [i_9 + 4] [i_9] [i_9 + 4])), (857804862))) : (((/* implicit */int) (_Bool)0)));
                                var_39 += ((/* implicit */int) arr_26 [i_7] [i_7]);
                            }
                        } 
                    } 
                }
                for (int i_14 = 0; i_14 < 17; i_14 += 2) 
                {
                    arr_45 [i_7] [i_7] [i_14] = (~(max((((/* implicit */int) arr_11 [i_7] [i_8] [i_8] [i_8] [i_7] [i_7])), ((-(((/* implicit */int) arr_43 [i_7] [i_7] [i_7])))))));
                    var_40 = ((/* implicit */unsigned char) (((_Bool)1) ? ((((!(var_6))) ? (((/* implicit */int) min((((/* implicit */short) arr_43 [16] [i_8] [i_14])), ((short)2698)))) : (((/* implicit */int) ((short) arr_6 [i_7] [i_7] [(_Bool)1] [i_7]))))) : (((/* implicit */int) ((unsigned char) (unsigned char)156)))));
                    /* LoopNest 2 */
                    for (int i_15 = 3; i_15 < 16; i_15 += 1) 
                    {
                        for (int i_16 = 0; i_16 < 17; i_16 += 1) 
                        {
                            {
                                arr_50 [i_14] [i_7] = ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (unsigned char)41)) ? (((/* implicit */int) arr_16 [(unsigned char)9] [i_15 + 1] [(short)5] [i_7])) : (25))), (((/* implicit */int) (unsigned char)72))))) ? (((/* implicit */int) ((_Bool) arr_12 [i_14] [i_7] [i_14] [i_15] [i_16]))) : ((-(((((/* implicit */_Bool) arr_46 [i_15 - 3] [i_14] [i_8] [i_7])) ? (((/* implicit */int) (short)-12197)) : (((/* implicit */int) arr_0 [18])))))));
                                var_41 = ((/* implicit */short) arr_16 [i_8] [i_14] [i_14] [(_Bool)1]);
                                arr_51 [i_7] [i_7] [i_14] [(short)14] [i_16] [(short)9] [9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 15)) ? (((/* implicit */int) arr_4 [i_7] [i_14] [i_15] [i_16])) : (((/* implicit */int) (unsigned char)222))))) ? (((/* implicit */int) ((unsigned char) (signed char)80))) : (((/* implicit */int) arr_4 [i_7] [i_7] [i_7] [i_7]))))) ? ((~(((int) arr_46 [i_7] [i_8] [(unsigned short)3] [i_16])))) : (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_7] [(unsigned short)4] [i_15 - 1] [i_16]))))) > ((+(((/* implicit */int) var_0)))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_17 = 0; i_17 < 17; i_17 += 1) 
                    {
                        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                        {
                            {
                                var_42 = ((/* implicit */signed char) ((((((/* implicit */int) arr_4 [7] [(unsigned char)20] [i_7] [i_7])) >= (((/* implicit */int) arr_55 [i_7] [i_8] [i_14] [i_17] [16ULL])))) ? (((((/* implicit */_Bool) arr_4 [i_7] [i_7] [i_7] [i_17])) ? (((/* implicit */int) arr_55 [16LL] [i_8] [i_14] [i_17] [i_18])) : (((/* implicit */int) arr_4 [i_18] [(unsigned short)6] [i_14] [i_7])))) : (((((/* implicit */_Bool) arr_4 [i_14] [i_14] [i_7] [i_7])) ? (((/* implicit */int) arr_23 [i_7] [i_7])) : (((/* implicit */int) arr_23 [i_7] [i_7]))))));
                                var_43 &= ((/* implicit */signed char) min((((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) var_13)) ? (-1479135956) : (((/* implicit */int) var_15)))))), (((((/* implicit */_Bool) ((arr_54 [1] [i_8] [i_14] [i_14] [(unsigned char)7] [1]) ? (3626595518756524765LL) : (((/* implicit */long long int) ((/* implicit */int) arr_39 [i_18] [(short)4] [i_14] [i_17])))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_32 [i_7] [(signed char)13] [i_14])) - (((/* implicit */int) arr_36 [i_14]))))) : (arr_3 [i_7] [i_8] [(unsigned char)3])))));
                                arr_56 [(unsigned char)11] [i_8] [i_8] [i_7] [i_18] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_54 [i_7] [(unsigned char)2] [i_7] [i_7] [i_7] [i_7]) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_16 [i_7] [(unsigned short)15] [(_Bool)1] [i_18]))))) ? (((long long int) arr_54 [i_7] [0LL] [7] [i_17] [(signed char)8] [i_17])) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_16 [i_7] [i_7] [i_7] [(unsigned short)12])) ? (((/* implicit */int) arr_16 [i_14] [12ULL] [(_Bool)0] [i_14])) : (((/* implicit */int) arr_16 [i_7] [i_8] [i_14] [13ULL])))))));
                                arr_57 [i_7] [i_18] = ((/* implicit */signed char) (_Bool)1);
                            }
                        } 
                    } 
                    arr_58 [i_7] [i_7] [i_7] = ((/* implicit */unsigned long long int) arr_6 [8] [i_14] [i_8] [i_7]);
                }
                arr_59 [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 2)) ? (((/* implicit */int) (signed char)92)) : (((/* implicit */int) (unsigned char)175))));
                var_44 = ((((/* implicit */_Bool) ((((/* implicit */int) arr_47 [i_7] [i_7] [(unsigned char)8] [i_7])) % (((/* implicit */int) arr_47 [i_7] [(short)0] [i_8] [i_8]))))) ? (((/* implicit */int) arr_47 [i_7] [i_7] [i_7] [i_8])) : (((/* implicit */int) arr_47 [i_7] [i_7] [i_8] [i_8])));
            }
        } 
    } 
}
