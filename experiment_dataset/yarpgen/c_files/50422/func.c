/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50422
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50422 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50422
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
    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_10)), (((((/* implicit */_Bool) 674418328895469889LL)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)131)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) (_Bool)1))))))))) : (max((((/* implicit */long long int) var_2)), (((long long int) var_8))))));
    var_19 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((signed char) ((((/* implicit */_Bool) 3058221958U)) ? (3058221961U) : (3058221965U)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (unsigned int i_1 = 2; i_1 < 15; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 3; i_2 < 16; i_2 += 4) 
                {
                    for (unsigned char i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        {
                            arr_8 [i_2] [i_1 - 2] = ((/* implicit */signed char) max((((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_16)), (12472259477611505053ULL)))) ? (arr_6 [i_2 - 2] [i_1 + 1] [i_1 - 2] [i_0]) : (((/* implicit */unsigned long long int) 1050164979U)))), (((/* implicit */unsigned long long int) (signed char)43))));
                            var_20 = ((/* implicit */long long int) min((5704309467592758878ULL), (((/* implicit */unsigned long long int) arr_3 [i_2] [i_2]))));
                            /* LoopSeq 2 */
                            for (long long int i_4 = 0; i_4 < 17; i_4 += 3) 
                            {
                                arr_12 [i_0] [i_1] [i_2 + 1] [i_3] [i_0] [i_0] [i_4] |= ((/* implicit */unsigned int) ((signed char) var_13));
                                var_21 -= ((/* implicit */unsigned char) max((((/* implicit */long long int) max((arr_11 [i_4] [i_3] [i_3] [i_3] [i_1 + 1] [i_0]), (((/* implicit */unsigned short) max(((unsigned char)14), (((/* implicit */unsigned char) (signed char)53)))))))), (((long long int) var_0))));
                            }
                            for (int i_5 = 0; i_5 < 17; i_5 += 4) 
                            {
                                var_22 = ((/* implicit */_Bool) max((var_22), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_16) : (arr_7 [i_0] [i_1] [i_1 - 2] [i_1] [i_1 + 1] [i_0])))) || (((/* implicit */_Bool) ((unsigned int) (unsigned char)255)))))));
                                var_23 = ((/* implicit */unsigned long long int) arr_4 [(short)14]);
                                var_24 = ((/* implicit */_Bool) arr_14 [i_0] [i_1] [16] [i_3]);
                            }
                            arr_16 [i_0] [i_0] [i_2] [i_2] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1] [i_1 - 2])) ? (((/* implicit */long long int) var_14)) : (arr_3 [i_1] [i_1 - 2])))) ? ((~(arr_3 [i_0] [i_1 + 1]))) : (min((arr_3 [(_Bool)1] [i_1 - 2]), (((/* implicit */long long int) (signed char)113))))));
                        }
                    } 
                } 
                var_25 &= ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (_Bool)1)), (12472259477611505053ULL)));
                /* LoopNest 3 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    for (unsigned int i_7 = 3; i_7 < 15; i_7 += 1) 
                    {
                        for (int i_8 = 3; i_8 < 14; i_8 += 4) 
                        {
                            {
                                arr_28 [i_0] [i_1 - 2] [i_6] [7U] [i_7] = ((/* implicit */unsigned short) -1169222857895005481LL);
                                var_26 = ((/* implicit */_Bool) arr_24 [i_8] [i_7] [i_7] [2LL] [i_1] [i_0]);
                                var_27 = ((/* implicit */_Bool) max((var_27), (var_0)));
                                var_28 = ((/* implicit */_Bool) (~(arr_22 [i_0] [i_0] [i_0])));
                            }
                        } 
                    } 
                } 
                arr_29 [13U] = ((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (signed char)-48)) : (((/* implicit */int) arr_14 [(signed char)10] [(signed char)10] [i_0] [i_1 + 1])))), (((/* implicit */int) arr_19 [i_1] [i_0] [i_0]))))) || ((!(((/* implicit */_Bool) var_1))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_9 = 3; i_9 < 14; i_9 += 2) 
    {
        for (unsigned char i_10 = 0; i_10 < 16; i_10 += 2) 
        {
            {
                var_29 = ((/* implicit */unsigned int) arr_21 [i_9 + 2] [i_9 - 1] [i_10] [i_10] [i_10]);
                /* LoopNest 2 */
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        {
                            /* LoopSeq 3 */
                            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                            {
                                var_30 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) arr_33 [(unsigned char)6] [i_9]))) ? (max((((/* implicit */unsigned int) arr_35 [i_10] [i_11] [i_12] [i_13])), (var_14))) : ((+(1196337658U)))))) ? ((~(((((/* implicit */_Bool) (unsigned char)240)) ? (((/* implicit */int) (unsigned short)19420)) : (((/* implicit */int) (_Bool)0)))))) : (arr_27 [i_9 - 3])));
                                var_31 -= ((/* implicit */long long int) max(((~(arr_39 [i_9] [i_10] [i_11] [i_10] [i_9]))), (((((/* implicit */unsigned int) var_7)) % (arr_39 [i_9] [i_10] [i_10] [i_10] [i_13])))));
                                arr_44 [i_10] [i_9] = ((/* implicit */unsigned int) min((((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) (-2147483647 - 1))), (var_12))))))), (((var_11) ? (arr_43 [i_13] [(short)8] [i_13] [i_13] [(signed char)7] [i_13] [i_13]) : (((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))))));
                                arr_45 [i_9] [i_10] [i_9] [i_12] [3LL] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) 1876231178443770498ULL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_9] [i_9 + 2]))) : (var_8))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_9 + 1] [i_9])) || (((/* implicit */_Bool) 9143500953036834591LL))))))))) ? (((((((/* implicit */_Bool) (signed char)34)) ? (((/* implicit */int) arr_17 [i_10] [i_12])) : (((/* implicit */int) arr_1 [i_10])))) | (((((/* implicit */_Bool) -5326790442034604059LL)) ? (((/* implicit */int) (signed char)47)) : (-1521957889))))) : (((/* implicit */int) arr_24 [i_9 + 2] [i_10] [i_11] [i_12] [i_11] [i_10]))));
                            }
                            for (unsigned short i_14 = 2; i_14 < 13; i_14 += 4) 
                            {
                                var_32 = ((/* implicit */int) max((9955910968404525623ULL), (((/* implicit */unsigned long long int) (short)18998))));
                                arr_48 [2] [(signed char)6] [i_10] [i_12] [i_14] |= ((/* implicit */signed char) ((((_Bool) arr_41 [i_12] [(short)13] [i_14 + 1] [i_14 + 1] [i_14])) ? ((+(var_12))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_31 [i_14 + 3] [i_10])) ? (((/* implicit */int) arr_31 [i_10] [i_14])) : ((-2147483647 - 1)))))));
                            }
                            for (unsigned long long int i_15 = 0; i_15 < 16; i_15 += 4) 
                            {
                                var_33 = ((/* implicit */unsigned int) min((((/* implicit */int) arr_14 [i_9] [i_9 + 2] [i_12] [i_12])), (arr_43 [i_9 - 1] [i_9 + 1] [i_9 + 2] [i_9 - 2] [i_9 + 2] [i_11] [i_9 - 2])));
                                var_34 ^= ((/* implicit */long long int) ((((arr_9 [i_9] [i_9 - 3] [i_9] [i_9 - 1] [i_9 - 1] [i_9] [i_9 - 3]) - (arr_9 [i_9] [i_9 + 2] [i_9 - 1] [i_9 - 3] [i_9 + 1] [i_9 + 2] [i_9 - 1]))) - (((((/* implicit */_Bool) arr_9 [i_9] [i_9] [i_9] [i_9 - 1] [i_9 - 2] [i_9] [i_9 + 1])) ? (arr_27 [i_9]) : (((/* implicit */int) arr_18 [i_9] [(signed char)9] [i_9] [i_9 - 2]))))));
                                var_35 ^= ((/* implicit */unsigned long long int) ((unsigned int) ((((((/* implicit */long long int) var_14)) & (-1388182971113356219LL))) ^ (((/* implicit */long long int) ((/* implicit */int) var_10))))));
                            }
                            /* LoopSeq 2 */
                            for (unsigned long long int i_16 = 3; i_16 < 15; i_16 += 3) /* same iter space */
                            {
                                var_36 = ((/* implicit */signed char) min((var_36), (((/* implicit */signed char) (short)-29465))));
                                var_37 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((min((((/* implicit */int) (signed char)37)), (2147483584))) > ((((_Bool)1) ? (((/* implicit */int) (signed char)31)) : (((/* implicit */int) var_10)))))))));
                                var_38 = ((/* implicit */unsigned short) ((2243003720663040LL) >> (((((/* implicit */int) (unsigned char)126)) - (82)))));
                                arr_53 [i_9 - 1] [i_9] [i_11] [i_12] [i_16 + 1] = ((/* implicit */_Bool) ((2113561854) * (((/* implicit */int) (_Bool)1))));
                            }
                            for (unsigned long long int i_17 = 3; i_17 < 15; i_17 += 3) /* same iter space */
                            {
                                var_39 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) arr_35 [i_10] [i_17 - 3] [1U] [i_17])) + (((unsigned long long int) 2243003720663040LL))));
                                var_40 = ((/* implicit */int) max((var_40), (((/* implicit */int) ((((((/* implicit */_Bool) max((var_7), (((/* implicit */int) arr_31 [i_11] [i_10]))))) ? (((((/* implicit */_Bool) (signed char)48)) ? (2243003720663038LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))))) : (((/* implicit */long long int) ((((/* implicit */int) arr_40 [i_17] [i_12] [i_10] [i_10])) / (var_13)))))) % (((/* implicit */long long int) max((((/* implicit */unsigned int) min((((/* implicit */int) (_Bool)1)), (2113561853)))), (((((/* implicit */_Bool) -5843083767704872324LL)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_9 - 1] [i_11])))))))))))));
                                var_41 *= ((/* implicit */_Bool) arr_14 [(short)15] [i_12] [i_11] [i_10]);
                            }
                            var_42 = ((/* implicit */unsigned char) max((var_42), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) -2113561831)))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_43 |= ((/* implicit */_Bool) ((int) (((!(var_10))) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))));
}
