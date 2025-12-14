/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242065
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242065 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242065
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
    var_16 = var_12;
    var_17 = ((/* implicit */unsigned short) var_13);
    var_18 = ((/* implicit */unsigned char) (unsigned short)25282);
    var_19 = ((/* implicit */long long int) (~(((/* implicit */int) var_10))));
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        arr_2 [i_0] &= ((/* implicit */long long int) (((-(((/* implicit */int) arr_0 [i_0])))) >> (((((/* implicit */int) min((arr_1 [i_0]), (arr_1 [i_0])))) - (58217)))));
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            var_20 = ((/* implicit */int) (!(((/* implicit */_Bool) var_11))));
            var_21 = arr_4 [i_0] [i_0];
            arr_5 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) max(((unsigned short)511), (((/* implicit */unsigned short) var_8))))) >> (((/* implicit */int) ((arr_4 [i_0] [i_0]) <= (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1]))))))))) ? (((/* implicit */int) min(((short)9843), (((/* implicit */short) (_Bool)1))))) : (((/* implicit */int) (unsigned char)85))));
        }
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
        {
            var_22 = ((/* implicit */long long int) (((-(((((/* implicit */int) (signed char)124)) << (((((/* implicit */int) (signed char)58)) - (34))))))) < (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_2 - 1] [i_2 - 1])))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (long long int i_3 = 3; i_3 < 23; i_3 += 3) 
            {
                var_23 = ((/* implicit */long long int) ((arr_8 [i_3] [i_3] [i_3 - 3]) < (((/* implicit */long long int) ((/* implicit */int) var_6)))));
                /* LoopSeq 1 */
                for (unsigned char i_4 = 0; i_4 < 24; i_4 += 3) 
                {
                    var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)25308)) ? (arr_6 [i_3 - 2]) : (((/* implicit */long long int) ((/* implicit */int) var_10)))));
                    /* LoopSeq 2 */
                    for (long long int i_5 = 0; i_5 < 24; i_5 += 4) 
                    {
                        arr_18 [i_0] [i_0] [i_0] [i_4] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_12 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1])) ? (((((arr_8 [(signed char)8] [(signed char)8] [(unsigned short)15]) + (9223372036854775807LL))) << (((/* implicit */int) arr_9 [i_0])))) : (var_0)));
                        arr_19 [i_4] [(signed char)15] = ((/* implicit */signed char) ((var_11) == (((/* implicit */long long int) ((((/* implicit */int) (signed char)-124)) ^ (((/* implicit */int) (unsigned short)504)))))));
                        arr_20 [i_0] [i_0] [i_3] [i_4] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)25303))))) : ((-(((/* implicit */int) (signed char)13))))));
                        arr_21 [i_0] [i_4] [i_3] [i_3] [6LL] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_9 [i_2 - 1])) << (((((arr_10 [(unsigned char)13]) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_2]))))) - (18446744073709530504ULL)))));
                    }
                    for (unsigned short i_6 = 0; i_6 < 24; i_6 += 4) 
                    {
                        arr_25 [(short)4] [i_0] [(short)4] [i_3] [i_4] [i_6] = ((/* implicit */long long int) ((((/* implicit */long long int) (-(((/* implicit */int) var_4))))) == (5360369747396252043LL)));
                        var_25 += ((/* implicit */short) (_Bool)1);
                        arr_26 [i_6] [i_6] [i_6] [i_4] [i_6] = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */int) (unsigned char)255)) ^ (((/* implicit */int) (signed char)-13)))));
                        arr_27 [i_4] [i_4] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_13 [i_2 - 1] [(signed char)4] [i_4] [i_4])) : (((/* implicit */int) arr_14 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_3] [i_3] [i_3 + 1]))));
                    }
                    arr_28 [i_0] [i_2] [i_0] [i_4] = ((/* implicit */unsigned char) arr_12 [(unsigned char)23] [i_2] [i_2] [(unsigned char)0]);
                }
            }
            arr_29 [i_2] = ((/* implicit */short) var_9);
        }
        /* LoopNest 2 */
        for (long long int i_7 = 1; i_7 < 22; i_7 += 4) 
        {
            for (unsigned short i_8 = 0; i_8 < 24; i_8 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_9 = 1; i_9 < 23; i_9 += 3) 
                    {
                        for (int i_10 = 2; i_10 < 23; i_10 += 1) 
                        {
                            {
                                arr_39 [i_0] [16] &= (signed char)24;
                                arr_40 [i_0] [i_0] [i_0] [i_7] [i_0] [i_0] [i_10] = ((/* implicit */unsigned char) (-(((/* implicit */int) (signed char)-43))));
                                var_26 = ((min((max((((/* implicit */long long int) var_8)), (var_11))), (((/* implicit */long long int) arr_11 [i_7 - 1] [i_7 + 2] [i_7 + 1] [i_7] [i_7 + 2])))) + (((/* implicit */long long int) ((((/* implicit */int) (signed char)119)) % ((-(((/* implicit */int) var_8))))))));
                            }
                        } 
                    } 
                    arr_41 [i_8] [i_8] [i_8] [i_7] = ((/* implicit */unsigned char) max((((((/* implicit */int) arr_13 [i_7 + 2] [i_7] [i_7] [i_7])) | (((/* implicit */int) arr_13 [i_7 + 2] [i_7] [i_7] [i_7])))), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-1))) == (((((/* implicit */_Bool) (short)-32765)) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (arr_12 [(unsigned char)3] [i_7] [i_7] [i_0]))))))));
                }
            } 
        } 
        var_27 &= ((/* implicit */signed char) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) min((var_8), ((unsigned char)199))))) ^ ((-(arr_15 [i_0] [i_0] [i_0] [i_0])))))));
    }
    for (long long int i_11 = 0; i_11 < 10; i_11 += 3) /* same iter space */
    {
        arr_46 [i_11] = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-101)) + (2147483647))) << (((min((((/* implicit */unsigned long long int) 32640U)), (arr_15 [i_11] [2U] [i_11] [i_11]))) - (32640ULL)))))) ? (((((/* implicit */_Bool) arr_4 [i_11] [i_11])) ? (((/* implicit */int) arr_31 [i_11])) : (((/* implicit */int) max((var_10), (((/* implicit */short) (unsigned char)152))))))) : (((/* implicit */int) (unsigned char)8))));
        /* LoopNest 3 */
        for (signed char i_12 = 0; i_12 < 10; i_12 += 1) 
        {
            for (signed char i_13 = 0; i_13 < 10; i_13 += 3) 
            {
                for (unsigned char i_14 = 0; i_14 < 10; i_14 += 3) 
                {
                    {
                        arr_53 [(unsigned char)7] [(unsigned char)7] [i_13] [i_11] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_50 [i_12] [i_13])) : (((/* implicit */int) arr_50 [i_11] [i_14]))))) ? (((/* implicit */int) ((unsigned char) (~(((/* implicit */int) var_5)))))) : (((/* implicit */int) ((((/* implicit */int) arr_7 [i_13] [i_13])) == (-894687298))))));
                        /* LoopSeq 1 */
                        for (signed char i_15 = 1; i_15 < 8; i_15 += 2) 
                        {
                            var_28 = ((/* implicit */long long int) max((var_28), (((/* implicit */long long int) (+(min((((/* implicit */int) var_6)), (-1334246770))))))));
                            arr_57 [i_15] [i_11] [i_13] [i_11] [i_11] [i_11] [i_11] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((var_15) + (9223372036854775807LL))) >> (((var_11) + (4709703941361992743LL)))))) ? (((/* implicit */int) arr_54 [4LL] [(short)8] [i_15] [i_15] [i_15 + 2] [i_11])) : (((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_15] [i_14])) && (((/* implicit */_Bool) var_10)))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned char)137)), (5360369747396252057LL)))) || (((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)136)))))))) : (((((/* implicit */_Bool) arr_16 [i_15 + 2] [i_15 + 1] [(unsigned char)10] [i_15 + 2] [i_11] [i_15 + 2])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_16 [i_15 + 2] [i_15 + 1] [(unsigned short)12] [i_15 + 2] [i_11] [i_15 + 2]))))));
                        }
                    }
                } 
            } 
        } 
        var_29 += ((/* implicit */long long int) (+((-(((/* implicit */int) arr_31 [(unsigned char)0]))))));
        arr_58 [i_11] = ((/* implicit */int) ((_Bool) max((arr_47 [i_11]), (arr_47 [i_11]))));
        /* LoopNest 2 */
        for (long long int i_16 = 1; i_16 < 9; i_16 += 1) 
        {
            for (unsigned short i_17 = 0; i_17 < 10; i_17 += 4) 
            {
                {
                    var_30 += ((/* implicit */unsigned short) arr_31 [i_17]);
                    arr_64 [i_11] = ((/* implicit */long long int) (unsigned char)3);
                }
            } 
        } 
    }
    for (long long int i_18 = 0; i_18 < 10; i_18 += 3) /* same iter space */
    {
        var_31 += ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned char)251)), (-7388957938087768LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned char)197), ((unsigned char)58))))) : ((-(arr_15 [i_18] [i_18] [(unsigned char)0] [i_18])))));
        var_32 &= ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_13 [i_18] [i_18] [(short)14] [i_18])) ? (((/* implicit */int) (unsigned short)34194)) : (((/* implicit */int) arr_13 [i_18] [i_18] [(signed char)6] [(signed char)6]))))));
        var_33 = var_11;
    }
}
