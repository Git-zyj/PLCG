/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201639
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201639 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201639
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (int i_2 = 1; i_2 < 11; i_2 += 2) 
            {
                {
                    var_14 = ((/* implicit */signed char) ((((/* implicit */int) ((unsigned short) (-(arr_6 [i_0] [i_0] [i_0]))))) << (((((/* implicit */int) arr_3 [i_0] [(signed char)11] [(signed char)11])) - (72)))));
                    var_15 = ((/* implicit */unsigned short) ((((arr_8 [i_2 - 1] [i_2 + 1] [i_2 - 1] [i_2 - 1]) % (arr_8 [i_2] [i_2] [i_2 - 1] [i_2 - 1]))) > (((/* implicit */long long int) (~(((/* implicit */int) arr_3 [(signed char)4] [i_1] [i_2 + 1])))))));
                    /* LoopSeq 3 */
                    for (long long int i_3 = 4; i_3 < 11; i_3 += 3) 
                    {
                        var_16 += ((/* implicit */unsigned int) arr_3 [i_1] [i_1] [i_3 - 3]);
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (signed char i_4 = 0; i_4 < 12; i_4 += 3) 
                        {
                            var_17 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) (unsigned char)148)) <= (((/* implicit */int) arr_5 [i_2]))))) | (((((((/* implicit */int) arr_12 [(signed char)9] [i_3] [i_2])) + (2147483647))) >> (((arr_13 [i_0] [i_0] [i_0] [i_0] [i_0]) - (6465552098665930124LL)))))));
                            var_18 *= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_2] [i_3] [(signed char)9] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (arr_8 [i_3] [i_3] [i_3 - 1] [i_3])));
                        }
                        for (unsigned short i_5 = 1; i_5 < 11; i_5 += 3) 
                        {
                            var_19 = ((/* implicit */short) (+(min((min((((/* implicit */unsigned int) 536805376)), (738800013U))), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_3])))))))));
                            var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -536805381)) ? (((/* implicit */long long int) 4124266832U)) : (arr_14 [i_0] [i_3] [i_2])))) ? (((/* implicit */int) (signed char)49)) : ((+(((/* implicit */int) (signed char)36))))))) ? (((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_2 - 1])) || (((/* implicit */_Bool) arr_0 [i_0])))))) * (((arr_8 [i_0] [i_0] [i_0] [i_0]) / (9105499954112375487LL))))) : (((/* implicit */long long int) ((((/* implicit */int) var_5)) + ((~(((/* implicit */int) var_0)))))))));
                            var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) arr_4 [i_3 - 4] [5] [i_5 + 1]))));
                        }
                        for (signed char i_6 = 0; i_6 < 12; i_6 += 1) 
                        {
                            var_22 *= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */long long int) 170700480U)) < (arr_10 [i_6] [i_2] [i_1] [i_0])))) >> (((((((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_0] [i_1] [i_1] [i_2 - 1] [0U] [i_2 - 1] [i_6]))) + (2046306701U))) - (2046346718U))))))));
                            var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) (_Bool)1))));
                        }
                        for (signed char i_7 = 0; i_7 < 12; i_7 += 3) 
                        {
                            var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) (+(((/* implicit */int) (unsigned char)237)))))));
                            var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_17 [i_2] [i_3] [i_2 - 1] [i_2 - 1] [i_2]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (((-(arr_10 [i_0] [i_0] [i_0] [i_0]))) >= (((/* implicit */long long int) ((/* implicit */int) (signed char)15))))))) : (170700463U)));
                            arr_23 [i_3] [i_1] [(short)1] [i_3] [i_3] = ((/* implicit */short) ((signed char) (~(((/* implicit */int) var_8)))));
                            var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) var_10)) ? (4124266832U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)32))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))) ? (min((3950734209U), (4225118983U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((((/* implicit */unsigned int) ((/* implicit */int) var_10))) <= (344233089U)))))))));
                            var_27 = ((/* implicit */long long int) ((unsigned char) 4124266833U));
                        }
                    }
                    /* vectorizable */
                    for (signed char i_8 = 0; i_8 < 12; i_8 += 4) 
                    {
                        var_28 = ((/* implicit */unsigned short) ((arr_4 [i_2 + 1] [i_2 + 1] [i_2 + 1]) / (((/* implicit */unsigned int) (+(((/* implicit */int) arr_3 [8ULL] [i_1] [i_8])))))));
                        var_29 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-45))) : (arr_13 [i_0] [i_1] [i_1] [i_0] [(signed char)7])))) ? (((/* implicit */long long int) arr_4 [i_2] [i_2 + 1] [i_2])) : (arr_13 [i_2 - 1] [i_2] [i_2 - 1] [i_2 - 1] [i_2 - 1])));
                    }
                    for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                    {
                        arr_32 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) max((max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned short)30849))))), ((unsigned char)112))), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_1 [i_0])))))));
                        var_30 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_20 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_9 - 1] [i_9 - 1] [i_9 - 1] [i_9 - 1]), (arr_20 [i_2 + 1] [i_2 + 1] [i_2 - 1] [i_9 - 1] [i_9 - 1] [i_9 - 1] [i_9 - 1])))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) 4124266825U))))) & (((/* implicit */int) ((short) (unsigned char)240)))))) : (arr_4 [i_9 - 1] [i_0] [i_0])));
                    }
                    /* LoopSeq 1 */
                    for (signed char i_10 = 0; i_10 < 12; i_10 += 2) 
                    {
                        var_31 = (-(arr_30 [i_0]));
                        arr_36 [(_Bool)1] [i_1] [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) 1695965332341218009LL))));
                        arr_37 [i_0] [i_0] [(_Bool)1] = ((/* implicit */long long int) arr_18 [i_0] [i_0] [i_1] [i_0] [i_2 - 1] [0U] [i_10]);
                        var_32 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(-536805381)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_28 [i_0] [i_1] [i_2] [i_10] [i_10] [i_10]))) : ((~(arr_13 [i_2 + 1] [i_0] [(unsigned short)8] [i_2 + 1] [i_2 + 1])))));
                    }
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_11 = 0; i_11 < 21; i_11 += 2) 
    {
        for (short i_12 = 3; i_12 < 18; i_12 += 3) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (signed char i_13 = 0; i_13 < 21; i_13 += 2) 
                {
                    var_33 = ((/* implicit */long long int) (~((+(((/* implicit */int) var_8))))));
                    arr_45 [i_11] [i_12 - 2] [i_13] = ((unsigned int) -1695965332341218009LL);
                    /* LoopNest 2 */
                    for (unsigned short i_14 = 0; i_14 < 21; i_14 += 3) 
                    {
                        for (int i_15 = 2; i_15 < 18; i_15 += 3) 
                        {
                            {
                                var_34 = ((/* implicit */unsigned int) min((var_34), (((/* implicit */unsigned int) var_4))));
                                var_35 = ((/* implicit */signed char) ((arr_52 [i_15 - 1] [i_15] [i_15 + 1] [i_15 - 1] [i_15] [i_15] [i_15 + 1]) == (((/* implicit */long long int) ((/* implicit */int) arr_49 [i_15] [i_15] [i_15 + 1] [i_15] [i_15] [i_15])))));
                            }
                        } 
                    } 
                }
                for (short i_16 = 0; i_16 < 21; i_16 += 1) 
                {
                    var_36 = ((/* implicit */signed char) (-((-((-(((/* implicit */int) var_5))))))));
                    var_37 -= ((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_0))))))))));
                    var_38 = ((/* implicit */signed char) min((min((((/* implicit */unsigned int) arr_40 [i_12])), (var_1))), (((/* implicit */unsigned int) arr_40 [i_11]))));
                    var_39 = ((/* implicit */unsigned char) max((var_39), (((/* implicit */unsigned char) 344233087U))));
                }
                arr_55 [i_12 + 1] [(short)20] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) ((arr_52 [(signed char)4] [i_11] [(signed char)4] [i_11] [i_11] [i_12] [i_12]) << (((((((/* implicit */int) (short)-10613)) + (10676))) - (62)))))))) <= (4124266816U)));
                var_40 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) arr_44 [i_12 + 3] [i_12 + 3] [i_12 - 2])) <= (((/* implicit */int) arr_44 [i_12 - 2] [i_12 + 2] [i_12 + 3]))))) >> (((/* implicit */int) (!(((/* implicit */_Bool) ((arr_52 [i_12 - 1] [i_12 - 3] [i_12] [i_11] [i_12] [i_11] [i_12 - 1]) & (((/* implicit */long long int) ((/* implicit */int) arr_38 [i_11])))))))))));
                arr_56 [i_11] [i_11] [i_11] = ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) 3412544644U)))))));
            }
        } 
    } 
}
