/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23138
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23138 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23138
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
    for (signed char i_0 = 3; i_0 < 18; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */signed char) (+(max((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_2 [i_1] [9] [14LL])) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) max((var_1), (((/* implicit */signed char) (_Bool)1)))))))));
                var_15 = ((/* implicit */_Bool) (~((~(((/* implicit */int) var_12))))));
                /* LoopSeq 3 */
                for (unsigned short i_2 = 0; i_2 < 21; i_2 += 3) /* same iter space */
                {
                    arr_6 [i_0] = ((/* implicit */signed char) arr_2 [13ULL] [i_1] [i_2]);
                    arr_7 [13] [i_1] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 5961347901523633790LL)) ? (((/* implicit */int) (signed char)-42)) : (-133868556)))) ? ((~(((/* implicit */int) arr_1 [i_0 + 3])))) : (((/* implicit */int) ((signed char) var_4)))));
                }
                for (unsigned short i_3 = 0; i_3 < 21; i_3 += 3) /* same iter space */
                {
                    var_16 = ((/* implicit */unsigned int) arr_3 [(unsigned short)0] [(unsigned short)20]);
                    /* LoopNest 2 */
                    for (signed char i_4 = 4; i_4 < 19; i_4 += 2) 
                    {
                        for (unsigned long long int i_5 = 2; i_5 < 20; i_5 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned short) ((((unsigned long long int) (+(((/* implicit */int) arr_13 [i_3] [i_3] [i_3]))))) > (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) var_12))))) ? (((/* implicit */int) arr_1 [i_0 - 1])) : (((((/* implicit */int) arr_4 [i_0])) | (((/* implicit */int) var_5)))))))));
                                arr_16 [i_0] [5U] [9LL] [i_3] [i_3] [i_3] [i_0] = ((/* implicit */unsigned int) var_12);
                                var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_15 [i_0] [i_0 + 1] [i_0 + 3] [i_0] [i_0] [i_0 + 3])), (var_10)))) ? (max((1115396593U), (((/* implicit */unsigned int) arr_14 [i_0] [i_1] [(short)2] [i_1] [i_0])))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_0])) << (((((/* implicit */int) arr_15 [i_0 - 2] [(signed char)11] [i_3] [i_4 - 1] [(signed char)11] [i_5])) - (52))))))))), (arr_3 [i_5] [(_Bool)1]))))));
                            }
                        } 
                    } 
                    arr_17 [i_0] [i_0] [i_1] [i_3] = (((!(((/* implicit */_Bool) arr_13 [i_3] [i_0] [i_0 - 2])))) ? (((((((/* implicit */_Bool) arr_3 [i_1] [i_3])) ? (arr_3 [i_0 - 1] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) var_9))))) / (((/* implicit */long long int) ((/* implicit */int) var_0))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 133868555)) && (((/* implicit */_Bool) 5500242422395991717ULL)))))));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 21; i_6 += 4) 
                    {
                        for (unsigned long long int i_7 = 0; i_7 < 21; i_7 += 4) 
                        {
                            {
                                arr_24 [3LL] [3LL] [i_3] [i_6] [i_7] = ((/* implicit */unsigned short) ((min((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_1 [i_1])))), (((/* implicit */int) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) var_3))))))) * (((((/* implicit */_Bool) 509457399)) ? (-133868556) : (((/* implicit */int) (signed char)71))))));
                                var_19 = ((/* implicit */unsigned int) min((max((1609391342037634796ULL), (((/* implicit */unsigned long long int) -4239543960960560410LL)))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_4 [i_0 + 3])))))));
                            }
                        } 
                    } 
                    var_20 ^= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_13 [(signed char)18] [i_1] [i_0 + 3])) != (((/* implicit */int) arr_13 [(_Bool)1] [i_1] [i_0 - 2])))))) * (min((((/* implicit */unsigned long long int) var_12)), (var_3)))));
                }
                for (unsigned short i_8 = 0; i_8 < 21; i_8 += 3) /* same iter space */
                {
                    var_21 = ((/* implicit */_Bool) min((var_21), ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_8 [i_8] [(signed char)12] [6ULL])))) : (arr_10 [19U] [6U] [(unsigned short)16] [i_1]))))))));
                    var_22 += ((/* implicit */unsigned char) ((((/* implicit */int) arr_11 [i_8] [i_1] [i_0 - 3])) >> (((((/* implicit */int) var_6)) - (50723)))));
                    var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) 4333177178116744626ULL))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) arr_19 [20ULL] [i_1])))))) : (max(((+(((/* implicit */int) var_4)))), (((/* implicit */int) ((signed char) 4294967280U)))))));
                    /* LoopSeq 1 */
                    for (signed char i_9 = 0; i_9 < 21; i_9 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
                        {
                            var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) ((unsigned int) var_2)))));
                            var_25 *= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_8] [i_8] [i_8])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_18 [(signed char)14])))) : (((((/* implicit */_Bool) arr_11 [(signed char)6] [i_1] [i_1])) ? (arr_10 [i_10 - 1] [2U] [i_1] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_8])))))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_1))))) : (min((((/* implicit */unsigned int) arr_14 [i_0] [i_8] [i_10 - 1] [i_0 + 2] [i_10 - 1])), (var_8)))));
                        }
                        for (unsigned int i_11 = 4; i_11 < 20; i_11 += 4) 
                        {
                            var_26 *= ((/* implicit */unsigned int) arr_33 [i_11] [(unsigned char)14] [i_11 - 2] [i_11] [i_11] [i_11 - 1]);
                            arr_39 [i_9] [i_1] [3LL] [i_9] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned int) var_1)))));
                            arr_40 [i_0] [i_11] [i_0 - 2] [i_0 + 3] [i_0 + 3] &= ((/* implicit */unsigned long long int) max(((~(((/* implicit */int) arr_33 [i_11] [i_9] [i_1] [i_0 - 1] [i_0] [i_11])))), (((((/* implicit */int) var_2)) << (((-133868556) + (133868574)))))));
                            arr_41 [(_Bool)1] [i_9] [i_0] [i_9] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_32 [i_0 - 3] [(_Bool)1] [i_8] [i_9] [(unsigned short)12])), (arr_34 [i_8] [i_0]))))));
                            var_27 = ((/* implicit */short) (!(((/* implicit */_Bool) var_6))));
                        }
                        arr_42 [8U] [8U] [i_8] [(unsigned short)16] &= ((/* implicit */signed char) max((((max((((/* implicit */unsigned long long int) 4294967295U)), (1609391342037634796ULL))) * (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned char)130), (((/* implicit */unsigned char) (_Bool)1)))))))), (1609391342037634796ULL)));
                    }
                }
            }
        } 
    } 
    var_28 = ((/* implicit */unsigned int) (short)-14359);
    var_29 = ((/* implicit */short) var_8);
    var_30 |= ((/* implicit */_Bool) var_2);
}
