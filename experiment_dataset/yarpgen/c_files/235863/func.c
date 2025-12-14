/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235863
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235863 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235863
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
    var_15 = ((/* implicit */_Bool) var_13);
    var_16 = ((/* implicit */unsigned char) (short)31);
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 1; i_0 < 21; i_0 += 3) 
    {
        var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) 1U)) : (max((14ULL), (((/* implicit */unsigned long long int) (signed char)62))))));
        /* LoopSeq 3 */
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */long long int) 1263550308U)), (1683403086474242855LL)))) ? (((/* implicit */long long int) ((/* implicit */int) (short)-13901))) : (var_12))))));
            var_19 = ((/* implicit */short) (+(((/* implicit */int) max((arr_5 [i_0 - 1] [i_0] [i_0]), (arr_5 [i_0 + 2] [i_0] [i_1]))))));
            arr_6 [i_0] [i_0 + 2] [i_0] = ((/* implicit */long long int) (signed char)-1);
            /* LoopNest 3 */
            for (signed char i_2 = 2; i_2 < 20; i_2 += 3) 
            {
                for (unsigned int i_3 = 0; i_3 < 23; i_3 += 2) 
                {
                    for (unsigned int i_4 = 0; i_4 < 23; i_4 += 3) 
                    {
                        {
                            arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_3] &= ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) arr_1 [i_0 + 2])) > (var_13))) ? (((/* implicit */int) ((short) (_Bool)1))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_3] [i_0 + 2] [i_3]))) < (arr_1 [i_0 + 2]))))));
                            var_20 |= ((/* implicit */signed char) max((((int) (signed char)1)), (((((/* implicit */int) arr_8 [i_0] [i_1] [(unsigned char)22] [i_3])) & (((/* implicit */int) arr_9 [i_0] [i_1] [(short)12] [i_3] [i_0 - 1]))))));
                            var_21 *= ((/* implicit */signed char) var_12);
                            var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_10 [i_0] [i_3] [i_0] [i_0 - 1])) ? (min((var_14), (((/* implicit */long long int) var_9)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)65515)) ? (arr_13 [i_0] [i_3] [i_3] [i_3] [i_4]) : (((/* implicit */int) var_11))))))) - (-228304160885988705LL))))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned short i_5 = 0; i_5 < 23; i_5 += 1) 
        {
            arr_19 [i_0] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) -1))));
            var_23 = ((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (unsigned char)0)) ? (arr_18 [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_5] [i_5]))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (-1) : (((/* implicit */int) arr_5 [i_0] [i_0] [15U])))))))) ? (((/* implicit */int) ((signed char) ((unsigned short) var_9)))) : (((((/* implicit */int) ((unsigned char) 1465328056U))) * (((/* implicit */int) ((signed char) 1)))))));
            arr_20 [i_0] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_13 [i_0 - 1] [i_0] [i_0] [i_0] [i_0 - 1]), (((/* implicit */int) var_6))))) || (((/* implicit */_Bool) ((((/* implicit */int) (short)29707)) * (((/* implicit */int) (unsigned short)24)))))));
            var_24 = ((/* implicit */unsigned int) ((unsigned short) var_10));
        }
        /* vectorizable */
        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
        {
            var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_12 [i_0 - 1])) ? (((/* implicit */int) (short)3840)) : (((/* implicit */int) arr_5 [i_0 + 2] [i_0] [i_0 - 1]))));
            arr_23 [i_0] [i_0] = ((/* implicit */_Bool) (-(arr_12 [i_0 + 2])));
        }
        arr_24 [i_0] [i_0] = ((/* implicit */_Bool) max((((/* implicit */long long int) ((short) ((short) (_Bool)1)))), (-1152791558966746541LL)));
    }
    for (unsigned int i_7 = 2; i_7 < 12; i_7 += 1) 
    {
        var_26 ^= ((/* implicit */long long int) arr_13 [i_7] [(unsigned char)16] [i_7] [(unsigned char)16] [i_7]);
        var_27 = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_18 [i_7 - 2])) ? (((((/* implicit */_Bool) (signed char)68)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65515))) : (var_5))) : (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned char)201), (((/* implicit */unsigned char) arr_5 [i_7] [(signed char)0] [(signed char)0])))))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) var_2)))))));
        /* LoopNest 2 */
        for (unsigned char i_8 = 0; i_8 < 15; i_8 += 1) 
        {
            for (int i_9 = 0; i_9 < 15; i_9 += 3) 
            {
                {
                    arr_31 [i_8] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_29 [i_7] [i_8]))));
                    arr_32 [i_8] [i_9] = (unsigned short)52;
                    var_28 = ((/* implicit */unsigned int) (~(max((((/* implicit */unsigned long long int) arr_15 [i_7 + 2] [4ULL] [i_8] [i_8] [i_9] [i_9])), (17014103293497843927ULL)))));
                }
            } 
        } 
        var_29 = ((/* implicit */unsigned long long int) max((((signed char) max((arr_27 [(unsigned char)0] [(unsigned char)0]), (((/* implicit */int) var_8))))), (((signed char) ((signed char) 4252663192975185987ULL)))));
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_10 = 0; i_10 < 19; i_10 += 4) 
    {
        var_30 = ((arr_35 [i_10]) - (((/* implicit */int) (signed char)-82)));
        var_31 = ((/* implicit */long long int) min((var_31), (((/* implicit */long long int) arr_35 [i_10]))));
    }
    /* vectorizable */
    for (signed char i_11 = 2; i_11 < 16; i_11 += 1) 
    {
        /* LoopNest 2 */
        for (short i_12 = 3; i_12 < 15; i_12 += 2) 
        {
            for (long long int i_13 = 1; i_13 < 16; i_13 += 4) 
            {
                {
                    var_32 &= ((/* implicit */unsigned int) ((359508581171368205ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)57)))));
                    var_33 = ((unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (750544731U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_45 [i_11] [i_11] [3LL])))));
                }
            } 
        } 
        var_34 = ((/* implicit */unsigned char) ((unsigned short) arr_37 [i_11]));
        var_35 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)32745)) ? (((/* implicit */int) arr_43 [i_11 + 1] [i_11] [i_11] [i_11 - 1])) : (((/* implicit */int) arr_43 [(unsigned char)5] [i_11] [(unsigned char)5] [12ULL]))));
        var_36 = ((/* implicit */signed char) ((0ULL) * (((/* implicit */unsigned long long int) arr_11 [i_11] [i_11] [i_11] [i_11 + 1] [i_11] [i_11]))));
        var_37 = ((/* implicit */signed char) max((var_37), (((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) var_9))) ? (var_9) : (((((/* implicit */_Bool) -1197158843)) ? (((/* implicit */int) arr_34 [i_11])) : (((/* implicit */int) (signed char)27)))))))));
    }
}
