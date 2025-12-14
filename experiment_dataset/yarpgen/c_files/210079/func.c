/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210079
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210079 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210079
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
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) ((short) (signed char)-59));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 14; i_2 += 2) 
            {
                for (int i_3 = 0; i_3 < 16; i_3 += 3) 
                {
                    {
                        arr_13 [i_0] [i_2] [i_0] = ((/* implicit */long long int) max((((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) -3083883424835380667LL)) || ((_Bool)0))))), ((unsigned short)56322)));
                        var_10 = ((/* implicit */short) min((var_10), (((/* implicit */short) (unsigned short)56322))));
                        arr_14 [i_2] [10] [(_Bool)1] [i_2] [i_3] [i_3] = (unsigned short)56322;
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (unsigned short i_4 = 2; i_4 < 15; i_4 += 3) 
            {
                var_11 += (-(((arr_9 [i_1] [i_4] [i_4 + 1]) ? (((/* implicit */int) arr_9 [i_1] [5] [i_4 + 1])) : (((/* implicit */int) arr_9 [i_0] [i_0] [i_4 + 1])))));
                var_12 += ((/* implicit */short) var_4);
            }
            var_13 += ((/* implicit */signed char) min((((/* implicit */int) ((signed char) arr_15 [i_1] [i_0] [i_0] [i_0]))), (((int) (signed char)-1))));
        }
        /* LoopSeq 4 */
        for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 3) 
        {
            var_14 = ((/* implicit */int) (signed char)0);
            /* LoopSeq 2 */
            for (short i_6 = 0; i_6 < 16; i_6 += 2) 
            {
                var_15 += ((/* implicit */signed char) min((((/* implicit */unsigned short) ((short) ((var_5) ^ (((/* implicit */long long int) arr_23 [(signed char)0] [i_5] [i_0])))))), (((unsigned short) min(((unsigned short)9197), ((unsigned short)45580))))));
                arr_24 [i_0] [i_5] [i_0] [i_0] = ((/* implicit */short) max((((/* implicit */long long int) max((arr_4 [i_5]), (arr_12 [i_0] [i_5] [i_5] [i_6] [i_6] [i_6])))), (min((max((((/* implicit */long long int) (unsigned char)124)), (arr_20 [i_6] [i_6]))), (((/* implicit */long long int) ((signed char) arr_12 [i_6] [(unsigned char)11] [i_6] [i_5] [i_0] [(unsigned char)11])))))));
            }
            for (unsigned int i_7 = 0; i_7 < 16; i_7 += 3) 
            {
                /* LoopSeq 2 */
                for (short i_8 = 3; i_8 < 12; i_8 += 3) 
                {
                    var_16 += ((/* implicit */long long int) ((int) min((var_4), (((/* implicit */int) arr_15 [i_0] [i_8 - 3] [i_8 + 1] [i_8 - 3])))));
                    var_17 = ((/* implicit */unsigned short) max((((unsigned int) arr_1 [i_0])), (0U)));
                }
                for (unsigned int i_9 = 4; i_9 < 13; i_9 += 1) 
                {
                    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */int) ((unsigned short) arr_9 [i_0] [i_7] [i_0]))) >> (((((/* implicit */int) ((short) arr_28 [i_5] [i_7]))) - (77)))))) ^ (((long long int) (_Bool)1))));
                    arr_31 [i_0] [i_5] [i_7] [i_5] = ((signed char) ((int) ((((/* implicit */_Bool) arr_10 [i_5] [i_9])) ? (var_7) : (((/* implicit */int) (signed char)17)))));
                    var_19 += ((/* implicit */signed char) min((((arr_22 [i_7] [i_9] [i_9 + 3] [i_9 + 1]) * (arr_22 [i_0] [i_9] [i_9 + 3] [i_9 + 2]))), (((((/* implicit */_Bool) arr_22 [i_0] [i_0] [i_9 + 3] [i_9 + 3])) ? (arr_22 [11LL] [(unsigned char)7] [i_9 + 1] [i_9 - 1]) : (arr_22 [i_9 - 4] [10LL] [i_9 + 1] [i_9 + 3])))));
                    arr_32 [i_5] = ((/* implicit */short) ((long long int) ((long long int) arr_8 [i_0] [i_5] [i_7] [i_9 - 3])));
                }
                /* LoopSeq 1 */
                for (short i_10 = 1; i_10 < 15; i_10 += 3) 
                {
                    var_20 = ((/* implicit */short) var_3);
                    var_21 = ((/* implicit */int) min((var_21), (min((((/* implicit */int) (signed char)-16)), (((((/* implicit */int) arr_12 [i_10 + 1] [i_10] [i_10 - 1] [i_10 - 1] [i_10 + 1] [i_10 + 1])) - (1021853773)))))));
                    arr_35 [i_5] [(unsigned short)11] [i_5] [15U] [i_5] = ((/* implicit */int) ((_Bool) (+(((/* implicit */int) arr_17 [i_0] [14ULL] [i_7] [i_5])))));
                    var_22 = ((/* implicit */signed char) arr_27 [i_0] [i_0] [i_0]);
                }
            }
            /* LoopNest 2 */
            for (long long int i_11 = 1; i_11 < 15; i_11 += 1) 
            {
                for (unsigned long long int i_12 = 4; i_12 < 14; i_12 += 3) 
                {
                    {
                        var_23 = ((/* implicit */int) ((signed char) ((unsigned int) max(((unsigned short)9241), (var_0)))));
                        var_24 += ((/* implicit */_Bool) var_0);
                        arr_42 [i_0] [i_5] [i_11 + 1] [i_12] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_23 [i_11] [i_11 + 1] [i_11 + 1]), (arr_23 [i_0] [i_0] [i_11 + 1])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [7] [i_11] [i_11 + 1] [i_5])) ? (arr_23 [i_0] [i_11 + 1] [i_11 + 1]) : (arr_23 [10] [10] [i_11 + 1]))))));
                    }
                } 
            } 
            /* LoopSeq 3 */
            for (int i_13 = 1; i_13 < 15; i_13 += 2) 
            {
                arr_46 [i_5] [i_5] [i_5] = ((/* implicit */unsigned short) max((var_5), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_0] [i_13 + 1])) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) : (((((/* implicit */_Bool) arr_20 [i_0] [i_13])) ? (arr_18 [i_0] [i_0] [i_13]) : (((/* implicit */int) arr_33 [i_0] [i_0] [i_0] [i_5] [i_13 - 1])))))))));
                var_25 += ((/* implicit */unsigned int) max((((/* implicit */long long int) var_6)), (((long long int) 1255007990907621571LL))));
            }
            for (unsigned int i_14 = 3; i_14 < 14; i_14 += 2) 
            {
                arr_51 [i_5] [i_5] [i_5] = ((/* implicit */signed char) max((((unsigned short) ((((/* implicit */int) (unsigned char)96)) >> (((arr_23 [i_5] [(short)10] [i_5]) - (1891169385U)))))), (((/* implicit */unsigned short) ((signed char) arr_23 [i_14] [i_14 - 2] [i_0])))));
                var_26 = ((/* implicit */unsigned char) max((((((/* implicit */int) arr_27 [i_5] [i_5] [0LL])) | (((/* implicit */int) ((_Bool) arr_29 [i_0] [i_0] [i_5] [i_14] [i_14] [i_14 - 2]))))), (((/* implicit */int) ((short) ((signed char) (unsigned short)41784))))));
            }
            for (short i_15 = 0; i_15 < 16; i_15 += 3) 
            {
                var_27 = ((/* implicit */unsigned short) arr_20 [i_0] [i_0]);
                var_28 += ((/* implicit */signed char) arr_7 [i_5] [i_5] [i_5]);
                arr_55 [i_5] = ((/* implicit */signed char) (!(((/* implicit */_Bool) 1384426229188602259ULL))));
            }
        }
        for (unsigned char i_16 = 0; i_16 < 16; i_16 += 2) 
        {
            var_29 = ((/* implicit */unsigned short) ((signed char) ((unsigned short) max((((/* implicit */long long int) arr_40 [i_16] [i_16] [i_16] [i_16])), (-6111585261370714417LL)))));
            var_30 = ((/* implicit */int) ((unsigned long long int) (~(((int) -5461308229837819870LL)))));
            arr_58 [i_0] = ((/* implicit */long long int) arr_33 [i_0] [i_0] [13] [i_16] [i_0]);
        }
        for (long long int i_17 = 0; i_17 < 16; i_17 += 3) 
        {
            /* LoopNest 2 */
            for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
            {
                for (long long int i_19 = 0; i_19 < 16; i_19 += 3) 
                {
                    {
                        var_31 = ((/* implicit */long long int) ((((/* implicit */int) max((arr_17 [i_19] [i_18] [i_17] [i_19]), (arr_17 [i_0] [i_17] [i_18] [i_19])))) + (((((/* implicit */_Bool) arr_17 [i_17] [i_17] [i_18] [i_19])) ? (((/* implicit */int) arr_17 [i_19] [11] [i_0] [i_19])) : (((/* implicit */int) arr_17 [i_19] [i_18] [i_17] [i_19]))))));
                        /* LoopSeq 2 */
                        for (long long int i_20 = 0; i_20 < 16; i_20 += 3) 
                        {
                            arr_69 [i_19] [i_19] [i_17] [i_19] [i_19] [i_19] = ((/* implicit */short) ((long long int) ((unsigned int) max(((short)-12020), (((/* implicit */short) (signed char)-1))))));
                            arr_70 [i_19] = ((/* implicit */unsigned char) min((((/* implicit */short) ((((/* implicit */_Bool) arr_12 [i_0] [i_17] [i_17] [i_18] [i_19] [i_17])) || (((/* implicit */_Bool) arr_18 [(signed char)3] [i_20] [i_20]))))), (arr_16 [i_19] [i_17] [i_19])));
                        }
                        /* vectorizable */
                        for (int i_21 = 0; i_21 < 16; i_21 += 3) 
                        {
                            arr_73 [i_0] [i_0] [i_17] [i_17] [i_18] [i_19] [i_19] = ((/* implicit */unsigned short) ((unsigned long long int) ((long long int) var_6)));
                            arr_74 [i_21] [i_19] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_0] [i_17] [i_19] [i_19])) ? (((/* implicit */int) arr_17 [i_17] [i_18] [i_19] [i_19])) : (((/* implicit */int) arr_17 [i_17] [i_18] [i_19] [i_19]))));
                        }
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (unsigned short i_22 = 1; i_22 < 15; i_22 += 3) 
            {
                var_32 = ((/* implicit */unsigned short) ((int) ((int) ((int) var_2))));
                arr_77 [i_0] [i_17] [i_22] = ((/* implicit */short) ((_Bool) min((((arr_2 [i_0]) / (((/* implicit */long long int) ((/* implicit */int) arr_62 [i_22] [i_17] [i_0]))))), (((/* implicit */long long int) min((var_3), ((signed char)-1)))))));
                var_33 = ((/* implicit */long long int) ((int) ((((((/* implicit */int) var_1)) / (((/* implicit */int) var_0)))) & (((/* implicit */int) min((arr_50 [i_22 + 1] [i_22] [i_22] [5]), (((/* implicit */unsigned short) arr_76 [i_17] [i_17] [i_17]))))))));
            }
        }
        for (unsigned short i_23 = 0; i_23 < 16; i_23 += 1) 
        {
            var_34 = ((/* implicit */unsigned short) ((short) ((_Bool) (unsigned short)59936)));
            var_35 += ((/* implicit */short) max((((unsigned long long int) max((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)5952)))), (((unsigned long long int) (!(arr_71 [i_0] [i_0] [i_0] [i_0] [i_23] [i_0]))))));
            arr_81 [i_0] [i_23] = ((((/* implicit */long long int) var_4)) & (max((((long long int) var_0)), (((long long int) var_1)))));
        }
    }
    var_36 = ((/* implicit */signed char) max((var_36), (((/* implicit */signed char) var_4))));
}
