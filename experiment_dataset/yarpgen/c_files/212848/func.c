/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212848
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212848 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212848
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
    var_20 = ((/* implicit */unsigned int) ((((min((((/* implicit */long long int) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_9))))), (((((/* implicit */_Bool) 5643815062497904783ULL)) ? (((/* implicit */long long int) 0U)) : (1299645926826832153LL))))) + (9223372036854775807LL))) >> (((((/* implicit */_Bool) var_7)) ? (((unsigned long long int) 0U)) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)164)))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            /* LoopNest 3 */
            for (short i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                for (unsigned int i_3 = 0; i_3 < 12; i_3 += 4) 
                {
                    for (long long int i_4 = 0; i_4 < 12; i_4 += 2) 
                    {
                        {
                            arr_13 [i_0] [i_1] [i_3] [i_3] [i_4] [i_0] [i_1] &= ((/* implicit */long long int) min(((!(((/* implicit */_Bool) var_3)))), (((0U) <= (16777208U)))));
                            arr_14 [i_0] [i_1] [i_1] [i_3] [i_4] [i_1] = ((/* implicit */int) var_1);
                            var_21 = ((/* implicit */short) ((((/* implicit */_Bool) var_2)) ? ((+(12451763228174408645ULL))) : (max((((/* implicit */unsigned long long int) -934454559)), (arr_7 [i_0] [i_1] [i_4])))));
                            var_22 = ((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))))) : (min((8863150667960513959ULL), (((/* implicit */unsigned long long int) 1142786372))))));
                            var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) (-(((/* implicit */int) (short)-5614)))))));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (signed char i_5 = 2; i_5 < 10; i_5 += 2) 
            {
                for (int i_6 = 0; i_6 < 12; i_6 += 2) 
                {
                    {
                        var_24 = (i_1 % 2 == zero) ? (((/* implicit */short) ((((/* implicit */int) (short)6478)) >> (((((arr_12 [i_5] [i_1] [i_5 + 1]) & (arr_12 [i_5 + 1] [i_1] [i_5 - 2]))) - (3005564873U)))))) : (((/* implicit */short) ((((/* implicit */int) (short)6478)) >> (((((((arr_12 [i_5] [i_1] [i_5 + 1]) & (arr_12 [i_5 + 1] [i_1] [i_5 - 2]))) - (3005564873U))) - (2930906305U))))));
                        arr_20 [i_1] [i_1] [i_0] [i_6] = ((/* implicit */short) ((var_1) << (((arr_16 [i_6] [i_1] [i_0]) - (4115052457U)))));
                        arr_21 [i_0] [i_1] [i_1] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_5 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (-6095855854692788979LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) < (var_3))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)13469))) * (18446744073709551613ULL)))));
                        var_25 *= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_9 [i_1] [i_5 + 2] [i_5 + 2] [i_5] [i_5] [i_5 + 2])) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)78))))) > (((/* implicit */long long int) ((int) arr_9 [i_5 + 1] [i_5 - 2] [i_5] [i_5] [i_5 + 1] [i_5 - 1])))));
                    }
                } 
            } 
            var_26 += ((/* implicit */_Bool) var_5);
            var_27 = ((/* implicit */long long int) min((min((arr_7 [i_0] [i_1] [i_0]), (arr_7 [i_0] [i_1] [i_1]))), (((/* implicit */unsigned long long int) max((var_3), (((/* implicit */unsigned int) (signed char)-101)))))));
        }
        /* vectorizable */
        for (int i_7 = 0; i_7 < 12; i_7 += 2) 
        {
            var_28 = arr_0 [i_0];
            var_29 += ((/* implicit */long long int) var_6);
            /* LoopSeq 3 */
            for (short i_8 = 0; i_8 < 12; i_8 += 2) 
            {
                var_30 = ((/* implicit */signed char) max((var_30), (((/* implicit */signed char) ((((/* implicit */_Bool) 6909638259302543025LL)) ? (1351701031U) : (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (short)32762)) : (((/* implicit */int) (short)15))))))))));
                arr_30 [i_8] = ((/* implicit */unsigned int) var_10);
            }
            for (short i_9 = 4; i_9 < 9; i_9 += 4) 
            {
                var_31 ^= ((/* implicit */unsigned char) ((2147483648U) - (((/* implicit */unsigned int) 732262808))));
                var_32 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)20699))) : (4294967295U)))) <= (arr_28 [i_7] [i_9 + 2])));
                /* LoopSeq 1 */
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    var_33 = ((/* implicit */_Bool) min((var_33), (((/* implicit */_Bool) ((((/* implicit */int) arr_18 [i_9 + 1] [i_9 - 2] [i_9 - 4])) - (((/* implicit */int) (unsigned char)90)))))));
                    var_34 = ((/* implicit */long long int) arr_24 [i_0] [i_0]);
                }
                /* LoopNest 2 */
                for (unsigned int i_11 = 0; i_11 < 12; i_11 += 4) 
                {
                    for (short i_12 = 0; i_12 < 12; i_12 += 1) 
                    {
                        {
                            arr_40 [i_7] [i_12] [i_7] [i_7] [i_7] [i_7] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) - (0ULL)));
                            arr_41 [i_12] [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (arr_24 [i_12] [i_9 + 2]) : (((/* implicit */int) (short)-32746))));
                            arr_42 [i_0] [i_12] [i_9 + 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_10 [i_9 + 1] [i_9 + 3] [i_12] [i_9])) ? (((((/* implicit */_Bool) (short)32745)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)15798))) : (16541759811759736049ULL))) : (((/* implicit */unsigned long long int) 1249373966U))));
                        }
                    } 
                } 
                arr_43 [i_9] [i_7] [i_7] [i_0] = ((/* implicit */unsigned int) 712931146357608147ULL);
            }
            for (long long int i_13 = 0; i_13 < 12; i_13 += 4) 
            {
                var_35 = ((/* implicit */unsigned int) (((_Bool)1) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))));
                var_36 = ((/* implicit */unsigned short) min((var_36), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_12)) ? (2110213074479777197ULL) : (((/* implicit */unsigned long long int) 4294967295U)))))));
            }
            var_37 = ((/* implicit */short) 2110213074479777195ULL);
        }
        /* LoopNest 2 */
        for (long long int i_14 = 0; i_14 < 12; i_14 += 3) 
        {
            for (unsigned char i_15 = 0; i_15 < 12; i_15 += 1) 
            {
                {
                    var_38 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((1249373966U), (((/* implicit */unsigned int) (unsigned short)24263))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_14]))) : (18446744073709551614ULL)));
                    var_39 -= ((/* implicit */unsigned long long int) 3531749796U);
                    var_40 = ((((/* implicit */_Bool) ((unsigned int) var_11))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_18 [i_0] [i_14] [i_15]))) * (var_10))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_18)) > (((/* implicit */int) (_Bool)1)))))));
                    var_41 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) var_5))) ? (((var_11) + (var_1))) : (((/* implicit */unsigned long long int) max((0U), (((/* implicit */unsigned int) arr_5 [i_0] [i_15])))))));
                }
            } 
        } 
        var_42 = ((/* implicit */int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (min((var_17), (((/* implicit */long long int) var_16))))));
    }
    var_43 = ((/* implicit */_Bool) var_11);
    var_44 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_15)) >= (((/* implicit */int) var_7))));
}
