/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229697
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229697 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229697
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
    for (long long int i_0 = 2; i_0 < 20; i_0 += 3) 
    {
        arr_3 [(_Bool)1] [i_0 + 2] = ((/* implicit */unsigned short) ((((arr_1 [(signed char)4]) * ((-(((/* implicit */int) (unsigned short)0)))))) * (((/* implicit */int) var_9))));
        /* LoopNest 3 */
        for (unsigned int i_1 = 1; i_1 < 21; i_1 += 2) 
        {
            for (short i_2 = 3; i_2 < 21; i_2 += 1) 
            {
                for (unsigned short i_3 = 4; i_3 < 21; i_3 += 1) 
                {
                    {
                        var_11 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [(short)15])) ? ((-(min((((/* implicit */int) var_4)), (arr_8 [i_0] [i_0] [i_0] [i_2]))))) : (((/* implicit */int) ((((/* implicit */int) ((6731613U) == (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [(signed char)21] [i_2 - 3] [i_1] [i_1 + 1])))))) == (min((((/* implicit */int) var_1)), (-1906205932))))))));
                        arr_12 [i_0] [(_Bool)1] [(_Bool)1] [i_2] [i_0] [i_3 - 4] = ((/* implicit */unsigned short) (-(max((((/* implicit */long long int) 1602849093)), (((long long int) var_0))))));
                    }
                } 
            } 
        } 
    }
    for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
    {
        var_12 = ((/* implicit */long long int) (((-(4288235682U))) / (min((var_3), (((/* implicit */unsigned int) max((((/* implicit */int) arr_9 [18LL])), (arr_8 [i_4] [5LL] [i_4] [i_4]))))))));
        /* LoopSeq 1 */
        for (signed char i_5 = 0; i_5 < 16; i_5 += 1) 
        {
            var_13 = ((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) == (-8392020855022239598LL));
            /* LoopNest 3 */
            for (short i_6 = 2; i_6 < 15; i_6 += 4) 
            {
                for (signed char i_7 = 2; i_7 < 13; i_7 += 1) 
                {
                    for (unsigned int i_8 = 0; i_8 < 16; i_8 += 3) 
                    {
                        {
                            var_14 = ((/* implicit */int) min((((/* implicit */unsigned long long int) 4288235683U)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 3738505335U)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_16 [i_4] [i_4 + 1]))))) : (arr_10 [i_4 + 1] [i_7 - 1] [i_6] [i_7 + 1] [i_4] [i_7 - 1])))));
                            arr_29 [i_4] [i_5] [i_4] [i_7 + 2] [(unsigned short)1] = ((/* implicit */unsigned short) max(((+(6731628U))), (((/* implicit */unsigned int) arr_18 [i_4] [(unsigned char)6]))));
                            var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) min(((~(2503772801U))), (((/* implicit */unsigned int) ((arr_1 [i_6]) != (((/* implicit */int) (unsigned char)23)))))))) > (((((/* implicit */unsigned long long int) ((arr_25 [11ULL] [i_6]) / (((/* implicit */long long int) ((/* implicit */int) arr_19 [(_Bool)1] [(_Bool)1] [i_4])))))) & (min((((/* implicit */unsigned long long int) var_4)), (arr_13 [i_4] [i_4])))))));
                            arr_30 [(_Bool)1] [i_4] [i_6] [(_Bool)1] [(_Bool)1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((min((15590467878735769365ULL), (0ULL))) << (((min((var_3), (((/* implicit */unsigned int) var_8)))) - (1469720903U)))))) && (((/* implicit */_Bool) (~(((/* implicit */int) arr_18 [i_4] [i_8])))))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 3 */
            for (unsigned int i_9 = 0; i_9 < 16; i_9 += 2) 
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_10 = 0; i_10 < 16; i_10 += 4) 
                {
                    /* LoopSeq 1 */
                    for (short i_11 = 2; i_11 < 13; i_11 += 4) 
                    {
                        var_16 = ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)13))) ^ (1152358554653425664ULL));
                        var_17 = ((/* implicit */signed char) ((((/* implicit */int) arr_34 [(short)9] [i_5] [i_5] [i_5] [i_5] [i_5])) < (((/* implicit */int) ((((/* implicit */int) arr_35 [i_11] [i_5] [i_5] [i_5] [3LL])) <= (((/* implicit */int) arr_9 [i_10])))))));
                        var_18 = ((/* implicit */unsigned long long int) var_7);
                    }
                    arr_38 [i_4] [i_9] [i_9] [i_4] [i_4] = ((/* implicit */_Bool) 589958333);
                    arr_39 [i_9] [(unsigned short)13] [i_4] [(signed char)15] [i_4] = ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-106))));
                }
                arr_40 [i_4] = ((/* implicit */signed char) (+((-(((/* implicit */int) arr_15 [8ULL] [i_4 + 1] [i_4]))))));
                /* LoopNest 2 */
                for (short i_12 = 0; i_12 < 16; i_12 += 4) 
                {
                    for (unsigned char i_13 = 0; i_13 < 16; i_13 += 4) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) 4288235681U)) & (-9152293548085566081LL)));
                            arr_45 [i_4] = ((/* implicit */unsigned short) (!(max(((!(((/* implicit */_Bool) 0)))), (((14528820444733787387ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)55995)))))))));
                        }
                    } 
                } 
                arr_46 [(short)14] [i_4] [10ULL] = ((/* implicit */unsigned long long int) min(((-(((/* implicit */int) (unsigned char)11)))), ((~(min((((/* implicit */int) var_1)), (arr_36 [6U] [(_Bool)1] [i_4])))))));
            }
            /* vectorizable */
            for (short i_14 = 0; i_14 < 16; i_14 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned int i_15 = 1; i_15 < 13; i_15 += 2) 
                {
                    for (int i_16 = 0; i_16 < 16; i_16 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */_Bool) ((((/* implicit */int) (short)15323)) >> (((((((/* implicit */_Bool) arr_36 [i_4] [i_4] [i_4])) ? (((/* implicit */int) (signed char)-63)) : (((/* implicit */int) (short)(-32767 - 1))))) + (66)))));
                            var_21 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_50 [i_14])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_51 [i_4] [i_5] [9LL] [i_15 + 2] [i_16] [i_16]))) : (2856276194973782251ULL))))));
                            var_22 = ((/* implicit */_Bool) var_0);
                            var_23 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) arr_34 [i_4 + 1] [i_15] [i_15 + 3] [i_15 - 1] [i_16] [i_16]))) != (((((/* implicit */_Bool) arr_20 [i_5] [i_14] [i_15] [i_15])) ? (((/* implicit */long long int) var_3)) : (arr_48 [i_4 + 1] [i_4])))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_17 = 3; i_17 < 14; i_17 += 3) 
                {
                    for (unsigned int i_18 = 2; i_18 < 15; i_18 += 2) 
                    {
                        {
                            arr_59 [i_4] [i_4] [(unsigned char)9] [(unsigned short)13] [i_18 - 2] = ((/* implicit */short) ((((/* implicit */unsigned int) ((((/* implicit */int) var_1)) | (((/* implicit */int) var_8))))) & (((((/* implicit */_Bool) var_3)) ? (arr_21 [i_4 + 1] [i_5] [i_4 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-15324)))))));
                            var_24 = ((/* implicit */short) arr_58 [7ULL] [(signed char)0] [i_18 + 1]);
                            var_25 = ((/* implicit */unsigned char) var_7);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_19 = 0; i_19 < 16; i_19 += 3) 
                {
                    for (short i_20 = 0; i_20 < 16; i_20 += 3) 
                    {
                        {
                            arr_66 [i_4] [i_4] [i_14] [i_14] [(unsigned short)12] [i_19] [i_20] = ((/* implicit */unsigned short) (signed char)-77);
                            arr_67 [(unsigned short)11] [(unsigned short)11] [i_4] [(signed char)10] [i_20] = ((/* implicit */long long int) var_2);
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (unsigned char i_21 = 3; i_21 < 15; i_21 += 2) 
            {
                arr_72 [i_4] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_54 [i_4 + 1] [15LL] [i_21 - 1])) / (((/* implicit */int) arr_54 [i_4 + 1] [i_4 + 1] [i_21 - 3]))));
                arr_73 [i_4] [i_4] [i_4] = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) var_10))) > (arr_48 [i_4 + 1] [i_4])));
                /* LoopNest 2 */
                for (signed char i_22 = 0; i_22 < 16; i_22 += 4) 
                {
                    for (unsigned short i_23 = 2; i_23 < 13; i_23 += 2) 
                    {
                        {
                            var_26 = ((unsigned char) (+(var_3)));
                            arr_78 [i_4] [i_4] [i_21] = ((/* implicit */unsigned short) (+(arr_13 [i_4] [i_23 + 1])));
                            arr_79 [i_4] [i_5] [i_22] [3] = ((/* implicit */long long int) ((((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)41534))))) < (arr_4 [i_21 - 1])));
                            var_27 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)148)) > (((/* implicit */int) (signed char)-66))));
                        }
                    } 
                } 
                var_28 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_33 [i_4] [(_Bool)1] [i_4] [i_4])) ^ (arr_8 [i_21 - 1] [i_21 - 1] [i_21 - 1] [i_4])));
                arr_80 [i_4] [i_5] [i_5] = ((/* implicit */signed char) (((-(((/* implicit */int) arr_70 [i_4] [i_4])))) ^ ((+(((/* implicit */int) arr_52 [i_4] [i_4]))))));
            }
            var_29 = ((/* implicit */unsigned short) min((arr_14 [i_4]), (min((((/* implicit */long long int) var_8)), (arr_14 [i_4])))));
        }
    }
    var_30 = ((/* implicit */unsigned long long int) ((min((min((var_7), (((/* implicit */unsigned int) (signed char)-91)))), (((/* implicit */unsigned int) var_8)))) / (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)76)))))));
}
