/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48781
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48781 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48781
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
    for (signed char i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 1; i_2 < 9; i_2 += 4) 
                {
                    for (signed char i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        {
                            var_13 = (i_2 % 2 == 0) ? (((/* implicit */unsigned short) (+(((((((/* implicit */int) arr_10 [i_0] [i_2] [i_2 + 1] [i_2 + 2])) + (2147483647))) >> (((((/* implicit */int) arr_10 [i_2 + 2] [i_2] [i_3] [i_2 + 2])) + (6458)))))))) : (((/* implicit */unsigned short) (+(((((((((/* implicit */int) arr_10 [i_0] [i_2] [i_2 + 1] [i_2 + 2])) - (2147483647))) + (2147483647))) >> (((((((/* implicit */int) arr_10 [i_2 + 2] [i_2] [i_3] [i_2 + 2])) + (6458))) - (32672))))))));
                            var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_6 [i_0] [i_2] [i_2])) ? (arr_5 [i_1] [i_2 + 1] [i_3]) : (var_9)));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 11; i_4 += 1) 
                {
                    for (long long int i_5 = 3; i_5 < 11; i_5 += 3) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) ((arr_15 [i_0] [i_0]) / (((arr_15 [i_0] [i_1]) / (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))))))))));
                            var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((562949953421311LL) + (((/* implicit */long long int) ((/* implicit */int) var_11)))))))))));
                            var_17 = ((/* implicit */unsigned long long int) arr_16 [i_5] [i_4 + 1] [(unsigned short)12] [i_5]);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_6 = 0; i_6 < 13; i_6 += 3) 
                {
                    for (short i_7 = 0; i_7 < 13; i_7 += 2) 
                    {
                        {
                            arr_24 [i_6] [i_1] [7LL] [(unsigned char)4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_18 [0LL] [0LL] [0LL]))) * (arr_23 [i_0] [i_0] [i_6] [i_7])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_7] [i_7] [i_6] [i_7])) ? (arr_23 [i_0] [i_0] [i_6] [i_7]) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))));
                            var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) -2960342866290754176LL)) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_6])) && (((/* implicit */_Bool) arr_23 [i_0] [i_1] [i_6] [i_7]))))), (min((((/* implicit */unsigned long long int) 1048575)), (0ULL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_23 [(_Bool)1] [i_6] [i_6] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_14 [2U] [2U])) && (((/* implicit */_Bool) var_4)))))) : ((+(var_9))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_8 = 0; i_8 < 19; i_8 += 4) 
    {
        for (int i_9 = 0; i_9 < 19; i_9 += 3) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_10 = 2; i_10 < 16; i_10 += 2) 
                {
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        for (signed char i_12 = 2; i_12 < 17; i_12 += 3) 
                        {
                            {
                                arr_35 [i_8] [i_10] [i_11] [i_9] = ((/* implicit */unsigned short) max((max((arr_28 [i_10 + 1] [i_9] [i_12 - 2]), (((/* implicit */unsigned long long int) arr_29 [i_12] [i_12 + 2] [i_12 + 2])))), (min((((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)0))))), (((((/* implicit */_Bool) var_8)) ? (0ULL) : (var_5)))))));
                                var_19 -= ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_33 [i_8] [i_9] [i_8] [i_11] [(short)1] [(short)1])) ? (var_1) : (((/* implicit */int) (unsigned char)196))))))) ? (((((/* implicit */_Bool) (short)0)) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) var_12))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) min((-184995763), (((/* implicit */int) arr_25 [i_12] [i_9]))))) ? (2147483647) : (((/* implicit */int) (_Bool)1)))))));
                                var_20 &= ((/* implicit */int) var_11);
                                arr_36 [i_9] [i_9] [(unsigned short)0] [i_9] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */long long int) max((var_10), (((/* implicit */int) arr_27 [i_10 - 2] [i_10 + 2]))))) ^ (max((((/* implicit */long long int) (signed char)123)), (-2960342866290754176LL)))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_13 = 3; i_13 < 16; i_13 += 2) 
                {
                    for (unsigned long long int i_14 = 0; i_14 < 19; i_14 += 4) 
                    {
                        {
                            var_21 |= ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) var_7)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)82)))) : (var_0)));
                            var_22 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)96)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) (unsigned char)248))))) ? (min((var_0), (((/* implicit */int) arr_40 [i_8] [i_9])))) : (((/* implicit */int) arr_25 [i_8] [i_13 - 1]))))), (((((/* implicit */unsigned long long int) var_10)) - (var_5)))));
                            var_23 *= arr_39 [i_14] [i_8] [i_8];
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_15 = 3; i_15 < 17; i_15 += 4) 
                {
                    for (unsigned short i_16 = 0; i_16 < 19; i_16 += 4) 
                    {
                        {
                            var_24 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (_Bool)1)), (0ULL))))));
                            arr_45 [i_9] [i_9] [i_15] [i_16] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) min((arr_25 [i_15] [i_15]), (var_11)))) : (((/* implicit */int) arr_27 [i_9] [i_15 - 3]))))) || (((/* implicit */_Bool) var_10))));
                            var_25 -= ((/* implicit */_Bool) ((((/* implicit */int) arr_42 [i_8] [i_8])) + (((((/* implicit */int) (unsigned char)0)) * (((/* implicit */int) (signed char)-70))))));
                            var_26 = ((/* implicit */int) var_12);
                            arr_46 [i_16] [i_9] [i_9] [i_8] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (~(((((((/* implicit */int) var_11)) + (2147483647))) >> (((((/* implicit */int) (unsigned char)90)) - (65)))))))) * (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_40 [18] [i_15 - 2])) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_40 [i_8] [i_9])))))) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_37 [i_9] [i_9]))))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_17 = 0; i_17 < 24; i_17 += 2) 
    {
        for (short i_18 = 0; i_18 < 24; i_18 += 4) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                {
                    for (unsigned short i_20 = 2; i_20 < 23; i_20 += 1) 
                    {
                        {
                            var_27 += ((/* implicit */_Bool) 18446744073709551615ULL);
                            var_28 = ((/* implicit */int) max((var_28), (((/* implicit */int) (!(((((/* implicit */unsigned int) ((/* implicit */int) var_6))) == (arr_58 [i_19] [i_17]))))))));
                            var_29 = ((/* implicit */int) ((((/* implicit */_Bool) (~(max((((/* implicit */int) arr_57 [i_17] [i_17] [(short)4] [i_17])), (var_0)))))) ? (arr_47 [i_20 + 1] [i_17]) : (((/* implicit */long long int) arr_53 [i_17] [i_17] [6ULL] [i_20 - 1]))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_21 = 2; i_21 < 22; i_21 += 4) 
                {
                    for (int i_22 = 0; i_22 < 24; i_22 += 4) 
                    {
                        {
                            arr_66 [i_22] [i_18] [i_21 + 1] = ((((/* implicit */_Bool) ((((/* implicit */int) arr_62 [i_21 + 2] [i_21 - 1] [i_21])) | (((/* implicit */int) arr_62 [i_21 - 2] [i_21 - 1] [i_17]))))) ? (((/* implicit */int) arr_62 [i_22] [i_21 - 1] [4])) : ((~(((/* implicit */int) arr_62 [i_21 + 1] [i_21 - 1] [i_18])))));
                            var_30 = ((/* implicit */unsigned short) (+((-(var_10)))));
                        }
                    } 
                } 
            }
        } 
    } 
}
