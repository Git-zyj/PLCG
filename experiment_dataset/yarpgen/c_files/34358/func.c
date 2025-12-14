/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34358
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34358 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34358
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
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 2; i_1 < 20; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    var_10 = ((/* implicit */short) (((((~(((/* implicit */int) (unsigned short)25152)))) % (((/* implicit */int) max((((/* implicit */unsigned char) arr_5 [i_0] [i_2] [i_0])), (arr_7 [i_0] [(unsigned char)15] [(unsigned char)11])))))) ^ ((-(((/* implicit */int) arr_5 [i_0] [i_1] [i_2]))))));
                    var_11 |= ((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) arr_6 [i_0] [i_2])) >= (((/* implicit */int) (_Bool)1))))) <= (((/* implicit */int) ((((/* implicit */int) arr_2 [14LL])) == (((/* implicit */int) (signed char)-11)))))))), (((((/* implicit */_Bool) arr_1 [i_2] [i_2])) ? (((/* implicit */int) arr_1 [i_2] [i_2])) : (((/* implicit */int) arr_1 [i_1] [i_1]))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        arr_13 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((unsigned short) ((arr_12 [i_0] [(signed char)18] [i_2] [i_0]) ? (((/* implicit */int) arr_11 [i_0] [i_1] [i_2] [i_3])) : (((/* implicit */int) (unsigned char)177)))));
                        arr_14 [i_0] = ((/* implicit */_Bool) var_2);
                        /* LoopSeq 1 */
                        for (unsigned int i_4 = 0; i_4 < 22; i_4 += 2) 
                        {
                            var_12 |= ((/* implicit */long long int) var_1);
                            var_13 = ((arr_3 [i_3]) + (((/* implicit */unsigned int) ((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) (unsigned char)109)))))));
                            var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_9 [i_1] [i_1 + 2] [i_1 + 2] [i_1] [i_1 - 2])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)63))) : (arr_15 [i_1 + 2] [i_1 + 1] [i_1 + 1] [i_3] [i_3])));
                            var_15 |= ((/* implicit */short) arr_6 [i_0] [i_1]);
                        }
                    }
                }
            } 
        } 
        /* LoopSeq 2 */
        for (short i_5 = 1; i_5 < 21; i_5 += 2) 
        {
            var_16 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) (unsigned char)75)) ? (((/* implicit */int) (unsigned char)58)) : (((/* implicit */int) (signed char)15)))), (((((/* implicit */int) arr_16 [i_5 - 1] [i_5] [i_5] [i_5 + 1] [i_5 - 1] [i_5])) & (((/* implicit */int) arr_16 [i_5 + 1] [i_5] [i_5] [i_5 - 1] [i_5 + 1] [i_5]))))));
            var_17 = ((/* implicit */short) (unsigned char)77);
            var_18 = ((((/* implicit */_Bool) 0U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0] [i_0] [i_5] [i_5]))) : (((((/* implicit */_Bool) (unsigned short)40368)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_3)))) : ((-(arr_3 [i_5]))))));
            var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) var_1))));
        }
        for (long long int i_6 = 0; i_6 < 22; i_6 += 2) 
        {
            arr_21 [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((signed char) arr_9 [i_6] [i_6] [i_6] [i_0] [i_0])))));
            var_20 = ((/* implicit */long long int) var_7);
            /* LoopSeq 4 */
            /* vectorizable */
            for (signed char i_7 = 0; i_7 < 22; i_7 += 4) /* same iter space */
            {
                var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) (unsigned short)40384))) ? (((/* implicit */int) ((unsigned char) arr_17 [i_0] [i_0] [i_7]))) : (((((/* implicit */_Bool) (unsigned char)99)) ? (((/* implicit */int) arr_17 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_1 [(short)21] [i_0]))))));
                arr_24 [i_6] [i_6] [i_0] [i_6] = ((/* implicit */signed char) (short)5585);
                arr_25 [i_0] [i_0] [i_7] = ((/* implicit */unsigned short) ((var_7) % (arr_10 [i_0] [i_6] [i_7] [(unsigned char)19] [i_7] [i_0])));
            }
            /* vectorizable */
            for (signed char i_8 = 0; i_8 < 22; i_8 += 4) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned short i_9 = 0; i_9 < 22; i_9 += 3) 
                {
                    for (short i_10 = 0; i_10 < 22; i_10 += 3) 
                    {
                        {
                            var_22 *= ((/* implicit */signed char) (+(((((/* implicit */_Bool) (signed char)-60)) ? (((/* implicit */int) arr_8 [i_8] [14LL] [i_8])) : (((/* implicit */int) (unsigned short)57304))))));
                            var_23 = ((/* implicit */signed char) arr_27 [i_10] [i_0] [i_10]);
                        }
                    } 
                } 
                var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) (-(((/* implicit */int) arr_29 [14LL] [14LL] [i_8] [i_8] [(_Bool)1])))))));
            }
            /* vectorizable */
            for (signed char i_11 = 0; i_11 < 22; i_11 += 4) /* same iter space */
            {
                var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_38 [i_11] [i_6])) ? (((((/* implicit */_Bool) (unsigned short)9881)) ? (((/* implicit */int) (signed char)82)) : (((/* implicit */int) (unsigned char)78)))) : (((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) var_2)))))));
                arr_39 [i_0] [i_6] [(unsigned short)10] [(signed char)13] = ((/* implicit */short) ((((/* implicit */_Bool) arr_35 [i_0])) ? (((/* implicit */int) arr_35 [i_0])) : (((/* implicit */int) arr_35 [i_0]))));
                var_26 = ((/* implicit */_Bool) ((((((/* implicit */int) (unsigned char)31)) >= (((/* implicit */int) (unsigned char)177)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-5566)) ? (((/* implicit */int) (signed char)119)) : (((/* implicit */int) arr_6 [i_0] [i_0]))))) : (arr_27 [i_0] [i_0] [i_0])));
            }
            for (signed char i_12 = 0; i_12 < 22; i_12 += 4) /* same iter space */
            {
                /* LoopSeq 1 */
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    arr_46 [i_13] [i_0] [i_13] [(unsigned short)19] = ((((/* implicit */_Bool) max((((/* implicit */int) arr_0 [i_0])), (((((/* implicit */_Bool) arr_32 [i_0] [(unsigned short)0] [i_12] [i_13] [i_13])) ? (((/* implicit */int) arr_6 [i_13] [i_0])) : (((/* implicit */int) arr_7 [i_0] [i_0] [i_0]))))))) ? (((((/* implicit */_Bool) ((arr_33 [(unsigned short)18]) ? (((/* implicit */int) (signed char)-19)) : (((/* implicit */int) var_0))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((arr_7 [i_0] [i_6] [i_12]), (((/* implicit */unsigned char) arr_45 [i_0] [i_0] [i_0] [i_0])))))) : (3624182457U))) : (((/* implicit */unsigned int) ((((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) var_3)))) * (((/* implicit */int) max((arr_4 [(short)1] [(short)1] [(_Bool)1]), (((/* implicit */short) arr_26 [i_0] [i_0] [i_12])))))))));
                    arr_47 [i_0] [i_6] [i_13] |= ((/* implicit */_Bool) max(((unsigned short)25143), (((/* implicit */unsigned short) (signed char)-3))));
                    var_27 = ((/* implicit */_Bool) max((max((((/* implicit */long long int) (signed char)-113)), (max((((/* implicit */long long int) (signed char)-31)), (2553969647636084475LL))))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)52500)) ? (((/* implicit */int) (unsigned char)178)) : (((/* implicit */int) (_Bool)1)))))));
                }
                var_28 = ((/* implicit */unsigned char) (unsigned short)62996);
            }
            var_29 = ((/* implicit */short) ((max((((arr_10 [i_0] [i_0] [i_6] [i_6] [(signed char)9] [i_6]) / (((/* implicit */unsigned int) ((/* implicit */int) var_0))))), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_23 [i_0] [i_0] [i_6] [i_0]))))))) != (((/* implicit */unsigned int) ((/* implicit */int) min((((unsigned char) (unsigned char)138)), (var_0)))))));
        }
        var_30 ^= arr_18 [i_0] [i_0];
    }
    for (unsigned short i_14 = 0; i_14 < 22; i_14 += 4) 
    {
        arr_51 [(unsigned short)8] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_34 [i_14] [i_14] [i_14] [i_14] [i_14] [i_14] [i_14])) ? (((/* implicit */int) arr_7 [i_14] [i_14] [i_14])) : (((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_37 [i_14] [i_14]))))))))));
        /* LoopNest 3 */
        for (short i_15 = 1; i_15 < 21; i_15 += 1) 
        {
            for (long long int i_16 = 0; i_16 < 22; i_16 += 3) 
            {
                for (short i_17 = 0; i_17 < 22; i_17 += 2) 
                {
                    {
                        var_31 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) max(((short)-11529), ((short)-31435)))) ? (((/* implicit */int) arr_4 [i_16] [i_15 + 1] [i_15 + 1])) : (((/* implicit */int) (!(arr_12 [i_15] [i_15] [i_16] [i_17])))))), (((/* implicit */int) arr_54 [i_16]))));
                        var_32 = ((/* implicit */unsigned int) arr_42 [i_15] [(short)21] [i_15]);
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned short i_18 = 0; i_18 < 18; i_18 += 2) 
    {
        var_33 = ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)178)) ? (((/* implicit */int) (short)5585)) : (((/* implicit */int) (unsigned short)2515))))) == (arr_10 [i_18] [(signed char)2] [i_18] [i_18] [i_18] [i_18]));
        var_34 ^= ((/* implicit */unsigned short) (~(((unsigned int) arr_6 [i_18] [i_18]))));
        /* LoopSeq 1 */
        for (unsigned char i_19 = 3; i_19 < 17; i_19 += 2) 
        {
            var_35 = ((/* implicit */long long int) ((((((/* implicit */int) (signed char)-103)) | (((/* implicit */int) (signed char)64)))) ^ (((/* implicit */int) (unsigned char)78))));
            arr_67 [i_19 - 3] [i_19 - 2] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_36 [i_18]))));
            var_36 ^= ((/* implicit */signed char) ((((/* implicit */int) arr_41 [i_18])) >= (((/* implicit */int) var_4))));
        }
    }
    var_37 = ((/* implicit */unsigned short) ((((/* implicit */int) var_8)) != (((/* implicit */int) (unsigned short)62996))));
}
