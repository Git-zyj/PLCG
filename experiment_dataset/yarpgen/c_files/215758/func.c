/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215758
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215758 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215758
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_0 [i_0]))))) ? ((((-(((/* implicit */int) var_0)))) | (((/* implicit */int) arr_4 [i_0] [i_0])))) : (((/* implicit */int) arr_5 [i_1] [i_1] [i_1]))));
                arr_6 [i_1] = ((/* implicit */_Bool) arr_4 [i_0] [i_1]);
                arr_7 [i_0] [i_1] = ((/* implicit */long long int) ((unsigned short) arr_5 [i_0] [i_1] [i_1]));
            }
        } 
    } 
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_2 = 1; i_2 < 22; i_2 += 3) /* same iter space */
    {
        var_18 = ((/* implicit */_Bool) min((var_18), ((!(((/* implicit */_Bool) arr_11 [i_2 + 2] [i_2]))))));
        /* LoopNest 2 */
        for (long long int i_3 = 0; i_3 < 25; i_3 += 1) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (arr_14 [i_2] [i_2] [i_4])))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) > (arr_15 [i_2 + 2] [i_3] [i_4])))) : (((/* implicit */int) arr_12 [i_3])))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_5 = 1; i_5 < 23; i_5 += 3) 
                    {
                        var_20 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_15 [i_3] [i_3] [i_3])) ? (arr_15 [i_4] [i_3] [i_2 + 2]) : (arr_15 [i_5 - 1] [i_3] [i_2 + 1])));
                        arr_20 [i_2] [i_4] [i_5] = ((/* implicit */short) (unsigned char)1);
                        var_21 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_4])) ? (((/* implicit */int) arr_19 [i_3] [(short)23])) : (((/* implicit */int) arr_9 [i_2]))))) ? ((+(9223372036854775807LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_4] [i_3]))));
                    }
                    var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) arr_9 [i_2]))));
                    arr_21 [i_2 - 1] [i_3] [i_4] = ((/* implicit */short) ((2171450579U) < (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_2 + 3] [i_2 + 3])))));
                }
            } 
        } 
    }
    for (long long int i_6 = 1; i_6 < 22; i_6 += 3) /* same iter space */
    {
        /* LoopNest 3 */
        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
        {
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                for (unsigned short i_9 = 0; i_9 < 25; i_9 += 2) 
                {
                    {
                        var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_9 [i_7])) == (((/* implicit */int) ((((((/* implicit */int) var_13)) >> (((var_1) - (17392409490820032165ULL))))) == (((/* implicit */int) ((_Bool) var_3))))))));
                        arr_32 [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [13ULL] [i_9])) ? ((-(arr_14 [i_7 - 1] [i_7 - 1] [i_7 - 1]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_23 [i_6 + 2] [i_6 + 2]))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (signed char i_10 = 0; i_10 < 25; i_10 += 1) 
        {
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                {
                    var_24 = ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) (+(arr_14 [i_6] [9U] [i_11])))))))));
                    arr_37 [i_10] [i_10] = ((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */int) (unsigned short)21474)) : (((/* implicit */int) (!(((((/* implicit */long long int) ((/* implicit */int) (short)0))) == (9223372036854775807LL))))))));
                }
            } 
        } 
        var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)7)) ? (((/* implicit */unsigned long long int) (+(arr_14 [i_6] [i_6] [i_6])))) : (((((/* implicit */_Bool) arr_25 [(unsigned short)1] [i_6 + 3] [i_6 + 3])) ? (min((((/* implicit */unsigned long long int) arr_22 [(short)16])), (var_1))) : (((/* implicit */unsigned long long int) ((long long int) -725522284690064121LL)))))));
    }
    for (signed char i_12 = 0; i_12 < 13; i_12 += 3) 
    {
        var_26 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) (unsigned char)7)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (_Bool)1))));
        arr_42 [i_12] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) (_Bool)1)), ((+(9223372036854775807LL)))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (short)-7))) : ((-9223372036854775807LL - 1LL))))) ? (((/* implicit */int) var_7)) : (((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (_Bool)1))))))) : (((arr_35 [i_12] [i_12] [(unsigned short)13] [i_12]) ? (arr_36 [i_12] [i_12]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_35 [i_12] [i_12] [i_12] [i_12])))))));
        var_27 = ((/* implicit */unsigned char) arr_40 [i_12]);
        arr_43 [i_12] [i_12] = ((/* implicit */_Bool) var_5);
    }
    var_28 = ((/* implicit */long long int) var_14);
    /* LoopNest 3 */
    for (_Bool i_13 = 0; i_13 < 0; i_13 += 1) 
    {
        for (signed char i_14 = 0; i_14 < 23; i_14 += 2) 
        {
            for (short i_15 = 4; i_15 < 19; i_15 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (long long int i_16 = 1; i_16 < 20; i_16 += 4) 
                    {
                        arr_53 [i_13] [i_13] [i_13] [i_13] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_10 [i_13 + 1] [i_15])) || (((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_50 [i_16])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_48 [i_14]))) : (arr_16 [i_14] [i_15 + 4] [i_16]))) * (((/* implicit */unsigned int) ((/* implicit */int) (!((_Bool)1))))))))));
                        arr_54 [i_16] [(_Bool)1] [(_Bool)1] [i_14] [i_13] = ((/* implicit */short) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_48 [(_Bool)1])) : (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) arr_13 [12U])), (var_9)))))))));
                        var_29 = ((/* implicit */_Bool) min((var_29), ((!(((/* implicit */_Bool) ((unsigned long long int) (~(((/* implicit */int) arr_48 [10LL]))))))))));
                        arr_55 [i_13] [15ULL] [15ULL] [(unsigned char)21] = ((/* implicit */unsigned long long int) var_4);
                        var_30 = ((/* implicit */unsigned int) arr_19 [i_13] [i_14]);
                    }
                    var_31 = ((/* implicit */long long int) max((var_31), (((/* implicit */long long int) (+(((/* implicit */int) arr_29 [(signed char)6])))))));
                    arr_56 [i_13] [i_13 + 1] [i_13] = ((/* implicit */_Bool) var_9);
                }
            } 
        } 
    } 
    var_32 = ((/* implicit */short) (!((!(((/* implicit */_Bool) var_4))))));
}
