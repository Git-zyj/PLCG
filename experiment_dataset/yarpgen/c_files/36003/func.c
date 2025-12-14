/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36003
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36003 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36003
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
    for (unsigned char i_0 = 2; i_0 < 12; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                arr_4 [i_0] [i_0] = var_0;
                var_10 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) (unsigned short)23228)) : (((/* implicit */int) (unsigned char)39))))) ? (((int) arr_1 [i_1])) : ((((_Bool)1) ? (((/* implicit */int) (signed char)40)) : (-2090861709))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_2 = 0; i_2 < 20; i_2 += 1) 
    {
        for (int i_3 = 0; i_3 < 20; i_3 += 3) 
        {
            for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
            {
                {
                    var_11 = ((/* implicit */int) max((var_11), (((((((/* implicit */_Bool) arr_7 [i_3] [i_2])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_6 [i_2] [i_3])))) * (((/* implicit */int) ((((/* implicit */int) arr_10 [i_4 - 1] [i_2] [3] [i_4])) == (((((/* implicit */int) (signed char)-40)) | ((-2147483647 - 1)))))))))));
                    /* LoopSeq 3 */
                    for (int i_5 = 1; i_5 < 18; i_5 += 3) /* same iter space */
                    {
                        arr_13 [i_5 - 1] [i_4] [i_4] [i_4] [i_2] = ((/* implicit */unsigned int) ((min((18446744073709551615ULL), (((((/* implicit */_Bool) arr_10 [i_5] [i_3] [i_3] [i_2])) ? (((/* implicit */unsigned long long int) -2090861700)) : (var_5))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_2] [i_2])))));
                        arr_14 [i_2] [i_3] [i_4] = ((/* implicit */signed char) ((_Bool) arr_6 [i_5] [14U]));
                        var_12 *= ((/* implicit */signed char) (unsigned short)16383);
                        var_13 = (unsigned char)255;
                    }
                    for (int i_6 = 1; i_6 < 18; i_6 += 3) /* same iter space */
                    {
                        var_14 *= 2147483647;
                        /* LoopSeq 3 */
                        for (short i_7 = 3; i_7 < 18; i_7 += 4) 
                        {
                            var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) arr_20 [4] [i_2] [i_3] [i_3] [(short)16] [i_7]))));
                            arr_21 [i_6] [i_4] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((2305843009213693951ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)216))))) ? (14188587116239232877ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-29432))))))));
                            arr_22 [i_2] [i_2] [i_4] = ((/* implicit */int) 14U);
                            arr_23 [(signed char)18] [(_Bool)1] [i_4] [i_6] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(arr_11 [i_4] [i_7] [i_4])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) min((((/* implicit */unsigned long long int) var_0)), (arr_11 [i_2] [i_3] [i_4])))))) : (((((/* implicit */unsigned int) max((((/* implicit */int) var_7)), (-294486572)))) ^ (((unsigned int) var_4))))));
                        }
                        for (short i_8 = 0; i_8 < 20; i_8 += 1) 
                        {
                            arr_26 [i_2] [i_4] [i_4 - 1] [i_6] [i_8] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_18 [i_4] [i_6 + 2] [i_6 - 1] [i_6])) : ((+(((/* implicit */int) (signed char)36)))))), (((/* implicit */int) (!(((/* implicit */_Bool) min(((unsigned char)216), (var_6)))))))));
                            arr_27 [i_4 - 1] [i_4] [2ULL] [i_4] [i_4] [i_4] |= ((/* implicit */short) arr_5 [i_4 - 1]);
                        }
                        for (unsigned long long int i_9 = 3; i_9 < 16; i_9 += 3) 
                        {
                            arr_32 [i_2] [i_3] [i_4] [(signed char)16] [i_9] [i_9] &= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_29 [8ULL] [i_6 + 2] [i_6 + 2] [i_6] [i_6 + 2])) : (((/* implicit */int) var_6)))) ^ (((((/* implicit */int) (signed char)40)) * (((/* implicit */int) arr_29 [(unsigned short)10] [i_6 + 2] [i_6 + 2] [i_6] [i_6 + 2]))))));
                            var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) 2274087814U)) ? (((/* implicit */int) (unsigned short)16392)) : (((/* implicit */int) (_Bool)1)))) + ((+(arr_15 [i_4 - 1]))))))));
                        }
                        var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_8 [i_2] [i_2])))) ? (arr_17 [i_6 + 2] [i_6 + 1] [i_4] [i_4] [0ULL] [i_4 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_2] [i_2] [(_Bool)1] [i_2])))))) ? (((/* implicit */int) (short)22)) : (((((/* implicit */_Bool) arr_30 [i_6] [i_6] [i_6] [i_6 + 1] [i_6])) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) arr_10 [i_6 + 1] [i_6] [i_6] [i_6]))))));
                        var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) (_Bool)1))));
                        arr_33 [i_2] [i_2] [i_4] [i_2] [(signed char)13] = var_8;
                    }
                    for (int i_10 = 1; i_10 < 18; i_10 += 3) /* same iter space */
                    {
                        var_19 ^= ((/* implicit */signed char) (-(arr_8 [i_10] [i_10])));
                        arr_36 [i_2] [i_3] [i_4] = ((/* implicit */signed char) ((int) arr_18 [i_4] [i_4] [i_4] [i_10]));
                        arr_37 [(_Bool)1] [i_4] [i_4] [i_4] [i_2] = ((/* implicit */unsigned char) (+(2147483626)));
                        arr_38 [i_4] [i_10] [i_3] [i_10] = ((/* implicit */unsigned int) (+(arr_30 [19LL] [i_10 - 1] [i_10 + 2] [i_4 - 1] [i_4 - 1])));
                    }
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned long long int i_11 = 1; i_11 < 13; i_11 += 2) 
    {
        /* LoopSeq 2 */
        for (signed char i_12 = 0; i_12 < 14; i_12 += 3) 
        {
            arr_44 [i_11] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((arr_20 [i_11] [i_11] [i_11] [i_11 - 1] [14LL] [i_12]) <= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)5))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))))) : (max((144115188075855871ULL), (((/* implicit */unsigned long long int) (_Bool)1))))))) ? ((+(((/* implicit */int) arr_42 [i_11] [i_11])))) : (((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned char)13)) : (((/* implicit */int) (unsigned char)2)))) ^ (((/* implicit */int) (unsigned char)0))))));
            var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (_Bool)1))))) : (((long long int) -2090861709))))) | (((((/* implicit */_Bool) arr_2 [i_11 - 1] [(short)10] [i_12])) ? ((-(var_5))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned char)186), ((unsigned char)250))))))))))));
            var_21 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((short) arr_7 [i_11 - 1] [i_11 + 1])))));
            var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) (!(((/* implicit */_Bool) arr_30 [i_11] [i_11] [i_12] [i_12] [i_11])))))));
        }
        for (unsigned char i_13 = 0; i_13 < 14; i_13 += 2) 
        {
            arr_49 [i_11 - 1] = ((/* implicit */_Bool) arr_28 [i_11] [i_11]);
            arr_50 [i_11] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) 16383U))) ? (((/* implicit */int) ((3559938816U) == (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-113)))))) : (((/* implicit */int) ((((/* implicit */_Bool) 670501373)) && (arr_35 [i_11] [i_11] [i_13] [(_Bool)1] [i_13]))))));
            var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((long long int) arr_5 [i_13]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) <= (var_5))))) : (arr_8 [i_11 + 1] [i_11 + 1])));
        }
        var_24 = ((/* implicit */short) ((((((-2090861685) >= (var_9))) ? ((-(((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_25 [i_11 - 1] [i_11] [(signed char)0] [i_11] [i_11] [i_11] [i_11])) : (((/* implicit */int) arr_40 [i_11])))))) >= (((/* implicit */int) (_Bool)1))));
    }
    for (_Bool i_14 = 0; i_14 < 0; i_14 += 1) 
    {
        var_25 = ((/* implicit */unsigned int) (~(9223372036854775807LL)));
        arr_54 [i_14] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((arr_15 [i_14 + 1]), (arr_15 [i_14 + 1]))))));
        arr_55 [i_14 + 1] [(signed char)0] &= ((/* implicit */int) ((short) max((arr_6 [i_14 + 1] [i_14 + 1]), (arr_6 [i_14 + 1] [(_Bool)1]))));
    }
}
