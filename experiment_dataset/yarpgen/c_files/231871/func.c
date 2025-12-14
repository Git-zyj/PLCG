/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231871
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231871 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231871
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
    var_14 = ((((/* implicit */int) (_Bool)1)) | (-23));
    var_15 = ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) / (var_0));
    /* LoopSeq 4 */
    for (unsigned char i_0 = 2; i_0 < 8; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_16 = (+(((((/* implicit */_Bool) arr_2 [i_0 - 2] [i_0 + 1])) ? (var_7) : (var_8))));
            arr_4 [i_0] = 19LL;
        }
        var_17 = ((/* implicit */unsigned int) (+(((/* implicit */int) var_12))));
        arr_5 [i_0 + 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_12)), (arr_1 [i_0 + 1])))) ? (((((/* implicit */_Bool) var_2)) ? (var_4) : (((/* implicit */unsigned long long int) arr_1 [i_0 - 1])))) : (((var_4) & (((/* implicit */unsigned long long int) arr_1 [i_0 - 1]))))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 13; i_2 += 3) 
    {
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 13; i_3 += 3) 
        {
            for (short i_4 = 0; i_4 < 13; i_4 += 4) 
            {
                for (signed char i_5 = 0; i_5 < 13; i_5 += 4) 
                {
                    {
                        var_18 *= ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (33LL)))));
                        var_19 = ((/* implicit */unsigned int) var_11);
                        var_20 = ((/* implicit */int) ((((/* implicit */_Bool) var_13)) ? (2741493928U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_2] [i_2] [i_5])))));
                    }
                } 
            } 
        } 
        arr_17 [i_2] [i_2] = ((/* implicit */int) var_5);
    }
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
    {
        var_21 = ((/* implicit */signed char) ((var_9) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)251)) ? (((/* implicit */int) arr_19 [i_6])) : (((/* implicit */int) max(((unsigned short)2261), ((unsigned short)65520)))))))));
        /* LoopNest 3 */
        for (unsigned short i_7 = 0; i_7 < 23; i_7 += 4) 
        {
            for (unsigned short i_8 = 1; i_8 < 21; i_8 += 3) 
            {
                for (unsigned int i_9 = 1; i_9 < 19; i_9 += 3) 
                {
                    {
                        arr_26 [(unsigned char)7] [(unsigned char)7] [(_Bool)1] [i_8] = ((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) arr_18 [i_7])) ? (((/* implicit */int) arr_20 [i_8 - 1] [i_8 + 2])) : (((/* implicit */int) arr_24 [(short)22] [(short)22] [i_8 + 2] [i_8] [i_8 + 2] [i_9])))));
                        var_22 = ((/* implicit */signed char) ((17LL) & (((/* implicit */long long int) (-(min((1U), (((/* implicit */unsigned int) arr_25 [i_8] [i_8 - 1] [i_7] [i_6] [i_8])))))))));
                        /* LoopSeq 4 */
                        for (unsigned int i_10 = 0; i_10 < 23; i_10 += 2) 
                        {
                            var_23 = ((/* implicit */long long int) (((~(((/* implicit */int) arr_19 [i_6])))) >= (arr_25 [i_8] [i_8] [i_9] [(unsigned char)5] [i_8])));
                            var_24 -= ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_3))))) ? (((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) var_1)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) arr_29 [i_6]))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) != (3830322442U))))))) : (min((((/* implicit */long long int) min((((/* implicit */unsigned int) (signed char)114)), (var_0)))), (min((((/* implicit */long long int) var_5)), (-41LL)))))));
                            var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) (((~(((/* implicit */int) (signed char)-2)))) | (((/* implicit */int) var_5)))))));
                            var_26 ^= ((/* implicit */short) min((((/* implicit */long long int) arr_20 [i_7] [i_10])), ((((((~(909020420450432414LL))) + (9223372036854775807LL))) << (((var_4) - (6328627593879832226ULL)))))));
                            var_27 = ((/* implicit */short) var_3);
                        }
                        /* vectorizable */
                        for (unsigned char i_11 = 0; i_11 < 23; i_11 += 1) /* same iter space */
                        {
                            var_28 -= ((/* implicit */unsigned long long int) (-(arr_31 [i_9 + 3])));
                            arr_32 [i_6] [i_8] [i_8 + 1] [i_9 + 3] [i_9 + 3] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((var_0) | (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))));
                            var_29 += ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)17322))));
                        }
                        for (unsigned char i_12 = 0; i_12 < 23; i_12 += 1) /* same iter space */
                        {
                            arr_36 [i_6] [14LL] [i_8] [i_6] [i_12] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)8)) > (((/* implicit */int) (unsigned short)63298))));
                            arr_37 [i_8] = ((/* implicit */signed char) (+(max((((/* implicit */long long int) (-(arr_31 [i_6])))), (max((var_8), (-3944636028226152228LL)))))));
                            var_30 = ((/* implicit */unsigned char) var_5);
                            var_31 = ((/* implicit */unsigned short) min((var_31), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) arr_25 [i_7] [i_8] [i_8 + 2] [22LL] [i_7])) : (var_0)))))))));
                            var_32 -= ((/* implicit */short) var_0);
                        }
                        /* vectorizable */
                        for (unsigned char i_13 = 2; i_13 < 22; i_13 += 3) 
                        {
                            var_33 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) -26LL))));
                            var_34 = ((/* implicit */long long int) var_6);
                        }
                    }
                } 
            } 
        } 
        var_35 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((var_10), (var_10)))) ? (((((/* implicit */_Bool) arr_27 [i_6] [i_6] [(unsigned char)0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (arr_27 [i_6] [i_6] [6ULL]))) : (((/* implicit */unsigned long long int) ((var_7) << (((/* implicit */int) (unsigned char)0)))))));
    }
    /* vectorizable */
    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) /* same iter space */
    {
        var_36 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)63298)) ? ((+(var_7))) : (((/* implicit */long long int) (+(arr_25 [(signed char)8] [(signed char)8] [i_14] [i_14] [i_14]))))));
        /* LoopSeq 4 */
        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) /* same iter space */
        {
            arr_46 [i_14] [(unsigned char)14] [(unsigned char)0] &= ((/* implicit */short) (~(((/* implicit */int) var_3))));
            var_37 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_29 [i_14])) ? (((/* implicit */int) (short)26658)) : (((/* implicit */int) arr_20 [i_14] [i_14]))));
            var_38 += ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) - (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) * (17179869183LL)))));
            arr_47 [i_15] [i_14] [i_15] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_19 [i_14])) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_24 [i_14] [i_14] [i_14] [i_15] [(unsigned short)12] [i_14]))))) : ((+(var_13)))));
        }
        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) /* same iter space */
        {
            arr_52 [i_16] = ((/* implicit */signed char) var_2);
            /* LoopNest 2 */
            for (long long int i_17 = 0; i_17 < 23; i_17 += 3) 
            {
                for (unsigned int i_18 = 1; i_18 < 22; i_18 += 4) 
                {
                    {
                        var_39 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) (short)1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (4149677064U)))));
                        var_40 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1816731401295916411LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (var_13)))) : (var_9)));
                    }
                } 
            } 
        }
        for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) /* same iter space */
        {
            var_41 -= ((/* implicit */long long int) ((unsigned long long int) (signed char)(-127 - 1)));
            var_42 = (-(((/* implicit */int) arr_20 [i_14] [i_14])));
        }
        for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) /* same iter space */
        {
            var_43 |= ((/* implicit */unsigned long long int) var_8);
            var_44 ^= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_2))) - (var_13)));
            arr_62 [i_14] [i_20] = ((/* implicit */int) var_7);
            var_45 = ((/* implicit */signed char) max((var_45), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_0)))))));
        }
    }
}
