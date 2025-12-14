/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2849
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2849 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2849
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (int i_1 = 1; i_1 < 8; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    var_13 += ((/* implicit */unsigned short) max((((arr_4 [i_0] [i_1 + 1]) - (arr_4 [i_0] [i_1 - 1]))), (((((/* implicit */_Bool) arr_4 [i_0] [i_1 + 1])) ? (arr_4 [i_0] [i_1 - 1]) : (arr_4 [i_0] [i_1 + 1])))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 2; i_3 < 9; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 2; i_4 < 10; i_4 += 4) 
                        {
                            {
                                var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) arr_11 [i_0] [i_0] [i_2] [i_3 - 1] [i_4] [i_0] [i_3]))));
                                var_15 = ((/* implicit */unsigned int) min((var_15), (((((((/* implicit */_Bool) ((arr_0 [i_0]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [8] [(_Bool)1]))) : (4294967281U)))) && (((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_2] [i_3] [i_2])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_1] [(signed char)1] [(signed char)1] [6ULL] [6ULL]))) : (((4294967291U) / (((/* implicit */unsigned int) ((((/* implicit */int) arr_6 [(short)5] [(short)5] [(short)5])) / (((/* implicit */int) arr_6 [i_2] [2U] [i_2])))))))))));
                                var_16 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)127)) - (((/* implicit */int) arr_6 [i_0] [i_1] [10ULL]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_2]))))) : (((/* implicit */int) arr_7 [i_0] [(short)10] [3ULL] [3ULL] [(short)6] [i_4 + 1]))))) ? ((-(((/* implicit */int) arr_6 [i_2] [i_2] [i_4 - 1])))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_1] [i_1] [i_4 - 2])) && (((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_3])))))));
                                var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) max((((int) (+(((/* implicit */int) arr_0 [i_2]))))), (((((/* implicit */int) arr_12 [i_4] [i_4 - 1] [i_4] [i_3] [i_3 + 2] [i_3 - 1])) * (((/* implicit */int) arr_0 [i_4 + 1])))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 11; i_5 += 4) 
                    {
                        for (signed char i_6 = 1; i_6 < 10; i_6 += 4) 
                        {
                            {
                                var_18 += ((/* implicit */short) (-(((arr_4 [i_6 - 1] [i_1 + 3]) | (arr_4 [i_6 + 1] [i_1 - 1])))));
                                arr_19 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) (+((+(((/* implicit */int) ((0U) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_0] [i_6 - 1] [i_2] [(unsigned short)6] [i_6]))))))))));
                                var_19 ^= ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_16 [i_0] [5] [i_0] [i_0] [i_0]))))) && (((((/* implicit */_Bool) (+(var_2)))) && (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_18 [i_0] [i_1] [i_2] [i_1]))) / (var_6))))))));
                                arr_20 [i_0] [i_2] [i_2] [6U] |= ((((/* implicit */_Bool) ((long long int) arr_8 [i_0] [i_6 - 1] [6ULL] [i_1 + 2] [i_6]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_17 [i_0] [i_0] [i_0] [i_0] [6])) && (((/* implicit */_Bool) ((short) arr_16 [i_0] [(short)5] [i_0] [i_0] [i_0]))))))) : ((~(((arr_14 [i_2] [i_2] [i_2] [i_5]) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_0] [i_1] [i_2] [i_5] [i_5]))))))));
                                arr_21 [i_0] [i_1] [i_2] [(signed char)7] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_0] [i_1] [i_5] [(signed char)3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_1] [i_0]))) : (arr_2 [(unsigned short)5])))) ? (arr_3 [i_1 + 3] [i_6 + 1] [i_1 + 3]) : (((arr_4 [i_2] [i_6]) | (4U)))))) ? (((((/* implicit */_Bool) max((((/* implicit */int) arr_8 [(signed char)0] [(signed char)0] [(signed char)0] [i_5] [(signed char)1])), (var_2)))) ? ((-(((/* implicit */int) arr_0 [i_0])))) : ((+(((/* implicit */int) arr_13 [i_0] [i_1 - 1] [i_1 - 1] [i_5])))))) : ((~(((/* implicit */int) arr_17 [7ULL] [7ULL] [i_2] [i_5] [i_6]))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_7 = 1; i_7 < 9; i_7 += 2) 
                    {
                        for (unsigned long long int i_8 = 0; i_8 < 11; i_8 += 2) 
                        {
                            {
                                arr_27 [i_0] [i_1] [(_Bool)1] [2ULL] [6LL] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) arr_5 [i_0] [i_0] [i_0]))) ? ((+(-2011854355))) : (((/* implicit */int) var_5))))) ? (min((((((/* implicit */int) arr_18 [i_0] [i_0] [i_0] [i_0])) & (((/* implicit */int) arr_17 [i_0] [i_0] [i_0] [(short)10] [i_0])))), (((/* implicit */int) ((var_8) && (((/* implicit */_Bool) var_6))))))) : (((/* implicit */int) ((((/* implicit */int) arr_16 [8] [i_7 + 2] [8] [i_7 + 2] [8])) > (((/* implicit */int) arr_16 [i_0] [i_7 + 1] [i_7 + 1] [i_8] [i_8])))))));
                                var_20 &= ((((/* implicit */unsigned long long int) -1)) * ((+((-(arr_14 [i_8] [i_1] [i_1] [6ULL]))))));
                                var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) var_4))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_9 = 0; i_9 < 17; i_9 += 2) 
    {
        for (short i_10 = 1; i_10 < 16; i_10 += 4) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    for (unsigned char i_12 = 3; i_12 < 16; i_12 += 1) 
                    {
                        for (unsigned char i_13 = 1; i_13 < 13; i_13 += 1) 
                        {
                            {
                                arr_41 [i_9] [i_9] [i_11] [i_12] [i_13] = ((/* implicit */signed char) (((~(((((/* implicit */_Bool) arr_40 [i_9] [9U] [i_9] [9ULL])) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) arr_39 [(unsigned short)16] [i_9] [i_10 + 1] [5U] [(unsigned short)16] [(unsigned short)16] [i_13]))))))) >= (((/* implicit */long long int) min(((~(((/* implicit */int) var_11)))), (((/* implicit */int) ((unsigned short) arr_33 [i_9] [i_10]))))))));
                                var_22 = ((/* implicit */_Bool) ((arr_40 [i_9] [i_10] [(signed char)12] [i_13]) - (arr_28 [i_9] [i_9])));
                                var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) var_8))));
                                arr_42 [i_11] = ((/* implicit */long long int) (((~(arr_31 [i_10 + 1] [i_12 + 1]))) > (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-70)))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 17; i_14 += 4) 
                {
                    for (int i_15 = 1; i_15 < 16; i_15 += 4) 
                    {
                        {
                            var_24 ^= ((/* implicit */unsigned long long int) ((((((/* implicit */int) ((((/* implicit */_Bool) arr_31 [(_Bool)1] [(_Bool)1])) && (((/* implicit */_Bool) arr_40 [i_9] [i_9] [i_14] [i_14]))))) / ((~(((/* implicit */int) arr_39 [i_9] [8ULL] [i_10 - 1] [(short)6] [i_10 - 1] [i_15] [i_15])))))) <= (((((/* implicit */_Bool) ((int) arr_37 [i_15 - 1] [3] [7U] [i_15] [(short)4]))) ? ((-(((/* implicit */int) arr_32 [11U] [11U])))) : (((((/* implicit */_Bool) var_10)) ? (arr_30 [i_9] [11LL]) : (((/* implicit */int) var_5))))))));
                            var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) (!(((/* implicit */_Bool) ((arr_36 [i_15 + 1]) ? (arr_28 [i_9] [i_9]) : (((/* implicit */unsigned long long int) min((((/* implicit */int) var_11)), (arr_43 [i_9] [i_9] [i_15]))))))))))));
                        }
                    } 
                } 
                arr_50 [(unsigned short)8] [(unsigned short)8] = ((/* implicit */short) arr_40 [i_9] [8LL] [4U] [i_10]);
                /* LoopNest 2 */
                for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                {
                    for (unsigned char i_17 = 0; i_17 < 17; i_17 += 4) 
                    {
                        {
                            var_26 += ((/* implicit */unsigned char) arr_51 [(_Bool)1] [i_10 - 1] [i_16] [i_17]);
                            arr_55 [i_9] [i_9] [4U] [i_16] = min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_40 [i_10] [i_10] [i_10] [i_10 + 1]))))), (max((arr_40 [(unsigned short)3] [(unsigned short)3] [1LL] [i_10 + 1]), (arr_40 [i_9] [i_9] [(_Bool)1] [i_10 + 1]))));
                        }
                    } 
                } 
            }
        } 
    } 
}
