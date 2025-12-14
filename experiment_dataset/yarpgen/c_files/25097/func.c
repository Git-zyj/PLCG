/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25097
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25097 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25097
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
    var_12 = ((/* implicit */unsigned long long int) (-(((((var_9) <= (var_9))) ? (((((var_4) + (2147483647))) >> (((var_4) + (1641393179))))) : (var_8)))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 2; i_0 < 12; i_0 += 4) /* same iter space */
    {
        var_13 = ((/* implicit */signed char) arr_0 [i_0 - 1]);
        var_14 -= ((/* implicit */unsigned int) (~(((/* implicit */int) ((arr_0 [i_0 - 1]) >= (arr_0 [i_0 - 1]))))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned char)114)) ? (arr_0 [i_0 - 2]) : (arr_0 [i_0 - 1]))) < (((/* implicit */int) ((((/* implicit */long long int) arr_1 [i_0 + 1])) >= (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) arr_1 [i_0 + 1])) : (7627374487734500431LL))))))));
    }
    for (unsigned long long int i_1 = 2; i_1 < 12; i_1 += 4) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_2 = 1; i_2 < 9; i_2 += 3) 
        {
            /* LoopSeq 1 */
            for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
            {
                var_15 = ((max(((-(8417305560658085218ULL))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)1078))))))) % (((/* implicit */unsigned long long int) arr_0 [i_1])));
                arr_11 [i_2] [i_3] = ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)5252))) + (((((((/* implicit */_Bool) -1437276889)) ? (arr_9 [i_1] [(unsigned char)8] [i_1]) : (((/* implicit */unsigned long long int) arr_1 [i_1 + 1])))) >> (((arr_7 [i_3]) + (5354148356271212560LL))))));
                arr_12 [i_1] [i_1 + 1] [10ULL] [i_2] = ((/* implicit */unsigned int) (unsigned short)64746);
            }
            var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) ((((/* implicit */int) ((arr_5 [i_1]) >= (arr_5 [i_1])))) <= ((-2147483647 - 1)))))));
        }
        for (long long int i_4 = 2; i_4 < 12; i_4 += 4) 
        {
            /* LoopNest 2 */
            for (int i_5 = 3; i_5 < 11; i_5 += 4) 
            {
                for (unsigned long long int i_6 = 3; i_6 < 12; i_6 += 3) 
                {
                    {
                        var_17 = ((/* implicit */int) ((arr_6 [i_4] [i_5] [i_6]) + (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_6] [i_5] [i_1] [i_1])))));
                        arr_21 [i_5] [i_4] [i_4] [i_4 + 1] = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_6 - 1])) ? (arr_3 [i_4]) : (((/* implicit */int) (short)-1070))))) ? (((((/* implicit */_Bool) arr_6 [i_1] [9U] [(_Bool)1])) ? (arr_8 [i_1] [i_6 - 3]) : (((/* implicit */unsigned long long int) -1437276889)))) : (max((((/* implicit */unsigned long long int) arr_3 [i_6 + 1])), (arr_8 [i_1] [i_4]))))));
                        var_18 = (+((-(min((arr_9 [i_6] [i_1] [i_1]), (((/* implicit */unsigned long long int) 1437276888)))))));
                    }
                } 
            } 
            arr_22 [i_1] [1ULL] [i_4 - 2] = ((/* implicit */int) 2071379062882894992ULL);
        }
        /* LoopSeq 3 */
        for (long long int i_7 = 1; i_7 < 12; i_7 += 2) /* same iter space */
        {
            var_19 = ((((/* implicit */_Bool) arr_0 [i_1 - 2])) ? (((/* implicit */int) ((arr_0 [i_1 + 1]) <= (arr_0 [i_7 + 1])))) : (arr_0 [i_7 - 1]));
            var_20 = ((/* implicit */unsigned int) ((max(((~(((/* implicit */int) (unsigned char)255)))), (arr_0 [i_7 + 1]))) >= (((/* implicit */int) ((((((/* implicit */_Bool) arr_16 [i_1] [i_1] [i_7])) ? (((/* implicit */unsigned int) -335481509)) : (1117635062U))) >= (((/* implicit */unsigned int) (-(arr_0 [6ULL])))))))));
            /* LoopNest 2 */
            for (unsigned long long int i_8 = 0; i_8 < 13; i_8 += 2) 
            {
                for (int i_9 = 1; i_9 < 12; i_9 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
                        {
                            arr_34 [(_Bool)1] [i_7] [i_8] [i_8] [5ULL] = ((/* implicit */unsigned char) arr_4 [(unsigned char)0]);
                            var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)1086)) ? (((/* implicit */int) (unsigned char)30)) : (((/* implicit */int) (unsigned char)214))))) ? (((/* implicit */long long int) arr_6 [i_1] [i_1] [i_10 - 1])) : (arr_26 [i_9])));
                            var_22 = ((/* implicit */unsigned int) arr_10 [i_1] [i_7] [i_9] [i_10]);
                        }
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (int i_11 = 2; i_11 < 11; i_11 += 3) /* same iter space */
                        {
                            arr_39 [i_1] [(unsigned char)12] [(unsigned char)12] [i_8] [i_7] [i_11] = ((/* implicit */unsigned int) ((((arr_17 [i_1 - 2] [i_7] [i_8] [(unsigned char)2]) > (arr_17 [i_1] [i_1] [i_1] [i_1]))) ? (((((/* implicit */int) arr_29 [i_9] [i_7])) / (arr_0 [(unsigned char)10]))) : (((-1437276889) + (((/* implicit */int) (short)1078))))));
                            arr_40 [i_11] [i_7] [i_8] [i_7] [i_1] = ((/* implicit */unsigned char) (-(arr_26 [i_7 - 1])));
                        }
                        for (int i_12 = 2; i_12 < 11; i_12 += 3) /* same iter space */
                        {
                            arr_43 [i_7] [i_7] [i_1] [i_9] [i_12] [i_7] [11] = ((/* implicit */int) (((~(((((/* implicit */_Bool) -1668008377)) ? (8186224511726067339ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)73))))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)204)))));
                            arr_44 [i_1] [(unsigned char)7] [i_7] [i_7] [i_9] [i_9 + 1] [i_12 - 1] = ((/* implicit */_Bool) max((((((((/* implicit */_Bool) 3177332231U)) && (((/* implicit */_Bool) 832751802)))) ? (1117635065U) : (((/* implicit */unsigned int) 2013265920)))), (((/* implicit */unsigned int) (short)-21452))));
                        }
                        for (int i_13 = 2; i_13 < 11; i_13 += 3) /* same iter space */
                        {
                            var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((arr_28 [i_8] [i_9] [i_7] [i_8]) > (((/* implicit */int) min((((/* implicit */short) arr_27 [i_1])), (arr_14 [i_9]))))))) <= (((/* implicit */int) (!(((arr_38 [i_1] [4] [i_1] [(unsigned char)8]) <= (((/* implicit */unsigned long long int) 1117635048U))))))))))));
                            arr_48 [i_7] [i_7] [5U] [i_7] [i_7] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 3177332231U)), (arr_8 [i_7] [5]))))));
                            arr_49 [i_7] [i_7] = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((((/* implicit */int) arr_41 [i_13 - 2] [i_9 - 1] [i_9 + 1] [i_7 - 1] [i_7 + 1] [i_1 - 1])) != (((/* implicit */int) arr_27 [i_9 - 1]))))), (3177332234U)));
                        }
                        var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) (short)-7986)))))))) ? (((/* implicit */unsigned int) arr_3 [i_7 - 1])) : (min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_45 [i_9] [i_8] [(unsigned char)7] [i_7 - 1] [i_7] [i_1]))))), (arr_42 [i_1] [8U] [i_8] [i_8] [i_9])))));
                    }
                } 
            } 
            var_25 += ((/* implicit */unsigned long long int) arr_1 [i_7 + 1]);
        }
        for (long long int i_14 = 1; i_14 < 12; i_14 += 2) /* same iter space */
        {
            arr_53 [i_1] [i_14] [i_14] = ((/* implicit */unsigned long long int) 1545140142);
            var_26 = ((/* implicit */unsigned long long int) (unsigned char)217);
            arr_54 [i_14] = ((/* implicit */unsigned char) 1041852771207599216ULL);
            arr_55 [i_14] [(unsigned char)8] [i_14] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) 254509049309983804LL)) ? (((/* implicit */int) (unsigned short)64746)) : ((-2147483647 - 1))))) - ((((-(0U))) * (4294967295U)))));
            var_27 = ((/* implicit */int) ((_Bool) (+(arr_51 [i_1 - 2] [11ULL] [i_1 - 2]))));
        }
        for (int i_15 = 0; i_15 < 13; i_15 += 4) 
        {
            arr_59 [i_1] = ((min((((/* implicit */unsigned long long int) ((unsigned char) 1117635065U))), (((arr_52 [i_15]) - (((/* implicit */unsigned long long int) 3177332230U)))))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((-2147483647 - 1)) ^ (1897962901)))) ? (((((/* implicit */unsigned int) arr_1 [i_1])) * (3177332231U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (signed char)-113)) < (((/* implicit */int) (unsigned char)225))))))))));
            arr_60 [i_1] [i_15] = ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)109)) + (((/* implicit */int) (short)32767))))) ? (((((/* implicit */_Bool) arr_31 [i_1 + 1] [i_15] [i_1])) ? (((/* implicit */int) arr_56 [i_15] [i_15])) : (arr_16 [i_15] [12ULL] [i_1]))) : (arr_28 [i_1] [i_15] [i_15] [i_15])))) + (((((((/* implicit */_Bool) (signed char)34)) ? (arr_35 [i_1] [i_1] [i_15] [i_1] [2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_56 [(unsigned short)2] [i_15]))))) - (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_15] [i_1])))))));
            arr_61 [4] [i_1 + 1] [i_1] = ((/* implicit */unsigned char) ((((((3177332233U) / (arr_35 [i_1 + 1] [i_1] [i_15] [i_15] [i_15]))) + (((/* implicit */unsigned int) 2147483647)))) * (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_45 [i_1 + 1] [i_1 + 1] [i_1] [i_1 - 2] [i_1 + 1] [i_1 + 1])) <= (((/* implicit */int) arr_45 [11U] [i_1 - 2] [(unsigned char)8] [i_1 - 1] [i_1 + 1] [i_1 + 1]))))))));
            arr_62 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) 14974845167625685792ULL);
        }
    }
    for (unsigned long long int i_16 = 2; i_16 < 12; i_16 += 4) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_17 = 0; i_17 < 13; i_17 += 1) 
        {
            for (int i_18 = 0; i_18 < 13; i_18 += 3) 
            {
                for (unsigned char i_19 = 0; i_19 < 13; i_19 += 4) 
                {
                    {
                        var_28 ^= (unsigned char)16;
                        arr_74 [i_16 - 2] [i_17] [i_18] [i_16 - 2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_16])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_18 [i_16] [i_18] [i_18])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-32766))) : (3932160U)))))) : (min((((/* implicit */unsigned long long int) ((arr_3 [6]) % (arr_3 [i_16 - 2])))), (((((/* implicit */_Bool) arr_71 [i_16] [7] [(_Bool)1])) ? (((/* implicit */unsigned long long int) arr_0 [i_16])) : (17382387834034049617ULL)))))));
                    }
                } 
            } 
        } 
        var_29 = (-(((/* implicit */int) arr_27 [i_16 - 1])));
    }
}
