/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54408
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54408 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54408
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
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            /* LoopSeq 1 */
            for (short i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                arr_8 [i_0] [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) var_8)) ? (var_7) : (var_7))));
                arr_9 [i_0] [i_2] = ((/* implicit */long long int) (~((~(((/* implicit */int) (short)-6197))))));
                arr_10 [i_2] = (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)111)) ? (3900094464268461231ULL) : (17ULL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-9))) : (((((/* implicit */_Bool) ((unsigned char) var_4))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_3))))) : (min((((/* implicit */unsigned long long int) var_9)), (var_7))))));
            }
            /* LoopNest 2 */
            for (long long int i_3 = 0; i_3 < 18; i_3 += 3) 
            {
                for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 4) 
                {
                    {
                        arr_17 [i_0] [i_1] [i_3] [i_4] [i_1] [i_4] = ((/* implicit */int) min((((/* implicit */unsigned long long int) (unsigned short)65520)), ((~(17345427995135049069ULL)))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (signed char i_5 = 0; i_5 < 18; i_5 += 1) 
                        {
                            var_12 -= ((/* implicit */unsigned int) (+(var_4)));
                            var_13 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3280610791854584409ULL)) ? (((/* implicit */int) arr_5 [i_0] [i_0] [i_0])) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_9))))) : (var_8)));
                        }
                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 18; i_6 += 1) 
                        {
                            var_14 = ((/* implicit */signed char) ((unsigned int) var_10));
                            arr_23 [i_4] = ((/* implicit */short) (((!(((/* implicit */_Bool) var_7)))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_5 [i_0] [i_1] [i_3]))));
                        }
                        var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_7 [i_1] [i_1]))))), (((unsigned long long int) var_6)))))));
                    }
                } 
            } 
        }
        /* LoopSeq 1 */
        for (unsigned char i_7 = 0; i_7 < 18; i_7 += 4) 
        {
            arr_27 [i_0] [i_0] &= var_6;
            var_16 = ((/* implicit */int) min((var_16), ((~(((/* implicit */int) ((signed char) arr_1 [i_7])))))));
            /* LoopSeq 1 */
            for (unsigned int i_8 = 0; i_8 < 18; i_8 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned char i_9 = 4; i_9 < 15; i_9 += 1) 
                {
                    for (int i_10 = 1; i_10 < 17; i_10 += 1) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (((_Bool)0) ? (((/* implicit */int) (signed char)9)) : (((/* implicit */int) var_9))))), (min((((((/* implicit */_Bool) var_7)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) var_2)))))))));
                            var_18 = ((unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_10 - 1] [i_10 + 1] [i_9 - 1] [i_9 - 1])) ? (((/* implicit */unsigned int) arr_6 [i_9 + 2] [i_9 + 2])) : (var_8)));
                        }
                    } 
                } 
                /* LoopSeq 3 */
                for (unsigned short i_11 = 0; i_11 < 18; i_11 += 2) 
                {
                    /* LoopSeq 2 */
                    for (int i_12 = 2; i_12 < 17; i_12 += 1) 
                    {
                        arr_41 [i_8] [(unsigned char)6] [i_8] [i_11] [i_12] [i_0] [i_8] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)178)) ? (var_0) : (((/* implicit */long long int) var_8))))), (((((/* implicit */_Bool) var_8)) ? (var_4) : (((/* implicit */unsigned long long int) var_5))))))) ? (min(((~(var_4))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_9))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) var_5))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (signed char)-59)) : (((/* implicit */int) var_9)))) : (arr_28 [i_0] [(_Bool)1] [i_8]))))));
                        arr_42 [i_0] &= ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_25 [i_12 + 1])) ? (var_6) : (var_6)))));
                        var_19 = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((((/* implicit */int) var_1)) > (((int) var_0))))), (var_0)));
                        var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) var_5))));
                    }
                    for (int i_13 = 0; i_13 < 18; i_13 += 2) 
                    {
                        var_21 = ((/* implicit */long long int) (+((+(((/* implicit */int) arr_19 [i_11] [i_11] [i_11] [i_11] [i_11]))))));
                        var_22 = ((/* implicit */signed char) (-(((var_6) % (min((var_6), (((/* implicit */unsigned long long int) var_10))))))));
                        var_23 &= var_4;
                        arr_45 [(short)11] [i_8] [(short)11] = ((/* implicit */long long int) 1156422123U);
                        arr_46 [i_0] [i_0] [i_8] [i_11] [i_0] = min((var_7), (((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) var_11)) : (arr_11 [i_7] [i_7]))))));
                    }
                    arr_47 [i_0] [i_7] [i_8] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((~(var_4))) | (((/* implicit */unsigned long long int) var_10))))) ? (((unsigned int) arr_25 [i_0])) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))));
                    var_24 = ((/* implicit */long long int) ((signed char) ((short) ((((/* implicit */unsigned long long int) 5693250629790525531LL)) - (18446744073709551594ULL)))));
                }
                for (unsigned int i_14 = 0; i_14 < 18; i_14 += 2) 
                {
                    var_25 = arr_35 [i_14] [i_8] [i_8] [i_7] [i_7] [(signed char)14];
                    var_26 = ((/* implicit */unsigned long long int) ((unsigned int) (~(min((((/* implicit */int) arr_4 [0ULL])), (529335185))))));
                }
                /* vectorizable */
                for (long long int i_15 = 2; i_15 < 16; i_15 += 2) 
                {
                    var_27 += ((/* implicit */long long int) ((unsigned int) var_1));
                    var_28 = ((/* implicit */short) ((((/* implicit */_Bool) (~(var_8)))) ? (((int) var_2)) : (((/* implicit */int) arr_38 [i_0] [i_15 - 2] [i_15] [(_Bool)1]))));
                    arr_52 [i_0] [i_0] [i_0] [i_0] [(_Bool)1] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? ((~(arr_18 [i_15 + 1] [i_15] [i_8] [6LL] [i_7] [i_0]))) : (var_4)));
                    var_29 &= ((/* implicit */long long int) arr_49 [(signed char)17] [i_7] [i_15 - 1] [i_8]);
                }
            }
            var_30 = ((/* implicit */long long int) var_5);
        }
        var_31 -= ((/* implicit */short) (~((-((-(arr_43 [i_0])))))));
        /* LoopNest 3 */
        for (unsigned char i_16 = 0; i_16 < 18; i_16 += 4) 
        {
            for (unsigned long long int i_17 = 0; i_17 < 18; i_17 += 1) 
            {
                for (unsigned int i_18 = 3; i_18 < 17; i_18 += 4) 
                {
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_19 = 1; i_19 < 1; i_19 += 1) 
                        {
                            var_32 = ((/* implicit */long long int) min((var_32), (((/* implicit */long long int) var_4))));
                            var_33 = ((/* implicit */signed char) var_8);
                            var_34 = ((/* implicit */signed char) min((var_34), (((/* implicit */signed char) ((((/* implicit */_Bool) min((((int) 3900094464268461222ULL)), (min((arr_37 [i_16] [i_16] [i_18] [i_19]), (((/* implicit */int) var_2))))))) && (((/* implicit */_Bool) var_9)))))));
                        }
                        for (long long int i_20 = 4; i_20 < 17; i_20 += 2) 
                        {
                            arr_65 [i_0] [i_0] [i_0] [i_0] [i_0] [i_18 - 3] [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned char)53), (((/* implicit */unsigned char) (signed char)12)))))) * (min((((/* implicit */unsigned long long int) (-(arr_3 [1LL] [i_0])))), (((((/* implicit */_Bool) 15166133281854967191ULL)) ? (3900094464268461239ULL) : (var_6)))))));
                            var_35 += ((/* implicit */int) var_2);
                            arr_66 [i_0] [i_0] [i_17] [i_18] [i_0] [i_18] [i_18] = ((/* implicit */int) ((((((/* implicit */_Bool) ((unsigned char) var_1))) ? (((long long int) var_5)) : (((/* implicit */long long int) ((/* implicit */int) var_9))))) | (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(var_5))))))))));
                        }
                        var_36 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_43 [i_18 - 3])) ? (arr_43 [i_18 - 1]) : (((/* implicit */long long int) ((/* implicit */int) (short)-9669)))))) ? (((/* implicit */int) ((unsigned short) var_11))) : (((/* implicit */int) ((signed char) 15166133281854967207ULL)))));
                        /* LoopSeq 4 */
                        for (signed char i_21 = 2; i_21 < 17; i_21 += 1) 
                        {
                            var_37 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((_Bool) (short)6188)))));
                            arr_69 [i_0] [i_0] [i_17] [i_17] [i_18] [i_21 - 2] &= ((/* implicit */unsigned int) min((((int) arr_68 [i_21 - 1] [i_21] [i_21 - 2] [0ULL] [i_18 + 1])), (arr_15 [i_0] [i_16] [i_17] [i_18 - 2] [i_16])));
                            var_38 = ((/* implicit */unsigned int) min((var_38), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 3138545173U)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-32766))) : (-13LL))))));
                            var_39 -= ((/* implicit */long long int) min((arr_31 [i_0] [i_0] [9] [i_17] [i_18] [i_21 - 2]), (arr_62 [i_0] [i_16] [i_16] [(signed char)17] [i_21] [i_16])));
                            var_40 ^= ((/* implicit */unsigned short) ((long long int) (-9223372036854775807LL - 1LL)));
                        }
                        for (signed char i_22 = 4; i_22 < 15; i_22 += 1) /* same iter space */
                        {
                            var_41 = ((/* implicit */long long int) min((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (var_5) : (var_10)))), (((unsigned long long int) var_0)))), (((/* implicit */unsigned long long int) (unsigned char)132))));
                            arr_72 [i_16] [i_0] [i_18 - 3] [i_0] [i_16] [i_0] [i_0] = ((/* implicit */short) ((signed char) min((var_6), (((/* implicit */unsigned long long int) arr_68 [14] [i_22 - 3] [i_18 + 1] [2] [2])))));
                        }
                        /* vectorizable */
                        for (signed char i_23 = 4; i_23 < 15; i_23 += 1) /* same iter space */
                        {
                            var_42 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) var_9)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))));
                            var_43 = ((/* implicit */unsigned char) var_3);
                            arr_75 [i_0] [i_16] [i_17] [9] [i_23] = ((/* implicit */unsigned char) (+(((((/* implicit */long long int) 58720256)) ^ (arr_54 [10LL] [i_17])))));
                            var_44 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) var_5))) ? (arr_6 [i_0] [i_0]) : (((int) var_6))));
                        }
                        for (short i_24 = 3; i_24 < 17; i_24 += 2) 
                        {
                            arr_78 [i_24] [i_24] [i_24] = ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_67 [i_18 - 2] [i_18 + 1] [i_18 + 1] [i_24] [i_24 + 1] [i_24 + 1] [4LL])), (arr_21 [i_18 - 1] [i_18 - 1] [i_18] [i_18 + 1] [i_24 - 3])))) ? ((+(((unsigned int) var_4)))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) var_5)) : (var_7)))))))));
                            var_45 = ((/* implicit */unsigned long long int) max((var_45), (((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) var_8)) : (var_6))) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))));
                            arr_79 [i_0] [i_24] = min((min((((/* implicit */long long int) -1)), (-1431664215947406495LL))), (((/* implicit */long long int) (~(var_5)))));
                        }
                        arr_80 [2ULL] [2ULL] [2ULL] [i_18] |= ((/* implicit */unsigned short) ((((unsigned long long int) var_2)) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)128)) ? (((/* implicit */long long int) 4084531302U)) : (4289080837497619927LL))))));
                    }
                } 
            } 
        } 
    }
    var_46 = ((/* implicit */short) (!(((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))) != (var_8)))));
    var_47 = ((/* implicit */long long int) var_7);
    /* LoopSeq 1 */
    for (short i_25 = 0; i_25 < 18; i_25 += 2) 
    {
        arr_84 [4LL] &= ((/* implicit */signed char) var_0);
        var_48 *= ((/* implicit */short) (+(((unsigned int) var_9))));
        var_49 = ((/* implicit */long long int) max((var_49), (((/* implicit */long long int) var_10))));
    }
}
