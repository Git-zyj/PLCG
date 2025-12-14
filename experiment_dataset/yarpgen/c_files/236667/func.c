/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236667
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236667 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236667
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
    var_20 = ((/* implicit */_Bool) var_16);
    var_21 ^= ((/* implicit */int) ((((((/* implicit */_Bool) var_16)) ? (max((var_1), (((/* implicit */unsigned long long int) -2135362881)))) : (((/* implicit */unsigned long long int) var_14)))) | (var_1)));
    var_22 = var_18;
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        arr_2 [i_0] = ((arr_1 [i_0]) % (arr_1 [i_0]));
        var_23 = ((/* implicit */unsigned char) (-(arr_1 [i_0])));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)46512)) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-64))) <= (var_15)))) : (((/* implicit */int) (signed char)66))));
                    arr_10 [i_0] [i_0] [(_Bool)1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_7))));
                    var_24 = ((/* implicit */unsigned short) ((arr_4 [i_0] [i_1] [i_2]) <= (((/* implicit */unsigned long long int) 1038908612U))));
                    /* LoopSeq 3 */
                    for (long long int i_3 = 2; i_3 < 21; i_3 += 4) 
                    {
                        arr_15 [i_0] [i_1] [19U] [(_Bool)1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (2135362902) : (((/* implicit */int) arr_6 [i_3] [8] [i_3 + 1] [i_3 + 2]))));
                        var_25 = ((/* implicit */unsigned int) ((arr_5 [i_1] [i_1]) ? (((((/* implicit */_Bool) -1549826001)) ? (-2135362881) : (((/* implicit */int) var_9)))) : ((~(((/* implicit */int) (_Bool)1))))));
                        arr_16 [i_0] [i_0] [i_2] [i_3] = ((int) arr_8 [i_0] [i_0] [i_0]);
                        var_26 = ((/* implicit */unsigned char) var_18);
                    }
                    for (int i_4 = 0; i_4 < 23; i_4 += 4) 
                    {
                        arr_19 [i_0] [i_1] [i_1] [8ULL] [i_4] = ((int) arr_5 [i_0] [i_2]);
                        arr_20 [6ULL] [i_1] [i_2] [i_4] = ((/* implicit */int) ((unsigned int) ((793367641) << (((459381563) - (459381563))))));
                        arr_21 [i_2] [(unsigned char)9] = ((/* implicit */signed char) ((unsigned int) (~(var_19))));
                        arr_22 [i_0] [i_1] [i_2] [(_Bool)1] &= ((/* implicit */unsigned short) ((long long int) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0]));
                    }
                    for (long long int i_5 = 1; i_5 < 21; i_5 += 4) 
                    {
                        arr_25 [i_5] [i_2] [i_2] [i_1] [(short)0] = ((var_2) ? (((/* implicit */int) arr_12 [i_5 + 1] [i_1] [i_1] [19ULL] [(_Bool)1] [i_5])) : (((/* implicit */int) (unsigned char)54)));
                        /* LoopSeq 2 */
                        for (unsigned char i_6 = 0; i_6 < 23; i_6 += 3) 
                        {
                            var_27 *= ((/* implicit */_Bool) ((signed char) (unsigned short)11508));
                            arr_29 [i_0] [i_5] [(unsigned short)15] [(unsigned short)8] [i_6] = ((/* implicit */signed char) ((unsigned int) arr_24 [i_6] [i_5 - 1] [15LL] [i_5 - 1] [i_5 + 2] [i_5 - 1]));
                            arr_30 [i_0] [19U] [19U] [i_5] [(unsigned short)10] [i_6] = ((/* implicit */unsigned short) 459381567);
                        }
                        for (int i_7 = 0; i_7 < 23; i_7 += 3) 
                        {
                            arr_35 [i_5] [i_1] [i_1] = ((/* implicit */unsigned char) ((_Bool) (~(var_3))));
                            arr_36 [i_2] [i_5] = ((/* implicit */int) arr_7 [(short)8] [i_0] [i_0] [i_0]);
                            var_28 = ((/* implicit */unsigned int) arr_24 [i_0] [i_0] [i_2] [i_2] [8U] [i_7]);
                        }
                        /* LoopSeq 1 */
                        for (signed char i_8 = 3; i_8 < 21; i_8 += 3) 
                        {
                            arr_39 [14U] [(unsigned short)20] [i_5] [i_5] [i_0] [i_0] = ((/* implicit */unsigned int) ((var_18) ^ (arr_13 [(_Bool)1] [(unsigned short)15] [(unsigned short)15] [(_Bool)1] [i_5 + 1])));
                            arr_40 [i_5] [i_0] [i_1] [i_1] [i_5] [i_5 + 1] [i_5] = ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)57344))));
                            arr_41 [i_2] [i_5] [i_2] [i_5] [i_5] [i_2] = ((/* implicit */int) ((arr_31 [i_5]) / (arr_26 [i_2] [i_5 + 1] [i_8 - 3] [i_5 + 1] [20])));
                            arr_42 [i_0] [i_0] [i_2] [i_5] [(unsigned short)4] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)32763)) ? (((/* implicit */int) arr_32 [i_5 + 1] [4U] [(_Bool)1] [i_5])) : (((/* implicit */int) arr_32 [i_5 + 1] [12U] [i_2] [i_5 + 2]))));
                        }
                        /* LoopSeq 2 */
                        for (unsigned int i_9 = 0; i_9 < 23; i_9 += 1) 
                        {
                            var_29 = ((/* implicit */signed char) max((var_29), (((/* implicit */signed char) arr_7 [i_0] [i_1] [i_2] [i_5]))));
                            arr_47 [i_1] [(signed char)4] [i_5] [18] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_5 + 1] [i_5 + 1] [(signed char)21] [i_1] [11LL])) ? (592963106) : (arr_17 [i_9] [i_5 - 1] [i_5 + 1] [i_5] [i_0])));
                        }
                        for (int i_10 = 0; i_10 < 23; i_10 += 3) 
                        {
                            arr_50 [i_5] [i_5] [i_5] [i_5] [i_5 + 1] [i_10] [i_5] = ((/* implicit */int) ((-1012130563) < (((int) arr_45 [i_0] [i_1] [i_2] [(_Bool)1] [i_10]))));
                            var_30 = ((/* implicit */_Bool) ((((/* implicit */int) var_8)) - (((/* implicit */int) (unsigned short)44144))));
                            var_31 = ((/* implicit */int) max((var_31), (((/* implicit */int) (unsigned short)46512))));
                        }
                    }
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned int i_11 = 3; i_11 < 22; i_11 += 1) 
        {
            for (unsigned short i_12 = 0; i_12 < 23; i_12 += 3) 
            {
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    {
                        var_32 ^= ((/* implicit */signed char) ((901322836500818411ULL) ^ (((/* implicit */unsigned long long int) arr_14 [(unsigned short)15] [i_11] [i_12] [i_11 - 1] [i_13]))));
                        /* LoopSeq 1 */
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                        {
                            var_33 = ((/* implicit */long long int) ((unsigned int) arr_8 [i_0] [i_11 + 1] [i_0]));
                            arr_61 [(signed char)14] [i_13] [i_0] [i_11 + 1] [i_0] &= ((/* implicit */short) 1099511365632LL);
                            var_34 = ((/* implicit */unsigned char) ((((-89647024468142040LL) + (9223372036854775807LL))) << (((((/* implicit */int) arr_32 [i_11 - 1] [i_11 - 2] [(unsigned char)9] [i_11 - 2])) - (57931)))));
                            arr_62 [i_13] [i_13] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)22023))) * (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_16)))));
                            arr_63 [i_13] [i_13] [i_12] [i_12] [i_12] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_19)) && (((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)192)) & (((/* implicit */int) (unsigned short)57354)))))));
                        }
                        arr_64 [i_13] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_31 [i_13])) || (((/* implicit */_Bool) arr_31 [i_13]))));
                        /* LoopSeq 1 */
                        for (signed char i_15 = 0; i_15 < 23; i_15 += 4) 
                        {
                            arr_69 [(_Bool)1] [i_11] [i_13] [i_13] [i_13] [17ULL] [i_13] = ((((/* implicit */long long int) var_3)) != (var_18));
                            var_35 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_55 [i_0] [i_0])) - (var_3)))) ? (arr_67 [i_0] [i_11 - 1] [i_0] [i_15] [i_12]) : (((/* implicit */long long int) var_10))));
                            var_36 = ((/* implicit */signed char) min((var_36), (((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned short)8192)))))));
                            arr_70 [i_12] [i_12] [i_12] [i_12] [i_13] = ((/* implicit */_Bool) arr_38 [(signed char)2] [i_13] [i_12] [i_0] [i_0]);
                        }
                    }
                } 
            } 
        } 
        arr_71 [i_0] = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_59 [i_0] [i_0] [4LL]))) ^ (2929588322U))));
    }
    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
    {
        var_37 = (~(var_3));
        /* LoopSeq 2 */
        /* vectorizable */
        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
        {
            arr_76 [i_16] = ((/* implicit */signed char) (~(arr_1 [i_17])));
            arr_77 [3ULL] [3ULL] = ((/* implicit */int) ((((/* implicit */int) arr_53 [i_17])) >= (((/* implicit */int) arr_53 [i_16]))));
            arr_78 [i_17] [i_17] [i_16] = ((/* implicit */unsigned int) var_0);
            arr_79 [i_16] = ((/* implicit */_Bool) ((unsigned int) 308024753));
        }
        for (unsigned short i_18 = 0; i_18 < 15; i_18 += 2) 
        {
            var_38 -= ((/* implicit */signed char) min((((/* implicit */int) (!(((/* implicit */_Bool) -459490381))))), (((((/* implicit */_Bool) arr_73 [i_16])) ? (((/* implicit */int) arr_32 [i_18] [i_18] [10U] [i_18])) : (min((-308024765), (arr_45 [i_16] [i_18] [i_18] [i_16] [i_16])))))));
            var_39 = ((/* implicit */unsigned long long int) max((var_39), (min((((((/* implicit */_Bool) arr_43 [i_16])) ? (((/* implicit */unsigned long long int) arr_43 [11U])) : (var_1))), (((/* implicit */unsigned long long int) max((arr_43 [i_18]), (arr_43 [1]))))))));
            arr_82 [11] [i_16] = ((((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_32 [i_16] [i_16] [i_18] [i_18]))) ^ (arr_51 [i_16]))) != (max((((/* implicit */unsigned int) arr_66 [i_16] [i_16] [11] [(_Bool)1] [11])), (var_15)))))) >> (((((/* implicit */int) (unsigned short)33956)) - (33925))));
        }
        arr_83 [i_16] [i_16] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_26 [i_16] [i_16] [i_16] [i_16] [3U]) + (((/* implicit */unsigned int) ((/* implicit */int) (signed char)64)))))) ? (((/* implicit */unsigned long long int) ((min((((/* implicit */int) var_17)), (arr_58 [i_16] [i_16] [i_16] [i_16]))) - (((/* implicit */int) arr_32 [(unsigned char)1] [i_16] [i_16] [(unsigned char)15]))))) : (max((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_12 [9] [i_16] [10LL] [(_Bool)1] [(signed char)20] [10]))))), (((((/* implicit */_Bool) var_12)) ? (var_19) : (((/* implicit */unsigned long long int) 2008886551U))))))));
    }
}
