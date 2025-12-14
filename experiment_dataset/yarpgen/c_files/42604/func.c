/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42604
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42604 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42604
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
    var_11 = ((/* implicit */long long int) min((((/* implicit */int) ((unsigned short) min(((short)-15700), (((/* implicit */short) var_4)))))), ((+(((/* implicit */int) ((signed char) var_3)))))));
    var_12 = ((/* implicit */int) ((((/* implicit */_Bool) -83741097936623716LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_2)));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 1; i_0 < 17; i_0 += 4) 
    {
        arr_2 [0LL] = (signed char)-73;
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                for (signed char i_3 = 3; i_3 < 16; i_3 += 4) 
                {
                    {
                        var_13 = ((/* implicit */signed char) ((short) (signed char)63));
                        var_14 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_3 - 1] [i_0 + 1]))));
                        arr_10 [i_0] [i_1] [i_1] [i_2] [i_1] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)4924))))) ? ((-(((/* implicit */int) (signed char)7)))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_7 [(short)13] [i_1] [i_1] [i_3])) || (((/* implicit */_Bool) arr_8 [i_0 + 1] [(signed char)11] [i_0] [i_1] [(short)4] [(signed char)11])))))));
                        /* LoopSeq 1 */
                        for (long long int i_4 = 0; i_4 < 19; i_4 += 4) 
                        {
                            arr_14 [i_4] [i_3] [i_2] [i_1] [i_0] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) var_9)) ? (-83741097936623704LL) : (((/* implicit */long long int) ((/* implicit */int) (short)21863)))))));
                            var_15 -= ((/* implicit */short) ((int) (short)8651));
                        }
                    }
                } 
            } 
            arr_15 [(signed char)12] [14] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_0] [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 1] [i_0 + 1])) && (((/* implicit */_Bool) var_8))));
            /* LoopSeq 2 */
            for (unsigned short i_5 = 0; i_5 < 19; i_5 += 2) 
            {
                arr_18 [i_0] [i_1] [i_5] [i_0 - 1] = ((/* implicit */short) (~(arr_3 [i_0 + 1] [i_0 + 2])));
                arr_19 [(short)10] [i_5] [i_1] [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) arr_8 [i_0] [i_1] [i_1] [i_1] [i_0 - 1] [7LL]))));
                /* LoopSeq 3 */
                for (signed char i_6 = 2; i_6 < 18; i_6 += 1) 
                {
                    /* LoopSeq 2 */
                    for (short i_7 = 0; i_7 < 19; i_7 += 2) 
                    {
                        arr_27 [i_1] [i_5] = ((/* implicit */short) arr_5 [i_0 + 1] [i_6 - 2] [i_5]);
                        arr_28 [i_0] [i_0] [i_1] [i_5] [i_1] [i_7] = ((((((/* implicit */int) (signed char)84)) >= (((/* implicit */int) arr_23 [i_0])))) ? (((/* implicit */int) arr_17 [i_0] [(unsigned short)8] [i_0] [i_0 + 2])) : (arr_11 [i_7] [i_7] [i_6] [i_5] [i_5] [i_0] [i_0]));
                        arr_29 [i_5] [(signed char)2] [i_7] [i_5] = ((/* implicit */unsigned short) var_9);
                        var_16 = ((/* implicit */long long int) (+(-158396757)));
                        arr_30 [i_1] [i_1] [i_5] [(signed char)5] [i_7] = ((/* implicit */signed char) ((((/* implicit */int) var_0)) & (((/* implicit */int) ((short) -83741097936623716LL)))));
                    }
                    for (unsigned short i_8 = 0; i_8 < 19; i_8 += 1) 
                    {
                        arr_34 [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) arr_7 [i_6] [i_6] [i_5] [i_6])) ? (((/* implicit */int) ((unsigned short) arr_26 [(signed char)0] [i_6] [i_5] [i_1] [(signed char)0]))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_4))))));
                        var_17 = ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) 0)))))));
                        var_18 += ((/* implicit */signed char) ((((/* implicit */_Bool) arr_20 [i_0] [i_6 - 1] [(signed char)2] [i_0 - 1] [i_6 - 1])) ? (((/* implicit */int) arr_17 [i_6 + 1] [i_6 - 1] [(signed char)13] [i_6 - 2])) : (((/* implicit */int) arr_20 [i_0] [i_0] [i_5] [i_0 + 1] [i_6 - 2]))));
                    }
                    var_19 *= ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))) - (((((/* implicit */_Bool) arr_26 [i_0] [i_1] [i_5] [i_0] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_0]))) : (var_2)))));
                    arr_35 [i_6 + 1] [i_0 + 2] [i_1] [i_0 + 2] = ((/* implicit */signed char) ((short) arr_31 [i_6 + 1] [i_1] [i_0] [i_0] [i_6] [i_5] [i_0 + 1]));
                    arr_36 [i_0] [i_1] [i_0] [i_0] [i_6] [i_1] = ((/* implicit */signed char) arr_16 [i_0] [i_0] [i_0]);
                }
                for (signed char i_9 = 0; i_9 < 19; i_9 += 4) 
                {
                    var_20 = ((/* implicit */int) arr_8 [i_9] [(signed char)6] [i_1] [i_0 + 2] [i_0 + 2] [i_0 + 1]);
                    arr_39 [i_9] [i_5] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_31 [i_0] [i_5] [i_1] [i_5] [i_0] [i_5] [i_0 + 1])) || (((/* implicit */_Bool) ((short) arr_26 [i_0] [i_0] [i_1] [(signed char)10] [i_9])))));
                }
                for (long long int i_10 = 0; i_10 < 19; i_10 += 3) 
                {
                    var_21 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)73)) ? (((/* implicit */int) arr_23 [i_1])) : (arr_3 [i_0] [i_1])))) * (((((/* implicit */_Bool) arr_21 [i_0 + 2])) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (-83741097936623704LL)))));
                    arr_43 [i_0] [i_1] [i_0] [i_5] [i_10] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (short)354))));
                    arr_44 [i_0 + 1] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-4338)) ? (-83741097936623716LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)18)))))) ? (((/* implicit */int) arr_37 [i_0 - 1] [i_0] [i_0 + 1] [i_0] [i_0 - 1] [i_0 + 1])) : (((/* implicit */int) arr_8 [i_0 + 1] [i_0] [i_0] [i_0 + 2] [i_0 + 1] [i_0 + 2]))));
                }
            }
            for (signed char i_11 = 0; i_11 < 19; i_11 += 3) 
            {
                arr_49 [i_11] [i_11] = ((-83741097936623716LL) + (((/* implicit */long long int) ((/* implicit */int) (short)-15136))));
                /* LoopSeq 3 */
                for (signed char i_12 = 0; i_12 < 19; i_12 += 2) 
                {
                    arr_52 [i_0 + 1] [i_1] [i_11] [(signed char)5] [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) var_2))));
                    arr_53 [i_0] [i_1] [i_11] [(short)10] = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)60627)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (short)255)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_48 [i_12] [i_0 - 1] [(short)4] [i_0 - 1]))))) : (arr_16 [i_0] [i_1] [i_11])));
                }
                for (long long int i_13 = 0; i_13 < 19; i_13 += 3) 
                {
                    arr_56 [i_0] = ((/* implicit */signed char) (-((-(((/* implicit */int) (unsigned short)35071))))));
                    /* LoopSeq 2 */
                    for (signed char i_14 = 0; i_14 < 19; i_14 += 3) 
                    {
                        arr_59 [i_14] [i_14] [i_13] [i_1] [i_1] [i_0] = ((/* implicit */long long int) arr_21 [i_0 + 1]);
                        arr_60 [i_0] [i_0] [i_14] [i_14] [i_14] [i_13] = ((/* implicit */unsigned short) (-(((/* implicit */int) (signed char)74))));
                    }
                    for (long long int i_15 = 0; i_15 < 19; i_15 += 4) 
                    {
                        var_22 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_23 [i_13])) / (((/* implicit */int) arr_38 [i_0 - 1]))));
                        arr_65 [i_0] [i_1] [i_1] [i_13] [i_15] [i_15] = ((/* implicit */long long int) var_3);
                        var_23 += ((/* implicit */signed char) (-((-(((/* implicit */int) (signed char)41))))));
                        arr_66 [i_11] [i_11] = ((/* implicit */long long int) (((~(((/* implicit */int) var_3)))) / ((~(arr_33 [(unsigned short)11] [i_1] [i_1] [i_1] [i_1])))));
                    }
                }
                for (unsigned short i_16 = 0; i_16 < 19; i_16 += 1) 
                {
                    arr_69 [i_11] [i_16] = ((/* implicit */int) (signed char)127);
                    arr_70 [i_16] = ((/* implicit */short) ((signed char) var_2));
                    var_24 = ((((/* implicit */_Bool) arr_38 [i_0])) ? (arr_62 [i_0] [i_0] [i_0 - 1] [i_0 + 1] [i_0] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_54 [i_0] [i_1] [i_11] [i_16]))));
                    var_25 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */int) var_10)) ^ (arr_55 [i_0] [i_1] [i_11] [i_16] [i_16] [i_16])))) | ((-(83741097936623719LL)))));
                }
            }
            arr_71 [i_0] = ((/* implicit */int) arr_58 [i_1] [i_0 + 2] [i_1] [i_1] [i_1]);
            arr_72 [i_0] [i_1] = var_3;
        }
        var_26 = arr_41 [(short)10] [i_0] [i_0] [i_0] [i_0 + 1];
        arr_73 [i_0 + 1] = ((/* implicit */short) ((signed char) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) (short)-1)))));
    }
}
