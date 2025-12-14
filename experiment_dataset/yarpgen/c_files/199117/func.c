/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199117
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199117 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199117
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
    var_17 = ((/* implicit */unsigned short) (~(((((/* implicit */long long int) ((/* implicit */int) (signed char)32))) % (var_10)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                arr_4 [i_0] = -6259910259668259618LL;
                arr_5 [i_0] [i_1] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_2 [i_0] [i_1] [i_0]))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 13; i_2 += 4) 
                {
                    for (signed char i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        {
                            arr_12 [i_0] [i_0] [(short)2] [i_3] = ((/* implicit */int) var_15);
                            arr_13 [(_Bool)1] [1LL] [i_0] [(_Bool)1] = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) var_9)), (((unsigned char) 6259910259668259628LL))))) ? (arr_11 [i_0] [i_0] [8]) : (max((arr_11 [i_0 - 1] [i_0] [i_0 + 1]), (((/* implicit */unsigned long long int) ((long long int) var_16)))))));
                            arr_14 [i_0] [i_0] [(unsigned short)10] [4U] = ((/* implicit */unsigned char) 6259910259668259615LL);
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 2 */
    for (int i_4 = 0; i_4 < 20; i_4 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned short i_5 = 0; i_5 < 20; i_5 += 3) 
        {
            for (long long int i_6 = 0; i_6 < 20; i_6 += 4) 
            {
                for (unsigned char i_7 = 0; i_7 < 20; i_7 += 3) 
                {
                    {
                        var_18 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((min((arr_22 [i_4] [i_5] [i_6] [i_7] [i_7] [i_7]), (-1LL))), (((arr_15 [11LL]) ? (arr_22 [12LL] [(short)3] [i_6] [1] [i_7] [(short)4]) : (((/* implicit */long long int) 22))))))) ? (((/* implicit */unsigned long long int) arr_21 [i_7] [10] [i_5])) : (((unsigned long long int) arr_19 [i_7] [i_5]))));
                        var_19 ^= ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((unsigned char) ((long long int) -6259910259668259629LL))))));
                    }
                } 
            } 
        } 
        var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_21 [(signed char)13] [i_4] [i_4])) ? (((((/* implicit */_Bool) min((arr_18 [i_4]), (((/* implicit */unsigned short) var_14))))) ? (arr_17 [6ULL]) : (((/* implicit */unsigned long long int) max((arr_22 [18ULL] [i_4] [i_4] [i_4] [i_4] [i_4]), (((/* implicit */long long int) arr_16 [i_4]))))))) : (((/* implicit */unsigned long long int) arr_22 [i_4] [i_4] [(_Bool)1] [i_4] [i_4] [i_4]))));
        /* LoopNest 3 */
        for (short i_8 = 0; i_8 < 20; i_8 += 3) 
        {
            for (unsigned char i_9 = 0; i_9 < 20; i_9 += 2) 
            {
                for (unsigned int i_10 = 0; i_10 < 20; i_10 += 2) 
                {
                    {
                        var_21 &= ((/* implicit */_Bool) min((((/* implicit */unsigned short) var_16)), (min((((/* implicit */unsigned short) arr_24 [i_4] [i_4] [i_4] [19LL] [i_4])), ((unsigned short)20349)))));
                        arr_34 [i_4] [15U] [4ULL] [i_10] = ((/* implicit */int) ((long long int) ((((/* implicit */_Bool) var_15)) ? ((-(arr_27 [(unsigned char)19] [i_9] [i_10]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 4537354259078927598ULL)) ? (853025758U) : (853025775U)))))));
                        arr_35 [i_4] [0LL] [i_9] [i_9] = ((/* implicit */unsigned long long int) (signed char)120);
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        /* vectorizable */
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_30 [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) arr_24 [(unsigned char)5] [i_11] [(signed char)7] [i_4] [i_4]))) : (var_1)))) ? (((((/* implicit */_Bool) arr_25 [i_4] [11ULL] [i_11])) ? (6259910259668259618LL) : (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_11] [7ULL]))))) : (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_4])))));
            var_23 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_19 [i_11] [(_Bool)1]))));
        }
        /* vectorizable */
        for (unsigned long long int i_12 = 1; i_12 < 18; i_12 += 3) 
        {
            /* LoopSeq 2 */
            for (signed char i_13 = 0; i_13 < 20; i_13 += 1) /* same iter space */
            {
                var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) ((unsigned long long int) (!(((/* implicit */_Bool) -22))))))));
                arr_45 [17U] [(unsigned char)14] [i_12] = ((/* implicit */int) (!(arr_24 [i_13] [(short)17] [i_12] [(short)11] [i_4])));
            }
            for (signed char i_14 = 0; i_14 < 20; i_14 += 1) /* same iter space */
            {
                var_25 = ((/* implicit */unsigned long long int) arr_41 [i_12] [i_12] [i_14]);
                arr_50 [8U] [(short)14] [i_14] [i_4] &= ((unsigned short) arr_23 [i_4] [i_12] [i_4] [i_12] [i_4] [i_12 + 2]);
            }
            arr_51 [i_12] [(signed char)7] [i_12] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_32 [2U] [i_12] [i_12])))) ? (arr_20 [(unsigned short)2] [18U] [i_12] [13ULL]) : (((/* implicit */long long int) ((/* implicit */int) arr_36 [i_12] [i_12 + 2] [10U])))));
            var_26 = ((/* implicit */unsigned long long int) arr_38 [(short)13] [18U]);
        }
    }
    /* vectorizable */
    for (unsigned char i_15 = 2; i_15 < 18; i_15 += 2) 
    {
        arr_56 [(short)16] = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)62865)) <= (((/* implicit */int) (unsigned char)175))));
        /* LoopSeq 3 */
        for (unsigned int i_16 = 3; i_16 < 17; i_16 += 1) /* same iter space */
        {
            arr_59 [i_15] [(short)2] [i_16] = ((/* implicit */long long int) (-(((/* implicit */int) arr_40 [i_16]))));
            arr_60 [i_15] [i_16] [i_16] = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)163)) ^ (((/* implicit */int) var_3))));
            arr_61 [i_16] = ((/* implicit */unsigned long long int) arr_15 [i_16]);
        }
        for (unsigned int i_17 = 3; i_17 < 17; i_17 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (signed char i_18 = 0; i_18 < 19; i_18 += 3) 
            {
                for (long long int i_19 = 0; i_19 < 19; i_19 += 1) 
                {
                    {
                        var_27 += ((/* implicit */unsigned int) arr_57 [i_15 - 1] [i_15]);
                        var_28 = ((/* implicit */unsigned long long int) arr_22 [0LL] [i_19] [i_18] [i_18] [i_17] [i_15]);
                    }
                } 
            } 
            var_29 = ((/* implicit */int) ((long long int) arr_30 [i_15 + 1]));
            var_30 *= ((/* implicit */unsigned int) ((long long int) ((((/* implicit */_Bool) var_2)) ? (var_0) : (((/* implicit */unsigned long long int) 853025775U)))));
        }
        for (unsigned int i_20 = 3; i_20 < 17; i_20 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned char i_21 = 0; i_21 < 19; i_21 += 2) 
            {
                for (signed char i_22 = 2; i_22 < 17; i_22 += 3) 
                {
                    for (unsigned char i_23 = 1; i_23 < 17; i_23 += 2) 
                    {
                        {
                            var_31 = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned char) arr_31 [i_21]))) - (((int) (signed char)-123))));
                            arr_83 [i_22] [i_20] [i_21] [(short)4] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_77 [(unsigned short)8] [(signed char)13] [i_15 - 1] [i_23])) != (((/* implicit */int) arr_77 [i_15] [i_15] [i_15 - 2] [i_21]))));
                            var_32 = ((/* implicit */short) min((var_32), (((/* implicit */short) arr_65 [i_15] [i_21]))));
                        }
                    } 
                } 
            } 
            arr_84 [(unsigned short)3] [i_20] [i_20] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_62 [i_15 - 1] [i_20])) ? (arr_62 [i_15] [i_20 - 1]) : (arr_62 [i_15 - 1] [i_20 - 2])));
        }
        var_33 += ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(arr_32 [(unsigned short)6] [16ULL] [(unsigned char)18]))))));
    }
    var_34 = ((/* implicit */unsigned int) var_3);
}
