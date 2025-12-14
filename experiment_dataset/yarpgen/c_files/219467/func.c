/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219467
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219467 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219467
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
    for (int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                var_10 = ((/* implicit */short) (~(min((-3831133808281179989LL), (((((/* implicit */_Bool) (short)26935)) ? (2508328479496960776LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-26936)))))))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned int i_2 = 3; i_2 < 17; i_2 += 2) 
                {
                    arr_8 [i_0] [i_1] [i_0] |= ((/* implicit */long long int) arr_5 [i_0] [i_1] [i_2] [16ULL]);
                    arr_9 [i_2] [i_1] = ((/* implicit */signed char) arr_1 [i_1]);
                }
                for (long long int i_3 = 0; i_3 < 19; i_3 += 2) 
                {
                    arr_12 [i_1] [i_1] [i_3] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */int) (short)-17662)) + (((/* implicit */int) (unsigned char)230))));
                    /* LoopNest 2 */
                    for (unsigned int i_4 = 0; i_4 < 19; i_4 += 3) 
                    {
                        for (int i_5 = 3; i_5 < 16; i_5 += 1) 
                        {
                            {
                                var_11 = ((/* implicit */unsigned char) min((var_11), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)26935)) ? (-3831133808281180007LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)120))))))));
                                var_12 = ((/* implicit */long long int) max((var_12), (((((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-24))) < (arr_0 [(_Bool)1] [i_4])))) * (((((/* implicit */int) (short)-26938)) / (2147483636)))))) % (3831133808281179987LL)))));
                                var_13 ^= ((/* implicit */_Bool) -3763672763340473895LL);
                                arr_17 [i_0] [i_1] [i_3] [i_3] [i_4] [i_5] [i_5 + 2] = ((/* implicit */unsigned int) arr_5 [12LL] [i_3] [i_4] [i_5 - 2]);
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (long long int i_6 = 1; i_6 < 18; i_6 += 2) 
                    {
                        arr_20 [i_0] [i_1] [i_3] [i_3] [i_6] = min((((arr_10 [i_0] [i_1] [i_3]) & (((/* implicit */int) var_7)))), (((((arr_10 [15U] [i_3] [i_6]) + (2147483647))) << (((((arr_10 [(unsigned char)16] [i_1] [i_3]) + (2058536609))) - (4))))));
                        var_14 -= ((/* implicit */short) var_6);
                        var_15 += ((/* implicit */_Bool) -3831133808281180004LL);
                        var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) arr_15 [i_0] [i_0] [i_3] [i_6] [i_6]))));
                    }
                    /* vectorizable */
                    for (int i_7 = 1; i_7 < 18; i_7 += 3) /* same iter space */
                    {
                        var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) arr_7 [i_0]))));
                        var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) arr_15 [i_0] [i_1] [i_1] [17LL] [i_0]))));
                        var_19 |= ((/* implicit */unsigned int) -3831133808281179992LL);
                    }
                    /* vectorizable */
                    for (int i_8 = 1; i_8 < 18; i_8 += 3) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_9 = 2; i_9 < 15; i_9 += 2) /* same iter space */
                        {
                            var_20 &= ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_22 [i_8]))))) ? (((((/* implicit */_Bool) arr_25 [i_3] [i_9])) ? (((/* implicit */int) arr_22 [i_0])) : (((/* implicit */int) (unsigned char)255)))) : (((((-2028349574) + (2147483647))) << (((((-3831133808281180008LL) + (3831133808281180022LL))) - (11LL)))))));
                            var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) arr_10 [i_9 + 4] [i_1] [i_8]))));
                            var_22 &= ((/* implicit */int) arr_13 [8LL] [i_1] [i_3] [i_8] [i_1] [i_3]);
                            var_23 += ((/* implicit */int) (_Bool)0);
                        }
                        for (unsigned int i_10 = 2; i_10 < 15; i_10 += 2) /* same iter space */
                        {
                            var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1150682966)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (3831133808281179986LL)));
                            var_25 ^= ((/* implicit */unsigned int) ((unsigned char) arr_11 [12LL] [i_1]));
                        }
                        var_26 ^= ((/* implicit */long long int) (!(((/* implicit */_Bool) -3831133808281180000LL))));
                        var_27 += ((/* implicit */int) arr_3 [i_0] [i_0] [i_3]);
                        var_28 ^= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_14 [(short)13] [i_1] [i_3] [i_8 - 1]))));
                        arr_29 [i_8] = ((/* implicit */long long int) arr_23 [i_8 + 1] [i_8 - 1] [i_8 - 1] [i_8 + 1] [i_8 + 1] [i_8]);
                    }
                    arr_30 [i_0] [i_0] [i_1] [i_3] |= ((/* implicit */int) ((3763672763340473894LL) < (((/* implicit */long long int) ((/* implicit */int) var_7)))));
                }
                /* vectorizable */
                for (unsigned int i_11 = 0; i_11 < 19; i_11 += 2) 
                {
                    var_29 += ((/* implicit */long long int) 1150682966);
                    /* LoopSeq 1 */
                    for (int i_12 = 0; i_12 < 19; i_12 += 1) 
                    {
                        var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 2028349562)) ? (arr_7 [i_11]) : (1343417638274953864LL)));
                        arr_37 [i_0] [i_0] [i_0] [i_11] [i_11] &= ((/* implicit */unsigned int) ((_Bool) 3763672763340473875LL));
                        arr_38 [i_0] [i_1] [i_12] [i_12] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [(short)18])) ? (((/* implicit */long long int) ((/* implicit */int) (short)32761))) : (5399922838620974233LL)))) ? (arr_25 [(_Bool)1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_27 [i_0] [i_1] [i_11] [i_12]))))));
                    }
                }
                var_31 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_21 [i_0])) ? (((/* implicit */int) arr_36 [i_0] [i_1])) : (((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) - (-752692708858516164LL))) != (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_0]))))))));
                arr_39 [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((arr_0 [i_0] [17LL]) + (9223372036854775807LL))) >> (((((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) (unsigned char)166)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_0] [i_1]))))))) - (114)))));
            }
        } 
    } 
    var_32 = ((/* implicit */short) (signed char)69);
}
