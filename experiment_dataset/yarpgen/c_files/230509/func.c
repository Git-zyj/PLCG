/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230509
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
    var_18 = ((/* implicit */short) var_13);
    var_19 = ((/* implicit */signed char) max((var_15), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(var_8)))) && (((/* implicit */_Bool) var_6)))))));
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        arr_2 [(unsigned char)12] = ((/* implicit */unsigned char) max((((/* implicit */int) (unsigned char)0)), (((((/* implicit */int) min((((/* implicit */unsigned short) arr_0 [i_0] [1U])), (arr_1 [i_0])))) & (((((/* implicit */int) var_17)) ^ (((/* implicit */int) var_7))))))));
        /* LoopSeq 2 */
        for (int i_1 = 1; i_1 < 15; i_1 += 3) 
        {
            var_20 = ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1]))) != (((((/* implicit */_Bool) var_5)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))))))))));
            arr_5 [11ULL] [11ULL] [11ULL] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) (((+(832736293))) / (((/* implicit */int) var_12))))) : (((min((((/* implicit */unsigned long long int) var_4)), (var_13))) * (((((/* implicit */unsigned long long int) 832736293)) * (9007199254740960ULL)))))));
            var_21 = ((/* implicit */unsigned int) min((((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [(_Bool)1])) ? (((/* implicit */int) arr_3 [i_0] [(unsigned char)15] [i_0])) : (((/* implicit */int) var_10))))) && (((/* implicit */_Bool) arr_4 [(unsigned char)8] [i_1]))))), (min((var_17), (arr_3 [i_0] [i_1 - 1] [i_1])))));
            /* LoopSeq 4 */
            for (signed char i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 9918928036350948745ULL)) ? (9007199254740960ULL) : (((/* implicit */unsigned long long int) 832736287))));
                var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)97)) + (((/* implicit */int) var_15))))) ? ((+(var_6))) : (((var_3) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_1] [i_2])))))))) && (((/* implicit */_Bool) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))) - (0ULL))))))));
            }
            /* vectorizable */
            for (int i_3 = 1; i_3 < 14; i_3 += 4) 
            {
                var_24 -= ((/* implicit */int) ((((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_3))) >> (((((/* implicit */int) arr_8 [i_1 + 1] [i_0])) - (21882)))));
                var_25 *= ((/* implicit */unsigned char) (~((+(((/* implicit */int) arr_1 [i_3]))))));
            }
            for (short i_4 = 1; i_4 < 13; i_4 += 1) 
            {
                arr_13 [i_0] [i_0] [15] &= ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_1 - 1] [i_4 + 2] [i_4 + 2]))) != (arr_11 [i_1 + 1] [i_4 - 1] [(unsigned char)0]))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_1 - 1] [i_4 + 2] [i_4]))))) : (min((-268435456), (832736275)))));
                arr_14 [1] [7ULL] [7] = ((/* implicit */_Bool) ((int) min((arr_6 [i_1 + 1] [10U] [i_4 + 2]), (arr_6 [i_1 + 1] [(unsigned char)11] [i_4 + 1]))));
            }
            for (unsigned char i_5 = 0; i_5 < 16; i_5 += 1) 
            {
                var_26 -= ((/* implicit */int) ((unsigned char) 1U));
                var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_5])) && (((/* implicit */_Bool) ((((/* implicit */int) var_10)) + (((/* implicit */int) max((((/* implicit */unsigned char) var_10)), (var_16)))))))));
            }
        }
        for (unsigned char i_6 = 0; i_6 < 16; i_6 += 1) 
        {
            var_28 ^= ((/* implicit */unsigned char) ((unsigned short) arr_16 [i_6]));
            var_29 = ((/* implicit */signed char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_3 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_12 [8ULL] [8ULL] [i_6]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) - (var_5)))) : (var_13))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_16 [i_0])))))));
        }
    }
    /* vectorizable */
    for (unsigned int i_7 = 2; i_7 < 18; i_7 += 2) 
    {
        /* LoopSeq 4 */
        for (unsigned int i_8 = 2; i_8 < 18; i_8 += 3) 
        {
            var_30 = ((/* implicit */int) (-(var_5)));
            var_31 = ((/* implicit */_Bool) ((((/* implicit */int) var_1)) ^ (((/* implicit */int) var_11))));
            arr_27 [(signed char)4] [(signed char)4] = ((/* implicit */int) var_9);
        }
        for (unsigned long long int i_9 = 4; i_9 < 17; i_9 += 1) 
        {
            arr_30 [5ULL] = ((/* implicit */int) arr_24 [i_7] [i_7] [13]);
            arr_31 [i_7] [i_7] = ((/* implicit */_Bool) ((int) ((var_14) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_7] [i_7] [i_9]))))));
            arr_32 [i_7 - 2] = ((/* implicit */signed char) arr_25 [i_9 + 1] [i_9 + 1]);
            arr_33 [i_7] [i_7] [i_9 + 2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_24 [i_9 - 3] [(short)2] [i_9])) ? ((~(((/* implicit */int) var_2)))) : (((/* implicit */int) (unsigned short)65535))));
        }
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            arr_37 [2ULL] [0U] = ((/* implicit */unsigned char) ((var_3) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_7 - 2] [i_7 - 1] [i_7 + 1])))));
            /* LoopSeq 1 */
            for (unsigned long long int i_11 = 0; i_11 < 19; i_11 += 3) 
            {
                arr_40 [i_7] = ((/* implicit */_Bool) (+((+(arr_25 [i_7 - 2] [i_7])))));
                var_32 = (-(255508562));
                var_33 = ((/* implicit */unsigned int) arr_23 [i_10] [(signed char)3]);
                var_34 = ((/* implicit */unsigned char) arr_22 [i_7] [(_Bool)0]);
            }
        }
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
        {
            var_35 = ((/* implicit */unsigned int) arr_25 [(signed char)11] [i_12]);
            var_36 = ((/* implicit */int) ((((/* implicit */unsigned int) var_4)) / (var_5)));
            arr_43 [i_7 + 1] [i_7 + 1] = arr_26 [i_7] [i_12] [i_12];
        }
        arr_44 [i_7] [i_7] = ((/* implicit */int) var_0);
        arr_45 [(signed char)14] [i_7 + 1] = ((/* implicit */unsigned long long int) (+(268435452)));
    }
    for (int i_13 = 0; i_13 < 10; i_13 += 4) 
    {
        var_37 = ((/* implicit */int) max(((+(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_13] [i_13]))) / (11764837137239546923ULL))))), (((/* implicit */unsigned long long int) (((-(3212363446580984792ULL))) <= (((((/* implicit */_Bool) 15234380627128566830ULL)) ? (((/* implicit */unsigned long long int) 832736287)) : (3130751731900419185ULL))))))));
        /* LoopSeq 2 */
        for (unsigned char i_14 = 2; i_14 < 7; i_14 += 1) 
        {
            arr_50 [i_14] [i_14] [(unsigned char)4] = ((/* implicit */unsigned long long int) arr_39 [i_13] [i_13] [i_14] [i_13]);
            arr_51 [i_13] = arr_23 [i_14 + 1] [i_14 - 2];
            arr_52 [i_13] [i_13] [(_Bool)0] = ((/* implicit */unsigned int) (short)-32762);
            var_38 = ((/* implicit */unsigned char) (((~(((/* implicit */int) arr_10 [i_13] [i_14 + 2] [i_14 - 2])))) != (((((/* implicit */_Bool) (~(((/* implicit */int) arr_28 [i_14] [i_13]))))) ? (((/* implicit */int) arr_21 [i_14 - 1] [16ULL])) : (((/* implicit */int) ((((/* implicit */int) var_11)) <= (((/* implicit */int) arr_8 [i_13] [i_14 + 1])))))))));
        }
        for (unsigned long long int i_15 = 2; i_15 < 6; i_15 += 1) 
        {
            var_39 = ((/* implicit */int) (~(((((/* implicit */_Bool) arr_48 [i_15 + 1] [i_15 + 1] [i_15 + 2])) ? (((/* implicit */unsigned long long int) (~(var_5)))) : (var_3)))));
            var_40 *= ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) (short)-32747)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-48))) : (7357519174837409579ULL)))));
        }
        var_41 = ((/* implicit */signed char) min((var_41), (((signed char) min((var_14), (((/* implicit */unsigned long long int) (unsigned char)18)))))));
    }
}
