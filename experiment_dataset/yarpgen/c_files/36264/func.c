/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36264
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36264 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36264
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
    var_15 &= var_2;
    /* LoopSeq 1 */
    for (unsigned int i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        var_16 = ((/* implicit */unsigned long long int) ((short) arr_0 [i_0] [i_0]));
        /* LoopSeq 3 */
        for (signed char i_1 = 1; i_1 < 10; i_1 += 4) 
        {
            arr_6 [i_0 + 1] [i_0] [i_0] = ((/* implicit */unsigned short) ((int) ((((/* implicit */_Bool) arr_4 [i_1 - 1] [i_1] [i_0 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1 + 2] [i_0 - 1] [i_0 - 1]))) : (6710958126981719618ULL))));
            var_17 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0 + 1] [i_0 + 1] [i_0 + 1])) || (((/* implicit */_Bool) arr_2 [i_0] [i_0 + 1] [i_0 + 1]))))) != (((/* implicit */int) ((_Bool) max((var_0), (var_0)))))));
            arr_7 [i_1] [i_1 + 1] [12ULL] = ((/* implicit */short) ((_Bool) (~(min((((/* implicit */unsigned int) arr_3 [i_0])), (4157519214U))))));
        }
        for (unsigned short i_2 = 0; i_2 < 13; i_2 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned short i_3 = 0; i_3 < 13; i_3 += 1) 
            {
                for (unsigned short i_4 = 3; i_4 < 11; i_4 += 3) 
                {
                    {
                        var_18 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)48799)) - ((+(arr_2 [i_0 + 1] [i_3] [i_4 + 2])))));
                        var_19 &= ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_8 [i_2] [i_3]))) < (var_12))))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (int i_5 = 4; i_5 < 12; i_5 += 4) 
            {
                for (int i_6 = 0; i_6 < 13; i_6 += 2) 
                {
                    {
                        /* LoopSeq 4 */
                        for (int i_7 = 1; i_7 < 11; i_7 += 3) 
                        {
                            var_20 = ((/* implicit */signed char) (+(((/* implicit */int) ((unsigned short) (signed char)71)))));
                            arr_27 [i_0] [(signed char)11] [i_0] [i_0] [(signed char)11] = ((((((/* implicit */unsigned long long int) arr_16 [(unsigned short)3] [i_5] [i_5 - 4])) == (arr_1 [i_5 + 1] [i_2]))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) % (((/* implicit */int) (short)-471))))) : (((unsigned long long int) arr_0 [i_0 - 1] [i_0 + 1])));
                        }
                        for (unsigned int i_8 = 0; i_8 < 13; i_8 += 1) 
                        {
                            var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) (~(((/* implicit */int) var_9)))))));
                            var_22 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (arr_16 [i_0] [i_2] [(_Bool)1]) : (((/* implicit */int) ((unsigned short) var_7)))));
                            var_23 = max(((~((-(4294967295U))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_15 [i_2] [i_2] [i_2] [i_2] [i_2])) ? ((-(((/* implicit */int) var_3)))) : (((/* implicit */int) max((var_7), (((/* implicit */unsigned short) (signed char)-88)))))))));
                        }
                        for (long long int i_9 = 0; i_9 < 13; i_9 += 3) 
                        {
                            var_24 = (~((-(((/* implicit */int) max((var_1), (((/* implicit */signed char) (_Bool)1))))))));
                            var_25 += ((unsigned short) max((arr_28 [i_5 - 3] [i_0 - 1] [i_0 - 1] [i_0 + 1]), (arr_28 [i_5 - 3] [i_2] [i_0] [i_0 + 1])));
                        }
                        /* vectorizable */
                        for (int i_10 = 0; i_10 < 13; i_10 += 2) 
                        {
                            arr_35 [i_0] [i_2] [i_5] [i_2] [i_2] [i_10] = ((/* implicit */unsigned short) ((var_6) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_5 - 2]))) : (arr_24 [i_0] [i_5 + 1] [i_5] [i_0 + 1] [i_0] [i_0])));
                            var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) (-(((unsigned long long int) arr_23 [i_10] [i_6] [i_5] [i_0])))))));
                        }
                        var_27 &= ((/* implicit */unsigned int) max((((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_8 [i_0 - 1] [i_0 - 1])) || (((/* implicit */_Bool) arr_8 [i_0 + 1] [i_0 - 1]))))), (arr_8 [i_0 - 1] [i_0 - 1])));
                        var_28 = ((/* implicit */long long int) (~(((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_14))))) - (((((/* implicit */unsigned long long int) 726713146128348418LL)) - (378829848819861505ULL)))))));
                    }
                } 
            } 
            var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) (-(max((arr_1 [i_0 + 1] [i_0 - 1]), (arr_1 [i_0 + 1] [i_0 - 1]))))))));
        }
        for (signed char i_11 = 0; i_11 < 13; i_11 += 2) 
        {
            arr_38 [i_11] [10U] [i_11] = ((/* implicit */unsigned long long int) ((unsigned int) ((unsigned long long int) (short)-29858)));
            arr_39 [i_0 + 1] [i_11] [i_11] = ((/* implicit */unsigned short) var_0);
            var_30 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((unsigned short) (!(((/* implicit */_Bool) var_3))))))));
        }
        var_31 &= ((/* implicit */long long int) ((int) ((unsigned short) arr_13 [i_0] [i_0])));
        /* LoopNest 2 */
        for (signed char i_12 = 0; i_12 < 13; i_12 += 2) 
        {
            for (unsigned char i_13 = 0; i_13 < 13; i_13 += 2) 
            {
                {
                    var_32 = ((/* implicit */long long int) max((var_32), (((((/* implicit */_Bool) (+(var_5)))) ? ((+(arr_36 [i_0] [4ULL]))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_19 [i_0 + 1] [i_0 - 1] [i_13]))))))));
                    var_33 = ((/* implicit */int) max((((/* implicit */long long int) ((((/* implicit */int) arr_19 [i_12] [i_12] [i_12])) > (((/* implicit */int) arr_19 [i_13] [i_0] [i_0]))))), (((((/* implicit */_Bool) arr_19 [i_0 - 1] [i_12] [i_13])) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [i_12] [i_13]))) : (var_13)))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_14 = 0; i_14 < 13; i_14 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (int i_15 = 0; i_15 < 13; i_15 += 4) 
                        {
                            var_34 = ((/* implicit */signed char) var_12);
                            var_35 = ((/* implicit */_Bool) max((var_35), (((((/* implicit */_Bool) (~(((/* implicit */int) arr_13 [i_0 + 1] [i_0 + 1]))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [(signed char)11] [i_0 + 1])) ? (((/* implicit */int) arr_13 [i_13] [i_0 - 1])) : (((/* implicit */int) arr_13 [i_12] [i_0 + 1])))))))));
                            var_36 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((arr_12 [i_15] [i_15] [i_15] [i_15]) == (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) max((((/* implicit */signed char) arr_43 [i_0 - 1] [i_12] [i_13] [i_14])), (arr_20 [i_13])))) : (((/* implicit */int) ((unsigned short) arr_20 [i_12])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (12542554261161408351ULL)));
                        }
                        for (unsigned short i_16 = 1; i_16 < 11; i_16 += 4) 
                        {
                            var_37 = ((/* implicit */int) arr_46 [i_0]);
                            var_38 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((unsigned short) arr_48 [i_13] [i_13] [i_13] [i_14] [(_Bool)1])))));
                            var_39 = ((/* implicit */unsigned long long int) (unsigned short)18803);
                        }
                        arr_52 [i_0 + 1] [(signed char)11] [i_12] [12LL] [i_14] = ((/* implicit */unsigned long long int) var_3);
                        var_40 = ((/* implicit */signed char) min((1627208735U), (((/* implicit */unsigned int) (signed char)-75))));
                        arr_53 [i_0 - 1] [i_12] [i_0 - 1] [(signed char)12] [i_0 - 1] [i_13] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(var_5))))));
                    }
                    var_41 -= ((/* implicit */signed char) max((((((/* implicit */long long int) max((((/* implicit */int) arr_3 [i_0])), (arr_32 [i_0] [i_12] [i_12] [i_12] [i_12])))) == (max((((/* implicit */long long int) var_1)), (var_12))))), ((((+(((/* implicit */int) arr_4 [i_12] [i_12] [i_12])))) < (((/* implicit */int) arr_47 [i_0 + 1] [i_0 + 1]))))));
                }
            } 
        } 
    }
}
