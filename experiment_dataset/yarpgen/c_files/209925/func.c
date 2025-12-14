/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209925
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209925 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209925
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
    var_20 &= ((/* implicit */unsigned short) var_15);
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 14; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (unsigned short i_2 = 2; i_2 < 13; i_2 += 1) 
            {
                {
                    var_21 = ((/* implicit */unsigned char) ((((/* implicit */long long int) min((arr_4 [i_0 - 1]), (arr_4 [i_0 + 1])))) & (arr_5 [i_1])));
                    /* LoopSeq 3 */
                    for (long long int i_3 = 0; i_3 < 17; i_3 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (long long int i_4 = 0; i_4 < 17; i_4 += 3) 
                        {
                            var_22 *= ((/* implicit */signed char) max((((/* implicit */unsigned short) ((signed char) arr_10 [i_0 - 1] [i_2 + 4] [i_2 + 4] [i_4]))), (((unsigned short) ((((/* implicit */_Bool) 7343735976580042502LL)) ? (((/* implicit */unsigned long long int) 1941607278)) : (arr_1 [14ULL]))))));
                            var_23 = ((/* implicit */short) 7343735976580042506LL);
                            var_24 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [(short)14] [i_1] [i_2] [i_4])) ? (min((((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])), (2074472103196405569ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_0 + 3] [i_2 - 2]))))))));
                        }
                        for (long long int i_5 = 0; i_5 < 17; i_5 += 4) 
                        {
                            arr_16 [i_0] [i_0] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned long long int) 0);
                            var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) (+(min((((((/* implicit */_Bool) 1941607278)) ? (3208568226U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)14980))))), (arr_13 [i_0 + 2] [i_0 + 1] [i_0 + 3] [i_2 - 2] [i_2 + 3] [i_2 - 2] [i_2 - 2]))))))));
                            var_26 = ((/* implicit */long long int) (~(max((arr_9 [i_0] [i_0] [i_1] [i_2 - 2] [i_3] [3ULL]), (((/* implicit */unsigned int) (short)-23))))));
                        }
                        var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) ((short) ((max((arr_11 [i_0] [i_0] [i_0] [i_0] [i_3]), (var_15))) + (((/* implicit */long long int) max((arr_9 [i_0] [i_0] [i_2 + 2] [i_2] [i_3] [16U]), (((/* implicit */unsigned int) arr_15 [i_0] [i_0] [i_2] [i_3] [i_1] [i_2] [i_2])))))))))));
                    }
                    for (unsigned long long int i_6 = 0; i_6 < 17; i_6 += 1) 
                    {
                        var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (((/* implicit */int) ((unsigned char) arr_1 [i_0 - 1]))) : (((/* implicit */int) var_6))));
                        var_29 *= ((/* implicit */unsigned char) ((((/* implicit */int) min((arr_7 [i_6] [i_2 + 3] [i_2 + 4] [i_0 + 1]), (arr_7 [i_2] [i_2 - 1] [i_2 + 1] [i_0 - 1])))) / (((/* implicit */int) (unsigned char)10))));
                    }
                    for (unsigned char i_7 = 1; i_7 < 13; i_7 += 2) 
                    {
                        var_30 *= ((/* implicit */int) (-(min((min((((/* implicit */unsigned long long int) (_Bool)0)), (arr_2 [i_2 - 1] [i_2 - 1]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_21 [i_1] [i_0] [(unsigned short)4] [i_0] [i_1])) || (((/* implicit */_Bool) arr_20 [(signed char)14])))))))));
                        var_31 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1086399075U)) ? ((-(((/* implicit */int) var_13)))) : (((((int) var_0)) / ((-(((/* implicit */int) arr_7 [(unsigned short)11] [(unsigned short)11] [i_0] [(unsigned short)13]))))))));
                    }
                    arr_24 [i_0] [i_1] [i_2] = ((/* implicit */short) ((unsigned int) max((arr_11 [i_2 + 3] [i_0 + 1] [i_2] [i_2] [i_2]), (((/* implicit */long long int) arr_6 [i_0 + 2] [i_2 + 3] [i_0 + 2])))));
                    var_32 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_20 [i_0]))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_8 = 0; i_8 < 12; i_8 += 4) 
    {
        for (unsigned char i_9 = 3; i_9 < 8; i_9 += 1) 
        {
            for (unsigned char i_10 = 2; i_10 < 11; i_10 += 4) 
            {
                {
                    var_33 = ((/* implicit */unsigned char) min((var_33), (((/* implicit */unsigned char) arr_17 [i_8] [i_8] [i_8] [i_8]))));
                    var_34 += ((min((arr_31 [i_8] [i_8] [i_8] [i_8]), (((/* implicit */long long int) arr_0 [i_9 + 2] [i_9])))) * (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_8] [i_9] [i_9] [i_10 - 1] [i_10] [i_10] [i_10]))));
                    var_35 = ((/* implicit */unsigned char) var_3);
                    var_36 = ((/* implicit */_Bool) ((((arr_28 [i_8]) / (((/* implicit */long long int) ((/* implicit */int) ((short) arr_19 [15LL])))))) ^ (((/* implicit */long long int) ((/* implicit */int) ((short) arr_23 [i_10] [i_9] [i_10] [i_9] [i_10] [i_10]))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_11 = 2; i_11 < 11; i_11 += 4) 
                    {
                        for (unsigned int i_12 = 1; i_12 < 11; i_12 += 4) 
                        {
                            {
                                var_37 = ((/* implicit */signed char) -7343735976580042518LL);
                                var_38 = ((/* implicit */signed char) ((unsigned char) arr_21 [(unsigned short)4] [i_9 - 3] [i_10] [i_10] [i_10]));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_13 = 0; i_13 < 21; i_13 += 2) 
    {
        var_39 = ((/* implicit */unsigned short) arr_38 [i_13] [i_13]);
        arr_40 [i_13] = ((/* implicit */unsigned long long int) ((unsigned short) (-(((/* implicit */int) (_Bool)1)))));
    }
    for (unsigned char i_14 = 0; i_14 < 15; i_14 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_15 = 1; i_15 < 13; i_15 += 3) 
        {
            for (unsigned short i_16 = 0; i_16 < 15; i_16 += 4) 
            {
                {
                    var_40 = ((/* implicit */short) min(((+(3208568226U))), (max((max((3555124974U), (((/* implicit */unsigned int) arr_14 [i_14] [i_14] [i_15 - 1] [i_15] [i_16] [i_16] [i_16])))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_18 [i_14] [i_15] [i_16] [7U] [i_16])) ? (((/* implicit */int) (unsigned short)22953)) : (1941607278))))))));
                    /* LoopNest 2 */
                    for (signed char i_17 = 0; i_17 < 15; i_17 += 4) 
                    {
                        for (unsigned long long int i_18 = 0; i_18 < 15; i_18 += 1) 
                        {
                            {
                                var_41 = ((/* implicit */unsigned short) min((arr_41 [i_15]), (((/* implicit */unsigned int) arr_7 [i_15 + 1] [i_15 - 1] [i_15 + 2] [i_15 + 2]))));
                                var_42 |= ((/* implicit */short) min(((!(((/* implicit */_Bool) ((((-7343735976580042490LL) + (9223372036854775807LL))) >> (((arr_4 [i_16]) - (1815932232U)))))))), ((!(((/* implicit */_Bool) (unsigned char)253))))));
                                var_43 = ((/* implicit */unsigned short) ((min((arr_13 [i_18] [i_18] [i_18] [i_18] [i_18] [i_18] [i_18]), (((/* implicit */unsigned int) (!(arr_12 [i_18] [16U] [i_16] [16U] [i_14])))))) & (max((((/* implicit */unsigned int) arr_52 [i_18] [i_18] [i_16] [i_17] [8U] [i_15 - 1])), (((134217728U) % (((/* implicit */unsigned int) ((/* implicit */int) arr_49 [i_18] [i_14] [4ULL] [i_15 + 1] [i_14])))))))));
                                var_44 = ((/* implicit */unsigned int) max((var_44), (((/* implicit */unsigned int) (((((-((+(((/* implicit */int) var_0)))))) + (2147483647))) << (((((arr_44 [i_14] [i_16]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_22 [i_15])))))) - (11725774771174837119ULL))))))));
                                var_45 += ((/* implicit */unsigned int) ((max((((/* implicit */unsigned long long int) ((var_3) * (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))), (((arr_2 [i_14] [i_18]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_14] [i_15] [i_16] [i_16] [i_17] [i_16] [i_15]))))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((((arr_4 [i_14]) >= (((/* implicit */unsigned int) ((/* implicit */int) var_2))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 1086399071U)) ? (((/* implicit */long long int) -800939214)) : (arr_5 [i_18]))))))))));
                            }
                        } 
                    } 
                    arr_54 [i_14] [i_15] [i_14] = ((/* implicit */unsigned int) (-(max((min((var_16), (((/* implicit */unsigned long long int) arr_41 [i_14])))), (((/* implicit */unsigned long long int) ((unsigned int) arr_52 [i_14] [i_14] [i_14] [i_15] [i_15] [i_16])))))));
                }
            } 
        } 
        var_46 = min((((((/* implicit */_Bool) arr_15 [i_14] [i_14] [8] [i_14] [i_14] [i_14] [i_14])) ? (((/* implicit */unsigned long long int) ((unsigned int) arr_44 [i_14] [i_14]))) : (min((arr_2 [i_14] [i_14]), (((/* implicit */unsigned long long int) arr_14 [i_14] [i_14] [i_14] [i_14] [i_14] [i_14] [i_14])))))), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) -7343735976580042504LL)) ? (((/* implicit */int) arr_7 [i_14] [i_14] [(_Bool)1] [9LL])) : (var_10))) > ((~(((/* implicit */int) arr_52 [i_14] [i_14] [i_14] [(short)6] [i_14] [i_14]))))))));
    }
}
