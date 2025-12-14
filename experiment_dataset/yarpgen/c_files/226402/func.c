/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226402
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226402 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226402
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
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? (((unsigned long long int) (_Bool)1)) : (((/* implicit */unsigned long long int) ((int) (-(((/* implicit */int) var_2))))))));
    /* LoopSeq 1 */
    for (int i_0 = 2; i_0 < 8; i_0 += 3) 
    {
        var_17 = arr_0 [1ULL];
        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(3630128525U)))) ? (max((max((((/* implicit */long long int) (_Bool)1)), (arr_0 [8]))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) arr_1 [i_0])) : (1155539859U)))))) : (var_15)));
        var_19 = ((/* implicit */int) 3139427462U);
        var_20 = ((/* implicit */short) ((signed char) 1155539834U));
    }
    var_21 = var_15;
    /* LoopSeq 1 */
    for (unsigned int i_1 = 0; i_1 < 23; i_1 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_22 = (i_2 % 2 == 0) ? (((/* implicit */unsigned int) ((arr_6 [i_1] [i_2] [i_2]) >> (((arr_6 [i_1] [i_2] [i_1]) - (5816969691357326014LL)))))) : (((/* implicit */unsigned int) ((arr_6 [i_1] [i_2] [i_2]) >> (((((arr_6 [i_1] [i_2] [i_1]) - (5816969691357326014LL))) - (1181927417653750871LL))))));
            var_23 = ((/* implicit */unsigned char) ((unsigned long long int) (unsigned char)118));
            /* LoopSeq 3 */
            for (long long int i_3 = 3; i_3 < 22; i_3 += 1) 
            {
                var_24 = ((/* implicit */int) (+(arr_6 [i_1] [i_2] [i_3 - 1])));
                arr_12 [i_2] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_6 [i_3 - 2] [i_2] [i_3]))));
            }
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                /* LoopNest 2 */
                for (long long int i_5 = 4; i_5 < 21; i_5 += 1) 
                {
                    for (long long int i_6 = 1; i_6 < 20; i_6 += 4) 
                    {
                        {
                            arr_21 [19LL] [i_2] [i_4] [i_5] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_14 [i_2] [i_6 + 1] [i_6] [i_6])) ? (arr_11 [i_5 - 3] [i_2] [i_6 + 1] [(signed char)12]) : (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_2] [i_6 + 1] [(short)18] [i_6])))));
                            arr_22 [i_1] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)165)) ? (15223043534779943631ULL) : (0ULL)));
                            var_25 = ((/* implicit */signed char) (_Bool)1);
                            var_26 = ((/* implicit */unsigned long long int) var_0);
                            arr_23 [i_1] [i_1] [i_1] [i_1] [(unsigned char)3] [i_2] [i_1] = ((/* implicit */int) (-(arr_10 [i_2] [i_5 + 2] [i_5 + 2] [i_6 - 1])));
                        }
                    } 
                } 
                var_27 = ((/* implicit */_Bool) (~(var_10)));
            }
            for (unsigned short i_7 = 1; i_7 < 20; i_7 += 1) 
            {
                var_28 = (i_2 % 2 == 0) ? (((/* implicit */int) ((var_4) << (((arr_11 [i_7 + 3] [i_2] [i_7 + 1] [i_7 + 2]) + (4093324059984669539LL)))))) : (((/* implicit */int) ((var_4) << (((((arr_11 [i_7 + 3] [i_2] [i_7 + 1] [i_7 + 2]) + (4093324059984669539LL))) + (279872869676821490LL))))));
                /* LoopSeq 2 */
                for (unsigned short i_8 = 3; i_8 < 21; i_8 += 2) /* same iter space */
                {
                    arr_29 [i_2] [i_7] [i_2] [i_2] = ((/* implicit */int) ((long long int) var_10));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_9 = 2; i_9 < 21; i_9 += 2) 
                    {
                        var_29 = ((((/* implicit */_Bool) 1155539859U)) ? (((/* implicit */int) arr_30 [i_7 - 1] [i_9] [i_9] [i_2] [i_9])) : (((/* implicit */int) arr_30 [i_7 - 1] [i_9] [(short)0] [i_2] [(short)0])));
                        var_30 = ((/* implicit */unsigned int) var_7);
                        var_31 = ((/* implicit */int) ((arr_19 [i_2] [i_7 + 1] [6ULL] [i_8 - 3] [i_9 + 2] [i_9]) != (((/* implicit */long long int) ((/* implicit */int) (unsigned char)223)))));
                    }
                    var_32 = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_15)))))));
                    var_33 = ((/* implicit */short) (+(((((/* implicit */_Bool) arr_6 [i_1] [i_2] [i_7])) ? (((/* implicit */long long int) 3139427462U)) : (arr_11 [15U] [i_2] [1LL] [1LL])))));
                }
                for (unsigned short i_10 = 3; i_10 < 21; i_10 += 2) /* same iter space */
                {
                    var_34 = ((/* implicit */int) ((short) -1040755122));
                    var_35 = (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_34 [i_2] [i_7] [i_7 + 3] [i_7 + 1]))))));
                    arr_35 [i_1] [i_2] [i_7 - 1] [(short)12] [i_10 - 1] [(short)12] = 1155539834U;
                    var_36 = ((/* implicit */short) ((((/* implicit */_Bool) (short)-15333)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (arr_24 [i_1] [21LL] [i_7 + 3] [i_2])));
                }
                /* LoopNest 2 */
                for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
                {
                    for (unsigned long long int i_12 = 4; i_12 < 22; i_12 += 3) 
                    {
                        {
                            arr_41 [i_1] [i_7] [(_Bool)0] [i_2] = ((/* implicit */unsigned char) arr_39 [i_7 + 2] [i_7] [i_7] [i_7 - 1] [0] [i_2]);
                            var_37 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_34 [i_2] [i_7 - 1] [i_11 - 1] [i_12 - 4]))));
                            var_38 = arr_30 [(signed char)0] [i_2] [i_12 - 2] [i_2] [i_7];
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (long long int i_13 = 2; i_13 < 21; i_13 += 1) 
                {
                    var_39 = arr_28 [i_1] [i_2] [i_2] [i_1];
                    var_40 = ((/* implicit */short) ((((var_4) < (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)32))))) ? (((((/* implicit */_Bool) arr_15 [18U] [i_2] [i_13])) ? (1155539834U) : (2291997455U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_34 [i_2] [i_13 - 2] [(_Bool)1] [i_2])))));
                }
                for (unsigned long long int i_14 = 4; i_14 < 20; i_14 += 3) 
                {
                    var_41 = ((/* implicit */unsigned short) arr_14 [i_2] [i_2] [i_7] [i_14]);
                    /* LoopSeq 2 */
                    for (long long int i_15 = 0; i_15 < 23; i_15 += 2) 
                    {
                        var_42 = ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))));
                        arr_52 [i_2] [i_2] [11ULL] [i_2] [i_2] = ((/* implicit */int) ((((/* implicit */int) (unsigned char)137)) <= (((/* implicit */int) var_5))));
                        var_43 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_14] [i_2] [10ULL])) || (((/* implicit */_Bool) var_2))));
                    }
                    for (unsigned short i_16 = 3; i_16 < 22; i_16 += 1) 
                    {
                        var_44 = ((((/* implicit */_Bool) arr_18 [i_7] [i_7 + 1] [i_7 + 3] [i_16 + 1] [i_2])) ? (arr_24 [i_7] [i_7 + 1] [i_7] [i_2]) : (arr_24 [i_2] [i_7 - 1] [i_14] [i_2]));
                        arr_55 [i_2] [i_16 - 2] [i_16] [i_14] [i_7] [i_2] [i_2] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_46 [i_14 - 1] [i_16 + 1] [i_2] [i_16 - 2]))));
                        var_45 = ((/* implicit */long long int) arr_17 [i_1] [i_2] [i_2] [i_2] [i_16]);
                        var_46 = ((/* implicit */long long int) ((2060978877) < (((((/* implicit */_Bool) -161310730786809885LL)) ? (((/* implicit */int) (unsigned char)118)) : (((/* implicit */int) (unsigned char)61))))));
                    }
                }
            }
            arr_56 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -413692010)) ? (((/* implicit */int) arr_28 [8] [8] [i_2] [i_2])) : (((/* implicit */int) (short)10470))));
            var_47 = ((/* implicit */int) ((((((/* implicit */_Bool) 618248122)) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_2]))) : (arr_49 [i_2] [i_1] [i_2] [20] [i_2] [i_2]))) != (var_1)));
        }
        var_48 = ((/* implicit */int) (-((+(max((((/* implicit */unsigned long long int) -413692024)), (var_7)))))));
    }
}
