/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22559
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22559 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22559
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
    var_10 = ((/* implicit */_Bool) max((min((((/* implicit */unsigned long long int) max((var_8), (((/* implicit */unsigned short) var_0))))), (0ULL))), (((/* implicit */unsigned long long int) (-(min((((/* implicit */long long int) var_5)), (var_2))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 13; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */int) ((((/* implicit */_Bool) min((var_9), (((/* implicit */signed char) (!(((/* implicit */_Bool) 1301818220297606193ULL)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (unsigned short)2384)))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))) * (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_1]))) / (arr_3 [i_0])))))));
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 4; i_3 < 13; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 10; i_4 += 1) 
                        {
                            {
                                var_12 -= ((/* implicit */unsigned char) arr_0 [i_0] [i_1]);
                                var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) 6521881603477493814ULL))));
                                arr_12 [i_0] [i_4 + 2] = ((/* implicit */signed char) var_7);
                                arr_13 [i_0 - 1] [i_0 - 1] [i_0] [i_0] [i_0 - 1] [(unsigned short)2] [i_0] |= ((/* implicit */int) ((((/* implicit */unsigned long long int) (-(var_2)))) + (min((((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)21572))))), (max((arr_0 [i_1] [i_3 - 4]), (((/* implicit */unsigned long long int) var_3))))))));
                                arr_14 [i_0 + 1] [i_1] [6ULL] [i_0 - 2] [i_4] |= min((min((min((((/* implicit */unsigned long long int) var_8)), (arr_0 [i_1] [i_1]))), (((/* implicit */unsigned long long int) max(((unsigned short)15094), ((unsigned short)40186)))))), (arr_5 [12] [i_1] [i_1]));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 14; i_5 += 3) 
                    {
                        for (int i_6 = 1; i_6 < 11; i_6 += 3) 
                        {
                            {
                                var_14 = ((/* implicit */short) ((((/* implicit */int) ((max((17709104008455719094ULL), (((/* implicit */unsigned long long int) arr_11 [i_5] [i_2 + 1] [i_0])))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_11 [i_0] [i_0] [i_0])), (arr_1 [i_2] [i_2])))))))) ^ (((/* implicit */int) var_7))));
                                var_15 += ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_5 [i_6 - 1] [i_2 + 1] [i_2])) ? (arr_5 [i_6 + 2] [i_2 + 1] [(unsigned char)4]) : (arr_5 [i_6 + 3] [i_2 + 1] [i_2]))) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_6 + 3] [i_2 + 1] [i_1])) || (((/* implicit */_Bool) arr_5 [i_6 - 1] [i_2 + 1] [i_1]))))))));
                                var_16 = (i_0 % 2 == 0) ? (((/* implicit */unsigned short) (((((-(((/* implicit */int) ((signed char) var_9))))) + (2147483647))) << (((((/* implicit */int) arr_17 [i_0 - 2] [i_0] [i_0] [i_0] [1ULL] [i_0])) - (22)))))) : (((/* implicit */unsigned short) (((((-(((/* implicit */int) ((signed char) var_9))))) + (2147483647))) << (((((((/* implicit */int) arr_17 [i_0 - 2] [i_0] [i_0] [i_0] [1ULL] [i_0])) - (22))) - (52))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_7 = 2; i_7 < 13; i_7 += 3) 
                    {
                        for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) (!((_Bool)1))))));
                                var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) arr_11 [i_2 + 1] [i_0 - 2] [i_8 - 1]))));
                                var_19 -= ((/* implicit */signed char) (!(((((/* implicit */_Bool) (unsigned short)15108)) && (((/* implicit */_Bool) (unsigned short)9))))));
                            }
                        } 
                    } 
                }
                arr_25 [i_0] [i_0] [(unsigned char)13] = ((/* implicit */long long int) 2627503297819780648ULL);
                var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) (short)29426))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_9 = 0; i_9 < 11; i_9 += 3) 
    {
        for (unsigned short i_10 = 0; i_10 < 11; i_10 += 3) 
        {
            {
                var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) ((((((/* implicit */long long int) ((/* implicit */int) ((short) var_6)))) >= ((-(var_2))))) ? (((max((((/* implicit */unsigned long long int) -4546167438109234920LL)), (1301818220297606188ULL))) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))) : (((/* implicit */unsigned long long int) 621893471)))))));
                arr_30 [i_9] = ((/* implicit */unsigned long long int) (((+(arr_3 [i_9]))) == (((((/* implicit */_Bool) (unsigned short)50442)) ? (1729382256910270464ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)13895)))))));
                /* LoopSeq 1 */
                for (unsigned long long int i_11 = 1; i_11 < 9; i_11 += 1) 
                {
                    var_22 = 6521881603477493804ULL;
                    var_23 = ((/* implicit */unsigned long long int) var_8);
                    arr_33 [i_9] [i_9] [i_9] [i_9] = ((/* implicit */unsigned long long int) arr_4 [i_11 + 1] [i_11 - 1] [i_11] [i_11]);
                }
            }
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_12 = 0; i_12 < 0; i_12 += 1) 
    {
        for (unsigned short i_13 = 2; i_13 < 19; i_13 += 1) 
        {
            for (unsigned short i_14 = 0; i_14 < 20; i_14 += 3) 
            {
                {
                    var_24 |= ((/* implicit */unsigned char) (~(((arr_36 [(short)4]) / (arr_36 [8ULL])))));
                    arr_42 [i_12] [i_12] [i_12] [i_12] = ((/* implicit */unsigned short) var_1);
                    /* LoopSeq 3 */
                    for (unsigned short i_15 = 0; i_15 < 20; i_15 += 1) 
                    {
                        arr_46 [(short)16] |= ((/* implicit */_Bool) arr_44 [i_12] [i_12] [i_12 + 1] [i_12]);
                        var_25 -= ((/* implicit */unsigned long long int) 2251799813685247LL);
                    }
                    for (long long int i_16 = 0; i_16 < 20; i_16 += 1) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_17 = 0; i_17 < 20; i_17 += 1) 
                        {
                            var_26 = ((((/* implicit */_Bool) max((((/* implicit */int) max(((unsigned short)7), (((/* implicit */unsigned short) arr_49 [i_12] [i_13 - 2]))))), (((((((/* implicit */int) (signed char)-1)) + (2147483647))) << (((((-218500962) + (218500967))) - (5)))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_37 [(short)11]))))) ? (((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) arr_52 [i_13] [i_13] [i_14] [i_16] [(unsigned short)12] [i_13 + 1] [i_16])))) : (((/* implicit */int) max((arr_45 [i_12 + 1] [i_12 + 1] [i_14] [i_17]), (var_3))))))));
                            var_27 |= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((((/* implicit */int) (short)-11561)) + (2147483647))) << (((((/* implicit */int) (_Bool)1)) - (1))))))));
                            var_28 ^= ((/* implicit */unsigned short) max(((((!(((/* implicit */_Bool) var_0)))) ? ((+(((/* implicit */int) arr_35 [i_12])))) : (min((1732489992), (((/* implicit */int) (unsigned char)99)))))), (((/* implicit */int) arr_52 [i_12] [i_12] [i_12 + 1] [10ULL] [i_17] [0] [i_13 + 1]))));
                            arr_53 [i_12] [i_12] = ((/* implicit */short) ((((((/* implicit */int) var_7)) - (((((/* implicit */int) (unsigned short)30116)) >> (((((/* implicit */int) (unsigned short)127)) - (124))))))) >= ((+(((/* implicit */int) (signed char)0))))));
                        }
                        /* LoopSeq 1 */
                        for (unsigned short i_18 = 0; i_18 < 20; i_18 += 1) 
                        {
                            var_29 = ((((/* implicit */int) (!(((/* implicit */_Bool) arr_39 [i_12] [i_12 + 1] [i_13 - 1]))))) & (((/* implicit */int) min((max((var_6), (arr_34 [i_14]))), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) 72057594037927935LL)) == (arr_39 [i_12] [i_12] [i_18]))))))));
                            var_30 ^= ((/* implicit */unsigned long long int) ((_Bool) arr_36 [(short)10]));
                        }
                    }
                    /* vectorizable */
                    for (long long int i_19 = 0; i_19 < 20; i_19 += 1) /* same iter space */
                    {
                        arr_58 [i_12 + 1] [(unsigned short)2] [i_12] [i_12 + 1] |= ((/* implicit */int) arr_47 [2] [2] [i_14] [i_12 + 1] [i_13] [i_12 + 1]);
                        var_31 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_9))))) ? (((/* implicit */int) arr_41 [i_12 + 1] [i_12 + 1] [i_12] [i_13 - 2])) : (((/* implicit */int) ((((/* implicit */int) var_0)) != (((/* implicit */int) (signed char)-17)))))));
                    }
                }
            } 
        } 
    } 
}
