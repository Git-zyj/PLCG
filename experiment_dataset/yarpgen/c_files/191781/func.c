/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191781
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191781 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191781
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
    var_14 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))) ? (((var_9) ? (var_3) : (var_3))) : (((/* implicit */unsigned int) ((/* implicit */int) ((7043494131179682153ULL) < (11403249942529869463ULL)))))))), (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 11403249942529869482ULL)) || (((/* implicit */_Bool) 3156535567U))))), (3982086497606013121ULL)))));
    var_15 = ((((/* implicit */_Bool) 3982086497606013121ULL)) ? (11403249942529869462ULL) : (((/* implicit */unsigned long long int) -1067339351)));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        var_16 ^= ((/* implicit */short) ((long long int) var_3));
        var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) 3982086497606013121ULL)) ? (7043494131179682152ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)63)))));
        arr_2 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((895359029), (895359029)))) ? (((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) >= (((/* implicit */int) arr_1 [i_0] [13LL]))))) : (((/* implicit */int) ((unsigned short) arr_0 [i_0])))))) && (((/* implicit */_Bool) max((var_12), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0])) ^ (((/* implicit */int) var_4))))))))));
        var_18 = ((/* implicit */signed char) max((((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))) : (var_12))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [(unsigned short)0])) : (((/* implicit */int) arr_1 [i_0] [i_0])))))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 2; i_1 < 14; i_1 += 4) 
    {
        var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_1 [i_1 - 1] [i_1])) : (((/* implicit */int) arr_1 [i_1 + 2] [i_1 + 1]))));
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 3) 
        {
            for (unsigned int i_3 = 2; i_3 < 15; i_3 += 3) 
            {
                {
                    arr_10 [i_1] [i_2] [i_2] = ((/* implicit */unsigned short) ((arr_3 [i_1]) - (((/* implicit */unsigned int) ((/* implicit */int) var_9)))));
                    arr_11 [i_1] [i_2] [i_3] = ((/* implicit */unsigned char) ((var_5) ? (((/* implicit */int) arr_4 [i_1 + 2])) : (((/* implicit */int) arr_1 [i_1 - 2] [i_1 - 1]))));
                    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) -895359029)) ? (895359029) : (((/* implicit */int) (unsigned char)32))));
                }
            } 
        } 
        var_21 = ((((/* implicit */_Bool) arr_9 [i_1 + 1] [i_1 - 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_1] [i_1 - 2]))) : (var_3));
        /* LoopNest 2 */
        for (signed char i_4 = 2; i_4 < 15; i_4 += 2) 
        {
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                {
                    var_22 = ((/* implicit */unsigned char) ((((/* implicit */int) ((var_2) > (((/* implicit */long long int) ((/* implicit */int) var_7)))))) + (((/* implicit */int) arr_5 [8]))));
                    arr_18 [i_5] = ((/* implicit */short) ((unsigned int) arr_7 [i_4 - 2] [i_4 - 1]));
                    /* LoopNest 2 */
                    for (unsigned int i_6 = 1; i_6 < 13; i_6 += 4) 
                    {
                        for (short i_7 = 1; i_7 < 15; i_7 += 2) 
                        {
                            {
                                arr_23 [i_1] [i_6] [i_5] [i_4] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_12 [i_7 - 1])) ? (((((/* implicit */_Bool) var_11)) ? (var_13) : (((/* implicit */unsigned long long int) var_3)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [13ULL] [i_7] [i_7])))));
                                arr_24 [i_1 + 2] [i_1 + 2] [i_5] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((signed char) -1))) ? (((var_5) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_10))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_22 [i_7] [i_6] [i_4] [i_1] [i_5] [i_4] [i_1])) ? (arr_12 [i_1]) : (((/* implicit */int) var_7)))))));
                                var_23 = ((/* implicit */unsigned int) ((7043494131179682153ULL) ^ (11403249942529869462ULL)));
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */unsigned short) ((signed char) var_5));
                }
            } 
        } 
    }
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_9 = 3; i_9 < 15; i_9 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (signed char i_10 = 0; i_10 < 16; i_10 += 3) 
            {
                for (int i_11 = 1; i_11 < 13; i_11 += 4) 
                {
                    for (unsigned short i_12 = 2; i_12 < 14; i_12 += 2) 
                    {
                        {
                            arr_42 [i_8] [(_Bool)1] [(unsigned short)15] [i_8] [i_12] [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_22 [i_8] [i_12 - 1] [i_10] [i_8] [i_10] [i_12] [i_12 - 1])) * (((/* implicit */int) arr_36 [0ULL] [i_9 + 1] [i_10] [i_11] [i_8]))))) : (arr_39 [i_11 - 1] [i_11] [i_11] [i_12 + 2] [i_12])));
                            var_25 += ((/* implicit */signed char) arr_21 [i_9 - 2] [i_9] [i_9 - 2] [i_9] [i_9] [i_9]);
                            arr_43 [i_8] [i_8] [i_8] [i_8] [i_8] = ((/* implicit */int) ((((/* implicit */int) var_0)) > (((/* implicit */int) ((((/* implicit */long long int) var_1)) <= (arr_29 [i_10]))))));
                        }
                    } 
                } 
            } 
            /* LoopNest 3 */
            for (int i_13 = 0; i_13 < 16; i_13 += 4) 
            {
                for (_Bool i_14 = 0; i_14 < 0; i_14 += 1) 
                {
                    for (short i_15 = 0; i_15 < 16; i_15 += 3) 
                    {
                        {
                            var_26 = ((/* implicit */short) ((long long int) ((((/* implicit */int) arr_8 [i_15] [i_8] [i_13])) - (((/* implicit */int) var_9)))));
                            arr_53 [i_8] = ((/* implicit */int) ((arr_39 [i_15] [i_14 + 1] [i_9 + 1] [i_9 + 1] [i_9]) <= (arr_39 [i_14] [i_14 + 1] [i_9 - 2] [i_9 - 1] [i_8])));
                            var_27 = ((/* implicit */unsigned long long int) min((var_27), (((((/* implicit */_Bool) arr_26 [i_14 + 1] [i_9 + 1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (arr_15 [3U] [i_13] [i_9]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_8] [i_9] [i_13] [i_15])))))) : (((var_13) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))))));
                            arr_54 [i_8] [i_9] [i_9] [i_9] [i_13] [i_9] [12U] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1775500238797568099ULL)) ? (((/* implicit */unsigned long long int) 895359050)) : (14464657576103538494ULL)))) ? (((/* implicit */int) ((short) var_11))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) < (var_10))))));
                            var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_40 [i_8] [i_9 - 1] [i_9 - 1] [i_14 + 1] [i_15])) ? (((/* implicit */int) arr_40 [i_13] [i_9 + 1] [i_9] [i_14] [i_8])) : (((/* implicit */int) arr_46 [i_9]))))) ? (((/* implicit */int) arr_30 [i_8] [i_9 - 3] [i_13])) : (((/* implicit */int) arr_36 [i_14] [i_14 + 1] [i_14 + 1] [i_14] [i_8]))));
                        }
                    } 
                } 
            } 
        }
        for (short i_16 = 3; i_16 < 15; i_16 += 1) /* same iter space */
        {
            var_29 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_56 [i_16] [i_8] [i_8]))) ^ (((max((11403249942529869462ULL), (16671243834911983516ULL))) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-19048)) ? (((/* implicit */long long int) 1067339350)) : (1048575LL))))))));
            var_30 = ((/* implicit */signed char) min((var_30), (((/* implicit */signed char) ((((((/* implicit */_Bool) 1592029224U)) ? (((/* implicit */unsigned long long int) 67108863)) : (11403249942529869463ULL))) << (((((((/* implicit */_Bool) ((unsigned short) 9565092450648407235ULL))) ? (((/* implicit */int) (unsigned short)1020)) : (-1067339351))) - (1020))))))));
            var_31 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_20 [i_8] [i_8] [i_16 - 3] [i_8] [8ULL]), (arr_20 [i_8] [i_8] [i_16 + 1] [i_8] [i_16 - 3])))) ? (var_3) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_8])) ? (arr_19 [i_8] [i_8] [i_8] [i_16]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_8] [i_8] [i_16] [i_8])))))) ? (min((((/* implicit */unsigned int) -67108864)), (2702938072U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_35 [i_16] [i_16] [i_8] [i_16])) <= (((/* implicit */int) arr_44 [i_8]))))))))));
        }
        arr_57 [4ULL] &= ((/* implicit */_Bool) min((((((/* implicit */_Bool) 9565092450648407235ULL)) ? (895359029) : (((/* implicit */int) (_Bool)0)))), (((/* implicit */int) ((short) ((1775500238797568099ULL) << (((/* implicit */int) (unsigned char)0))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_17 = 0; i_17 < 16; i_17 += 4) 
        {
            arr_61 [i_8] [i_17] [i_17] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 4451697423720070485ULL)) ? (8522764972302184381LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))) == (((/* implicit */long long int) ((((/* implicit */_Bool) arr_56 [i_8] [i_8] [i_17])) ? (arr_47 [i_8] [i_17] [i_8]) : (((/* implicit */int) arr_44 [i_8])))))));
            arr_62 [i_8] [i_8] = ((/* implicit */short) ((((var_13) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_17] [i_17] [i_17] [i_8] [(_Bool)1] [i_8]))))) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_38 [i_17] [i_17] [i_8] [i_8] [i_8])))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_5))))));
        }
    }
    var_32 = ((/* implicit */signed char) min((var_32), (((/* implicit */signed char) var_5))));
    var_33 = var_10;
}
