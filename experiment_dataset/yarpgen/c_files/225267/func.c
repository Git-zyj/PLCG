/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225267
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225267 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225267
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
    /* vectorizable */
    for (int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((int) arr_0 [i_0]);
        var_15 ^= ((/* implicit */unsigned int) ((((/* implicit */int) var_6)) / (((int) var_1))));
        arr_3 [(short)10] |= ((/* implicit */unsigned short) var_7);
        arr_4 [i_0] = ((((/* implicit */_Bool) (short)-15917)) ? (0U) : (18U));
    }
    for (unsigned int i_1 = 0; i_1 < 15; i_1 += 1) 
    {
        var_16 -= ((/* implicit */int) arr_7 [i_1] [i_1]);
        var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) var_6))));
        arr_8 [4U] [i_1] = (+(max((arr_1 [2U]), (arr_1 [(signed char)22]))));
        var_18 = ((/* implicit */unsigned short) ((max((9790114938797715498ULL), (((/* implicit */unsigned long long int) (short)224)))) & (((/* implicit */unsigned long long int) ((/* implicit */int) (short)15917)))));
        /* LoopSeq 2 */
        for (unsigned int i_2 = 1; i_2 < 11; i_2 += 1) 
        {
            var_19 = var_6;
            /* LoopSeq 3 */
            /* vectorizable */
            for (signed char i_3 = 0; i_3 < 15; i_3 += 1) 
            {
                /* LoopSeq 3 */
                for (unsigned long long int i_4 = 4; i_4 < 13; i_4 += 1) /* same iter space */
                {
                    arr_18 [i_1] [i_2] [(short)2] [(short)4] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_16 [(signed char)8] [i_4 - 1] [i_4 - 3] [i_2 + 4] [i_2 + 2] [(signed char)8])) && (((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_14))))));
                    arr_19 [i_1] [i_1] [i_2] [(short)5] = ((/* implicit */unsigned short) ((((((/* implicit */int) var_4)) - (((/* implicit */int) var_7)))) / (((((/* implicit */int) arr_13 [i_1] [i_2 - 1] [i_3])) ^ (arr_11 [i_2] [i_3] [i_2])))));
                    arr_20 [i_2] [12ULL] [i_2 - 1] [i_2] = ((/* implicit */unsigned int) (short)-15918);
                    var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) (-(((((/* implicit */unsigned int) ((/* implicit */int) var_6))) - (var_11))))))));
                }
                for (unsigned long long int i_5 = 4; i_5 < 13; i_5 += 1) /* same iter space */
                {
                    arr_25 [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_10 [i_2] [i_2 + 4])) < (((/* implicit */int) arr_9 [i_2]))));
                    var_21 -= ((/* implicit */unsigned short) ((var_10) < (arr_12 [4] [i_3] [i_5])));
                    arr_26 [i_2] [i_3] [i_2] [i_2] [i_1] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) + (((((/* implicit */unsigned int) ((/* implicit */int) var_8))) & (var_11)))));
                    var_22 = ((/* implicit */short) ((((/* implicit */int) arr_13 [i_1] [i_3] [i_5])) + (((/* implicit */int) ((unsigned char) (short)-27777)))));
                    var_23 = ((/* implicit */unsigned char) ((arr_11 [i_2 - 1] [i_2 + 1] [i_2]) ^ (((/* implicit */int) var_8))));
                }
                for (long long int i_6 = 2; i_6 < 13; i_6 += 3) 
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_7 = 0; i_7 < 15; i_7 += 2) 
                    {
                        var_24 = ((/* implicit */unsigned long long int) ((arr_15 [9U] [9U] [i_2] [i_6]) + (((/* implicit */long long int) arr_17 [i_1] [i_1] [i_3] [i_6 - 1] [i_7] [i_1]))));
                        var_25 = ((((arr_17 [(signed char)9] [i_2] [i_3] [i_6 + 2] [i_7] [i_7]) * (((/* implicit */unsigned int) ((/* implicit */int) var_3))))) * (var_10));
                        var_26 = ((((/* implicit */int) var_6)) - (((/* implicit */int) var_8)));
                        var_27 = ((/* implicit */signed char) ((arr_1 [i_2]) >= (arr_1 [i_2])));
                    }
                    var_28 = ((/* implicit */signed char) var_12);
                }
                var_29 = ((/* implicit */unsigned int) ((arr_28 [i_2] [i_1] [i_2 + 2]) | (((/* implicit */int) (short)-15917))));
            }
            /* vectorizable */
            for (short i_8 = 0; i_8 < 15; i_8 += 1) 
            {
                var_30 += var_7;
                arr_35 [i_8] [i_2] [i_2] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_2] [i_2]))) : (var_0)));
                var_31 = ((/* implicit */short) var_6);
            }
            for (short i_9 = 2; i_9 < 11; i_9 += 2) 
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (int i_10 = 0; i_10 < 15; i_10 += 1) 
                {
                    arr_42 [i_9] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */int) (short)15917)) | (((/* implicit */int) (short)15916))));
                    var_32 = ((/* implicit */unsigned long long int) var_4);
                }
                var_33 = ((/* implicit */signed char) min((var_11), (((/* implicit */unsigned int) var_5))));
                var_34 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)9)) || (((/* implicit */_Bool) 2344728342U))));
                var_35 = (~(((/* implicit */int) (short)-27777)));
            }
        }
        for (unsigned int i_11 = 2; i_11 < 13; i_11 += 2) 
        {
            arr_45 [i_11] = ((/* implicit */short) max((((/* implicit */int) ((short) -4725947153485593579LL))), (arr_14 [i_1] [i_1] [i_1] [i_11 + 1])));
            arr_46 [9U] [(short)3] [(unsigned char)13] = max((((/* implicit */long long int) ((signed char) arr_34 [i_1] [i_1] [i_11] [i_11]))), (arr_33 [i_1] [i_11] [i_11 - 1] [i_1]));
            var_36 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */int) var_5)) - (((/* implicit */int) var_3))))) != ((~(max((var_10), (((/* implicit */unsigned int) var_8))))))));
        }
    }
    for (int i_12 = 0; i_12 < 21; i_12 += 1) 
    {
        var_37 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [(short)22])) <= (((/* implicit */int) arr_47 [i_12]))));
        arr_49 [i_12] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) (signed char)-122)))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (signed char)118))));
    }
    var_38 = ((/* implicit */int) ((((/* implicit */int) var_7)) <= (((/* implicit */int) var_7))));
}
