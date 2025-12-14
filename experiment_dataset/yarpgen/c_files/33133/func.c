/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33133
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33133 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33133
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
    var_20 = var_13;
    /* LoopSeq 2 */
    for (unsigned int i_0 = 2; i_0 < 18; i_0 += 4) 
    {
        var_21 = ((/* implicit */signed char) min((((((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_0] [i_0]))))) ? (((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)-45)))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (arr_1 [3U]))))), (((((((/* implicit */_Bool) arr_0 [i_0 + 1] [i_0])) || (((/* implicit */_Bool) arr_0 [i_0] [i_0])))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [(short)16]) : (((/* implicit */int) arr_0 [i_0] [i_0])))) : ((-(arr_1 [i_0])))))));
        arr_2 [i_0] [4ULL] = ((/* implicit */unsigned int) min((((((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (arr_1 [i_0 - 1]) : (arr_1 [i_0 + 1]))) / (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_0 - 2])) : (arr_1 [i_0 + 1]))))), (arr_1 [i_0])));
    }
    for (unsigned short i_1 = 0; i_1 < 21; i_1 += 2) 
    {
        /* LoopSeq 3 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_22 = ((/* implicit */unsigned char) arr_6 [i_2] [i_2]);
            var_23 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) min((arr_4 [i_1]), (((/* implicit */unsigned char) arr_3 [i_1]))))) ? (((/* implicit */int) min((arr_3 [i_2]), (arr_3 [i_2])))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_1] [i_1])) || (((/* implicit */_Bool) arr_4 [i_1]))))))), (((/* implicit */int) arr_4 [i_1]))));
            /* LoopNest 2 */
            for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 1) 
            {
                for (unsigned int i_4 = 0; i_4 < 21; i_4 += 1) 
                {
                    {
                        var_24 = ((/* implicit */unsigned char) ((min((5618384431874355138ULL), (((/* implicit */unsigned long long int) (short)-8568)))) << (((/* implicit */int) ((((((/* implicit */_Bool) (short)-8574)) || (((/* implicit */_Bool) (unsigned char)182)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)113)) ? (((/* implicit */int) (short)-8592)) : (((/* implicit */int) (_Bool)1))))))))));
                        var_25 = ((/* implicit */signed char) min((((/* implicit */long long int) ((((/* implicit */_Bool) ((3306583686U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)111)))))) ? (((arr_11 [i_3] [i_3] [i_3] [i_4]) ? (((/* implicit */int) arr_8 [i_1] [i_1] [i_3])) : (((/* implicit */int) arr_11 [i_3] [i_2] [i_2] [i_2])))) : (((((/* implicit */_Bool) arr_10 [i_1] [i_1])) ? (((/* implicit */int) arr_9 [i_1] [i_1] [i_3])) : (((/* implicit */int) arr_9 [i_1] [i_2] [i_3]))))))), (((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_3]))) ^ (min((((/* implicit */long long int) arr_9 [i_4] [i_4] [i_3])), (arr_7 [i_1] [i_3] [i_4])))))));
                        arr_13 [i_1] [i_3] [i_3] [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)143)) << (((((/* implicit */int) (unsigned char)124)) - (113)))))) ? ((-(((((/* implicit */int) (unsigned char)113)) * (((/* implicit */int) (short)-8555)))))) : (((/* implicit */int) arr_6 [i_1] [i_1]))));
                        var_26 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_1] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_1] [i_2] [i_1] [i_4]))) : (arr_7 [i_1] [i_2] [i_3])))) ? (((((/* implicit */_Bool) arr_12 [i_1] [i_1] [i_2] [i_3] [i_1])) ? (((/* implicit */int) arr_6 [i_1] [i_1])) : (((/* implicit */int) arr_6 [i_1] [i_1])))) : (((/* implicit */int) min((arr_5 [i_3] [i_2]), (((/* implicit */unsigned short) arr_11 [i_1] [i_2] [i_2] [i_4])))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) (~(((/* implicit */int) arr_4 [i_1]))))) == (((((/* implicit */_Bool) arr_12 [i_4] [i_1] [i_4] [i_1] [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_2] [i_2]))) : (arr_12 [4LL] [i_1] [i_1] [i_1] [i_1]))))))) : ((+(((arr_3 [i_4]) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1]))) : (arr_7 [i_4] [i_2] [i_2])))))));
                    }
                } 
            } 
            var_27 -= ((/* implicit */short) min(((-((+(((/* implicit */int) arr_11 [i_1] [(signed char)10] [i_1] [i_1])))))), (((((/* implicit */int) min((arr_8 [(signed char)2] [(signed char)2] [i_1]), (((/* implicit */unsigned short) arr_11 [i_1] [i_2] [i_1] [i_2]))))) + ((-(((/* implicit */int) arr_3 [i_2]))))))));
        }
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            arr_17 [i_1] = ((/* implicit */short) ((((/* implicit */int) arr_8 [(unsigned short)6] [(unsigned short)6] [i_1])) >> (((max((arr_16 [i_1] [i_1]), (((/* implicit */unsigned int) arr_15 [i_1] [i_5] [i_5])))) % (min((arr_10 [i_1] [i_1]), (((/* implicit */unsigned int) arr_14 [i_1]))))))));
            /* LoopSeq 2 */
            for (unsigned int i_6 = 0; i_6 < 21; i_6 += 1) /* same iter space */
            {
                var_28 = ((/* implicit */unsigned short) max((((/* implicit */long long int) arr_11 [i_1] [i_6] [i_1] [i_1])), (((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned char) arr_3 [i_6])), (arr_14 [i_6]))))) ^ (arr_7 [i_1] [i_1] [i_6])))));
                var_29 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) min((((/* implicit */unsigned short) ((arr_19 [i_1] [(signed char)15]) < (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_6])))))), (min((((/* implicit */unsigned short) arr_14 [i_6])), (arr_5 [i_6] [i_6])))))), (((((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_1] [i_5] [i_1])) ^ (((/* implicit */int) arr_14 [i_6]))))) ? (((/* implicit */unsigned int) ((arr_3 [i_1]) ? (((/* implicit */int) arr_8 [i_6] [i_6] [i_1])) : (((/* implicit */int) arr_6 [(short)9] [i_6]))))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_6]))) | (arr_19 [i_1] [i_1])))))));
                /* LoopNest 2 */
                for (unsigned char i_7 = 0; i_7 < 21; i_7 += 3) 
                {
                    for (long long int i_8 = 0; i_8 < 21; i_8 += 3) 
                    {
                        {
                            arr_26 [i_8] [i_5] [i_7] [(unsigned short)11] [i_8] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((arr_21 [i_6] [i_5] [i_6] [i_7] [i_5]) ? (arr_7 [i_1] [i_1] [i_6]) : (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_5]))))), (((/* implicit */long long int) (~(((/* implicit */int) arr_22 [i_7] [i_5] [i_8])))))))) ? (min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_23 [i_1] [i_1] [i_1] [i_1] [i_1])) ? (((/* implicit */int) arr_11 [i_7] [i_7] [i_6] [(signed char)3])) : (((/* implicit */int) arr_18 [i_6] [i_6]))))), (max((arr_7 [i_1] [i_1] [i_7]), (((/* implicit */long long int) arr_24 [i_6] [i_1] [i_6] [i_1] [i_1])))))) : (((/* implicit */long long int) (-(((/* implicit */int) max((arr_4 [i_1]), (((/* implicit */unsigned char) arr_21 [7LL] [i_5] [i_5] [7LL] [i_8]))))))))));
                            var_30 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_9 [i_1] [i_5] [i_7]))));
                        }
                    } 
                } 
            }
            for (unsigned int i_9 = 0; i_9 < 21; i_9 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned short i_10 = 0; i_10 < 21; i_10 += 1) 
                {
                    for (unsigned short i_11 = 0; i_11 < 21; i_11 += 2) 
                    {
                        {
                            arr_33 [i_1] [i_9] [i_9] = ((min((max((arr_16 [i_1] [i_1]), (((/* implicit */unsigned int) arr_9 [i_1] [i_9] [i_9])))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_30 [i_5] [i_5] [i_5] [i_5] [i_5])) ? (((/* implicit */int) arr_27 [i_1] [i_1] [i_5] [i_9])) : (((/* implicit */int) arr_29 [i_1] [i_1] [i_1] [i_1] [i_9]))))))) << (((/* implicit */int) arr_3 [13U])));
                            var_31 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max(((~(((/* implicit */int) arr_5 [i_5] [i_11])))), (((/* implicit */int) min((arr_27 [i_1] [(short)12] [i_9] [i_1]), (((/* implicit */signed char) arr_3 [i_11])))))))) ? (min((-8155658406850325913LL), (((/* implicit */long long int) (_Bool)1)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_18 [i_1] [i_1]), (((/* implicit */unsigned char) arr_27 [i_1] [i_1] [i_1] [i_1]))))) ? (((/* implicit */int) min((arr_18 [i_1] [i_11]), (arr_4 [i_9])))) : (((/* implicit */int) min((((/* implicit */short) arr_21 [i_1] [i_5] [(signed char)1] [i_10] [i_11])), (arr_22 [i_11] [i_5] [i_11])))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_12 = 0; i_12 < 21; i_12 += 3) 
                {
                    for (unsigned char i_13 = 2; i_13 < 19; i_13 += 1) 
                    {
                        {
                            arr_38 [i_1] [i_9] [i_9] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_34 [i_9] [i_9])) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) arr_20 [i_9] [i_9] [i_9] [i_9]))))) ? (((((/* implicit */int) arr_34 [i_1] [i_9])) << (((/* implicit */int) arr_14 [i_12])))) : (((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) (short)8558)) : (((/* implicit */int) (unsigned short)63514))))))) ? (min(((~(((/* implicit */int) arr_9 [i_5] [i_5] [i_9])))), (((/* implicit */int) arr_3 [(short)19])))) : (((((/* implicit */int) min((((/* implicit */unsigned short) arr_18 [i_5] [i_5])), (arr_8 [i_1] [i_12] [i_9])))) & (((/* implicit */int) min((arr_8 [i_1] [i_1] [i_9]), (((/* implicit */unsigned short) arr_27 [i_5] [i_5] [i_12] [i_9])))))))));
                            arr_39 [i_5] [i_5] [i_5] [i_5] [i_9] = ((/* implicit */int) min((max((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_5 [i_1] [i_5]))))), (min((((/* implicit */long long int) arr_5 [i_5] [i_5])), (arr_12 [(_Bool)1] [i_9] [(_Bool)1] [i_12] [i_13]))))), (((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_35 [i_5] [i_5] [i_12] [i_13])))) ? (((/* implicit */int) arr_27 [i_1] [i_1] [i_9] [i_9])) : (((/* implicit */int) ((((/* implicit */int) arr_34 [i_1] [i_9])) > (((/* implicit */int) arr_18 [i_5] [i_12]))))))))));
                            var_32 = ((/* implicit */_Bool) (~((~(((/* implicit */int) min((((/* implicit */unsigned short) arr_25 [i_1] [i_1] [i_1] [i_1] [i_1])), (arr_8 [i_1] [i_1] [i_9]))))))));
                            var_33 = ((/* implicit */_Bool) min((var_33), (((/* implicit */_Bool) ((((((/* implicit */_Bool) min(((short)32747), (((/* implicit */short) (_Bool)1))))) ? (((/* implicit */int) arr_6 [i_13] [i_5])) : (((/* implicit */int) ((((/* implicit */int) arr_11 [i_1] [i_5] [i_5] [i_5])) >= (((/* implicit */int) arr_30 [i_1] [i_1] [i_1] [i_1] [i_1]))))))) + (((/* implicit */int) arr_32 [i_5] [i_9] [i_12] [i_1])))))));
                        }
                    } 
                } 
            }
            arr_40 [i_1] [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_10 [i_5] [i_5])) ? (((/* implicit */int) arr_30 [i_1] [i_1] [i_5] [i_5] [(signed char)18])) : (((/* implicit */int) arr_15 [i_5] [i_1] [i_1])))) + (((((/* implicit */_Bool) arr_14 [i_1])) ? (((/* implicit */int) arr_34 [i_1] [i_1])) : (((/* implicit */int) arr_29 [i_1] [i_1] [i_1] [i_5] [i_1]))))))) ? (((/* implicit */int) arr_6 [i_5] [(unsigned short)0])) : (((((/* implicit */_Bool) 9604681999539537782ULL)) ? (((/* implicit */int) (unsigned short)65531)) : (((/* implicit */int) (_Bool)1))))));
            arr_41 [i_1] [i_5] [i_5] = ((/* implicit */long long int) max((((/* implicit */int) arr_21 [i_1] [i_1] [i_1] [i_1] [i_1])), (((((/* implicit */_Bool) min((((/* implicit */int) arr_21 [i_1] [i_5] [i_1] [i_1] [i_1])), (arr_36 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] [i_5])))) ? ((~(((/* implicit */int) arr_22 [i_1] [i_1] [i_1])))) : (((/* implicit */int) arr_20 [i_1] [i_1] [i_1] [i_5]))))));
        }
        for (signed char i_14 = 2; i_14 < 19; i_14 += 1) 
        {
            var_34 -= ((/* implicit */short) ((max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_32 [i_1] [i_1] [i_1] [i_1])) ? (((/* implicit */int) arr_21 [(_Bool)1] [i_1] [i_1] [i_14] [i_14])) : (((/* implicit */int) arr_25 [i_14] [i_14] [(_Bool)1] [i_1] [i_1]))))), (((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_14] [i_14 - 2] [i_1] [i_1]))) : (arr_44 [i_1]))))) <= ((+(((((/* implicit */_Bool) arr_24 [i_1] [(signed char)2] [(short)12] [i_1] [i_1])) ? (arr_28 [17U]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_34 [i_1] [i_1])))))))));
            var_35 = ((/* implicit */short) arr_36 [i_1] [i_1] [(_Bool)1] [i_1] [i_1] [i_1] [i_14]);
            arr_46 [i_14] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) min((arr_42 [10ULL] [i_14]), (((/* implicit */long long int) arr_28 [i_1]))))) ? (((((/* implicit */_Bool) arr_4 [i_14])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_1] [i_1] [i_14] [i_14]))) : (arr_28 [i_1]))) : (((/* implicit */unsigned int) ((/* implicit */int) min((arr_25 [i_1] [i_1] [i_1] [i_14] [i_14 + 1]), (arr_35 [i_1] [i_1] [i_14] [i_14]))))))) != (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) ((((/* implicit */int) arr_11 [i_14] [i_14 - 1] [i_14] [i_14])) >= (((/* implicit */int) arr_9 [i_1] [i_1] [i_14]))))), (min((((/* implicit */short) arr_15 [i_1] [i_14] [i_1])), (arr_35 [i_1] [(unsigned char)7] [i_1] [i_1])))))))));
        }
        var_36 = ((/* implicit */short) min((var_36), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 133693440U)) - (9089288212947351195ULL)))) ? (((/* implicit */unsigned int) (((((-(((/* implicit */int) (short)8573)))) + (2147483647))) >> (((((/* implicit */int) (unsigned short)36533)) - (36502)))))) : (max((((((/* implicit */_Bool) arr_23 [i_1] [i_1] [i_1] [i_1] [i_1])) ? (arr_28 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_1] [i_1] [i_1]))))), (min((arr_44 [i_1]), (arr_44 [i_1]))))))))));
    }
    /* LoopNest 3 */
    for (unsigned char i_15 = 3; i_15 < 8; i_15 += 4) 
    {
        for (short i_16 = 1; i_16 < 8; i_16 += 3) 
        {
            for (short i_17 = 2; i_17 < 7; i_17 += 2) 
            {
                {
                    var_37 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_15] [i_17 - 1] [i_17] [i_17] [i_17 - 1])) ? (arr_28 [(signed char)2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_52 [i_15])))))) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) arr_51 [i_17])), (arr_6 [i_15] [i_16]))))) : (((arr_31 [i_17] [i_17] [i_17] [i_17] [i_17] [i_17] [i_17]) ? (arr_12 [(signed char)0] [i_17] [i_17] [i_17] [(signed char)0]) : (((/* implicit */long long int) arr_10 [i_15] [i_15]))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_1 [i_15]), (((/* implicit */int) arr_52 [i_15]))))) ? (min((((/* implicit */long long int) arr_15 [i_15] [0ULL] [i_17 - 1])), (arr_12 [i_15 - 3] [i_17] [i_15 + 1] [i_15] [i_15]))) : (min((arr_12 [i_15 - 2] [i_17] [i_16] [i_16 + 1] [i_17]), (((/* implicit */long long int) arr_22 [i_17] [(unsigned short)6] [i_17 - 2]))))))) : (((((/* implicit */_Bool) arr_51 [i_15])) ? (max((((/* implicit */unsigned long long int) arr_53 [i_15] [i_15] [i_15])), (arr_49 [i_16]))) : (((/* implicit */unsigned long long int) ((arr_21 [i_15] [i_16 - 1] [i_16] [i_16 - 1] [i_17]) ? (arr_12 [i_15] [i_17] [i_16] [i_17] [i_17]) : (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_17] [i_16] [i_17]))))))))));
                    var_38 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_22 [i_17] [i_16] [i_16])) || (((/* implicit */_Bool) arr_7 [i_15] [i_15] [i_17]))))), (min((arr_0 [i_15] [i_15]), (((/* implicit */unsigned short) arr_47 [i_15]))))))), (max((((arr_49 [i_15 + 2]) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_52 [i_16]))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_11 [i_17] [i_17] [i_15] [i_17])) % (((/* implicit */int) arr_53 [i_15] [i_16] [i_17])))))))));
                    var_39 = ((/* implicit */_Bool) min((((/* implicit */int) arr_21 [i_15] [i_15] [i_16] [i_16] [i_15])), ((~(((/* implicit */int) arr_14 [i_15]))))));
                }
            } 
        } 
    } 
    var_40 = ((/* implicit */_Bool) min((min((((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_17))))), (max((((/* implicit */long long int) var_7)), (var_15))))), (((/* implicit */long long int) (~(((/* implicit */int) min((var_12), (var_13)))))))));
}
