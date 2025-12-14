/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221762
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221762 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221762
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (signed char i_1 = 4; i_1 < 17; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */int) min((min((arr_6 [i_1 - 3] [i_1 - 1]), (((/* implicit */unsigned int) var_12)))), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (+(arr_6 [i_0] [i_1])))) > ((+(18446744073709551615ULL))))))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 3; i_2 < 17; i_2 += 3) 
                {
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_14 = ((/* implicit */int) arr_6 [i_1] [i_1]);
                            var_15 |= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)101))) / (18446744073709551615ULL)));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (long long int i_5 = 0; i_5 < 18; i_5 += 1) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned char) min((((((arr_13 [i_4]) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_10 [(unsigned char)12] [i_1] [i_4] [i_4] [i_1])))) != (((/* implicit */int) arr_1 [i_1])))), (var_4)));
                            arr_17 [i_5] [i_1] [i_1] [i_4] [i_5] = ((/* implicit */unsigned char) min((min((0ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (arr_7 [i_4])))))), (((/* implicit */unsigned long long int) arr_5 [i_5] [i_0] [i_4]))));
                            var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551615ULL))))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_6 = 1; i_6 < 17; i_6 += 3) 
                {
                    for (short i_7 = 0; i_7 < 18; i_7 += 4) 
                    {
                        {
                            arr_26 [i_6 + 1] [i_6] [i_6 + 1] [i_7] = ((/* implicit */int) 18446744073709551602ULL);
                            arr_27 [i_6] [i_6] = ((/* implicit */int) var_9);
                            var_18 ^= ((/* implicit */signed char) max((((((arr_21 [0LL] [i_7] [i_0]) ? (13ULL) : (var_7))) + (((/* implicit */unsigned long long int) ((/* implicit */int) min(((signed char)72), (((/* implicit */signed char) var_6)))))))), (((/* implicit */unsigned long long int) max((8796093020160LL), (((/* implicit */long long int) arr_1 [i_0])))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (int i_8 = 4; i_8 < 7; i_8 += 3) 
    {
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            for (long long int i_10 = 0; i_10 < 10; i_10 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_11 = 1; i_11 < 9; i_11 += 4) 
                    {
                        for (long long int i_12 = 0; i_12 < 10; i_12 += 2) 
                        {
                            {
                                arr_40 [i_8] = ((/* implicit */int) arr_10 [i_8 - 3] [i_9] [i_8 - 3] [(_Bool)1] [i_11 + 1]);
                                arr_41 [(short)1] [i_12] [i_12] [i_12] [i_12] [(short)1] [i_12] |= ((/* implicit */unsigned long long int) min(((-(-2238502027378135933LL))), (((/* implicit */long long int) ((signed char) ((arr_22 [i_12] [i_10] [i_10] [i_10] [i_10] [i_10]) ^ (((/* implicit */int) var_9))))))));
                                var_19 = ((/* implicit */unsigned long long int) (~(-245104041774425097LL)));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_13 = 0; i_13 < 10; i_13 += 2) 
                    {
                        for (int i_14 = 1; i_14 < 7; i_14 += 4) 
                        {
                            {
                                arr_47 [i_8] [i_8] [i_10] [i_13] [i_14 - 1] [i_14] |= ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) & (arr_15 [i_8] [i_8] [17LL] [i_8] [i_8] [i_8])))) ? ((~(var_8))) : (((/* implicit */int) arr_30 [i_13] [i_9]))))));
                                var_20 = ((((/* implicit */int) ((((/* implicit */int) var_0)) != (((/* implicit */int) (signed char)-79))))) * (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) arr_25 [i_8] [i_8] [i_8] [i_8] [i_8 + 1] [i_8])))))));
                                var_21 = ((/* implicit */int) (!(((/* implicit */_Bool) ((arr_39 [i_8 + 2] [i_8 + 2] [i_8] [i_8] [i_8 + 2] [i_8] [i_8 - 2]) - (((/* implicit */unsigned int) var_8)))))));
                                var_22 = ((/* implicit */unsigned int) ((((((((/* implicit */_Bool) (~(arr_11 [i_8 - 2] [i_9] [i_8 - 2] [i_13] [17U] [i_8])))) ? ((~(arr_16 [i_8]))) : (((/* implicit */long long int) (~(arr_34 [i_9] [i_9] [i_9] [i_8])))))) + (9223372036854775807LL))) << (((var_2) - (1538103596)))));
                                arr_48 [i_8 - 1] [i_8] [i_8] = (~(((/* implicit */int) arr_23 [i_13] [i_9] [i_13] [i_13])));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_45 [i_8 - 3] [i_8 + 3]) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_8 - 3] [i_8 - 2])))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) 1953109826)), (0U)))) : (((((/* implicit */_Bool) arr_12 [i_8 + 1] [i_8 - 3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_8 - 2] [i_8 + 2]))) : (arr_45 [i_8 + 3] [i_8 + 1])))));
                    var_24 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned char)48), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) 8796093020160LL))))))))) > (min((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) arr_31 [i_8] [i_9] [i_10])) : (19ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_38 [i_8] [i_10] [i_10] [i_9] [i_10] [i_9] [i_10]))) * (3460602207U))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_15 = 0; i_15 < 11; i_15 += 1) 
    {
        for (long long int i_16 = 4; i_16 < 8; i_16 += 3) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_17 = 0; i_17 < 0; i_17 += 1) 
                {
                    for (_Bool i_18 = 0; i_18 < 0; i_18 += 1) 
                    {
                        for (int i_19 = 2; i_19 < 8; i_19 += 2) 
                        {
                            {
                                arr_62 [i_15] [i_15] [i_15] [i_15] [i_19] [i_18] = ((/* implicit */unsigned long long int) min((((((/* implicit */int) (_Bool)1)) / ((-(((/* implicit */int) (unsigned char)131)))))), (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) arr_9 [i_18] [i_18] [i_18] [i_18]))))))));
                                var_25 |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) arr_56 [i_15] [i_18 + 1] [i_15] [i_19]))) && (((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)48)))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_20 = 2; i_20 < 9; i_20 += 3) 
                {
                    for (signed char i_21 = 1; i_21 < 10; i_21 += 3) 
                    {
                        {
                            var_26 = ((/* implicit */int) arr_67 [i_15] [i_21] [i_20]);
                            arr_68 [i_16] [i_15] [i_20 + 2] [i_21] = ((/* implicit */_Bool) (~(((/* implicit */int) min((((/* implicit */signed char) var_6)), (var_12))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_22 = 0; i_22 < 11; i_22 += 3) 
                {
                    for (int i_23 = 1; i_23 < 10; i_23 += 4) 
                    {
                        {
                            arr_74 [i_15] [i_16] [i_22] [i_15] [i_16] = ((/* implicit */signed char) min((511), (((/* implicit */int) (!(((/* implicit */_Bool) arr_56 [i_15] [i_15] [i_22] [i_15])))))));
                            var_27 = ((/* implicit */_Bool) var_1);
                        }
                    } 
                } 
            }
        } 
    } 
    var_28 = ((/* implicit */unsigned int) var_3);
    /* LoopNest 2 */
    for (unsigned char i_24 = 0; i_24 < 16; i_24 += 3) 
    {
        for (unsigned char i_25 = 0; i_25 < 16; i_25 += 2) 
        {
            {
                var_29 = ((/* implicit */_Bool) max((max((((arr_20 [i_24]) / (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_24] [i_25] [i_24] [i_24]))))), (((/* implicit */long long int) var_11)))), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_7)))))));
                var_30 ^= ((/* implicit */unsigned int) (+(((/* implicit */int) var_11))));
            }
        } 
    } 
}
