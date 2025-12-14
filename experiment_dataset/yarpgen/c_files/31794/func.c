/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31794
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31794 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31794
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
    for (int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 16; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18; i_2 += 1) 
                {
                    for (long long int i_3 = 1; i_3 < 15; i_3 += 4) 
                    {
                        {
                            var_12 *= ((/* implicit */unsigned long long int) arr_2 [(signed char)4]);
                            arr_8 [i_0] [i_0] [(unsigned short)11] [i_0] [i_1 - 1] = ((/* implicit */unsigned short) var_4);
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (int i_4 = 1; i_4 < 17; i_4 += 4) 
                {
                    for (unsigned int i_5 = 0; i_5 < 18; i_5 += 1) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 18; i_6 += 1) 
                        {
                            {
                                arr_17 [i_0] [i_1 - 1] [8ULL] [i_4 - 1] [i_5] [i_6] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_3) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) : (var_1)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))) : (((8186814108646061371LL) ^ (((/* implicit */long long int) arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))))));
                                var_13 -= ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */int) (_Bool)1)), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_9 [16])) : (((/* implicit */int) arr_10 [i_6] [i_5] [(_Bool)1] [i_1]))))))) && (((/* implicit */_Bool) var_0))));
                                var_14 -= ((/* implicit */short) ((max((((/* implicit */int) arr_5 [(unsigned short)6] [i_1 + 2])), (arr_12 [10U] [i_1] [(short)15] [i_1] [i_1 - 1] [i_1 + 1]))) != (((((/* implicit */_Bool) arr_3 [i_1] [16ULL])) ? (arr_12 [i_1 - 1] [i_1 + 1] [i_1] [i_1 - 1] [i_1 + 2] [i_1 + 2]) : (arr_12 [i_1 + 2] [i_1] [16] [i_1] [i_1 + 1] [i_1 + 2])))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (int i_7 = 1; i_7 < 15; i_7 += 1) 
                {
                    for (unsigned short i_8 = 0; i_8 < 18; i_8 += 3) 
                    {
                        {
                            arr_23 [i_0] [i_1] [i_7 - 1] [i_7 - 1] = ((/* implicit */unsigned int) var_11);
                            var_15 = ((/* implicit */unsigned long long int) ((unsigned short) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) 32535090))))), (((var_3) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)32767))) : (var_1))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_9 = 2; i_9 < 17; i_9 += 4) 
                {
                    for (unsigned short i_10 = 1; i_10 < 17; i_10 += 1) 
                    {
                        {
                            arr_32 [i_0] [i_0] [i_1] [14] [i_0] = (i_0 % 2 == zero) ? (((/* implicit */unsigned char) (((+(arr_30 [i_0] [i_0] [i_1] [i_1]))) >> (((((/* implicit */int) arr_6 [(unsigned char)17] [i_0] [i_10] [i_10 - 1])) - (7865)))))) : (((/* implicit */unsigned char) (((+(arr_30 [i_0] [i_0] [i_1] [i_1]))) >> (((((((/* implicit */int) arr_6 [(unsigned char)17] [i_0] [i_10] [i_10 - 1])) - (7865))) + (29096))))));
                            arr_33 [i_0] = ((int) (+(((/* implicit */int) arr_27 [i_10 - 1] [i_1 + 1] [(unsigned short)16]))));
                            var_16 *= ((((var_11) & (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_10)), (arr_15 [i_0] [1ULL] [i_9 + 1] [(_Bool)1] [1ULL] [(short)2])))))) | (((/* implicit */unsigned long long int) ((((/* implicit */int) (!(var_5)))) * (((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_11 = 1; i_11 < 17; i_11 += 3) 
    {
        for (int i_12 = 0; i_12 < 18; i_12 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_13 = 0; i_13 < 18; i_13 += 1) 
                {
                    for (unsigned long long int i_14 = 1; i_14 < 17; i_14 += 3) 
                    {
                        {
                            var_17 -= ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_11] [i_11] [i_12] [i_13] [i_14])) ? (var_2) : (((/* implicit */int) var_7))))) ? (((((/* implicit */int) (unsigned char)177)) & (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (signed char)-2)))))));
                            arr_45 [i_11] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) arr_16 [i_14 + 1] [15ULL] [i_14] [i_11 - 1] [i_11] [i_11]))) ? (((/* implicit */unsigned long long int) (+(((arr_18 [i_11]) % (((/* implicit */int) arr_43 [i_11 - 1] [11LL] [i_13] [i_14] [(unsigned char)10]))))))) : (((((/* implicit */_Bool) arr_36 [i_11] [i_13] [i_13])) ? (((var_3) ? (var_11) : (((/* implicit */unsigned long long int) arr_12 [i_14] [(short)3] [i_13] [i_14] [i_13] [(short)3])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [(_Bool)1] [i_14] [(_Bool)1] [i_11 + 1] [i_11 + 1] [i_11 + 1])))))));
                            var_18 += ((/* implicit */short) arr_28 [i_11] [16LL] [i_12]);
                            arr_46 [i_11] [i_11] [i_11] [i_11] = ((/* implicit */int) var_9);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_15 = 0; i_15 < 18; i_15 += 3) 
                {
                    for (signed char i_16 = 3; i_16 < 14; i_16 += 1) 
                    {
                        {
                            arr_53 [i_11] [i_11] [i_15] [i_15] [i_16 - 3] [i_15] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) arr_24 [9ULL] [i_12] [i_11]))) ? (11861556476488985470ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_14 [i_11 - 1] [i_16] [6ULL] [i_11])) ? (arr_39 [i_16]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_49 [(short)3] [(unsigned char)3]))))) > (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned char)79)) : (((/* implicit */int) (unsigned char)177)))))))))));
                            var_19 += ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */int) ((((/* implicit */int) var_0)) <= (var_2)))) == (((((/* implicit */_Bool) 9254607708885137882ULL)) ? (var_10) : (((/* implicit */int) arr_34 [13])))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_17 = 0; i_17 < 18; i_17 += 1) 
                {
                    for (unsigned char i_18 = 3; i_18 < 14; i_18 += 2) 
                    {
                        {
                            arr_59 [i_11] [i_12] [i_17] [i_18] [i_18 - 1] = ((/* implicit */int) (+(arr_37 [i_11] [i_12] [i_11])));
                            var_20 = (-(((((/* implicit */_Bool) arr_9 [i_11])) ? (((/* implicit */int) arr_26 [i_11 + 1] [i_18 + 1])) : (((/* implicit */int) arr_9 [i_11])))));
                            var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_48 [i_11] [i_11 - 1] [i_11 + 1] [i_11]))))) ? (((arr_48 [i_11] [i_11] [i_11 + 1] [i_18 + 2]) ? (var_1) : (arr_36 [(unsigned char)9] [i_11 - 1] [i_11 + 1]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) arr_21 [i_11] [i_11] [i_11 - 1] [i_17] [i_18]))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_19 = 0; i_19 < 22; i_19 += 2) 
    {
        for (long long int i_20 = 3; i_20 < 21; i_20 += 3) 
        {
            for (unsigned short i_21 = 0; i_21 < 22; i_21 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_22 = 2; i_22 < 20; i_22 += 2) 
                    {
                        for (unsigned char i_23 = 2; i_23 < 20; i_23 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */int) max((((max((var_8), (((/* implicit */unsigned long long int) (signed char)1)))) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 9254607708885137880ULL)) || (((/* implicit */_Bool) var_7)))))))), (((/* implicit */unsigned long long int) max((max(((unsigned char)255), (((/* implicit */unsigned char) var_9)))), (((/* implicit */unsigned char) max((var_5), (var_5)))))))));
                                var_23 = ((/* implicit */int) ((((/* implicit */_Bool) (+(arr_63 [i_20])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_64 [i_19] [i_19] [i_19] [11ULL]))) : (max(((-(var_11))), (((/* implicit */unsigned long long int) max((var_9), (arr_64 [9ULL] [i_20] [i_22] [i_23 - 2]))))))));
                                arr_70 [(unsigned short)19] [0U] [i_20] [(unsigned short)19] [i_22] [i_22] [i_23 + 2] = ((/* implicit */unsigned long long int) max((((((/* implicit */int) (unsigned short)28663)) / (arr_60 [i_22 - 1] [i_20 - 3]))), (((((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) + (((/* implicit */int) arr_69 [i_19] [i_20]))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_24 = 4; i_24 < 21; i_24 += 1) 
                    {
                        for (int i_25 = 1; i_25 < 19; i_25 += 3) 
                        {
                            {
                                var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) ((unsigned int) arr_69 [i_20 + 1] [i_19])))));
                                var_25 = ((int) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) - (arr_71 [i_20 - 1] [i_20] [(signed char)11] [i_25 - 1] [i_25 - 1])));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
