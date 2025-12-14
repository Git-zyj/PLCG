/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38051
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38051 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38051
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
    var_19 = ((/* implicit */unsigned long long int) var_5);
    var_20 &= ((/* implicit */short) var_4);
    var_21 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) / (var_1)));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) arr_0 [i_0]))));
        var_23 = ((/* implicit */unsigned short) (+(max((arr_2 [i_0]), (arr_2 [i_0])))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) max((((/* implicit */unsigned long long int) var_9)), (arr_3 [i_0] [(short)4]))))) ? (max((((/* implicit */int) (!(((/* implicit */_Bool) var_16))))), (arr_1 [i_0]))) : (((/* implicit */int) (!(((/* implicit */_Bool) min((arr_2 [(short)15]), (((/* implicit */unsigned int) var_12))))))))));
        arr_5 [(signed char)4] |= ((/* implicit */_Bool) ((((/* implicit */int) max(((unsigned char)62), (((/* implicit */unsigned char) (_Bool)1))))) ^ (max((((/* implicit */int) ((((/* implicit */unsigned long long int) var_17)) > (var_15)))), (var_2)))));
    }
    /* LoopSeq 3 */
    for (int i_1 = 0; i_1 < 16; i_1 += 4) 
    {
        /* LoopNest 3 */
        for (signed char i_2 = 0; i_2 < 16; i_2 += 4) 
        {
            for (unsigned short i_3 = 0; i_3 < 16; i_3 += 1) 
            {
                for (int i_4 = 0; i_4 < 16; i_4 += 1) 
                {
                    {
                        var_24 = ((/* implicit */int) max((((arr_2 [i_3]) - (((/* implicit */unsigned int) ((/* implicit */int) var_14))))), (((((/* implicit */_Bool) arr_2 [i_1])) ? (arr_2 [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1])))))));
                        var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? (min((((/* implicit */unsigned long long int) arr_17 [i_4])), (arr_3 [(short)10] [(unsigned char)13]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)79)) != (((/* implicit */int) (unsigned short)49408))))))));
                        arr_18 [8ULL] [i_4] [i_3] [13U] [i_1] &= ((/* implicit */unsigned long long int) (unsigned char)19);
                        /* LoopSeq 3 */
                        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                        {
                            var_26 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_17 [i_1])) * ((~(((/* implicit */int) var_9))))));
                            var_27 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_1])) ? (max((((/* implicit */long long int) arr_13 [i_5] [i_5] [i_5 - 1])), (var_11))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_1])) ? (((/* implicit */int) (unsigned short)16127)) : (((/* implicit */int) arr_0 [(signed char)1]))))))))));
                        }
                        for (unsigned long long int i_6 = 0; i_6 < 16; i_6 += 3) 
                        {
                            arr_23 [(unsigned short)8] [(unsigned char)13] [i_1] [i_2] [i_1] &= ((/* implicit */_Bool) var_17);
                            arr_24 [i_1] |= ((/* implicit */signed char) max((((/* implicit */unsigned int) arr_6 [i_1])), (((((arr_2 [10U]) & (((/* implicit */unsigned int) ((/* implicit */int) var_0))))) & (((/* implicit */unsigned int) arr_22 [i_1] [i_6]))))));
                            arr_25 [i_1] [6U] [i_3] [i_4] [i_6] [(unsigned short)13] [i_1] = ((/* implicit */_Bool) max(((~(min((((/* implicit */unsigned long long int) var_10)), (var_15))))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)32767)))))));
                            var_28 = ((/* implicit */_Bool) max((var_28), (((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */int) max(((unsigned short)65532), ((unsigned short)16127)))) > (((/* implicit */int) var_6))))))))));
                        }
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            var_29 = ((/* implicit */_Bool) arr_11 [i_1] [i_1] [i_1]);
                            var_30 ^= ((/* implicit */short) var_2);
                        }
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (long long int i_8 = 0; i_8 < 16; i_8 += 1) 
        {
            for (short i_9 = 0; i_9 < 16; i_9 += 2) 
            {
                {
                    var_31 *= ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)-24))))), (arr_20 [i_1] [i_1] [i_1] [i_8] [i_9])))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */long long int) arr_34 [(unsigned char)0] [i_8] [i_9])) / (var_4))) | (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_28 [(unsigned short)15] [i_8] [(unsigned short)15] [(signed char)6] [11U] [i_1])) : (((/* implicit */int) arr_27 [i_9] [i_8] [i_8] [(unsigned short)11] [i_1])))))))) : (((((/* implicit */_Bool) max((((/* implicit */long long int) arr_17 [i_9])), (-2098492152076698226LL)))) ? (((((/* implicit */_Bool) (signed char)122)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (arr_3 [i_9] [i_1]))) : (435240515066087816ULL))));
                    var_32 &= ((/* implicit */long long int) min((((((/* implicit */int) arr_19 [i_1] [(short)12] [i_9] [i_8] [i_8])) | (((/* implicit */int) (unsigned char)197)))), (((/* implicit */int) var_3))));
                    var_33 *= ((/* implicit */signed char) ((((arr_3 [i_1] [(unsigned short)5]) - (arr_3 [i_9] [i_1]))) - (max((var_13), (((/* implicit */unsigned long long int) (unsigned char)177))))));
                }
            } 
        } 
        var_34 ^= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_21 [(short)1] [i_1] [i_1] [i_1] [i_1] [i_1])) == (((/* implicit */int) arr_17 [i_1])))))) + (((((/* implicit */_Bool) min((var_12), (var_12)))) ? (((/* implicit */long long int) max((3891224434U), (((/* implicit */unsigned int) var_10))))) : ((+(var_4)))))));
        var_35 += ((/* implicit */unsigned short) min((((((/* implicit */_Bool) (signed char)10)) ? (((((/* implicit */int) (unsigned short)65523)) & (((/* implicit */int) (signed char)48)))) : (((/* implicit */int) (unsigned short)20584)))), (((((/* implicit */_Bool) (unsigned short)33114)) ? (((/* implicit */int) (unsigned short)65528)) : (563966881)))));
        var_36 &= ((/* implicit */int) var_18);
    }
    for (unsigned char i_10 = 0; i_10 < 21; i_10 += 3) /* same iter space */
    {
        arr_38 [i_10] [20LL] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_37 [i_10]))) * (16966742385838755119ULL))) * (((/* implicit */unsigned long long int) (+(var_17))))))) ? (((/* implicit */int) arr_37 [i_10])) : (((/* implicit */int) max((((/* implicit */short) var_18)), (arr_35 [12U]))))));
        arr_39 [i_10] = ((/* implicit */unsigned short) ((22U) > (((/* implicit */unsigned int) -563966881))));
        /* LoopSeq 2 */
        for (unsigned short i_11 = 0; i_11 < 21; i_11 += 1) 
        {
            var_37 = ((/* implicit */unsigned int) max((var_37), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((arr_41 [14] [i_11]) | (((/* implicit */int) arr_42 [(short)4] [(short)4])))), (((arr_41 [(signed char)0] [(signed char)16]) - (((/* implicit */int) (signed char)127))))))) ? (arr_41 [(unsigned short)20] [i_10]) : (((((/* implicit */_Bool) arr_35 [(signed char)0])) ? (-2147483647) : (((/* implicit */int) var_0)))))))));
            var_38 = ((/* implicit */signed char) min((var_38), (((/* implicit */signed char) (~(((/* implicit */int) ((var_1) > (((/* implicit */unsigned int) arr_41 [(short)10] [(short)10]))))))))));
            /* LoopNest 2 */
            for (unsigned short i_12 = 0; i_12 < 21; i_12 += 4) 
            {
                for (unsigned short i_13 = 2; i_13 < 19; i_13 += 4) 
                {
                    {
                        var_39 = ((/* implicit */signed char) max((var_39), (((/* implicit */signed char) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_44 [i_13] [i_12])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_15)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)4)) <= (((/* implicit */int) arr_37 [i_10])))))) : (((var_1) & (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))))))));
                        arr_49 [(unsigned short)1] [i_10] = ((/* implicit */long long int) ((short) ((((/* implicit */_Bool) 563966881)) ? (((/* implicit */int) (short)-2572)) : (((/* implicit */int) (_Bool)1)))));
                        /* LoopSeq 1 */
                        for (unsigned short i_14 = 0; i_14 < 21; i_14 += 1) 
                        {
                            var_40 = ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)85)) * (((/* implicit */int) ((((((/* implicit */_Bool) (short)-32748)) && (((/* implicit */_Bool) (signed char)(-127 - 1))))) && ((!(((/* implicit */_Bool) var_18)))))))));
                            arr_52 [i_10] [i_11] [i_12] [i_13] [i_10] = var_8;
                            var_41 = ((/* implicit */signed char) ((((/* implicit */int) max((var_6), (arr_51 [i_10] [(unsigned char)12] [i_13 - 1] [i_14] [i_14] [i_14])))) & (((/* implicit */int) (!(((/* implicit */_Bool) arr_44 [i_11] [i_11])))))));
                            arr_53 [i_14] [i_10] [(short)3] [i_10] [(_Bool)1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (((_Bool)1) ? (18011503558643463812ULL) : (((/* implicit */unsigned long long int) 2436405046U)))))));
                            arr_54 [i_10] [i_11] [i_10] [i_13] [i_14] = var_6;
                        }
                        var_42 += (+(((/* implicit */int) (signed char)(-127 - 1))));
                    }
                } 
            } 
            var_43 |= ((/* implicit */unsigned long long int) var_0);
        }
        for (signed char i_15 = 1; i_15 < 20; i_15 += 2) 
        {
            /* LoopNest 3 */
            for (int i_16 = 0; i_16 < 21; i_16 += 4) 
            {
                for (unsigned int i_17 = 0; i_17 < 21; i_17 += 1) 
                {
                    for (unsigned short i_18 = 0; i_18 < 21; i_18 += 4) 
                    {
                        {
                            arr_68 [i_16] |= ((/* implicit */unsigned char) arr_62 [i_15] [i_15] [i_16] [i_15 - 1] [i_18] [(short)14]);
                            var_44 ^= ((/* implicit */unsigned int) arr_41 [i_18] [(short)16]);
                        }
                    } 
                } 
            } 
            arr_69 [i_10] [i_10] [4U] &= ((/* implicit */short) 4294967295U);
        }
    }
    for (unsigned char i_19 = 0; i_19 < 21; i_19 += 3) /* same iter space */
    {
        arr_72 [i_19] = ((/* implicit */unsigned short) ((_Bool) (short)5985));
        /* LoopNest 3 */
        for (signed char i_20 = 0; i_20 < 21; i_20 += 3) 
        {
            for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
            {
                for (int i_22 = 0; i_22 < 21; i_22 += 1) 
                {
                    {
                        arr_81 [i_19] [(short)16] = ((/* implicit */long long int) ((max((arr_61 [i_22] [(_Bool)1] [i_21] [i_21] [(unsigned char)12] [i_19]), (arr_61 [i_19] [i_20] [i_20] [i_20] [(unsigned short)1] [3ULL]))) ? (((arr_61 [(unsigned char)6] [i_20] [i_21] [(unsigned char)6] [i_20] [i_19]) ? (((/* implicit */int) arr_61 [i_19] [i_20] [i_21] [i_21] [i_22] [i_22])) : (((/* implicit */int) arr_61 [(_Bool)1] [i_20] [i_21] [(signed char)6] [i_20] [i_21])))) : (((/* implicit */int) ((((/* implicit */int) arr_61 [i_22] [i_21] [i_20] [i_19] [i_19] [9U])) <= (((/* implicit */int) arr_61 [i_20] [i_20] [i_21] [i_22] [i_21] [i_21])))))));
                        arr_82 [i_19] [i_21] [(signed char)13] [(signed char)13] [i_19] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((short) arr_65 [i_19] [i_20] [i_21] [i_22]))), ((~(arr_43 [i_19])))));
                        arr_83 [i_19] [i_20] [(_Bool)1] [i_19] = ((/* implicit */int) (_Bool)1);
                    }
                } 
            } 
        } 
        arr_84 [i_19] [6ULL] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) var_0)), (min((((((/* implicit */_Bool) 956913087)) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)12898))))), (((/* implicit */unsigned long long int) max((var_11), (((/* implicit */long long int) var_10)))))))));
        var_45 = ((/* implicit */short) (+(((/* implicit */int) var_18))));
    }
}
