/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193807
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193807 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193807
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
    for (int i_0 = 3; i_0 < 22; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 22; i_1 += 1) 
        {
            {
                var_10 = ((/* implicit */short) max((arr_0 [i_1]), (((/* implicit */unsigned short) (short)-26983))));
                arr_5 [i_1] [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) min((((/* implicit */unsigned short) var_8)), (arr_3 [i_1]))))) ? (max((min((var_7), (((/* implicit */long long int) arr_0 [i_0])))), (((/* implicit */long long int) arr_1 [i_0 - 1])))) : (((/* implicit */long long int) ((/* implicit */int) min((max((arr_1 [i_1]), (arr_3 [i_1]))), (max((var_9), (arr_1 [i_0 - 2])))))))));
            }
        } 
    } 
    /* LoopSeq 4 */
    for (unsigned int i_2 = 0; i_2 < 24; i_2 += 1) 
    {
        var_11 = ((/* implicit */unsigned short) min((var_11), (((/* implicit */unsigned short) min((max((arr_8 [i_2] [i_2]), (arr_8 [i_2] [i_2]))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_2])) || (((/* implicit */_Bool) arr_9 [i_2]))))))))));
        arr_10 [i_2] = ((((((/* implicit */int) ((signed char) max((-553613503496228744LL), (((/* implicit */long long int) 4294967276U)))))) + (2147483647))) << (((arr_6 [i_2]) - (1789508542U))));
        arr_11 [i_2] [i_2] = ((/* implicit */int) ((unsigned int) max((arr_8 [i_2] [i_2]), (((/* implicit */long long int) arr_9 [i_2])))));
        var_12 *= ((/* implicit */_Bool) min((((/* implicit */unsigned int) (~((~(((/* implicit */int) arr_9 [i_2]))))))), (309348548U)));
        /* LoopNest 3 */
        for (long long int i_3 = 1; i_3 < 23; i_3 += 1) 
        {
            for (unsigned short i_4 = 0; i_4 < 24; i_4 += 2) 
            {
                for (unsigned int i_5 = 0; i_5 < 24; i_5 += 3) 
                {
                    {
                        var_13 = (!((!(((/* implicit */_Bool) 19U)))));
                        /* LoopSeq 2 */
                        for (long long int i_6 = 4; i_6 < 23; i_6 += 2) 
                        {
                            arr_22 [i_2] [i_3] [i_4] [i_3] [i_6] = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_20 [i_6] [i_6] [i_6] [i_6] [i_6 - 3])) ? (((/* implicit */int) arr_20 [i_6] [i_6] [i_6 + 1] [i_6] [i_6 - 2])) : (((/* implicit */int) arr_20 [i_6] [i_6] [i_6] [i_6] [i_6 + 1]))))), (max((((/* implicit */long long int) arr_15 [i_3 - 1] [i_6 - 4] [i_3 - 1])), (((((/* implicit */_Bool) arr_15 [i_2] [i_2] [i_2])) ? (-2546512276764032217LL) : (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_3])))))))));
                            var_14 = ((/* implicit */long long int) min((var_14), (arr_8 [i_2] [i_2])));
                        }
                        for (long long int i_7 = 0; i_7 < 24; i_7 += 2) 
                        {
                            var_15 = 3985618750U;
                            arr_26 [i_3] = ((/* implicit */signed char) max((arr_23 [i_2] [i_3] [i_4] [i_5] [i_7]), (((/* implicit */unsigned short) var_8))));
                            var_16 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) -298269672)) ? (4140737818U) : (((/* implicit */unsigned int) 15))))) || (arr_13 [i_4] [i_5] [i_7]))) ? (((((/* implicit */_Bool) max((((/* implicit */long long int) arr_18 [i_3])), (arr_19 [i_2] [i_3] [i_2] [i_2] [i_2])))) ? (arr_19 [i_2] [i_3] [i_2] [i_2] [i_7]) : (((/* implicit */long long int) arr_24 [i_2] [i_3] [i_4] [i_4] [i_5] [i_5] [i_7])))) : (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_3])))));
                            arr_27 [i_2] [i_3] [i_2] [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_18 [i_3])) & (((/* implicit */int) arr_23 [i_2] [i_2] [i_2] [i_2] [i_3]))))) ? (min((var_1), (arr_12 [i_2] [i_3]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_21 [i_2] [i_3 + 1]))))));
                            var_17 = ((/* implicit */unsigned int) ((max((((/* implicit */long long int) max((0U), (1771157125U)))), (arr_8 [i_7] [i_2]))) < (((/* implicit */long long int) ((arr_13 [i_2] [i_3] [i_3]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_2] [i_3] [i_3] [i_3 - 1] [i_3 - 1]))) : (((((/* implicit */_Bool) arr_16 [i_3] [i_3] [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (61440U))))))));
                        }
                    }
                } 
            } 
        } 
    }
    for (short i_8 = 3; i_8 < 19; i_8 += 2) 
    {
        var_18 = ((/* implicit */long long int) ((((/* implicit */int) ((unsigned short) max((((/* implicit */long long int) (unsigned short)65528)), (-553613503496228744LL))))) | (((/* implicit */int) max((var_4), (((/* implicit */unsigned short) arr_7 [i_8] [i_8])))))));
        arr_31 [i_8 + 4] = ((/* implicit */short) min((((/* implicit */unsigned int) arr_1 [i_8 - 3])), (((((/* implicit */_Bool) arr_24 [i_8 + 1] [i_8 + 2] [i_8] [i_8] [i_8] [i_8 + 1] [i_8 + 1])) ? (arr_6 [i_8]) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) (short)-3495)), ((unsigned short)42010)))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_9 = 0; i_9 < 23; i_9 += 3) 
        {
            var_19 = ((short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_8] [i_9]))) == (arr_6 [i_8])));
            /* LoopSeq 1 */
            for (unsigned long long int i_10 = 4; i_10 < 21; i_10 += 1) 
            {
                var_20 = ((((/* implicit */unsigned int) ((/* implicit */int) arr_28 [i_8 - 1]))) > (((((/* implicit */_Bool) var_7)) ? (arr_16 [22LL] [22LL] [i_10 + 2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))));
                /* LoopSeq 2 */
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    var_21 = ((/* implicit */signed char) 8555360721051305726LL);
                    var_22 = var_1;
                }
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    var_23 = ((/* implicit */int) min((var_23), ((-(((/* implicit */int) arr_32 [i_8 - 1] [i_10 - 1]))))));
                    var_24 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [i_8 - 1] [i_12] [i_10] [i_10 + 1] [i_12]))));
                    var_25 -= ((/* implicit */short) var_7);
                    var_26 = ((/* implicit */long long int) var_2);
                    arr_44 [i_8] [i_8] [i_8 + 4] [i_12] = ((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) arr_40 [i_8] [i_8] [i_8] [i_8 + 2] [i_10 - 4])) : (((/* implicit */int) (_Bool)0))));
                }
            }
            var_27 = ((signed char) arr_6 [i_9]);
            var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) var_7))));
            /* LoopNest 2 */
            for (signed char i_13 = 0; i_13 < 23; i_13 += 1) 
            {
                for (unsigned short i_14 = 1; i_14 < 22; i_14 += 2) 
                {
                    {
                        arr_53 [i_8] [i_9] [i_8] [i_14] [i_14] = ((/* implicit */signed char) ((unsigned long long int) arr_25 [i_14 + 1] [i_8 + 3] [i_13]));
                        var_29 = ((/* implicit */signed char) var_0);
                    }
                } 
            } 
        }
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned short i_15 = 0; i_15 < 23; i_15 += 4) 
        {
            var_30 = ((/* implicit */_Bool) 2523810162U);
            var_31 = ((unsigned int) arr_52 [i_8] [i_15] [i_15] [i_8] [i_8 - 1]);
            var_32 = ((/* implicit */short) min((var_32), (((/* implicit */short) (+(arr_15 [i_8] [i_8 - 3] [i_8]))))));
            var_33 = ((/* implicit */unsigned short) arr_37 [i_15] [i_8] [i_8 - 2] [i_8] [i_8] [i_8 + 4]);
        }
        for (unsigned int i_16 = 0; i_16 < 23; i_16 += 3) 
        {
            var_34 = ((/* implicit */_Bool) var_3);
            var_35 -= ((/* implicit */unsigned int) ((unsigned short) max((arr_42 [i_8 + 3] [i_8 - 3] [(_Bool)0] [(_Bool)0] [i_8 - 2]), (arr_42 [i_8 + 4] [i_8 + 4] [2] [2] [i_8 + 3]))));
        }
        for (_Bool i_17 = 1; i_17 < 1; i_17 += 1) 
        {
            var_36 = ((/* implicit */unsigned long long int) max((var_36), (((/* implicit */unsigned long long int) (~(max((arr_52 [i_8] [(short)2] [i_17 - 1] [i_17] [(short)2]), (min((((/* implicit */unsigned int) -29)), (4140737818U))))))))));
            var_37 ^= ((/* implicit */long long int) max((((((/* implicit */_Bool) arr_9 [i_8 + 1])) ? (arr_16 [(_Bool)1] [i_8 - 2] [(_Bool)1]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_9 [i_8])) : (((/* implicit */int) var_8))))))), (((/* implicit */unsigned int) max((arr_39 [i_8 + 3] [i_8] [i_17] [i_17 - 1]), (arr_39 [i_8 + 4] [i_17] [i_17] [i_17 - 1]))))));
            var_38 += ((/* implicit */long long int) ((short) ((((/* implicit */int) arr_51 [0LL] [i_17] [i_17 - 1] [i_17])) ^ (((/* implicit */int) (signed char)26)))));
            var_39 = ((/* implicit */signed char) min((4140737830U), (((/* implicit */unsigned int) (unsigned short)41981))));
            var_40 += max((((arr_14 [22U]) - (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_8]))))), (max((arr_14 [12U]), (((/* implicit */long long int) ((20U) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)41971)))))))));
        }
    }
    for (long long int i_18 = 2; i_18 < 8; i_18 += 2) 
    {
        var_41 = ((/* implicit */unsigned int) arr_19 [i_18] [i_18] [i_18 + 2] [i_18] [i_18]);
        arr_66 [i_18] &= ((/* implicit */long long int) ((((unsigned int) var_3)) <= (((/* implicit */unsigned int) (+(max((20), (((/* implicit */int) var_8)))))))));
        var_42 = var_6;
    }
    for (int i_19 = 0; i_19 < 16; i_19 += 2) 
    {
        var_43 = min((max((max((((/* implicit */unsigned int) var_4)), (var_1))), ((~(arr_55 [i_19] [i_19]))))), (((((/* implicit */_Bool) (signed char)16)) ? (47419855U) : (max((2470128596U), (1065353216U))))));
        arr_69 [i_19] = ((/* implicit */long long int) arr_61 [i_19] [i_19]);
    }
}
