/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2755
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2755 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2755
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
    var_15 = ((/* implicit */int) var_9);
    var_16 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((-1LL) + (((/* implicit */long long int) ((/* implicit */int) (unsigned short)40367)))))) <= (var_6)));
    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((var_6) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_12)), (var_8))))))) ? ((((~(((/* implicit */int) (unsigned short)40367)))) + (((/* implicit */int) var_1)))) : (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */unsigned int) var_12)) == (4294967295U)))) > (((/* implicit */int) var_9)))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    var_18 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_3)), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) (-(((/* implicit */int) var_4))))) : (max((((/* implicit */long long int) var_11)), (var_14)))))));
                    var_19 = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))) : (var_14)))) < (((unsigned long long int) arr_3 [i_0] [i_0]))))), (((((/* implicit */_Bool) -1)) ? (arr_1 [i_0] [(_Bool)1]) : (min((6LL), (((/* implicit */long long int) (_Bool)1))))))));
                }
            } 
        } 
        /* LoopSeq 4 */
        for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 4) 
        {
            arr_10 [i_3] [i_0] [i_0] = ((/* implicit */unsigned char) (-(((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_3] [i_0]))) ^ (var_2)))));
            arr_11 [i_3] [(signed char)0] [i_0] = ((/* implicit */unsigned int) 8284542926521109858LL);
            arr_12 [i_0] [i_0] = ((/* implicit */long long int) (unsigned short)25168);
            var_20 = ((/* implicit */unsigned int) ((unsigned short) ((int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)4889))) : (var_0)))));
            var_21 += ((/* implicit */unsigned char) (~(((/* implicit */int) ((max((((/* implicit */long long int) (unsigned short)2047)), (var_8))) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)25186))))))));
        }
        /* vectorizable */
        for (long long int i_4 = 0; i_4 < 22; i_4 += 4) 
        {
            /* LoopNest 2 */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                for (unsigned long long int i_6 = 2; i_6 < 20; i_6 += 4) 
                {
                    {
                        var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(var_11)))) ? ((~(arr_19 [(unsigned short)2] [i_4] [16ULL] [16ULL] [i_4]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_5] [i_6 - 1] [i_6 - 2] [i_6 - 1])))));
                        arr_20 [i_6] [i_5] [i_5] [(unsigned short)21] [(unsigned short)21] = arr_9 [i_0] [i_0] [i_5];
                        arr_21 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_0 [21]);
                    }
                } 
            } 
            var_23 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_4))));
            /* LoopSeq 1 */
            for (int i_7 = 0; i_7 < 22; i_7 += 4) 
            {
                arr_25 [i_0] [i_7] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) var_2)))))));
                var_24 = ((/* implicit */long long int) arr_7 [i_0]);
                /* LoopSeq 3 */
                for (short i_8 = 0; i_8 < 22; i_8 += 1) 
                {
                    arr_29 [i_4] [i_4] |= ((((/* implicit */_Bool) arr_2 [i_8] [i_4] [i_7])) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) (short)10650))));
                    var_25 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_17 [i_0] [i_4] [i_7] [i_8]))));
                }
                for (unsigned int i_9 = 0; i_9 < 22; i_9 += 4) 
                {
                    var_26 = (-(arr_19 [i_0] [i_4] [i_7] [i_7] [i_9]));
                    /* LoopSeq 1 */
                    for (long long int i_10 = 0; i_10 < 22; i_10 += 2) 
                    {
                        arr_35 [3U] [i_9] [i_0] [i_4] [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned int) (~(var_12)))) * ((-(23U)))));
                        var_27 = ((/* implicit */int) ((1U) >= (((/* implicit */unsigned int) ((/* implicit */int) var_10)))));
                        var_28 = ((/* implicit */unsigned short) (-(5640635824343813673LL)));
                        var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) var_4))));
                    }
                }
                for (unsigned short i_11 = 0; i_11 < 22; i_11 += 4) 
                {
                    arr_39 [i_0] [i_0] [i_7] [i_11] = ((/* implicit */unsigned short) var_12);
                    arr_40 [7ULL] [i_4] [i_7] [i_11] = ((/* implicit */signed char) (-((-(14747836470592347524ULL)))));
                }
                var_30 = ((/* implicit */unsigned short) var_0);
            }
        }
        for (unsigned short i_12 = 0; i_12 < 22; i_12 += 2) 
        {
            var_31 = ((/* implicit */unsigned short) (+(((/* implicit */int) min((arr_33 [i_0] [i_0] [i_12]), (arr_33 [i_0] [i_0] [i_0]))))));
            arr_44 [i_0] [(short)20] [7U] = ((/* implicit */signed char) arr_4 [i_12] [i_0] [i_0]);
            /* LoopSeq 1 */
            for (unsigned long long int i_13 = 3; i_13 < 21; i_13 += 4) 
            {
                arr_49 [i_13] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) arr_16 [i_13 - 1]))) ? (((/* implicit */int) arr_41 [(unsigned char)16] [i_12])) : (((/* implicit */int) var_10))));
                arr_50 [i_0] [i_13] [i_13] [9U] = ((/* implicit */int) ((3523473846U) != (((/* implicit */unsigned int) ((/* implicit */int) arr_42 [i_0] [i_0] [(_Bool)1])))));
                arr_51 [1LL] [i_13] [i_13] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_7)), (((var_14) / (((/* implicit */long long int) var_3))))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) : (((((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) 699164422U)) : (var_14))) / (((/* implicit */long long int) (+(((/* implicit */int) var_7)))))))));
                arr_52 [i_13] [i_12] [i_13] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((int) arr_34 [i_13] [i_13 - 2] [i_13 - 2] [i_13 - 1] [i_13]))) != (var_8)));
            }
        }
        for (unsigned char i_14 = 0; i_14 < 22; i_14 += 3) 
        {
            arr_55 [i_14] [i_0] = ((/* implicit */unsigned long long int) min(((~(((/* implicit */int) var_4)))), (((((/* implicit */_Bool) (short)10660)) ? (var_3) : (((/* implicit */int) ((unsigned short) var_1)))))));
            var_32 = ((/* implicit */long long int) max((((/* implicit */unsigned int) (~(((/* implicit */int) arr_4 [i_0] [i_0] [i_14]))))), (((((/* implicit */_Bool) arr_4 [i_0] [i_14] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [(signed char)20] [i_14] [(unsigned short)13]))) : (var_2)))));
        }
        arr_56 [(unsigned char)18] [i_0] = ((/* implicit */int) var_0);
    }
}
