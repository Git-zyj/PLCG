/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41408
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41408 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41408
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
    for (short i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        var_12 = ((/* implicit */unsigned short) max((((/* implicit */int) arr_3 [i_0])), ((+((-(((/* implicit */int) (short)32767))))))));
        var_13 = ((/* implicit */long long int) var_7);
        var_14 = (-(((((/* implicit */int) ((((/* implicit */int) arr_0 [i_0] [i_0])) < (((/* implicit */int) arr_2 [i_0] [i_0]))))) * (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) arr_2 [i_0] [i_0])))))));
        var_15 = ((/* implicit */short) ((int) ((((/* implicit */int) max((var_3), ((unsigned char)158)))) % (((/* implicit */int) max((arr_3 [i_0]), (((/* implicit */unsigned short) arr_0 [i_0] [i_0]))))))));
    }
    for (long long int i_1 = 2; i_1 < 19; i_1 += 1) 
    {
        var_16 = ((/* implicit */int) min((var_16), ((-((((+(((/* implicit */int) arr_4 [0ULL])))) * (((/* implicit */int) (unsigned short)21))))))));
        /* LoopNest 2 */
        for (unsigned int i_2 = 3; i_2 < 20; i_2 += 1) 
        {
            for (unsigned short i_3 = 0; i_3 < 21; i_3 += 2) 
            {
                {
                    var_17 = ((/* implicit */unsigned char) arr_7 [i_1] [(unsigned short)3] [i_3]);
                    /* LoopNest 2 */
                    for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 2) 
                    {
                        for (unsigned long long int i_5 = 0; i_5 < 21; i_5 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */short) max((((((/* implicit */int) arr_4 [i_1])) / (((/* implicit */int) arr_4 [i_1])))), (((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)196)), ((unsigned short)43602))))));
                                arr_20 [4ULL] [i_2] [10ULL] [i_1] [i_3] = ((/* implicit */short) (~(((((/* implicit */_Bool) arr_12 [i_2] [i_2])) ? (((/* implicit */int) arr_15 [i_2] [3ULL] [i_1] [i_1] [i_2] [i_1 - 2])) : (((((/* implicit */int) (unsigned short)19218)) * (((/* implicit */int) var_2))))))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) (unsigned short)46318)) ? (((/* implicit */int) arr_17 [i_1 + 2] [i_2 + 1] [i_1])) : (((/* implicit */int) arr_17 [i_1 - 2] [i_2 + 1] [i_1]))))));
                    var_20 ^= ((/* implicit */_Bool) (unsigned short)19207);
                }
            } 
        } 
        var_21 = ((/* implicit */unsigned int) (-(min((var_6), (((/* implicit */long long int) arr_5 [i_1]))))));
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_6 = 0; i_6 < 18; i_6 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned short i_7 = 0; i_7 < 18; i_7 += 1) 
        {
            for (unsigned char i_8 = 0; i_8 < 18; i_8 += 2) 
            {
                for (unsigned long long int i_9 = 0; i_9 < 18; i_9 += 1) 
                {
                    {
                        var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)46310))))) ? (((/* implicit */int) (unsigned short)19204)) : (((/* implicit */int) ((arr_22 [i_6] [i_8]) < (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))))))));
                        var_23 = ((/* implicit */short) ((arr_19 [i_6] [16ULL] [i_8] [i_8] [i_8] [8] [0U]) / (arr_19 [i_9] [i_8] [i_8] [(_Bool)1] [i_8] [i_6] [i_6])));
                        var_24 = ((/* implicit */unsigned char) arr_4 [i_8]);
                        arr_30 [i_6] [1LL] [i_8] [i_9] = ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [i_8])))))));
                        var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)19206)) ? ((~(var_5))) : (((/* implicit */long long int) (~(((/* implicit */int) arr_8 [i_6] [i_8]))))))))));
                    }
                } 
            } 
        } 
        var_26 = ((/* implicit */_Bool) (unsigned short)19226);
        /* LoopNest 2 */
        for (short i_10 = 0; i_10 < 18; i_10 += 3) 
        {
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                {
                    var_27 = ((/* implicit */_Bool) ((((((/* implicit */int) var_10)) < (((/* implicit */int) var_2)))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_33 [i_6] [i_6]))) % (arr_13 [20U] [18LL] [i_10] [i_6] [18LL] [i_6]))) : (4087553640U)));
                    var_28 -= ((/* implicit */short) (~(((/* implicit */int) (unsigned short)46304))));
                    var_29 = ((/* implicit */int) ((arr_22 [i_6] [i_6]) - (((/* implicit */unsigned long long int) arr_6 [i_6] [i_10]))));
                    /* LoopNest 2 */
                    for (short i_12 = 0; i_12 < 18; i_12 += 1) 
                    {
                        for (unsigned char i_13 = 0; i_13 < 18; i_13 += 3) 
                        {
                            {
                                var_30 = ((/* implicit */_Bool) ((arr_6 [(unsigned char)20] [i_11]) % (arr_6 [9ULL] [i_10])));
                                var_31 = ((/* implicit */short) (~(((/* implicit */int) arr_15 [i_10] [i_10] [i_10] [i_12] [i_10] [i_11]))));
                            }
                        } 
                    } 
                    var_32 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) var_2)))))));
                }
            } 
        } 
    }
    for (unsigned int i_14 = 0; i_14 < 20; i_14 += 2) 
    {
        var_33 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((((/* implicit */int) (unsigned char)59)) + (((/* implicit */int) (unsigned short)46316)))), (((((/* implicit */int) (short)31932)) % (((/* implicit */int) var_3))))))) ? ((+(((((/* implicit */long long int) arr_13 [i_14] [18U] [18] [i_14] [i_14] [i_14])) & (arr_18 [4ULL] [4ULL] [i_14] [i_14] [i_14]))))) : (((/* implicit */long long int) (+(((/* implicit */int) var_9)))))));
        /* LoopNest 2 */
        for (int i_15 = 2; i_15 < 19; i_15 += 3) 
        {
            for (_Bool i_16 = 0; i_16 < 0; i_16 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_17 = 0; i_17 < 20; i_17 += 2) 
                    {
                        for (short i_18 = 1; i_18 < 17; i_18 += 3) 
                        {
                            {
                                var_34 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3558574801U)) ? (((((((/* implicit */int) (unsigned short)19223)) >> (((/* implicit */int) arr_45 [i_14] [i_14] [i_16])))) << (((((/* implicit */int) (unsigned short)46329)) - (46314))))) : (((/* implicit */int) (unsigned short)19225))));
                                var_35 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_0)))))));
                                var_36 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_9)))))));
                            }
                        } 
                    } 
                    arr_54 [i_14] [i_15 + 1] [i_16 + 1] |= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned short)46324))));
                    var_37 = ((/* implicit */unsigned short) ((_Bool) ((short) arr_43 [i_14])));
                    /* LoopNest 2 */
                    for (unsigned long long int i_19 = 0; i_19 < 20; i_19 += 3) 
                    {
                        for (long long int i_20 = 0; i_20 < 20; i_20 += 3) 
                        {
                            {
                                var_38 = ((/* implicit */unsigned long long int) var_8);
                                var_39 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? (max((((/* implicit */unsigned long long int) (unsigned short)46317)), (18362322325718832469ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((arr_48 [i_14] [15ULL] [i_14]) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)19204))))))))))));
                            }
                        } 
                    } 
                    var_40 -= ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_11))))) + (((/* implicit */int) (!(((/* implicit */_Bool) max((arr_10 [i_14] [i_15 + 1] [(unsigned short)18] [i_14]), (((/* implicit */unsigned int) arr_53 [i_14] [14] [(_Bool)1] [i_16] [i_14]))))))))));
                }
            } 
        } 
        var_41 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((-26LL), (((/* implicit */long long int) (unsigned short)46306))))) ? (((((/* implicit */_Bool) arr_55 [i_14] [i_14] [i_14] [i_14])) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_14] [i_14] [i_14]))))) : (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_14] [(unsigned char)10] [i_14])))));
        var_42 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) (unsigned short)19218)) ? (arr_57 [i_14] [i_14] [i_14]) : (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_14] [i_14] [i_14] [i_14])))))));
        /* LoopNest 2 */
        for (unsigned short i_21 = 0; i_21 < 20; i_21 += 3) 
        {
            for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
            {
                {
                    var_43 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_14] [i_14] [i_21] [i_14] [i_22])) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_14] [i_21] [i_22]))) : (arr_18 [i_14] [i_14] [i_21] [i_14] [i_14])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_9))) + (var_11)))) ? (((/* implicit */int) min((arr_47 [i_22] [i_22] [i_21] [i_14]), (((/* implicit */unsigned short) var_7))))) : (((/* implicit */int) arr_7 [(short)18] [i_21] [i_22]))))) : (((((/* implicit */_Bool) (+(((/* implicit */int) var_2))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_53 [i_14] [i_21] [i_21] [i_14] [i_21])) >= (((/* implicit */int) (unsigned char)197)))))) : (min((var_1), (((/* implicit */unsigned long long int) arr_10 [i_14] [i_21] [i_22] [i_22]))))))));
                    var_44 = ((/* implicit */_Bool) max((var_44), (((/* implicit */_Bool) ((((((/* implicit */int) arr_15 [i_22] [i_14] [i_14] [i_14] [i_21] [i_14])) > (((/* implicit */int) arr_15 [i_14] [i_14] [i_14] [i_14] [(short)16] [i_14])))) ? (max((((((/* implicit */_Bool) var_11)) ? (arr_48 [i_21] [i_21] [i_14]) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_14]))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_51 [4ULL] [4ULL] [4ULL] [i_21] [4ULL])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_11 [i_14]))))))) : (-6741540807253946554LL))))));
                }
            } 
        } 
    }
    var_45 ^= ((/* implicit */unsigned short) ((((/* implicit */int) var_2)) & (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)19211)) & (((/* implicit */int) var_10))))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned short)46311)) : (((/* implicit */int) var_2)))) : (((/* implicit */int) var_9))))));
}
