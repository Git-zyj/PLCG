/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240108
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240108 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240108
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
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 1; i_1 < 18; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 18; i_2 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (short i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        var_10 = ((((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_0] [i_0]))))) ? (((/* implicit */int) (short)9501)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0]))))));
                        var_11 |= ((/* implicit */unsigned short) ((((/* implicit */int) arr_5 [i_3] [i_2 + 1] [i_2 + 2])) < (((/* implicit */int) arr_5 [i_3] [i_2 + 2] [i_2]))));
                        var_12 ^= ((/* implicit */_Bool) (((~(-2107379340))) >> (((((((/* implicit */_Bool) arr_4 [i_3])) ? (((/* implicit */int) arr_7 [i_1 - 1] [i_0] [11ULL] [i_1 - 1] [i_0])) : (((/* implicit */int) arr_2 [i_3])))) - (17299)))));
                    }
                    for (short i_4 = 0; i_4 < 20; i_4 += 3) 
                    {
                        var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_6 [i_1 + 2] [(unsigned short)4])) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) arr_6 [i_0] [i_4]))));
                        var_14 = ((/* implicit */int) arr_8 [i_0] [i_1 - 1] [i_2 + 2] [i_4]);
                    }
                    arr_11 [i_0] [(unsigned short)18] [(unsigned short)18] [i_1] |= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_9 [i_0] [i_0] [(unsigned short)12] [i_0] [(short)5] [i_0])) ? (((/* implicit */int) arr_2 [6])) : (((/* implicit */int) arr_6 [i_0] [i_1])))) < ((-(((/* implicit */int) arr_0 [(_Bool)1] [i_1]))))));
                    var_15 = ((/* implicit */short) (-(3660244951321390147LL)));
                }
            } 
        } 
        var_16 = ((/* implicit */unsigned int) ((unsigned short) (unsigned short)65531));
        /* LoopSeq 3 */
        for (unsigned char i_5 = 0; i_5 < 20; i_5 += 2) 
        {
            var_17 = arr_5 [i_0] [i_0] [i_5];
            arr_15 [i_0] [i_0] [i_5] = ((/* implicit */unsigned char) ((arr_3 [i_0]) & (((((/* implicit */int) (short)-32751)) & (((/* implicit */int) (unsigned short)65531))))));
            var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) (-(((/* implicit */int) arr_6 [i_0] [i_0])))))));
        }
        for (unsigned int i_6 = 0; i_6 < 20; i_6 += 1) 
        {
            var_19 = (i_0 % 2 == zero) ? (((/* implicit */unsigned short) (-(((((/* implicit */int) arr_1 [i_0] [i_0])) >> (((/* implicit */int) var_4))))))) : (((/* implicit */unsigned short) (-(((((((/* implicit */int) arr_1 [i_0] [i_0])) + (2147483647))) >> (((/* implicit */int) var_4)))))));
            var_20 = ((/* implicit */signed char) ((long long int) arr_12 [i_0] [i_0] [i_6]));
            arr_18 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (signed char)124);
        }
        for (unsigned short i_7 = 0; i_7 < 20; i_7 += 4) 
        {
            arr_21 [i_0] [i_7] [i_7] = ((((/* implicit */_Bool) 2107379338)) ? (((/* implicit */int) (signed char)124)) : (((/* implicit */int) (short)-9502)));
            arr_22 [i_0] [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) (short)1393)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) arr_1 [i_0] [i_0])))) > (((((/* implicit */_Bool) var_7)) ? (707975023) : (((/* implicit */int) (unsigned short)0))))));
            var_21 *= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_20 [i_0] [i_0] [i_7])) ? (((/* implicit */int) arr_20 [i_0] [i_7] [i_7])) : (((/* implicit */int) arr_20 [i_7] [i_0] [i_0]))));
            /* LoopNest 2 */
            for (unsigned short i_8 = 2; i_8 < 16; i_8 += 3) 
            {
                for (long long int i_9 = 0; i_9 < 20; i_9 += 1) 
                {
                    {
                        var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) (~(arr_13 [i_7] [i_8 + 2] [i_8]))))));
                        var_23 = ((/* implicit */short) ((((/* implicit */int) arr_12 [i_8 + 3] [i_0] [i_8])) >= (((/* implicit */int) (signed char)-75))));
                        arr_29 [i_0] [i_7] [i_0] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_26 [i_8 + 3] [i_8 + 1] [(unsigned short)9] [i_8 + 2])) ? (-2107379340) : (((/* implicit */int) arr_26 [i_8 - 1] [i_8 - 2] [i_8 - 2] [i_8 + 2]))));
                        /* LoopSeq 2 */
                        for (short i_10 = 0; i_10 < 20; i_10 += 3) 
                        {
                            var_24 = ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-58)) || (((/* implicit */_Bool) arr_24 [i_0] [i_7] [i_0] [i_8 + 3]))));
                            arr_33 [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) var_9))));
                        }
                        for (unsigned long long int i_11 = 0; i_11 < 20; i_11 += 4) 
                        {
                            var_25 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 2557195942787006216LL))));
                            var_26 = ((/* implicit */unsigned char) (short)1402);
                            arr_37 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)53088)) - (((/* implicit */int) (_Bool)1)))))));
                        }
                        var_27 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_36 [i_9] [11ULL] [i_8] [i_7] [8U])) ? (-1769814667) : (((/* implicit */int) arr_9 [i_0] [i_7] [i_7] [i_9] [i_9] [i_9]))))));
                    }
                } 
            } 
        }
        var_28 = ((/* implicit */unsigned long long int) max((var_28), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))) : (883963024U)))) ? (1917125141) : (((/* implicit */int) arr_0 [(unsigned char)10] [i_0])))))));
    }
    for (unsigned long long int i_12 = 0; i_12 < 21; i_12 += 3) 
    {
        /* LoopNest 2 */
        for (long long int i_13 = 0; i_13 < 21; i_13 += 2) 
        {
            for (short i_14 = 0; i_14 < 21; i_14 += 2) 
            {
                {
                    arr_48 [i_12] = ((/* implicit */int) min((((((((/* implicit */_Bool) arr_47 [i_12] [i_13])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)249))) : (var_2))) - (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (short)-7252)))))), (((/* implicit */unsigned int) min((arr_44 [i_12] [i_13] [i_14]), (arr_44 [i_12] [i_13] [i_14]))))));
                    var_29 ^= ((/* implicit */unsigned short) ((max((arr_41 [i_14] [i_14] [i_14]), (arr_41 [i_12] [i_13] [i_14]))) < (((/* implicit */long long int) (~(((/* implicit */int) arr_43 [i_12] [i_12])))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (int i_15 = 0; i_15 < 21; i_15 += 1) 
                    {
                        arr_51 [i_12] [i_12] = ((/* implicit */unsigned int) ((signed char) ((4294967295U) >> (((var_8) + (551733883))))));
                        var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_41 [i_13] [i_14] [(unsigned char)9])) ? (((long long int) (unsigned short)10196)) : (((/* implicit */long long int) ((/* implicit */int) arr_45 [i_15] [i_14] [(unsigned char)5] [(unsigned char)5])))));
                    }
                    /* vectorizable */
                    for (short i_16 = 0; i_16 < 21; i_16 += 1) 
                    {
                        var_31 = ((/* implicit */int) arr_39 [i_14]);
                        var_32 = ((/* implicit */unsigned short) (-(-2657959318780326946LL)));
                        arr_55 [(short)0] [i_13] [i_13] = ((/* implicit */_Bool) ((unsigned int) arr_50 [i_12] [i_12] [i_14] [i_16]));
                        var_33 &= ((((/* implicit */_Bool) arr_53 [i_12] [i_13] [i_16])) || (((/* implicit */_Bool) (signed char)0)));
                    }
                    /* LoopSeq 1 */
                    for (signed char i_17 = 2; i_17 < 20; i_17 += 3) 
                    {
                        var_34 = ((/* implicit */unsigned short) (!(((((/* implicit */_Bool) arr_49 [i_12] [i_12] [i_12] [i_12] [i_12])) || (((((/* implicit */_Bool) arr_56 [i_17] [5U] [i_14] [i_14] [i_13] [15U])) && (((/* implicit */_Bool) arr_53 [i_13] [3] [i_17]))))))));
                        var_35 = ((/* implicit */signed char) ((((((((/* implicit */_Bool) arr_47 [i_14] [i_12])) ? (arr_49 [(unsigned char)19] [i_13] [i_14] [(unsigned short)14] [(short)14]) : (((/* implicit */int) arr_42 [i_12] [i_13])))) < (((((/* implicit */_Bool) (unsigned short)44845)) ? (((/* implicit */int) arr_42 [i_12] [i_12])) : (((/* implicit */int) (unsigned short)14633)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((arr_41 [i_12] [i_13] [i_17]) < (((/* implicit */long long int) ((/* implicit */int) var_0))))), ((!(((/* implicit */_Bool) arr_49 [i_12] [i_13] [i_14] [i_17 - 2] [i_12])))))))) : (min((arr_40 [11] [i_13] [i_13]), (((/* implicit */unsigned int) (short)(-32767 - 1)))))));
                        var_36 &= ((/* implicit */unsigned int) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_43 [i_14] [i_13]))))), ((((-(var_8))) - (((((/* implicit */_Bool) 173136746U)) ? (((/* implicit */int) (unsigned short)65533)) : (((/* implicit */int) (unsigned char)224))))))));
                    }
                    var_37 = ((((/* implicit */int) ((arr_49 [i_12] [i_13] [i_13] [i_14] [i_14]) >= (((((/* implicit */_Bool) arr_50 [i_14] [i_13] [i_12] [i_12])) ? (((/* implicit */int) (short)-3087)) : (arr_38 [i_14])))))) >> (((arr_50 [i_12] [i_13] [i_13] [i_12]) - (1678420953U))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (short i_18 = 0; i_18 < 21; i_18 += 3) 
        {
            for (unsigned long long int i_19 = 1; i_19 < 20; i_19 += 3) 
            {
                {
                    var_38 = ((/* implicit */short) (!(((/* implicit */_Bool) min(((-(((/* implicit */int) arr_39 [i_12])))), (((/* implicit */int) ((((/* implicit */int) (unsigned short)96)) > (arr_49 [i_12] [i_12] [i_18] [i_18] [i_12])))))))));
                    arr_64 [i_12] [i_18] [i_18] [3ULL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) arr_47 [i_12] [i_12])))) ? (((/* implicit */int) min((arr_56 [i_12] [i_12] [i_19] [i_19 + 1] [i_19 + 1] [i_19 + 1]), (arr_47 [i_12] [i_12])))) : (((((/* implicit */_Bool) arr_60 [i_12] [i_18])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_53 [i_12] [i_18] [i_18]))))))) || ((!(((/* implicit */_Bool) (unsigned short)0))))));
                }
            } 
        } 
    }
    var_39 ^= (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)65532)) - (803263385))))))));
    var_40 = ((/* implicit */unsigned short) min((var_40), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? (((0ULL) >> (((/* implicit */int) min((((/* implicit */unsigned short) var_4)), (var_0)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((((/* implicit */int) (signed char)0)) < (((/* implicit */int) (unsigned char)31)))))))))))));
}
