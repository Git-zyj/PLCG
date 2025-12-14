/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31737
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31737 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31737
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
    var_10 = ((/* implicit */signed char) ((short) (unsigned char)100));
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        var_11 = ((/* implicit */unsigned int) min((var_11), (((/* implicit */unsigned int) arr_0 [(_Bool)0]))));
        /* LoopSeq 2 */
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            /* LoopNest 2 */
            for (signed char i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_4 = 0; i_4 < 20; i_4 += 2) 
                        {
                            arr_12 [i_0] [i_0] [i_2] [i_3] [i_0] = ((/* implicit */signed char) ((arr_2 [i_2] [i_3] [i_3]) ? (((/* implicit */int) arr_2 [i_0] [i_1] [i_3])) : (((/* implicit */int) arr_2 [15ULL] [i_3] [i_4]))));
                            var_12 = ((/* implicit */long long int) (-(((/* implicit */int) arr_5 [i_0] [i_3]))));
                            var_13 = ((/* implicit */long long int) (signed char)126);
                        }
                        var_14 = ((/* implicit */unsigned long long int) var_7);
                        var_15 = ((/* implicit */signed char) arr_7 [i_0] [i_0] [i_0]);
                    }
                } 
            } 
            var_16 -= ((/* implicit */int) ((unsigned char) arr_7 [i_0] [i_0] [i_1]));
        }
        for (short i_5 = 0; i_5 < 20; i_5 += 4) 
        {
            arr_16 [i_0] [i_0] [i_5] = ((/* implicit */unsigned short) arr_5 [1LL] [i_0]);
            /* LoopNest 2 */
            for (short i_6 = 0; i_6 < 20; i_6 += 1) 
            {
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    {
                        arr_22 [i_0] = ((/* implicit */short) ((unsigned char) var_8));
                        arr_23 [i_0] [i_0] [i_6] [i_0] = ((signed char) arr_3 [i_0] [i_0] [i_0]);
                        arr_24 [i_7] [i_5] |= ((/* implicit */int) arr_19 [i_0] [i_0]);
                        var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) var_6))));
                    }
                } 
            } 
            var_18 += ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_7))))) ? (((/* implicit */int) arr_4 [i_0] [i_0] [i_0])) : (((/* implicit */int) var_6))));
            var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_5] [i_0])) ? (((/* implicit */int) arr_4 [i_0] [i_5] [i_0])) : (((/* implicit */int) (_Bool)0)))))));
            /* LoopNest 2 */
            for (int i_8 = 1; i_8 < 19; i_8 += 2) 
            {
                for (signed char i_9 = 3; i_9 < 18; i_9 += 2) 
                {
                    {
                        arr_29 [i_0] [i_5] [i_5] [i_8] [i_9] |= ((/* implicit */short) (-(((/* implicit */int) var_7))));
                        var_20 += ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) >= (var_9)));
                        /* LoopSeq 1 */
                        for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
                        {
                            var_21 = ((/* implicit */unsigned long long int) (-(-6300943422616002770LL)));
                            arr_32 [i_0] [i_5] [i_8] [i_9] [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */int) (unsigned short)17133)) == (((/* implicit */int) (unsigned short)48412)))))));
                        }
                        var_22 = ((/* implicit */long long int) (+(arr_27 [i_9] [i_8] [i_5])));
                        var_23 = ((/* implicit */signed char) arr_4 [i_0] [i_5] [i_5]);
                    }
                } 
            } 
        }
        var_24 += ((/* implicit */unsigned int) ((-1207394776) ^ (((/* implicit */int) (_Bool)1))));
        arr_33 [i_0] [i_0] = ((/* implicit */unsigned char) ((int) var_1));
    }
    for (short i_11 = 1; i_11 < 8; i_11 += 2) 
    {
        arr_37 [i_11] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 10485617642098037037ULL)) ? (((/* implicit */int) arr_5 [15U] [i_11])) : (((/* implicit */int) var_6))))) ? (arr_26 [i_11]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_36 [i_11 - 1] [i_11])))))) ? (((((/* implicit */int) arr_5 [i_11 - 1] [i_11 + 2])) | ((-(((/* implicit */int) var_5)))))) : (((/* implicit */int) min((((/* implicit */short) arr_18 [i_11 + 2] [i_11 + 1])), (var_5))))));
        var_25 = var_1;
        var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_36 [i_11] [i_11])) ? ((-(var_3))) : ((-(((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) ^ (var_3))))))))));
    }
    var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */int) min((((/* implicit */short) (signed char)-65)), ((short)-26761)))) + (2147483647))) >> (((((/* implicit */int) (signed char)31)) ^ (((/* implicit */int) var_8))))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-26761))) == (((unsigned int) (unsigned short)48402)))))));
    /* LoopNest 3 */
    for (signed char i_12 = 1; i_12 < 21; i_12 += 2) 
    {
        for (unsigned long long int i_13 = 2; i_13 < 21; i_13 += 1) 
        {
            for (unsigned char i_14 = 0; i_14 < 22; i_14 += 2) 
            {
                {
                    var_28 += ((/* implicit */unsigned short) ((((/* implicit */int) arr_41 [i_12] [i_12])) * ((-(((((/* implicit */_Bool) (signed char)-32)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned short)17133))))))));
                    /* LoopSeq 2 */
                    for (int i_15 = 1; i_15 < 20; i_15 += 2) 
                    {
                        arr_47 [i_15] [i_15] [i_14] [6U] [i_12] [i_12] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(arr_46 [i_13] [i_13 - 2] [i_13 - 2])))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_44 [i_15 + 2] [i_14] [i_13 + 1] [i_12 - 1])) ? (((/* implicit */int) arr_44 [i_15] [i_14] [i_13 - 1] [i_12])) : (((/* implicit */int) arr_44 [i_12 + 1] [i_13] [i_14] [i_14]))))) : ((-(var_9)))));
                        var_29 = ((/* implicit */short) min((var_29), (((/* implicit */short) arr_42 [i_12] [i_12] [i_13] [i_12]))));
                        arr_48 [i_12 - 1] [i_12 - 1] [i_15] = ((/* implicit */unsigned short) ((signed char) arr_38 [i_12]));
                        var_30 = ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */int) var_2)) != (arr_45 [i_12] [i_12] [i_12] [i_12 - 1]))))));
                    }
                    for (unsigned char i_16 = 1; i_16 < 20; i_16 += 3) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned long long int i_17 = 4; i_17 < 18; i_17 += 2) 
                        {
                            arr_53 [i_16] [i_16] = ((/* implicit */int) arr_52 [i_12] [(short)6] [i_16] [(unsigned short)11] [i_17]);
                            var_31 = ((((/* implicit */int) (signed char)-18)) - (((/* implicit */int) (unsigned short)17142)));
                        }
                        for (int i_18 = 2; i_18 < 21; i_18 += 1) /* same iter space */
                        {
                            arr_57 [i_12] [17U] [i_16] [i_16] [i_18] [i_13 - 2] = ((/* implicit */_Bool) (-(((/* implicit */int) max((var_7), (((/* implicit */unsigned short) arr_55 [i_13] [i_16] [i_16] [i_18 - 1] [(signed char)16])))))));
                            arr_58 [i_16] = ((/* implicit */long long int) (-(((/* implicit */int) arr_43 [i_12] [i_12] [11ULL] [i_12 + 1]))));
                            arr_59 [i_18 - 2] [i_16] [i_16] [i_13] [i_12] = ((/* implicit */unsigned char) ((((-1522135428) / (((/* implicit */int) (signed char)-63)))) | (min((((/* implicit */int) min(((signed char)-13), ((signed char)17)))), (((((/* implicit */int) (short)29969)) << (((18446744073709551615ULL) - (18446744073709551606ULL)))))))));
                            var_32 = ((/* implicit */signed char) max((var_32), (((/* implicit */signed char) (-(((/* implicit */int) (short)-17961)))))));
                        }
                        for (int i_19 = 2; i_19 < 21; i_19 += 1) /* same iter space */
                        {
                            arr_62 [i_12] [i_13 - 1] [i_14] [i_14] [(unsigned short)16] [(_Bool)1] |= ((/* implicit */unsigned int) (_Bool)0);
                            var_33 -= ((/* implicit */int) var_5);
                            var_34 = ((/* implicit */_Bool) max((var_34), (((/* implicit */_Bool) ((int) (short)0)))));
                            arr_63 [i_16] [i_16] = ((/* implicit */int) (((((((~(((/* implicit */int) arr_43 [i_12] [i_13] [i_14] [i_16])))) + (2147483647))) >> ((((-(((/* implicit */int) var_2)))) - (39))))) < (((/* implicit */int) ((short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_2))))))));
                        }
                        var_35 = ((/* implicit */int) max((var_35), (((/* implicit */int) max((((/* implicit */unsigned int) ((((/* implicit */int) ((3700488513834556868ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65530)))))) - (((((/* implicit */_Bool) (signed char)-18)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (_Bool)1))))))), (((((/* implicit */_Bool) ((((/* implicit */int) arr_50 [i_12] [i_14] [i_12] [i_12])) * (((/* implicit */int) var_0))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (min((var_9), (((/* implicit */unsigned int) arr_51 [(signed char)15] [i_13] [i_13] [i_13] [i_13] [i_13] [i_13])))))))))));
                        arr_64 [i_14] [i_16] = ((/* implicit */unsigned char) arr_54 [i_14]);
                        arr_65 [i_12] [i_14] [i_12] [i_16] |= ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) ((unsigned long long int) arr_44 [i_12] [i_13] [i_14] [i_16]))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((arr_49 [(short)6] [i_14]), (((/* implicit */signed char) var_8)))))) : (max((3399389310U), (((/* implicit */unsigned int) arr_54 [i_14])))))));
                    }
                }
            } 
        } 
    } 
}
