/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2986
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2986 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2986
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
    for (signed char i_0 = 1; i_0 < 22; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 25; i_2 += 4) 
                {
                    for (short i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        {
                            arr_11 [i_1] = ((/* implicit */unsigned int) arr_8 [i_1] [i_2] [i_3]);
                            var_14 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (short)-27884)), (max((((/* implicit */long long int) (unsigned char)79)), (5344976101548121411LL)))));
                            var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) -5344976101548121416LL))) ? (max((arr_9 [23ULL] [i_0 + 1]), (((/* implicit */unsigned int) arr_5 [i_0 - 1] [i_0 + 2])))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65526)))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_4 = 2; i_4 < 24; i_4 += 4) 
                {
                    for (signed char i_5 = 0; i_5 < 25; i_5 += 4) 
                    {
                        {
                            arr_17 [i_0 + 2] [i_0] [i_0 + 1] = ((/* implicit */signed char) arr_5 [i_0] [i_1]);
                            arr_18 [i_0 + 2] [i_0 + 2] = (unsigned short)65516;
                        }
                    } 
                } 
                arr_19 [i_0] [i_1] = (-(((/* implicit */int) max((((/* implicit */unsigned short) var_3)), (arr_14 [15ULL] [(unsigned char)20] [i_0 + 2] [i_1])))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_6 = 2; i_6 < 7; i_6 += 4) 
    {
        for (unsigned int i_7 = 0; i_7 < 10; i_7 += 4) 
        {
            {
                /* LoopSeq 4 */
                for (unsigned char i_8 = 0; i_8 < 10; i_8 += 4) 
                {
                    arr_27 [9U] [2LL] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_8])) ? (min((((/* implicit */long long int) ((unsigned short) var_7))), (min((-5344976101548121411LL), (((/* implicit */long long int) (short)27883)))))) : (((/* implicit */long long int) max((((/* implicit */unsigned int) (+(((/* implicit */int) arr_1 [i_6] [(signed char)24]))))), (max((arr_22 [i_8] [i_7] [i_6]), (((/* implicit */unsigned int) (-2147483647 - 1))))))))));
                    var_16 = ((/* implicit */signed char) ((int) (unsigned short)63783));
                    arr_28 [0U] [i_7] [i_7] [i_6 + 1] = ((/* implicit */long long int) (short)-27884);
                }
                for (unsigned int i_9 = 1; i_9 < 9; i_9 += 4) /* same iter space */
                {
                    var_17 = ((/* implicit */short) (unsigned short)41705);
                    arr_33 [i_6] [i_7] [(signed char)6] [i_9] = ((/* implicit */unsigned int) 5344976101548121413LL);
                    /* LoopNest 2 */
                    for (long long int i_10 = 1; i_10 < 8; i_10 += 4) 
                    {
                        for (short i_11 = 0; i_11 < 10; i_11 += 4) 
                        {
                            {
                                arr_41 [i_10] [i_9 + 1] [3U] = ((/* implicit */_Bool) (-(((/* implicit */int) (short)-1))));
                                var_18 = ((short) arr_22 [i_6] [i_9 + 1] [i_9]);
                                var_19 = ((/* implicit */unsigned long long int) max((((short) (unsigned short)65535)), (((/* implicit */short) ((_Bool) ((long long int) (unsigned char)189))))));
                            }
                        } 
                    } 
                }
                for (unsigned int i_12 = 1; i_12 < 9; i_12 += 4) /* same iter space */
                {
                    var_20 = ((/* implicit */short) ((unsigned char) min((arr_22 [(unsigned short)3] [i_12 - 1] [i_12]), (arr_22 [i_6] [i_12 + 1] [3U]))));
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 10; i_13 += 4) 
                    {
                        for (unsigned int i_14 = 2; i_14 < 8; i_14 += 4) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned int) min((arr_16 [7ULL] [i_13] [i_6]), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_30 [i_6 + 1])))))));
                                arr_51 [i_6 - 1] [i_7] [i_7] [i_12] [i_13] [i_14] = ((/* implicit */signed char) arr_9 [i_12] [i_13]);
                                arr_52 [i_6] [i_6] [(short)2] [(unsigned short)4] [4] = ((/* implicit */unsigned char) 4294967290U);
                                var_22 -= ((unsigned char) ((_Bool) arr_7 [i_6]));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */signed char) ((unsigned long long int) arr_5 [i_12 - 1] [i_6 - 2]));
                    /* LoopNest 2 */
                    for (long long int i_15 = 0; i_15 < 10; i_15 += 4) 
                    {
                        for (unsigned char i_16 = 1; i_16 < 9; i_16 += 4) 
                        {
                            {
                                var_24 = ((/* implicit */int) 1953098492U);
                                var_25 = ((/* implicit */unsigned short) min((var_25), (arr_7 [i_12 - 1])));
                            }
                        } 
                    } 
                }
                for (unsigned long long int i_17 = 0; i_17 < 10; i_17 += 4) 
                {
                    arr_63 [i_17] [i_7] [i_7] [i_6 + 3] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)13618)) ? (13310421750146939043ULL) : (((/* implicit */unsigned long long int) max(((-(2147483647))), (((((/* implicit */_Bool) (unsigned short)851)) ? (2147483647) : (((/* implicit */int) (unsigned short)18127)))))))));
                    var_26 = ((/* implicit */signed char) min((((/* implicit */int) arr_40 [2LL] [i_6 + 1] [i_17] [i_7] [i_17] [i_17])), ((+(((/* implicit */int) min(((unsigned short)23181), (((/* implicit */unsigned short) arr_50 [i_6] [i_7] [8U] [i_6] [1] [i_6] [i_17])))))))));
                    var_27 = ((/* implicit */unsigned char) -2147483647);
                }
                arr_64 [(short)1] [i_7] = ((/* implicit */unsigned short) (+(arr_42 [i_6 + 3] [i_7])));
                /* LoopNest 3 */
                for (short i_18 = 3; i_18 < 8; i_18 += 4) 
                {
                    for (short i_19 = 1; i_19 < 7; i_19 += 4) 
                    {
                        for (int i_20 = 2; i_20 < 6; i_20 += 4) 
                        {
                            {
                                var_28 = ((/* implicit */unsigned char) min((((long long int) arr_69 [i_18] [i_18 + 2] [i_19 + 1] [i_20 + 3])), (((/* implicit */long long int) ((unsigned short) arr_69 [i_6] [i_18 - 1] [i_19 + 3] [i_20 + 1])))));
                                arr_74 [2U] [(unsigned short)1] [i_7] [i_7] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) arr_1 [i_6 + 1] [i_6 - 1]))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_30 [i_6 + 1])) ? (((/* implicit */int) (unsigned short)65520)) : ((~(((/* implicit */int) var_1))))))) : (((unsigned int) -5011139813115367683LL))));
                                arr_75 [1LL] [i_7] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((unsigned int) arr_71 [i_6] [i_7] [i_18] [i_19] [i_20]))) ? (((var_3) ? (((/* implicit */long long int) ((/* implicit */int) arr_53 [(_Bool)1] [i_19 + 2] [5U] [i_6] [i_6]))) : (5011139813115367683LL))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)33))))), (((/* implicit */long long int) var_2))));
                                var_29 = ((/* implicit */short) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */long long int) ((/* implicit */int) arr_55 [i_6 + 2] [i_20 - 1] [i_20 - 1] [i_20 - 1] [i_20 - 1]))) : ((~(((((/* implicit */_Bool) var_5)) ? (-5011139813115367676LL) : (-9223372036854775799LL)))))));
                                arr_76 [i_6] [i_6] [i_18] [9LL] [i_20 + 4] = ((/* implicit */_Bool) 2147483647);
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned char i_21 = 3; i_21 < 7; i_21 += 4) 
                {
                    for (unsigned long long int i_22 = 0; i_22 < 10; i_22 += 4) 
                    {
                        for (short i_23 = 0; i_23 < 10; i_23 += 4) 
                        {
                            {
                                var_30 = ((/* implicit */unsigned char) min((var_30), (((/* implicit */unsigned char) (~(((unsigned long long int) (unsigned char)250)))))));
                                var_31 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) arr_70 [i_23] [(short)2] [7] [(short)6]))) ? (min((((/* implicit */long long int) (unsigned short)56491)), (-5016703425423534820LL))) : (((/* implicit */long long int) ((int) (unsigned short)40129))))))));
                                var_32 = ((/* implicit */unsigned int) max((var_32), (((/* implicit */unsigned int) -5344976101548121416LL))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_33 = ((/* implicit */long long int) var_5);
}
