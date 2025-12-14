/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244563
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244563 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244563
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
    /* LoopSeq 3 */
    for (unsigned char i_0 = 1; i_0 < 13; i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (signed char i_2 = 1; i_2 < 12; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 3; i_3 < 15; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 2; i_4 < 15; i_4 += 1) 
                        {
                            {
                                var_10 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_6) ? (((/* implicit */int) (unsigned short)7048)) : (arr_4 [i_0] [i_0] [i_0] [i_0])))) ? (((/* implicit */int) var_1)) : (max((arr_2 [i_2] [i_0 + 3]), (((/* implicit */int) var_7))))))) ? (((/* implicit */int) ((_Bool) (!(((/* implicit */_Bool) (unsigned char)251)))))) : (((/* implicit */int) ((((/* implicit */_Bool) (~(var_0)))) && (((/* implicit */_Bool) (~(var_0)))))))));
                                var_11 += ((/* implicit */unsigned char) var_0);
                                var_12 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_9 [i_2 - 1] [i_2 + 4] [i_4 - 2] [i_4] [(_Bool)1])) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))));
                            }
                        } 
                    } 
                    var_13 = ((/* implicit */_Bool) (~(min((((/* implicit */int) min((var_7), (((/* implicit */short) var_4))))), (((((/* implicit */_Bool) 6U)) ? (((/* implicit */int) arr_1 [3])) : (arr_3 [i_0 + 3] [i_0 + 3])))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (int i_5 = 2; i_5 < 14; i_5 += 4) 
        {
            for (signed char i_6 = 2; i_6 < 14; i_6 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_7 = 2; i_7 < 14; i_7 += 1) 
                    {
                        for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_19 [i_7] [i_7 - 2] [(unsigned char)1] [i_7] [i_7 + 1] [i_7 - 2]), (((/* implicit */signed char) var_6))))) ? (min((((/* implicit */long long int) 4294967277U)), (arr_9 [i_6 - 1] [i_7] [i_7] [i_6 - 1] [i_7 + 1]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)65530)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (4294967261U))))));
                                arr_21 [i_0] [i_5] [i_0] [i_0] [i_7] [i_8] [i_8] |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_6 [i_0] [i_7] [i_0] [i_7] [i_7] [i_8 - 1]) % (((/* implicit */int) ((var_5) > (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_7 + 1]))))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_6))))) ? (((/* implicit */int) ((4294967267U) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65340)))))) : (((/* implicit */int) max((((/* implicit */unsigned short) arr_0 [i_0])), ((unsigned short)6)))))))));
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */unsigned char) ((unsigned int) 11U));
                }
            } 
        } 
        var_16 = ((/* implicit */_Bool) (-((~((+(((/* implicit */int) (_Bool)1))))))));
    }
    for (unsigned char i_9 = 1; i_9 < 13; i_9 += 1) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned short) var_3);
        var_18 &= ((((int) (-(((/* implicit */int) var_9))))) & (((((/* implicit */_Bool) ((var_4) ? (((/* implicit */int) (unsigned short)65504)) : (((/* implicit */int) var_7))))) ? (((((/* implicit */_Bool) arr_17 [i_9] [i_9] [i_9 - 1] [i_9] [i_9] [i_9])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_22 [i_9])))) : (((/* implicit */int) var_7)))));
        arr_24 [12] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned short)6)), (24U)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_9 + 2] [i_9 + 2] [i_9 + 1])) ? (((((/* implicit */_Bool) arr_16 [i_9])) ? (arr_9 [i_9 - 1] [i_9] [i_9] [1] [i_9]) : (((/* implicit */long long int) ((/* implicit */int) var_1))))) : (((/* implicit */long long int) arr_20 [15] [i_9 + 1] [i_9 + 3] [15] [i_9 + 1])))))));
        var_19 = ((/* implicit */signed char) ((_Bool) (!(((/* implicit */_Bool) min((var_7), (((/* implicit */short) var_8))))))));
        var_20 = ((/* implicit */signed char) (~((((-(((/* implicit */int) arr_1 [i_9])))) | (((/* implicit */int) (_Bool)0))))));
    }
    /* vectorizable */
    for (unsigned char i_10 = 1; i_10 < 13; i_10 += 1) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_23 [i_10 + 2])) - (((/* implicit */int) var_1))));
        arr_28 [(_Bool)1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_10] [i_10] [i_10 + 2])) ? (((/* implicit */int) arr_13 [(signed char)9] [1] [i_10 + 2])) : (((/* implicit */int) arr_13 [i_10 - 1] [6] [i_10 + 3]))));
        /* LoopNest 3 */
        for (long long int i_11 = 3; i_11 < 15; i_11 += 1) 
        {
            for (unsigned char i_12 = 1; i_12 < 15; i_12 += 1) 
            {
                for (long long int i_13 = 2; i_13 < 14; i_13 += 1) 
                {
                    {
                        var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_27 [i_11 + 1])) : (((/* implicit */int) var_4))));
                        var_23 = ((/* implicit */long long int) (~(((/* implicit */int) var_9))));
                        /* LoopSeq 3 */
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                        {
                            var_24 ^= (signed char)18;
                            var_25 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_9))));
                            var_26 = ((/* implicit */int) min((var_26), ((((+(((/* implicit */int) var_9)))) / ((~(((/* implicit */int) var_4))))))));
                        }
                        for (int i_15 = 1; i_15 < 12; i_15 += 2) 
                        {
                            var_27 = ((/* implicit */int) ((((/* implicit */long long int) arr_34 [(unsigned char)9] [i_13] [(unsigned char)9] [i_10])) - (arr_9 [i_10] [i_11 - 2] [i_12] [i_13] [9])));
                            var_28 = ((/* implicit */unsigned short) var_0);
                            arr_44 [i_15] [15] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) (+(((/* implicit */int) var_6)))))));
                        }
                        for (signed char i_16 = 2; i_16 < 15; i_16 += 2) 
                        {
                            var_29 = ((/* implicit */unsigned char) max((var_29), (((/* implicit */unsigned char) ((4294967277U) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65504))))))));
                            arr_47 [i_10] [i_10] &= arr_8 [i_10 + 2] [i_10 + 2];
                        }
                    }
                } 
            } 
        } 
        var_30 = ((((/* implicit */int) ((((/* implicit */int) arr_19 [i_10] [i_10 + 3] [i_10] [i_10 + 1] [i_10] [(short)14])) >= (((/* implicit */int) arr_1 [i_10 + 3]))))) > (((/* implicit */int) var_9)));
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_17 = 2; i_17 < 12; i_17 += 1) 
    {
        /* LoopNest 2 */
        for (int i_18 = 1; i_18 < 14; i_18 += 3) 
        {
            for (int i_19 = 1; i_19 < 12; i_19 += 3) 
            {
                {
                    var_31 = ((/* implicit */unsigned int) var_8);
                    arr_58 [i_17 - 1] [i_19 + 3] = ((/* implicit */unsigned int) arr_3 [i_17 + 1] [i_17 - 2]);
                    arr_59 [(signed char)9] [i_17] = (-(((/* implicit */int) var_1)));
                }
            } 
        } 
        arr_60 [i_17] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_30 [i_17 - 2] [i_17] [(unsigned char)4]))));
    }
    for (unsigned char i_20 = 1; i_20 < 12; i_20 += 1) 
    {
        var_32 = ((/* implicit */unsigned char) min(((unsigned short)5), ((unsigned short)27316)));
        var_33 = ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_54 [i_20] [0] [i_20])) || (((/* implicit */_Bool) var_2)))) ? (((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (4294967277U))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (35U)))))) || (((/* implicit */_Bool) max((max((((/* implicit */unsigned int) (signed char)18)), (arr_37 [i_20] [i_20] [i_20] [i_20]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) var_5)))))))));
        arr_64 [i_20] = ((/* implicit */_Bool) ((((_Bool) arr_42 [i_20 + 1] [i_20] [i_20 - 1] [i_20 - 1] [i_20 - 1] [i_20 + 1] [i_20])) ? (((/* implicit */unsigned int) var_0)) : (((unsigned int) arr_42 [(_Bool)1] [i_20 + 1] [i_20 + 1] [i_20] [i_20 + 1] [i_20 + 1] [i_20]))));
    }
    /* LoopNest 2 */
    for (int i_21 = 3; i_21 < 22; i_21 += 1) 
    {
        for (long long int i_22 = 1; i_22 < 23; i_22 += 2) 
        {
            {
                arr_72 [i_22] = ((/* implicit */long long int) min((((((/* implicit */_Bool) (signed char)22)) ? ((-2147483647 - 1)) : (((((/* implicit */int) (unsigned short)20)) & (((/* implicit */int) var_9)))))), (((/* implicit */int) arr_71 [i_21] [i_21] [i_21]))));
                arr_73 [i_21] [i_21] [i_21] = ((/* implicit */int) ((min((((/* implicit */unsigned int) arr_71 [i_21] [i_21] [i_22])), (var_3))) | (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_2))))) ? (((/* implicit */int) arr_65 [i_21] [i_21])) : (((((/* implicit */_Bool) 1769483753)) ? (arr_69 [(_Bool)1]) : (((/* implicit */int) var_8)))))))));
                var_34 = ((/* implicit */signed char) max((var_34), (((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */int) ((_Bool) (_Bool)0))), ((-(((/* implicit */int) (unsigned short)5))))))) ? (max((arr_70 [i_21 - 3] [i_21]), (((/* implicit */int) var_7)))) : ((-(((/* implicit */int) ((_Bool) arr_69 [i_21]))))))))));
            }
        } 
    } 
}
