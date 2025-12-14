/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238919
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
    var_14 = ((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) ((var_1) + (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_5))))) : (var_10))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_0])) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))))))));
        /* LoopSeq 1 */
        for (int i_1 = 3; i_1 < 23; i_1 += 2) 
        {
            arr_5 [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_1 - 2])) ? (((/* implicit */int) arr_0 [i_1 + 1])) : (((/* implicit */int) arr_0 [i_1 - 3]))));
            var_16 *= ((/* implicit */unsigned long long int) (_Bool)1);
        }
        arr_6 [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */int) var_8)) != (((/* implicit */int) (_Bool)1)))) || (((/* implicit */_Bool) arr_0 [(short)2]))));
    }
    for (signed char i_2 = 0; i_2 < 21; i_2 += 1) 
    {
        var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_4 [(_Bool)1] [(_Bool)1]), (((/* implicit */unsigned int) arr_7 [i_2]))))) ? (arr_4 [(unsigned short)10] [(unsigned short)10]) : (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)82)) + (((/* implicit */int) (signed char)82)))))));
        var_18 -= ((/* implicit */signed char) arr_3 [i_2] [(signed char)16]);
    }
    /* LoopSeq 2 */
    for (unsigned short i_3 = 3; i_3 < 21; i_3 += 2) 
    {
        var_19 = ((/* implicit */unsigned short) arr_10 [i_3]);
        arr_13 [i_3 + 2] = ((((/* implicit */_Bool) var_3)) ? ((~((+(var_4))))) : (((/* implicit */int) var_8)));
        var_20 = ((/* implicit */int) var_12);
        /* LoopNest 2 */
        for (unsigned long long int i_4 = 4; i_4 < 23; i_4 += 4) 
        {
            for (long long int i_5 = 0; i_5 < 24; i_5 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_6 = 0; i_6 < 24; i_6 += 2) 
                    {
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            {
                                arr_24 [i_3] [i_3] [i_7] = ((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */_Bool) (signed char)-83)) && (((/* implicit */_Bool) 1167615733))))), (((((/* implicit */_Bool) arr_14 [(_Bool)1] [i_3 - 1])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_14 [i_3] [i_3 - 1]))))));
                                var_21 -= ((((((/* implicit */_Bool) (unsigned short)27032)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-22531))) + (var_10))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)43894)) + (((/* implicit */int) var_12))))))) >> (((/* implicit */int) (unsigned short)0)));
                                var_22 -= ((((/* implicit */int) max((arr_14 [i_4 - 2] [i_4 - 1]), (arr_14 [i_4 - 3] [i_3])))) > (((/* implicit */int) ((((/* implicit */int) var_7)) <= (((/* implicit */int) arr_2 [i_6] [14] [i_6]))))));
                                var_23 = ((/* implicit */unsigned short) (short)(-32767 - 1));
                            }
                        } 
                    } 
                    arr_25 [i_3] [i_4] [i_4 - 2] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) (short)7)) && (((/* implicit */_Bool) var_1))))))));
                }
            } 
        } 
    }
    for (unsigned int i_8 = 2; i_8 < 14; i_8 += 4) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_10 = 0; i_10 < 15; i_10 += 2) 
            {
                arr_34 [i_9] [(signed char)8] [(_Bool)1] [i_9] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_15 [i_8] [i_9]) - (((/* implicit */long long int) ((/* implicit */int) var_5)))))) ? (((/* implicit */int) arr_32 [i_9] [i_8] [i_9])) : (((((/* implicit */_Bool) arr_26 [i_8])) ? (((/* implicit */int) arr_26 [i_10])) : (var_4)))));
                /* LoopSeq 3 */
                for (unsigned long long int i_11 = 2; i_11 < 13; i_11 += 4) 
                {
                    var_24 -= ((/* implicit */unsigned long long int) ((int) arr_8 [i_11 + 2]));
                    arr_38 [i_8] [i_9] [i_9] = ((/* implicit */short) (+(((/* implicit */int) arr_9 [i_8 - 2] [i_10]))));
                }
                for (short i_12 = 1; i_12 < 13; i_12 += 3) 
                {
                    var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_39 [i_8] [i_10] [i_8] [i_8 - 2] [i_8 - 1])))))));
                    var_26 -= var_1;
                    arr_43 [(signed char)0] [0ULL] [i_9] [(_Bool)1] [i_9] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)238)) | (-1869066086)))) ? (arr_36 [i_9]) : (((((/* implicit */_Bool) var_4)) ? (arr_20 [i_8] [i_9] [i_9 + 1] [i_10] [i_12] [i_12]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_12 + 1])))))));
                    var_27 |= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_10])) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_8] [i_8]))) : (arr_21 [i_8] [i_9 + 1] [i_8] [i_9 + 1] [i_9 + 1] [i_12])))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_31 [i_10]))) | (arr_15 [i_10] [i_9]))) : (((/* implicit */long long int) var_1))));
                }
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    var_28 = ((/* implicit */short) ((((/* implicit */_Bool) arr_10 [i_8 + 1])) ? (arr_10 [i_8 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_8 - 1] [(unsigned short)6])))));
                    var_29 ^= ((/* implicit */unsigned long long int) ((arr_15 [(unsigned short)2] [i_9 + 1]) | (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_13])))));
                }
            }
            var_30 ^= ((/* implicit */signed char) arr_1 [i_9]);
        }
        arr_46 [i_8 - 1] = ((/* implicit */signed char) max((((((var_4) <= (((/* implicit */int) arr_11 [i_8 - 2])))) ? (max((var_10), (((/* implicit */unsigned long long int) var_4)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (short)-10360)) > (((/* implicit */int) (signed char)-63)))))))), (((/* implicit */unsigned long long int) var_13))));
    }
    var_31 = ((/* implicit */unsigned long long int) max((var_31), (max((var_10), (((/* implicit */unsigned long long int) var_4))))));
}
