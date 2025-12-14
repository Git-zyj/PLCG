/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49683
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49683 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49683
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
    var_18 = ((/* implicit */signed char) (~(((/* implicit */int) var_13))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        var_19 = ((/* implicit */unsigned int) (-(((long long int) (signed char)39))));
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            var_20 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [(signed char)7] [(short)15]))));
            arr_7 [i_1] [i_1] [i_1] = ((/* implicit */signed char) var_0);
            arr_8 [i_1] [i_1] = ((/* implicit */unsigned short) arr_1 [i_1]);
            /* LoopNest 2 */
            for (signed char i_2 = 1; i_2 < 20; i_2 += 2) 
            {
                for (unsigned char i_3 = 0; i_3 < 22; i_3 += 2) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_4 = 0; i_4 < 22; i_4 += 3) 
                        {
                            var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) ((_Bool) var_16)))));
                            var_22 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_4 [(_Bool)1] [(unsigned short)2])) ? (min((((/* implicit */long long int) (unsigned char)108)), (arr_17 [i_0] [i_1] [i_3] [i_4] [i_4]))) : (((/* implicit */long long int) (~(((/* implicit */int) arr_4 [i_0] [i_0]))))))) >> ((((+(((/* implicit */int) arr_2 [i_0] [i_0])))) - (53634)))));
                        }
                        for (short i_5 = 3; i_5 < 21; i_5 += 1) 
                        {
                            var_23 -= ((/* implicit */unsigned char) var_12);
                            var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) ((-1952136300772804715LL) | (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-37)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (signed char)7))))))))));
                            arr_20 [i_5 - 1] [i_1] [i_2 + 1] [i_1] [16LL] = ((/* implicit */unsigned char) arr_11 [i_1]);
                        }
                        var_25 = ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)-13)) >= (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_6))) - (0LL)))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)48153))) > (3713686091U)))) : (((/* implicit */int) max((arr_3 [i_0] [i_1]), (((/* implicit */unsigned short) (unsigned char)6)))))))));
                    }
                } 
            } 
        }
    }
    for (long long int i_6 = 2; i_6 < 14; i_6 += 3) 
    {
        var_26 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_6 - 2])) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) var_6))));
        var_27 = ((/* implicit */long long int) (-(((/* implicit */int) arr_6 [i_6 - 2]))));
        var_28 |= ((/* implicit */_Bool) 2295638413U);
    }
    for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
    {
        arr_25 [i_7] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_23 [i_7 + 1])) ? (arr_23 [i_7 + 1]) : (arr_23 [i_7 + 1])))));
        var_29 = ((/* implicit */long long int) ((((/* implicit */_Bool) 4590593637102329720ULL)) ? (((/* implicit */int) (signed char)78)) : (((/* implicit */int) (unsigned short)23720))));
        /* LoopNest 3 */
        for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
        {
            for (int i_9 = 0; i_9 < 21; i_9 += 3) 
            {
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    {
                        var_30 = ((/* implicit */long long int) arr_14 [i_7 + 1] [(signed char)3] [(signed char)3] [i_7 + 1] [i_7 + 1]);
                        var_31 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_7] [i_7])) ? (arr_29 [i_7] [18LL] [i_9] [i_8]) : (arr_29 [i_7] [i_8] [i_9] [11ULL])))) ? (min((arr_29 [i_7] [i_8 + 1] [i_9] [i_9]), (((/* implicit */long long int) arr_24 [i_7 + 1] [i_7])))) : (((/* implicit */long long int) ((/* implicit */int) ((arr_29 [i_7] [i_9] [i_8] [i_7]) >= (arr_29 [i_8 + 1] [i_9] [i_8 + 1] [i_7 + 1])))))));
                        arr_34 [i_7] [i_8 + 1] [16U] [i_10] = ((/* implicit */int) ((long long int) ((short) arr_26 [i_7 + 1])));
                    }
                } 
            } 
        } 
        arr_35 [i_7] [i_7] = ((/* implicit */signed char) ((((/* implicit */int) arr_26 [i_7 + 1])) / (((/* implicit */int) var_10))));
    }
    var_32 = ((/* implicit */unsigned char) 16776704);
    /* LoopNest 3 */
    for (short i_11 = 1; i_11 < 15; i_11 += 3) 
    {
        for (long long int i_12 = 2; i_12 < 14; i_12 += 3) 
        {
            for (signed char i_13 = 4; i_13 < 15; i_13 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_14 = 1; i_14 < 14; i_14 += 1) 
                    {
                        for (unsigned int i_15 = 4; i_15 < 12; i_15 += 3) 
                        {
                            {
                                arr_51 [i_11] [i_12] [i_12] [13LL] [i_12] [(unsigned char)6] [i_15 - 2] = ((/* implicit */unsigned int) arr_38 [i_12 + 2] [i_12 + 2]);
                                arr_52 [i_12] [14LL] [i_13] [i_14 + 1] [14LL] = ((/* implicit */int) min((((/* implicit */signed char) ((arr_17 [i_11] [i_11 + 1] [i_13 - 3] [i_14] [i_14 - 1]) >= (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_12 + 1] [i_11 + 1])))))), (arr_47 [i_15] [i_15] [i_15] [i_14])));
                            }
                        } 
                    } 
                    var_33 = ((/* implicit */signed char) var_17);
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                    {
                        arr_55 [i_12] [i_12 + 1] [i_13 + 1] [i_16] [i_13] = ((/* implicit */unsigned char) arr_38 [i_11 - 1] [i_13 - 1]);
                        arr_56 [i_12] [i_11] [i_11] [i_12] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-1)) - (((/* implicit */int) arr_26 [i_11]))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)1))) ^ (arr_49 [i_12]))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(arr_36 [i_11 + 1] [(signed char)8])))))));
                        var_34 = ((/* implicit */long long int) arr_28 [i_12]);
                        var_35 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_43 [(unsigned short)4] [i_12 - 1])) ? (((/* implicit */int) arr_43 [(unsigned char)2] [i_16])) : (((/* implicit */int) arr_43 [(signed char)14] [i_12 - 2]))));
                    }
                    for (signed char i_17 = 1; i_17 < 15; i_17 += 1) 
                    {
                        arr_59 [i_12] [8U] [i_12] = (!(((/* implicit */_Bool) (((-(((/* implicit */int) arr_27 [i_11] [i_12])))) / (((/* implicit */int) ((short) (unsigned char)4)))))));
                        arr_60 [i_11 - 1] [i_12] [i_12] [i_12] = ((/* implicit */_Bool) (signed char)15);
                        arr_61 [i_11 + 1] [i_11] [i_12] [i_11 - 1] = ((/* implicit */short) ((arr_42 [i_12 + 2] [6LL] [i_12 + 1] [i_12 + 1]) * (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_28 [i_12])) < (((/* implicit */int) arr_14 [i_12] [i_11 + 1] [i_17 - 1] [(short)18] [i_12 + 2]))))))));
                        var_36 = ((/* implicit */unsigned int) min((var_36), (((/* implicit */unsigned int) ((_Bool) min((min((13856150436607221913ULL), (((/* implicit */unsigned long long int) arr_32 [(unsigned short)16] [18] [i_13])))), (((/* implicit */unsigned long long int) (unsigned char)255))))))));
                        arr_62 [i_12] [i_17] [(short)0] [i_17 + 1] = ((/* implicit */int) min((((((/* implicit */_Bool) arr_12 [i_11] [i_13] [8] [i_17])) ? (max((arr_44 [i_12]), (((/* implicit */long long int) arr_14 [i_17 - 1] [i_17] [i_12] [15LL] [(_Bool)1])))) : (((/* implicit */long long int) arr_49 [i_11])))), (((/* implicit */long long int) arr_12 [i_17] [(_Bool)1] [i_12] [i_17]))));
                    }
                }
            } 
        } 
    } 
}
