/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3970
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3970 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3970
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
    for (int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                /* LoopSeq 4 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        var_10 = ((/* implicit */_Bool) var_0);
                        var_11 = ((/* implicit */_Bool) max((min((((/* implicit */int) (signed char)-33)), (arr_2 [i_3]))), (((((arr_2 [i_0]) + (2147483647))) << (((var_4) - (3803581548082465742ULL)))))));
                    }
                    /* LoopNest 2 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        for (unsigned long long int i_5 = 0; i_5 < 10; i_5 += 2) 
                        {
                            {
                                var_12 = ((/* implicit */int) min((var_12), (((/* implicit */int) max((((/* implicit */unsigned long long int) (signed char)-16)), (var_7))))));
                                var_13 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)7936)) > (((/* implicit */int) (unsigned short)7916))));
                                var_14 |= ((/* implicit */int) ((signed char) ((int) ((var_5) & (((/* implicit */unsigned long long int) var_6))))));
                                var_15 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_9 [(_Bool)1] [i_1] [i_2] [(short)6] [i_5])) ? ((-(arr_6 [i_5] [i_2] [i_1]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (var_0) : (arr_4 [i_4]))))))));
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [5LL])) ? (((/* implicit */int) var_2)) : ((-(var_8))))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned long long int i_6 = 0; i_6 < 10; i_6 += 4) 
                    {
                        var_17 = ((/* implicit */_Bool) var_4);
                        var_18 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) 2012467398U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_1)))) << ((((+(arr_12 [i_0] [i_1] [i_0]))) + (8624513222681172351LL)))));
                    }
                }
                /* vectorizable */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_8 = 0; i_8 < 10; i_8 += 3) 
                    {
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0] [(_Bool)1] [(_Bool)1] [i_8] [i_9])) ? (((/* implicit */int) (unsigned short)56)) : (((/* implicit */int) arr_14 [i_0] [i_1]))))) ? (((/* implicit */unsigned long long int) ((3356442112U) % (((/* implicit */unsigned int) var_3))))) : (var_4)));
                                var_20 = ((/* implicit */unsigned short) ((_Bool) (+(((/* implicit */int) (short)-23685)))));
                                var_21 = arr_17 [i_0] [i_0] [i_7] [i_8] [(_Bool)1] [i_0];
                                var_22 -= (short)11655;
                            }
                        } 
                    } 
                    var_23 = (+((((_Bool)1) ? (var_8) : (((/* implicit */int) (unsigned char)255)))));
                }
                /* vectorizable */
                for (signed char i_10 = 0; i_10 < 10; i_10 += 2) /* same iter space */
                {
                    var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) ((short) arr_21 [i_0] [i_1] [i_10])))));
                    var_25 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_22 [4LL] [i_1] [i_10]))));
                }
                /* vectorizable */
                for (signed char i_11 = 0; i_11 < 10; i_11 += 2) /* same iter space */
                {
                    var_26 = (!(((/* implicit */_Bool) arr_0 [i_0])));
                    var_27 -= ((/* implicit */short) (unsigned short)32768);
                    /* LoopNest 2 */
                    for (int i_12 = 1; i_12 < 9; i_12 += 1) 
                    {
                        for (long long int i_13 = 1; i_13 < 9; i_13 += 4) 
                        {
                            {
                                var_28 += ((/* implicit */_Bool) (~(((/* implicit */int) var_1))));
                                var_29 -= ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_16 [i_0] [i_0] [i_0])) >= (arr_6 [i_11] [i_11] [i_0])));
                                var_30 = ((/* implicit */_Bool) arr_20 [i_13 + 1] [i_13 - 1] [i_13 - 1] [i_12 - 1] [i_1]);
                                var_31 = ((/* implicit */_Bool) (+(((unsigned long long int) (_Bool)1))));
                            }
                        } 
                    } 
                }
                var_32 = ((/* implicit */_Bool) max((var_32), ((((~(min((arr_13 [i_1] [(unsigned short)2] [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) var_9)))))) != ((~((((_Bool)1) ? (26ULL) : (((/* implicit */unsigned long long int) -758231329821931965LL))))))))));
                var_33 = ((/* implicit */_Bool) (~(((((11861737352669980192ULL) >> (((((/* implicit */int) arr_15 [2] [6LL] [i_0])) - (4346))))) << (((((var_2) ? (((/* implicit */int) arr_15 [i_1] [i_0] [8])) : (arr_4 [i_1]))) + (1422681780)))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
    {
        for (unsigned char i_15 = 4; i_15 < 24; i_15 += 2) 
        {
            for (short i_16 = 3; i_16 < 21; i_16 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_17 = 0; i_17 < 25; i_17 += 1) 
                    {
                        for (unsigned int i_18 = 0; i_18 < 25; i_18 += 4) 
                        {
                            {
                                var_34 -= ((/* implicit */unsigned int) max((arr_35 [i_18] [i_18] [i_18]), ((+(((/* implicit */int) arr_38 [i_18] [i_18]))))));
                                var_35 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_33 [i_14]) & (arr_33 [i_14])))) ? (max((arr_33 [i_14]), (arr_33 [i_14]))) : (arr_33 [i_14])));
                                var_36 = ((/* implicit */unsigned long long int) ((int) arr_34 [i_14] [i_14]));
                            }
                        } 
                    } 
                    var_37 = ((/* implicit */unsigned short) max((max((((/* implicit */unsigned long long int) ((int) arr_38 [i_14] [i_15]))), (var_7))), (((((/* implicit */_Bool) max((arr_35 [i_15] [i_15] [i_15]), (arr_37 [i_16] [i_14] [(short)22] [i_15] [i_14] [i_14])))) ? ((+(var_5))) : (((/* implicit */unsigned long long int) max((var_3), (((/* implicit */int) var_9)))))))));
                    var_38 = ((((/* implicit */_Bool) max((((var_5) - (var_5))), (((/* implicit */unsigned long long int) arr_40 [i_14] [i_14] [i_16 + 2] [i_14] [i_14] [i_16 + 4]))))) ? (((int) ((unsigned long long int) arr_35 [i_16 - 1] [i_15] [i_14]))) : (((/* implicit */int) ((((/* implicit */int) arr_38 [i_14] [i_14])) < (((/* implicit */int) ((signed char) arr_32 [i_15] [i_16 - 2])))))));
                    /* LoopNest 2 */
                    for (int i_19 = 2; i_19 < 24; i_19 += 3) 
                    {
                        for (int i_20 = 0; i_20 < 25; i_20 += 2) 
                        {
                            {
                                var_39 = ((/* implicit */unsigned long long int) max((arr_39 [i_14] [i_14]), (((/* implicit */signed char) (_Bool)1))));
                                var_40 = ((/* implicit */int) max((arr_31 [i_14]), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_1)) ^ (((/* implicit */int) (unsigned short)57610))))) && (((/* implicit */_Bool) arr_33 [i_14])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_41 = ((/* implicit */long long int) min((var_41), (((/* implicit */long long int) (~(((/* implicit */int) ((unsigned short) (~(var_3))))))))));
    var_42 = ((/* implicit */_Bool) var_5);
}
