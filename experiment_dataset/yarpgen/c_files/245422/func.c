/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245422
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245422 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245422
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
    var_19 = ((/* implicit */_Bool) (-((-(664861208)))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (long long int i_4 = 0; i_4 < 19; i_4 += 4) 
                        {
                            arr_15 [i_1] = ((/* implicit */unsigned char) ((int) var_7));
                            var_20 = ((/* implicit */unsigned int) ((long long int) var_13));
                            var_21 *= ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [(signed char)16] [(signed char)16] [(signed char)16] [i_3] [i_4] [i_0]))) : (arr_11 [i_1] [i_1] [i_2] [i_3])));
                            var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) ((arr_9 [i_2] [i_1] [i_2] [(_Bool)1] [i_4] [i_0]) ? (((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_2] [i_2] [i_4])) : (((/* implicit */int) var_17)))))));
                        }
                        var_23 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0] [i_0]))));
                        var_24 = ((/* implicit */long long int) ((short) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)89)))));
                        arr_16 [i_1] = ((/* implicit */signed char) -5643433372348266030LL);
                    }
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                    {
                        arr_19 [i_1] = arr_0 [i_1];
                        var_25 = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) arr_10 [i_5] [i_1] [i_0])) ? (((/* implicit */int) arr_9 [i_0] [i_1] [i_1] [i_2] [i_1] [i_5])) : (((/* implicit */int) arr_1 [i_0] [i_0])))));
                    }
                    var_26 = ((/* implicit */short) (!(((/* implicit */_Bool) (~(arr_11 [i_2] [i_1] [i_2] [(short)12]))))));
                    var_27 *= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_2 [i_2])) ? (arr_2 [i_0]) : (arr_4 [i_0]))) != (((arr_4 [i_0]) << (((((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_2])) - (34)))))));
                    var_28 = ((/* implicit */unsigned int) 664861208);
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_6 = 1; i_6 < 18; i_6 += 1) 
        {
            for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
            {
                {
                    arr_25 [i_0] [i_6 + 1] [i_6] = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */int) arr_5 [i_0] [i_6] [15ULL])) > (((/* implicit */int) (signed char)3)))));
                    var_29 = ((/* implicit */long long int) ((((/* implicit */int) max((((/* implicit */signed char) ((((/* implicit */int) arr_5 [(_Bool)1] [i_6] [i_7])) == (((/* implicit */int) arr_7 [13LL] [i_0] [i_6] [i_0]))))), (min((arr_6 [i_0] [i_7] [i_7] [i_7]), (((/* implicit */signed char) var_3))))))) <= (((/* implicit */int) ((_Bool) 1783398245880141789LL)))));
                }
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned short i_8 = 0; i_8 < 19; i_8 += 2) 
        {
            var_30 = ((/* implicit */signed char) ((unsigned int) ((arr_2 [i_0]) != (arr_2 [i_8]))));
            var_31 = ((/* implicit */signed char) arr_21 [15LL] [i_8]);
        }
        for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
        {
            var_32 = ((/* implicit */_Bool) min((var_32), (max((((arr_12 [i_0] [i_9 + 1] [i_0] [i_0] [i_9 + 1] [i_9] [i_9 + 1]) <= (arr_12 [i_0] [i_9 + 1] [i_9] [i_0] [i_0] [i_9] [0LL]))), (((((/* implicit */_Bool) arr_12 [i_0] [i_9 + 1] [i_0] [(short)16] [i_0] [0] [(_Bool)1])) && (((/* implicit */_Bool) arr_12 [i_0] [i_9 + 1] [i_9 + 1] [i_9] [i_9] [i_9 + 1] [i_9]))))))));
            /* LoopNest 2 */
            for (int i_10 = 1; i_10 < 17; i_10 += 3) 
            {
                for (signed char i_11 = 1; i_11 < 17; i_11 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        for (short i_12 = 0; i_12 < 19; i_12 += 2) 
                        {
                            var_33 = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_31 [i_9 + 1] [i_10 - 1] [i_11 + 2]))) <= (-181158169883165129LL))));
                            arr_37 [i_9] = ((/* implicit */_Bool) ((int) var_8));
                            var_34 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-89)) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_12 [i_9] [i_9] [i_10] [i_11] [i_12] [i_10] [i_10])))) : (arr_18 [i_0] [i_9] [i_0] [18LL]))) : (((/* implicit */long long int) ((/* implicit */int) arr_34 [i_12] [i_9] [i_9] [i_0])))));
                        }
                        var_35 = ((/* implicit */unsigned int) max((var_35), (var_16)));
                    }
                } 
            } 
            arr_38 [i_9] [i_0] [i_0] = ((/* implicit */long long int) arr_4 [i_9]);
            /* LoopNest 2 */
            for (int i_13 = 0; i_13 < 19; i_13 += 3) 
            {
                for (long long int i_14 = 2; i_14 < 17; i_14 += 3) 
                {
                    {
                        var_36 = ((/* implicit */unsigned char) arr_30 [15LL] [i_9 + 1] [i_14]);
                        arr_44 [i_9] = ((/* implicit */_Bool) ((signed char) arr_31 [i_0] [17U] [i_13]));
                    }
                } 
            } 
        }
        /* LoopNest 2 */
        for (unsigned int i_15 = 0; i_15 < 19; i_15 += 3) 
        {
            for (long long int i_16 = 0; i_16 < 19; i_16 += 4) 
            {
                {
                    arr_49 [i_15] [i_15] [i_15] [(signed char)2] = ((/* implicit */_Bool) (-(arr_12 [i_15] [i_0] [i_0] [i_15] [i_0] [2LL] [i_16])));
                    var_37 *= ((/* implicit */unsigned char) arr_33 [i_0] [i_15] [i_0] [i_16] [i_0]);
                    var_38 *= ((/* implicit */signed char) (+(((/* implicit */int) (signed char)-127))));
                }
            } 
        } 
    }
    for (signed char i_17 = 0; i_17 < 21; i_17 += 3) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_18 = 4; i_18 < 19; i_18 += 4) 
        {
            var_39 = ((/* implicit */unsigned long long int) ((signed char) arr_55 [i_17] [i_18 + 2] [i_18 + 2]));
            arr_56 [i_17] = ((/* implicit */short) -2147483630);
        }
        arr_57 [i_17] [i_17] = ((/* implicit */short) ((arr_51 [i_17]) < (((((/* implicit */_Bool) arr_51 [i_17])) ? (1783398245880141789LL) : (arr_51 [i_17])))));
        /* LoopSeq 1 */
        for (long long int i_19 = 3; i_19 < 20; i_19 += 2) 
        {
            arr_60 [i_17] [i_17] = (~(arr_55 [i_17] [i_17] [1U]));
            var_40 *= ((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) 5643433372348266029LL)) ? (((/* implicit */int) (signed char)3)) : (((/* implicit */int) (signed char)88)))));
        }
        arr_61 [i_17] [i_17] = ((/* implicit */signed char) arr_59 [i_17] [i_17]);
    }
    for (signed char i_20 = 0; i_20 < 13; i_20 += 3) 
    {
        arr_64 [i_20] [(short)0] = ((/* implicit */signed char) -664861204);
        var_41 = ((/* implicit */int) min((var_41), (((/* implicit */int) (signed char)-89))));
    }
    var_42 = ((/* implicit */long long int) ((_Bool) (!(((_Bool) (signed char)127)))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_21 = 0; i_21 < 15; i_21 += 3) 
    {
        var_43 = -1783398245880141790LL;
        var_44 = ((/* implicit */long long int) ((signed char) arr_6 [i_21] [i_21] [i_21] [i_21]));
        arr_68 [i_21] = ((/* implicit */unsigned long long int) ((long long int) arr_54 [12LL] [i_21] [12LL]));
        /* LoopSeq 1 */
        for (long long int i_22 = 1; i_22 < 13; i_22 += 2) 
        {
            var_45 = ((/* implicit */short) arr_5 [i_21] [16U] [i_22]);
            var_46 = ((/* implicit */unsigned int) -5643433372348266038LL);
        }
    }
    /* vectorizable */
    for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
    {
        var_47 = arr_58 [i_23];
        var_48 = ((/* implicit */unsigned char) ((short) arr_58 [i_23]));
        var_49 *= ((/* implicit */_Bool) arr_59 [i_23] [i_23]);
        var_50 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_59 [i_23] [i_23])) ? (((/* implicit */int) var_11)) : (26)));
        var_51 = ((/* implicit */long long int) arr_50 [(unsigned short)10]);
    }
}
