/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190380
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190380 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190380
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
    var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) max((((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (short)0)))), (max((((((/* implicit */int) (short)32767)) | (((/* implicit */int) var_1)))), (((/* implicit */int) max((var_1), (((/* implicit */unsigned short) (short)2276))))))))))));
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */int) (((~(((/* implicit */int) var_9)))) == (min((0), (((/* implicit */int) (unsigned short)15572))))))) / (max(((+(var_15))), (((/* implicit */int) (!(((/* implicit */_Bool) 4254859856U)))))))));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 20; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 19; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                {
                    var_20 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) (~(((/* implicit */int) ((arr_2 [i_2]) != (var_14))))))) - (min((((/* implicit */unsigned int) min((2147483647), (((/* implicit */int) var_12))))), (min((var_8), (((/* implicit */unsigned int) arr_8 [i_0 + 1] [i_0 + 1]))))))));
                    arr_9 [i_2] [i_0] [i_0] = ((/* implicit */signed char) min(((-2147483647 - 1)), (600501475)));
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        var_21 = ((/* implicit */unsigned int) ((((/* implicit */int) min(((!(((/* implicit */_Bool) var_0)))), ((!(((/* implicit */_Bool) arr_3 [i_0]))))))) | (((/* implicit */int) (!((!(((/* implicit */_Bool) (-2147483647 - 1))))))))));
                        /* LoopSeq 3 */
                        for (int i_4 = 0; i_4 < 21; i_4 += 4) 
                        {
                            arr_14 [i_0] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((min((min((arr_12 [i_2]), (var_5))), ((~(((/* implicit */int) arr_5 [(_Bool)1] [13])))))) | (((/* implicit */int) ((min((var_4), (((/* implicit */unsigned int) var_9)))) != (((/* implicit */unsigned int) ((/* implicit */int) min((arr_7 [i_0 - 2] [i_0 + 1] [(short)6]), (((/* implicit */unsigned short) arr_4 [i_0 - 2])))))))))));
                            arr_15 [(unsigned short)3] [i_0] [i_2] [i_0] [(unsigned short)3] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~((-(((/* implicit */int) arr_13 [i_0])))))))));
                            var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((((/* implicit */int) var_1)) | (2147483647))) ^ ((-(((/* implicit */int) arr_1 [i_2] [i_1]))))))) != (min((((((/* implicit */unsigned long long int) 201326592U)) - (4170467736164504535ULL))), (((/* implicit */unsigned long long int) min((((/* implicit */int) var_3)), (arr_0 [i_3])))))))))));
                            var_23 = ((((((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)79)) && (((/* implicit */_Bool) var_7))))) - ((-(((/* implicit */int) var_2)))))) % ((-(max((-212120559), (arr_8 [i_4] [i_0 - 1]))))));
                        }
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            arr_18 [i_0 - 4] [i_0 - 4] [(unsigned short)14] [i_0] [i_0] = ((/* implicit */short) min((((/* implicit */unsigned int) min(((~(((/* implicit */int) var_13)))), (((var_5) - (((/* implicit */int) (short)-32752))))))), (max(((-(var_14))), (((/* implicit */unsigned int) ((((/* implicit */int) var_2)) >> (((/* implicit */int) arr_5 [i_2] [i_2])))))))));
                            var_24 = ((((/* implicit */unsigned int) (-(((/* implicit */int) max(((unsigned short)64409), (((/* implicit */unsigned short) var_2)))))))) & (min((((arr_2 [i_1]) ^ (arr_6 [i_1] [i_0] [9] [i_5]))), (((arr_6 [(unsigned short)0] [i_0] [i_0] [i_0 - 4]) | (((/* implicit */unsigned int) 2147483647)))))));
                            arr_19 [i_0] = ((/* implicit */signed char) (-(min((((/* implicit */unsigned int) ((arr_12 [10U]) - (((/* implicit */int) var_13))))), (min((((/* implicit */unsigned int) var_16)), (arr_6 [i_5] [i_0] [i_2] [i_2])))))));
                        }
                        for (unsigned long long int i_6 = 0; i_6 < 21; i_6 += 4) 
                        {
                            var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_0] [(unsigned char)9] [i_2]))))), (min((-600501456), (((/* implicit */int) (unsigned char)171))))))) && (((((/* implicit */_Bool) (+(((/* implicit */int) arr_7 [i_0] [(unsigned short)19] [i_0]))))) && (((((/* implicit */unsigned int) ((/* implicit */int) (short)26032))) <= (var_4)))))));
                            var_26 *= ((/* implicit */unsigned long long int) (-((+(((/* implicit */int) ((var_15) > (((/* implicit */int) (unsigned char)85)))))))));
                            var_27 = ((/* implicit */short) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)-58))))), (min((((/* implicit */unsigned long long int) min((var_4), (((/* implicit */unsigned int) arr_13 [i_0]))))), (((arr_20 [12] [i_0] [(unsigned short)9] [12]) << (((((/* implicit */int) var_10)) - (49)))))))));
                        }
                        var_28 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) max(((-(((/* implicit */int) (unsigned short)38905)))), (((((/* implicit */int) arr_5 [(_Bool)1] [i_1 - 2])) + (arr_12 [i_1])))))), (((min((arr_20 [i_0] [i_0] [10ULL] [i_3]), (((/* implicit */unsigned long long int) arr_5 [i_2] [i_3])))) + (((/* implicit */unsigned long long int) max((arr_8 [i_1 - 3] [i_1 - 3]), (((/* implicit */int) (unsigned char)177)))))))));
                    }
                    for (unsigned short i_7 = 0; i_7 < 21; i_7 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_8 = 0; i_8 < 21; i_8 += 1) 
                        {
                            arr_31 [i_0] [10] [i_0] = ((/* implicit */short) max((((/* implicit */unsigned long long int) max((max((((/* implicit */unsigned int) arr_11 [i_8] [(unsigned short)19] [i_2] [i_0] [i_0] [i_0])), (40107439U))), (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (unsigned char)79)))))))), ((~(((var_11) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_0 - 4] [i_1] [1] [1] [i_7] [i_0] [i_8])))))))));
                            var_29 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) min((arr_0 [i_1]), (arr_3 [i_0])))) / (max((var_11), (((/* implicit */unsigned long long int) arr_3 [i_0])))))))));
                        }
                        var_30 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (-(var_4)))) ^ ((-(var_11))))))));
                        /* LoopSeq 1 */
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            var_31 = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) min((arr_33 [i_9] [i_0] [(short)7] [10]), (arr_33 [i_0] [i_0] [i_0] [i_0]))))))) & (((/* implicit */int) max((((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)28039)) || (((/* implicit */_Bool) (signed char)9))))), (min((((/* implicit */unsigned short) arr_28 [i_0] [i_0] [i_1] [i_2] [7U] [i_0])), (var_1))))))));
                            var_32 = ((/* implicit */unsigned short) ((((((/* implicit */int) ((((/* implicit */_Bool) 4254859881U)) && (((/* implicit */_Bool) 5323967467571221588ULL))))) << (((((/* implicit */int) max((((/* implicit */unsigned short) (short)0)), ((unsigned short)28039)))) - (28010))))) << (min((min((((/* implicit */unsigned int) var_6)), (arr_6 [i_0 - 1] [i_0] [i_2] [i_0]))), (((((/* implicit */unsigned int) ((/* implicit */int) arr_34 [i_0 - 1] [(unsigned short)10] [i_1] [i_2] [(unsigned short)11] [i_1] [(short)18]))) / (arr_29 [(short)20] [(short)20] [(short)20] [(short)20] [i_9])))))));
                            var_33 = ((/* implicit */int) ((((((/* implicit */unsigned int) ((((/* implicit */int) var_10)) % (((/* implicit */int) var_10))))) | (max((1891767524U), (((/* implicit */unsigned int) arr_3 [i_0])))))) & (((/* implicit */unsigned int) (-(((/* implicit */int) max((((/* implicit */short) var_10)), (var_13)))))))));
                            arr_35 [11U] [i_7] [i_0] [i_0] [i_0] [i_0] = (~(min((min((((/* implicit */unsigned long long int) var_13)), (var_7))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)(-32767 - 1)))))))));
                        }
                    }
                    /* LoopSeq 3 */
                    for (short i_10 = 0; i_10 < 21; i_10 += 4) 
                    {
                        arr_39 [16] [i_0] [14U] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned char) var_3)), (arr_24 [13U] [13U] [(unsigned char)19] [(unsigned char)5] [13U] [i_10])))))))) - (min((((/* implicit */unsigned int) min((arr_28 [i_0 - 4] [i_0] [i_1] [i_2] [i_1] [i_10]), (((/* implicit */short) var_17))))), (min((1637299244U), (((/* implicit */unsigned int) (_Bool)1))))))));
                        /* LoopSeq 3 */
                        for (unsigned short i_11 = 0; i_11 < 21; i_11 += 1) 
                        {
                            var_34 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(((arr_29 [i_0] [1U] [i_0 - 1] [i_0] [(unsigned short)0]) / (((/* implicit */unsigned int) 1971901353)))))))));
                            var_35 *= ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) min((arr_22 [i_0] [i_0]), (((/* implicit */int) (short)8))))))))) + (max((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)7))) / (1157875098U))), (min((((/* implicit */unsigned int) var_6)), (var_4))))));
                        }
                        /* vectorizable */
                        for (short i_12 = 0; i_12 < 21; i_12 += 1) 
                        {
                            var_36 = ((/* implicit */_Bool) ((((((/* implicit */unsigned int) var_5)) % (arr_29 [i_12] [i_10] [i_2] [i_1 - 2] [i_0]))) % (((/* implicit */unsigned int) (~(var_6))))));
                            var_37 = ((/* implicit */int) min((var_37), (((/* implicit */int) (!(((((/* implicit */int) arr_23 [i_2] [i_0 + 1] [i_2] [(_Bool)1])) != (((/* implicit */int) (unsigned short)13118)))))))));
                            var_38 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) var_9)) / (arr_44 [i_0] [i_0] [i_0] [i_0])))) && (((/* implicit */_Bool) ((((/* implicit */int) var_3)) | (((/* implicit */int) (unsigned char)255)))))));
                        }
                        for (short i_13 = 0; i_13 < 21; i_13 += 4) 
                        {
                            var_39 = ((/* implicit */short) max((min((min((((/* implicit */int) (short)15)), (-730355618))), (((/* implicit */int) (!(((/* implicit */_Bool) var_17))))))), (min((min((arr_0 [i_2]), (((/* implicit */int) var_0)))), (((((/* implicit */int) arr_40 [i_0] [i_0] [i_0 - 3] [i_0])) & (arr_41 [i_13] [(unsigned char)15] [i_0] [i_1 + 1] [14])))))));
                            var_40 = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_3)), (var_7))))))));
                        }
                    }
                    for (int i_14 = 0; i_14 < 21; i_14 += 1) 
                    {
                        var_41 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (((+(((/* implicit */int) arr_28 [i_2] [i_0] [i_0] [i_2] [0] [i_2])))) & ((-(((/* implicit */int) (unsigned char)31)))))))));
                        /* LoopSeq 3 */
                        for (unsigned short i_15 = 0; i_15 < 21; i_15 += 4) 
                        {
                            var_42 = ((/* implicit */int) min(((~(min((((/* implicit */unsigned int) (unsigned char)51)), (1703112039U))))), (((/* implicit */unsigned int) max((((/* implicit */int) (!(arr_38 [i_0] [i_0] [5ULL] [i_0] [i_14])))), (min((var_15), (((/* implicit */int) arr_49 [i_0] [i_0] [i_0] [i_0] [(unsigned char)0])))))))));
                            arr_52 [i_0] = ((/* implicit */unsigned int) (~(-1570746375)));
                            arr_53 [i_0] [8] [i_2] [19] [(unsigned short)3] = max((min((((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)37496))))), (max((var_4), (40107415U))))), (((/* implicit */unsigned int) ((((((/* implicit */int) var_9)) * (((/* implicit */int) arr_38 [i_0 - 3] [i_0] [i_2] [(signed char)18] [i_15])))) / ((+(((/* implicit */int) arr_10 [i_0] [i_0] [i_0]))))))));
                            arr_54 [i_0] [i_0] = ((/* implicit */unsigned short) max((((max((arr_22 [i_0] [i_15]), (((/* implicit */int) arr_34 [6ULL] [i_14] [16U] [(unsigned char)10] [(_Bool)1] [(signed char)12] [2U])))) - (max((36050561), (((/* implicit */int) (unsigned short)64634)))))), (((/* implicit */int) (!(((((/* implicit */int) arr_7 [i_15] [8U] [(unsigned char)15])) == (((/* implicit */int) arr_42 [i_15] [i_1] [1])))))))));
                            var_43 -= ((/* implicit */unsigned long long int) (~((~(((/* implicit */int) max(((unsigned short)37490), ((unsigned short)37496))))))));
                        }
                        for (int i_16 = 1; i_16 < 18; i_16 += 4) 
                        {
                            var_44 = ((/* implicit */unsigned int) max((var_44), (((/* implicit */unsigned int) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_1)))))))), (min((max(((unsigned short)37769), ((unsigned short)37498))), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)230)) && (((/* implicit */_Bool) var_3))))))))))));
                            var_45 = ((/* implicit */int) (!(((/* implicit */_Bool) (~((~(((/* implicit */int) var_10)))))))));
                            var_46 = ((/* implicit */unsigned long long int) max((var_46), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((min((-600501476), (var_15))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [(_Bool)1])))))))))))));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_17 = 0; i_17 < 21; i_17 += 1) 
                        {
                            arr_60 [i_0] = (!(((((/* implicit */int) var_2)) > (((/* implicit */int) var_13)))));
                            arr_61 [i_2] [i_2] [i_2] [20U] [i_2] |= ((/* implicit */short) (((~(((/* implicit */int) var_2)))) == ((+(((/* implicit */int) var_12))))));
                        }
                        var_47 = ((/* implicit */unsigned long long int) (~((-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)34037)))))))));
                    }
                    /* vectorizable */
                    for (unsigned short i_18 = 2; i_18 < 18; i_18 += 2) 
                    {
                        arr_65 [i_0] [i_1 - 3] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */int) (short)-28912)) != (((/* implicit */int) (unsigned short)0)))))));
                        var_48 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)224))))) * (((/* implicit */int) ((((/* implicit */int) arr_24 [i_0] [(signed char)8] [(short)0] [i_18 + 1] [(signed char)0] [i_0])) <= (arr_26 [(unsigned char)2] [(unsigned char)2] [i_0] [19U] [i_0 - 3]))))));
                        var_49 = ((/* implicit */unsigned short) (!(((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) (unsigned short)28037))))));
                        var_50 = (+((~(((/* implicit */int) (short)-32761)))));
                        arr_66 [(signed char)3] [i_1] [i_2] [i_0] [(unsigned short)12] [i_2] = ((/* implicit */_Bool) (~(((var_4) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0)))))));
                    }
                    var_51 *= ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_46 [(short)4] [(_Bool)1] [4] [10] [i_1 - 3] [i_1] [i_2]))))) << (((((3022152862180887507ULL) >> (((((/* implicit */int) (unsigned char)255)) - (211))))) - (171761ULL))))))));
                }
            } 
        } 
    } 
    var_52 = ((/* implicit */short) ((((/* implicit */unsigned long long int) (((+(((/* implicit */int) (unsigned short)64000)))) >> ((((+(var_16))) - (1007415205)))))) - (min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_3))))), (max((6464159946392823778ULL), (((/* implicit */unsigned long long int) var_6))))))));
}
