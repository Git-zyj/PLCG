/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37219
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37219 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37219
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
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (signed char i_2 = 4; i_2 < 7; i_2 += 1) 
            {
                {
                    arr_11 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) -1979769620)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0 + 1] [i_0 + 1]))) : (var_4))) + (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_1] [i_1] [i_1])) + (var_16))))))) ? (((var_2) + (((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) arr_1 [i_0] [i_0]))));
                    arr_12 [i_0 + 1] [i_0] [4ULL] = ((/* implicit */_Bool) arr_6 [(unsigned char)4] [6]);
                }
            } 
        } 
        arr_13 [(_Bool)1] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(arr_6 [(unsigned char)0] [i_0 + 1])))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0])) ? (arr_6 [6] [i_0 + 1]) : (18446744073709551615ULL)))) ? ((-(9223372036854775787LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [4U] [i_0] [i_0 + 1] [i_0 + 1]))))) : (((((/* implicit */_Bool) arr_8 [i_0] [i_0] [(unsigned short)6])) ? (((/* implicit */long long int) var_1)) : (var_9)))));
        /* LoopNest 2 */
        for (unsigned long long int i_3 = 1; i_3 < 7; i_3 += 1) 
        {
            for (short i_4 = 0; i_4 < 10; i_4 += 1) 
            {
                {
                    arr_19 [i_0] [i_3] [i_3] = ((/* implicit */unsigned long long int) var_7);
                    arr_20 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) max((((unsigned char) ((((/* implicit */_Bool) arr_16 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (var_9)))), (((/* implicit */unsigned char) arr_3 [i_3] [i_3] [i_4]))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (short i_5 = 0; i_5 < 10; i_5 += 1) 
        {
            for (unsigned long long int i_6 = 0; i_6 < 10; i_6 += 1) 
            {
                {
                    arr_25 [i_0] [i_0] [i_6] = ((/* implicit */signed char) min((var_9), (((/* implicit */long long int) (~(((/* implicit */int) arr_1 [i_0 + 1] [i_0 + 1])))))));
                    arr_26 [i_0] [i_0] [i_0] [6ULL] |= ((/* implicit */unsigned short) var_9);
                    arr_27 [i_6] [i_6] [8] [4] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_21 [i_0 + 1] [i_0 + 1])) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) arr_16 [i_0 + 1])))) ^ (((((/* implicit */_Bool) arr_21 [i_0 + 1] [i_0 + 1])) ? (var_7) : (((/* implicit */int) (signed char)(-127 - 1)))))));
                    arr_28 [i_0] = ((/* implicit */unsigned short) ((signed char) (-(((int) (signed char)44)))));
                }
            } 
        } 
    }
    for (unsigned long long int i_7 = 0; i_7 < 15; i_7 += 1) 
    {
        arr_31 [6] [6] = ((/* implicit */short) ((13623089564077128058ULL) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1979769627)) ? (((/* implicit */int) arr_29 [i_7])) : (((/* implicit */int) arr_30 [6]))))) ? (((((/* implicit */int) arr_29 [i_7])) / (var_16))) : (((arr_29 [i_7]) ? (((/* implicit */int) arr_29 [i_7])) : (((/* implicit */int) var_11)))))))));
        arr_32 [14U] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_30 [(_Bool)0])) ? (((/* implicit */int) arr_29 [i_7])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_30 [(_Bool)1])))))))) > ((-(var_4)))));
        /* LoopNest 2 */
        for (int i_8 = 1; i_8 < 11; i_8 += 1) 
        {
            for (short i_9 = 2; i_9 < 14; i_9 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_10 = 3; i_10 < 14; i_10 += 1) 
                    {
                        arr_39 [i_7] = ((/* implicit */long long int) arr_29 [i_7]);
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned int i_11 = 0; i_11 < 15; i_11 += 1) 
                        {
                            arr_42 [i_7] [i_10] [i_10] [i_9] [(signed char)5] [(signed char)5] [i_7] = -440859284;
                            arr_43 [i_7] [i_8] [0] [i_10 - 2] [i_11] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_35 [(signed char)13] [i_8] [i_8])) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-6)))));
                        }
                        arr_44 [4ULL] [i_8 + 4] [i_8 + 3] |= ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_29 [i_7]))) == (((long long int) (!(((/* implicit */_Bool) -9223372036854775787LL)))))));
                        arr_45 [i_7] = ((/* implicit */unsigned int) (_Bool)1);
                    }
                    arr_46 [i_7] [i_7] [i_7] [i_7] = ((/* implicit */unsigned short) var_14);
                    arr_47 [i_7] [i_7] [i_7] = ((/* implicit */int) ((((/* implicit */_Bool) ((9223372036854775787LL) / (((/* implicit */long long int) ((/* implicit */int) (signed char)5)))))) ? ((((-(arr_36 [i_7] [i_8 + 3] [i_7] [i_8]))) / (((/* implicit */unsigned int) (+(var_16)))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_36 [i_7] [i_8 + 2] [i_8 + 1] [i_9 - 2]))))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned short i_12 = 0; i_12 < 15; i_12 += 1) 
        {
            for (int i_13 = 0; i_13 < 15; i_13 += 1) 
            {
                for (unsigned int i_14 = 0; i_14 < 15; i_14 += 1) 
                {
                    {
                        arr_56 [i_7] [i_7] [i_13] [i_13] [i_14] = ((/* implicit */unsigned char) (+(((arr_38 [i_12] [i_12] [i_12] [i_12]) ? (((/* implicit */int) arr_38 [i_7] [i_7] [i_7] [i_7])) : (((/* implicit */int) arr_38 [i_14] [i_14] [i_14] [i_14]))))));
                        arr_57 [(signed char)14] |= ((/* implicit */signed char) arr_36 [4ULL] [4ULL] [i_13] [i_13]);
                        arr_58 [i_7] [i_12] [i_7] [i_14] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((signed char) arr_35 [i_7] [i_7] [i_7])))));
                        arr_59 [i_14] [i_7] [i_7] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) (signed char)-69)) ? (((/* implicit */int) arr_34 [i_7] [i_7])) : (((/* implicit */int) arr_38 [i_7] [i_7] [i_13] [i_14]))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned short i_15 = 0; i_15 < 22; i_15 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_16 = 0; i_16 < 22; i_16 += 1) 
        {
            for (unsigned char i_17 = 0; i_17 < 22; i_17 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_18 = 0; i_18 < 22; i_18 += 1) 
                    {
                        for (short i_19 = 0; i_19 < 22; i_19 += 1) 
                        {
                            {
                                arr_70 [(short)2] [i_16] [i_16] [i_16] [i_15] = ((/* implicit */unsigned char) arr_62 [i_15]);
                                arr_71 [i_15] [i_15] [i_17] [i_16] [i_16] [i_15] = ((/* implicit */_Bool) ((((/* implicit */long long int) 1231303297)) * (((((/* implicit */_Bool) arr_62 [i_15])) ? (((((/* implicit */_Bool) (signed char)-13)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (9223372036854775764LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_60 [i_17])) ? (arr_69 [i_15]) : (((/* implicit */int) arr_62 [i_15])))))))));
                            }
                        } 
                    } 
                    arr_72 [i_15] = ((/* implicit */_Bool) (signed char)0);
                }
            } 
        } 
        /* LoopNest 2 */
        for (int i_20 = 3; i_20 < 20; i_20 += 1) 
        {
            for (int i_21 = 4; i_21 < 21; i_21 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_22 = 1; i_22 < 20; i_22 += 1) 
                    {
                        for (unsigned short i_23 = 0; i_23 < 22; i_23 += 1) 
                        {
                            {
                                arr_81 [i_20 - 3] [i_20 - 3] [i_22 + 2] [i_15] [i_23] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_75 [i_15])) ? (((/* implicit */long long int) arr_69 [i_15])) : (((((-9223372036854775784LL) ^ (((/* implicit */long long int) arr_79 [i_20] [i_20])))) | (((/* implicit */long long int) arr_64 [i_21 - 2]))))));
                                arr_82 [16] [i_20] [16] [(unsigned short)20] [12U] [12U] [i_22 + 2] |= ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_60 [i_15])) ? (var_1) : (((/* implicit */int) var_11))))) > (((((/* implicit */_Bool) arr_74 [i_15] [i_15])) ? (((/* implicit */long long int) ((/* implicit */int) arr_66 [i_15]))) : (-333138684585219944LL)))))) | (((((/* implicit */_Bool) arr_74 [2] [i_20 + 2])) ? (((/* implicit */int) arr_74 [(_Bool)1] [i_20 - 1])) : (((/* implicit */int) (_Bool)1))))));
                                arr_83 [i_15] [i_15] [i_15] [i_15] [i_15] [i_15] = ((/* implicit */int) var_6);
                                arr_84 [i_15] [(unsigned char)14] [i_21] [i_15] [i_15] [i_23] = ((/* implicit */short) var_13);
                            }
                        } 
                    } 
                    arr_85 [i_15] [i_20] [i_15] = ((/* implicit */unsigned int) arr_73 [i_15] [i_15]);
                    /* LoopNest 2 */
                    for (unsigned char i_24 = 0; i_24 < 22; i_24 += 1) 
                    {
                        for (int i_25 = 0; i_25 < 22; i_25 += 1) 
                        {
                            {
                                arr_91 [i_15] [i_20] [i_15] [i_15] [i_15] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_78 [i_15] [i_20] [i_15] [i_15])) ? (arr_89 [21] [i_21 - 4] [i_15] [i_15] [i_15]) : (arr_89 [i_20 + 1] [i_21 - 2] [i_20 + 1] [i_20 + 1] [i_20 + 1])))) ? (((arr_89 [i_21] [i_21 - 4] [i_21] [i_21] [i_21]) - (arr_89 [i_25] [i_21 - 4] [i_21] [i_21 - 2] [i_21]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_78 [i_15] [i_21] [i_21 - 3] [i_15])) ? (var_15) : (((/* implicit */unsigned int) arr_78 [i_15] [13ULL] [13ULL] [i_15])))))));
                                arr_92 [i_15] [i_20 + 2] [i_15] [i_15] [i_15] [i_25] [i_15] = ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_60 [i_15])))))) > (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) : (arr_90 [i_15] [(signed char)10] [(unsigned short)5] [i_15] [i_25]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_0)))))))) : (((/* implicit */int) arr_66 [i_15]))));
                                arr_93 [i_25] [i_15] [i_15] [i_20] [i_15] = ((/* implicit */long long int) arr_69 [i_20 - 2]);
                                arr_94 [i_15] [i_15] [i_15] = ((/* implicit */long long int) arr_87 [i_15] [i_15] [i_15] [i_15] [i_15]);
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -608991237)) ? (((/* implicit */int) (unsigned char)13)) : (((/* implicit */int) (unsigned char)59))));
    var_18 = ((((/* implicit */_Bool) (+(min((((/* implicit */int) var_8)), (var_1)))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) % (((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (var_5))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))));
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) var_12))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_14))))) : (((int) var_14))))) | (var_5)));
    var_20 = ((/* implicit */int) max((((((((/* implicit */_Bool) 1231303318)) ? (var_5) : (var_4))) << (((((/* implicit */int) var_0)) - (68))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)79)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_9) : (var_9)))))))));
}
