/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35045
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35045 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35045
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
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 24; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 24; i_2 += 4) 
                {
                    for (unsigned short i_3 = 1; i_3 < 24; i_3 += 4) 
                    {
                        {
                            arr_10 [i_1] [18] [(short)3] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_12))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) ^ (((/* implicit */int) (signed char)39))))) : ((((_Bool)1) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))))) && (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_0 [23LL]))))) & (arr_9 [i_1 - 1] [i_1] [i_3 + 1]))))));
                            arr_11 [i_0] [i_0] [i_1] [i_1] [i_1] [i_3 - 1] = ((/* implicit */unsigned char) ((unsigned int) (-(((/* implicit */int) arr_3 [i_1 - 1] [i_3 + 1])))));
                            arr_12 [(unsigned char)15] [(signed char)11] [i_1] [12] = ((/* implicit */unsigned long long int) (~(((int) ((int) (short)-4413)))));
                            arr_13 [i_0] [(short)20] [i_0] [i_1] = ((/* implicit */signed char) 8914553313813065052ULL);
                        }
                    } 
                } 
                var_13 = ((((((/* implicit */_Bool) min((arr_5 [16U] [i_1 + 1] [i_1]), (((/* implicit */unsigned char) var_6))))) ? (max((((/* implicit */unsigned int) arr_0 [i_1 + 1])), (arr_8 [(unsigned short)6] [i_1 + 1]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1] [i_1 - 1] [i_1]))))) | (((/* implicit */unsigned int) max((((((/* implicit */int) (short)-4396)) / (((/* implicit */int) arr_2 [i_0] [i_1])))), (((/* implicit */int) arr_3 [i_1 - 1] [i_1 + 1]))))));
                arr_14 [i_1] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_1 [i_1]))));
            }
        } 
    } 
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_4 = 2; i_4 < 11; i_4 += 4) 
    {
        arr_19 [i_4 + 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (arr_8 [i_4 - 1] [i_4 - 2])))) ? (((unsigned int) arr_3 [3] [i_4 - 2])) : (14U)));
        arr_20 [i_4 + 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_4 + 1] [i_4 - 2])) ? ((+(((/* implicit */int) arr_2 [i_4] [9])))) : (((int) (signed char)-67))));
        arr_21 [i_4 + 1] &= (+(((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_4 - 1] [4LL]))) : (arr_4 [13] [i_4]))));
        var_14 = ((int) arr_17 [i_4 - 1]);
    }
    /* vectorizable */
    for (signed char i_5 = 3; i_5 < 19; i_5 += 2) 
    {
        /* LoopNest 3 */
        for (int i_6 = 2; i_6 < 21; i_6 += 2) 
        {
            for (unsigned char i_7 = 2; i_7 < 21; i_7 += 2) 
            {
                for (unsigned char i_8 = 0; i_8 < 22; i_8 += 1) 
                {
                    {
                        arr_33 [i_7 - 2] [(unsigned char)4] [i_5] [i_7 - 1] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_8] [i_7 - 1] [i_6] [i_5]))) > (4294967279U)));
                        /* LoopSeq 1 */
                        for (long long int i_9 = 3; i_9 < 20; i_9 += 4) 
                        {
                            arr_37 [i_6 + 1] [i_5] [i_6 - 2] [i_6] [(short)14] [i_6 + 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_30 [i_9] [i_9 - 1] [i_6 - 2] [i_5 - 2] [i_5] [i_5])) ? (((/* implicit */int) arr_30 [i_9 - 2] [i_9 + 1] [i_6 + 1] [i_5 + 2] [(unsigned char)3] [i_5 + 3])) : (((/* implicit */int) (short)4403))));
                            arr_38 [i_5 - 1] [i_6] [i_7 + 1] [i_5] [i_9 + 1] = ((/* implicit */short) var_9);
                            var_15 = ((int) arr_9 [(signed char)17] [i_5] [i_7 - 2]);
                            var_16 = ((/* implicit */unsigned int) var_9);
                        }
                        arr_39 [i_5 + 1] [i_5] [(signed char)13] [i_5 + 1] [(signed char)19] [i_5] = ((/* implicit */unsigned short) (((((-(((/* implicit */int) var_2)))) + (2147483647))) << (((((var_6) ? (arr_25 [i_7 - 1] [(_Bool)1]) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [(unsigned short)20] [i_6 - 1] [i_7 + 1] [6U] [i_7 + 1]))))) - (4691962605014889369LL)))));
                    }
                } 
            } 
        } 
        arr_40 [(unsigned short)4] |= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_6 [i_5 - 3] [i_5 + 3] [i_5 + 3])) ? (arr_6 [i_5 + 2] [i_5 + 2] [i_5 + 2]) : (((/* implicit */int) arr_30 [i_5] [20] [i_5 + 1] [i_5 - 2] [(unsigned short)10] [i_5 - 1]))));
    }
    for (signed char i_10 = 3; i_10 < 9; i_10 += 3) 
    {
        arr_43 [(unsigned short)0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_32 [i_10] [14U] [i_10] [i_10 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [15] [i_10 - 1] [i_10] [(unsigned short)18] [i_10 - 3]))) : (-1281732518573984255LL)))) ? (((/* implicit */int) arr_35 [i_10 - 2])) : ((-(-1147937675)))))) ? (((/* implicit */unsigned int) (((-(arr_29 [i_10 - 3] [18ULL] [i_10] [18ULL] [(unsigned char)2]))) << (((((long long int) (signed char)20)) - (20LL)))))) : (((((/* implicit */_Bool) arr_41 [7] [i_10 - 2])) ? (arr_22 [i_10 - 3] [i_10]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)24632)) ? (((/* implicit */int) (short)-31466)) : (((/* implicit */int) (unsigned short)52042))))))));
        var_17 = ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned short)33218)) ? (((/* implicit */int) arr_26 [(signed char)8] [(short)0] [(short)6])) : (-1147937663))) & (((/* implicit */int) (unsigned char)195))))) ? (((((((/* implicit */int) (unsigned short)11)) >= (572802168))) ? (((/* implicit */int) max((((/* implicit */short) arr_5 [i_10] [i_10 - 3] [(signed char)10])), (arr_42 [i_10])))) : (((/* implicit */int) arr_2 [i_10 - 3] [i_10])))) : (((/* implicit */int) max((((/* implicit */short) arr_26 [12ULL] [i_10 - 1] [i_10])), (arr_24 [2U])))));
        arr_44 [2] [i_10 - 1] = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1147937651)) ? (arr_29 [i_10 - 3] [12ULL] [14U] [12ULL] [(unsigned char)6]) : (((/* implicit */int) (short)-28353))))) ? (((/* implicit */int) arr_34 [4] [(_Bool)1] [(signed char)6] [i_10 + 1] [(unsigned short)18] [i_10 - 3])) : (((/* implicit */int) max((((/* implicit */short) arr_7 [i_10 - 2] [i_10] [i_10 - 3] [(unsigned char)11] [i_10])), ((short)28335))))))), (((((((/* implicit */_Bool) (short)28349)) ? (281476978U) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))) % (((/* implicit */unsigned int) ((/* implicit */int) arr_31 [i_10 - 3] [(signed char)6] [(_Bool)1] [i_10])))))));
    }
    var_18 = ((/* implicit */long long int) var_3);
    var_19 = ((/* implicit */_Bool) 2072163580);
}
