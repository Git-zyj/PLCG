/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25256
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
    var_13 = ((/* implicit */signed char) var_12);
    /* LoopSeq 4 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 1; i_1 < 11; i_1 += 3) 
        {
            var_14 = ((/* implicit */signed char) (-((-(((/* implicit */int) ((short) (signed char)51)))))));
            arr_6 [i_0] [i_0] = ((/* implicit */_Bool) ((signed char) ((int) (!(((/* implicit */_Bool) arr_0 [i_0]))))));
            arr_7 [i_0] [i_0] = ((/* implicit */int) max((max((((long long int) arr_2 [i_0])), (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)77)) ? (arr_4 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [(signed char)9])))))))), (((/* implicit */long long int) ((signed char) (~(((/* implicit */int) arr_1 [i_1 - 1]))))))));
            var_15 = ((/* implicit */signed char) ((unsigned int) (((~(((/* implicit */int) var_5)))) & (((((/* implicit */int) arr_1 [i_1])) << (((var_7) + (2689918082950061120LL))))))));
        }
        var_16 = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (signed char)-12)) && (((/* implicit */_Bool) 4294967295U)))) ? (6514826034059174497LL) : (((/* implicit */long long int) ((/* implicit */int) max(((short)-792), (((/* implicit */short) (signed char)64))))))))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)6))) : (var_6)));
        /* LoopSeq 1 */
        for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
        {
            arr_10 [i_0] = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_1 [i_2 + 1])) : (((/* implicit */int) arr_1 [i_2 + 1])))));
            var_17 = ((/* implicit */short) ((max((((/* implicit */unsigned long long int) arr_9 [i_2 + 1] [i_0] [i_2 + 1])), (max((((/* implicit */unsigned long long int) var_8)), (arr_5 [i_0] [i_0]))))) ^ (arr_5 [i_0] [i_0])));
            var_18 = ((/* implicit */long long int) ((unsigned char) (+(((((/* implicit */_Bool) 16777215LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0]))) : (var_11))))));
            arr_11 [i_0] [i_0] [i_2] = ((/* implicit */unsigned int) arr_0 [i_0]);
        }
        /* LoopNest 2 */
        for (long long int i_3 = 0; i_3 < 14; i_3 += 3) 
        {
            for (unsigned long long int i_4 = 3; i_4 < 11; i_4 += 3) 
            {
                {
                    arr_17 [i_0] = ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_8 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (arr_16 [i_0] [(_Bool)1] [i_0] [i_0]))), (((/* implicit */long long int) (-(((/* implicit */int) arr_15 [i_4 + 2] [i_4 - 3] [i_4 + 3] [(_Bool)1])))))));
                    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-31923)) ? (9223372036854775807LL) : (9223372036854775807LL)))) ? (-2660453410367983528LL) : (9223372036854775807LL)));
                }
            } 
        } 
    }
    for (signed char i_5 = 0; i_5 < 14; i_5 += 1) /* same iter space */
    {
        var_20 = ((/* implicit */long long int) arr_2 [i_5]);
        arr_22 [i_5] = ((/* implicit */_Bool) max((((/* implicit */int) arr_18 [i_5])), ((~((~(arr_20 [i_5])))))));
        arr_23 [i_5] = ((/* implicit */_Bool) arr_13 [0LL] [i_5] [(signed char)12]);
        arr_24 [i_5] [i_5] = ((/* implicit */long long int) (_Bool)1);
    }
    for (signed char i_6 = 0; i_6 < 14; i_6 += 1) /* same iter space */
    {
        arr_27 [i_6] = ((/* implicit */short) (~(((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_5 [i_6] [i_6]) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [13ULL] [13ULL] [i_6] [i_6]))))))) : (min((8745030720832532931ULL), (((/* implicit */unsigned long long int) (signed char)11))))))));
        /* LoopNest 2 */
        for (unsigned int i_7 = 0; i_7 < 14; i_7 += 3) 
        {
            for (long long int i_8 = 1; i_8 < 13; i_8 += 3) 
            {
                {
                    var_21 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) ((unsigned int) var_7))) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned char) (signed char)71)), ((unsigned char)254))))) : (arr_16 [i_6] [i_7] [(_Bool)1] [i_8])))));
                    var_22 = ((/* implicit */unsigned char) ((signed char) ((9181172944656580628LL) | (8025582826417476961LL))));
                    var_23 = ((/* implicit */signed char) max((((/* implicit */unsigned int) (-(arr_0 [(unsigned char)2])))), (((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [2LL]))) - (max((((/* implicit */unsigned int) arr_8 [i_7])), (8U)))))));
                }
            } 
        } 
    }
    for (signed char i_9 = 0; i_9 < 14; i_9 += 1) /* same iter space */
    {
        arr_34 [i_9] [i_9] = ((/* implicit */short) var_11);
        /* LoopNest 2 */
        for (signed char i_10 = 1; i_10 < 11; i_10 += 1) 
        {
            for (signed char i_11 = 0; i_11 < 14; i_11 += 4) 
            {
                {
                    var_24 = ((/* implicit */int) (-(arr_14 [i_10] [i_9] [i_10 + 1])));
                    arr_41 [i_9] [i_9] [8LL] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_0 [i_9])) ? (var_1) : (((/* implicit */int) arr_3 [i_9]))))));
                    var_25 = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) arr_14 [i_10 + 3] [i_9] [i_10 + 3]))))));
                    arr_42 [i_9] [i_9] [i_9] [i_9] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_37 [i_9])))) || (((/* implicit */_Bool) max((((/* implicit */short) var_9)), (arr_37 [i_9]))))));
                    /* LoopNest 2 */
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        for (short i_13 = 1; i_13 < 13; i_13 += 3) 
                        {
                            {
                                var_26 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) & (max((max((((/* implicit */unsigned int) arr_12 [i_9])), (var_12))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) arr_3 [i_9])) : (((/* implicit */int) arr_1 [i_11])))))))));
                                var_27 = ((/* implicit */signed char) var_11);
                                var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_45 [i_9] [i_10] [i_13 + 1] [i_12] [i_13])) ? (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_9] [8LL] [8LL] [13U]))) : (arr_14 [i_9] [i_9] [i_9])));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopSeq 2 */
        for (long long int i_14 = 0; i_14 < 14; i_14 += 3) 
        {
            /* LoopNest 3 */
            for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
            {
                for (int i_16 = 0; i_16 < 14; i_16 += 2) 
                {
                    for (_Bool i_17 = 0; i_17 < 0; i_17 += 1) 
                    {
                        {
                            var_29 = ((/* implicit */short) (+(((/* implicit */int) arr_21 [i_16]))));
                            var_30 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)55))));
                        }
                    } 
                } 
            } 
            var_31 = ((/* implicit */unsigned short) min((var_31), (((/* implicit */unsigned short) ((short) var_5)))));
            /* LoopNest 3 */
            for (signed char i_18 = 2; i_18 < 12; i_18 += 1) 
            {
                for (int i_19 = 0; i_19 < 14; i_19 += 2) 
                {
                    for (long long int i_20 = 0; i_20 < 14; i_20 += 2) 
                    {
                        {
                            var_32 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_55 [i_9] [i_18 + 2] [(signed char)8] [i_19] [i_9])) ? (((/* implicit */int) max((((/* implicit */short) arr_25 [i_9] [i_9])), (arr_37 [i_9])))) : (((((/* implicit */_Bool) var_8)) ? (arr_0 [i_9]) : (((/* implicit */int) var_5))))))));
                            var_33 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(((((/* implicit */int) var_8)) | (((/* implicit */int) var_4)))))))));
                        }
                    } 
                } 
            } 
            var_34 = ((/* implicit */unsigned int) min((var_34), (((/* implicit */unsigned int) ((max((((/* implicit */unsigned long long int) var_5)), (min((var_0), (((/* implicit */unsigned long long int) var_1)))))) >> (((((/* implicit */int) var_9)) + (41))))))));
            var_35 = ((/* implicit */_Bool) 24U);
        }
        for (unsigned int i_21 = 0; i_21 < 14; i_21 += 2) 
        {
            arr_67 [i_9] [i_9] = ((/* implicit */unsigned int) (-(((((((/* implicit */long long int) var_12)) < (var_7))) ? (((/* implicit */int) arr_51 [13LL] [i_9] [i_9] [13LL])) : (((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) var_5)))))))));
            arr_68 [i_9] [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(var_12)))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-69))))) : (((arr_33 [i_9] [i_21]) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_66 [i_9] [i_21] [7LL])) ? (arr_19 [i_21]) : (arr_29 [7ULL] [i_9] [(unsigned char)13]))))))));
        }
        var_36 = ((/* implicit */short) arr_16 [i_9] [i_9] [i_9] [i_9]);
        var_37 = ((/* implicit */unsigned char) min((var_37), (((/* implicit */unsigned char) ((long long int) ((unsigned char) min((((/* implicit */short) (signed char)46)), (arr_9 [(unsigned short)10] [(signed char)2] [i_9]))))))));
    }
    var_38 = ((/* implicit */short) (+((~(((/* implicit */int) max((var_4), (var_9))))))));
}
