/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191835
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191835 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191835
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
    var_10 = ((/* implicit */int) ((_Bool) min((var_8), (((/* implicit */int) ((short) var_2))))));
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 3; i_0 < 20; i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */_Bool) arr_2 [i_0] [10]);
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 24; i_1 += 1) /* same iter space */
        {
            var_11 = ((/* implicit */unsigned int) var_0);
            var_12 = ((/* implicit */unsigned int) var_3);
        }
        for (int i_2 = 0; i_2 < 24; i_2 += 1) /* same iter space */
        {
            arr_9 [i_2] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) ((_Bool) (short)-22563))) <= (2132265019))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_9))));
            var_13 = ((/* implicit */unsigned short) arr_2 [i_0] [i_2]);
        }
    }
    for (unsigned long long int i_3 = 3; i_3 < 20; i_3 += 1) /* same iter space */
    {
        var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) min(((~(arr_10 [i_3 + 2]))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) min((var_3), (var_3))))))))))));
        /* LoopNest 2 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (short i_5 = 1; i_5 < 21; i_5 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                    {
                        for (signed char i_7 = 0; i_7 < 24; i_7 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */short) var_5);
                                var_16 |= ((/* implicit */int) ((_Bool) min((((/* implicit */int) min((((/* implicit */unsigned short) (short)26894)), ((unsigned short)27211)))), (min((var_1), (((/* implicit */int) arr_5 [i_3])))))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */unsigned char) ((_Bool) (!(((arr_14 [i_4]) <= (((/* implicit */int) arr_5 [i_3])))))));
                    var_18 = ((/* implicit */unsigned short) ((int) min((((var_6) / (arr_19 [i_3] [i_3] [i_3] [i_3 + 3] [i_4] [i_3 + 1] [i_3 - 2]))), (((/* implicit */int) arr_5 [i_3])))));
                    arr_21 [i_5] [i_4] [i_4] [i_3] = ((unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)2304)) ? (((/* implicit */int) arr_5 [i_5])) : (((/* implicit */int) var_4))))) | (min((4294967295U), (((/* implicit */unsigned int) (short)-25750))))));
                }
            } 
        } 
        var_19 ^= ((/* implicit */short) min((((/* implicit */unsigned long long int) ((var_9) ? (((/* implicit */unsigned int) var_8)) : (arr_8 [i_3 + 4])))), (var_5)));
        arr_22 [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((unsigned int) arr_1 [i_3 - 1]))) : (min((((/* implicit */unsigned long long int) arr_17 [i_3] [i_3] [i_3 + 4] [i_3 + 1] [i_3])), (17918924584927291437ULL)))));
    }
    for (unsigned short i_8 = 0; i_8 < 19; i_8 += 1) /* same iter space */
    {
        arr_25 [i_8] [i_8] = ((/* implicit */unsigned char) arr_14 [i_8]);
        var_20 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_8) : (((/* implicit */int) (_Bool)0))));
        var_21 = ((/* implicit */unsigned int) arr_6 [i_8] [i_8] [i_8]);
        var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) min(((-(((((/* implicit */int) arr_5 [i_8])) / (var_1))))), (min(((((_Bool)1) ? (1239434393) : (((/* implicit */int) var_3)))), (((/* implicit */int) (_Bool)0)))))))));
        var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) min((((((/* implicit */_Bool) -2132265008)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_8])) ? (arr_14 [i_8]) : (((/* implicit */int) arr_15 [i_8] [i_8]))))) : (min((((/* implicit */unsigned long long int) (short)25761)), (258612893715247014ULL))))), (((/* implicit */unsigned long long int) var_0)))))));
    }
    for (unsigned short i_9 = 0; i_9 < 19; i_9 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) /* same iter space */
        {
            var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) ((((/* implicit */int) (short)1202)) <= (((/* implicit */int) var_0)))))) ? ((-(((((/* implicit */int) (short)4094)) / (arr_18 [i_9] [i_9] [i_9] [i_9] [i_10] [i_10]))))) : (((((/* implicit */int) ((signed char) var_5))) | (arr_19 [i_9] [i_9] [i_10] [i_9] [i_9] [i_9] [1])))));
            arr_30 [i_9] = ((/* implicit */unsigned int) arr_29 [i_9] [i_10 - 1]);
            var_25 = ((/* implicit */unsigned long long int) var_6);
            /* LoopSeq 2 */
            for (unsigned long long int i_11 = 0; i_11 < 19; i_11 += 1) /* same iter space */
            {
                var_26 = (_Bool)0;
                arr_33 [i_9] [i_9] = ((/* implicit */unsigned short) var_6);
            }
            for (unsigned long long int i_12 = 0; i_12 < 19; i_12 += 1) /* same iter space */
            {
                arr_38 [i_9] [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) (~(((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */unsigned int) min((-603892497), (603892472)))) : (var_7)));
                /* LoopSeq 3 */
                for (int i_13 = 0; i_13 < 19; i_13 += 1) 
                {
                    var_27 = ((/* implicit */int) max((var_27), (((/* implicit */int) var_3))));
                    var_28 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) arr_6 [i_10] [i_12] [i_13]))) ? ((~(arr_32 [i_10]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (_Bool)1))))));
                }
                /* vectorizable */
                for (int i_14 = 0; i_14 < 19; i_14 += 1) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_15 = 1; i_15 < 17; i_15 += 1) 
                    {
                        arr_46 [10] [i_14] [16] [i_10] [10] |= ((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) var_2)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))));
                        arr_47 [i_9] [i_12] [(_Bool)1] [i_9] &= ((/* implicit */signed char) (~((~(2862804160U)))));
                    }
                    var_29 = ((/* implicit */_Bool) (-(((var_0) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))));
                }
                for (unsigned int i_16 = 0; i_16 < 19; i_16 += 1) 
                {
                    arr_51 [i_9] [10] [i_16] &= ((((/* implicit */_Bool) var_3)) ? (min((min((((/* implicit */int) arr_35 [i_9] [8ULL] [i_9] [i_9])), (var_8))), (var_6))) : (((/* implicit */int) min(((unsigned short)31207), (((/* implicit */unsigned short) min((((/* implicit */short) var_0)), ((short)-25728))))))));
                    arr_52 [i_9] [i_9] = ((/* implicit */int) min((((/* implicit */unsigned int) (+(var_8)))), (var_7)));
                }
            }
        }
        for (_Bool i_17 = 1; i_17 < 1; i_17 += 1) /* same iter space */
        {
            arr_57 [16ULL] |= ((/* implicit */short) min((min((5U), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) <= (4294967283U)))))), ((~(921892835U)))));
            /* LoopNest 3 */
            for (int i_18 = 0; i_18 < 19; i_18 += 1) 
            {
                for (unsigned char i_19 = 0; i_19 < 19; i_19 += 1) 
                {
                    for (int i_20 = 3; i_20 < 15; i_20 += 1) 
                    {
                        {
                            arr_67 [i_9] [i_17] [i_17] [i_17] [i_17] [i_9] = ((/* implicit */unsigned long long int) ((((int) ((signed char) arr_61 [2] [i_17] [i_17] [i_17 - 1]))) >> (((/* implicit */int) var_9))));
                            var_30 = ((/* implicit */short) min((min((var_1), (((/* implicit */int) ((_Bool) var_6))))), (((/* implicit */int) arr_6 [i_9] [i_17] [i_9]))));
                            var_31 = ((/* implicit */short) arr_34 [i_20] [i_20] [i_20]);
                        }
                    } 
                } 
            } 
            /* LoopNest 3 */
            for (int i_21 = 0; i_21 < 19; i_21 += 1) 
            {
                for (unsigned long long int i_22 = 0; i_22 < 19; i_22 += 1) 
                {
                    for (signed char i_23 = 1; i_23 < 16; i_23 += 1) 
                    {
                        {
                            var_32 = (((~(var_8))) <= (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-495)) ? (arr_14 [i_23 + 1]) : (var_1))))))));
                            var_33 = 1938623054;
                            var_34 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) & (arr_32 [i_9])));
                        }
                    } 
                } 
            } 
            /* LoopSeq 1 */
            for (short i_24 = 0; i_24 < 19; i_24 += 1) 
            {
                var_35 = ((/* implicit */unsigned int) arr_72 [i_17] [i_24] [7] [i_17] [i_9]);
                var_36 *= ((/* implicit */short) var_5);
                var_37 |= ((/* implicit */int) 1940106066U);
            }
        }
        var_38 = ((/* implicit */unsigned int) var_8);
        var_39 = ((/* implicit */int) min((((min((((/* implicit */unsigned long long int) arr_69 [i_9] [i_9] [i_9])), (arr_60 [i_9]))) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_68 [i_9])) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))))), (var_5)));
        var_40 ^= ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)204))));
        arr_77 [i_9] = ((/* implicit */unsigned char) (~(((((/* implicit */unsigned int) ((/* implicit */int) (short)-26130))) | (2119338351U)))));
    }
}
