/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234569
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234569 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234569
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
    for (unsigned char i_0 = 4; i_0 < 22; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-1))) : (3247476947931040806LL))) + (9223372036854775807LL))) << (((((((/* implicit */int) arr_3 [i_0 - 4] [i_0 + 1] [i_0 - 3])) + (29623))) - (15)))));
                arr_6 [i_1] = var_14;
                arr_7 [i_0] |= ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_1]))))));
                arr_8 [i_0 + 2] [i_1] [i_1] = ((/* implicit */short) (+(((((/* implicit */int) var_6)) - (((((/* implicit */int) arr_5 [i_0] [i_0] [i_1])) % (((/* implicit */int) arr_4 [i_0] [i_1] [i_1]))))))));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 25; i_2 += 4) 
                {
                    for (short i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        {
                            var_18 += ((/* implicit */short) max((((/* implicit */int) ((short) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_2 [i_1] [i_0])))))), (((((/* implicit */int) arr_11 [i_0 + 3])) << (((((((/* implicit */_Bool) arr_2 [(short)24] [(short)24])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_3 [i_0 + 3] [i_2] [i_0 + 3])))) - (19340)))))));
                            /* LoopSeq 2 */
                            /* vectorizable */
                            for (short i_4 = 1; i_4 < 24; i_4 += 1) 
                            {
                                arr_16 [i_2] [i_4] [i_4 + 1] [i_4] [i_4] [i_1] = ((/* implicit */short) (+(((/* implicit */int) arr_5 [i_2] [i_4] [i_0 + 3]))));
                                var_19 = ((/* implicit */short) (+(((/* implicit */int) var_5))));
                                arr_17 [i_0] [i_1] [i_2] [i_2] [i_2] [i_4] [i_4] = ((/* implicit */long long int) (~(((/* implicit */int) arr_5 [i_2] [i_2] [i_0 + 1]))));
                                arr_18 [i_0] [i_1] [i_0] [i_2] [(unsigned char)9] [i_4] [i_4] = ((/* implicit */short) (!((!(((/* implicit */_Bool) var_8))))));
                            }
                            /* vectorizable */
                            for (long long int i_5 = 3; i_5 < 24; i_5 += 1) 
                            {
                                arr_22 [i_0] [i_0] [(short)1] [i_0] [i_0] = arr_19 [(short)11] [(short)11] [i_2];
                                var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) var_0))));
                            }
                            arr_23 [i_1] [(short)0] [i_1] [(unsigned char)13] [i_1] = ((/* implicit */unsigned char) ((-1LL) - (4893806839505901824LL)));
                            var_21 += ((/* implicit */long long int) arr_10 [i_0 - 3] [i_0] [i_0] [i_0 - 3]);
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_6 = 3; i_6 < 20; i_6 += 1) 
    {
        for (unsigned char i_7 = 3; i_7 < 20; i_7 += 1) 
        {
            {
                arr_30 [i_6] [i_7] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_6] [i_6] [i_7] [i_7 - 3] [i_7])) ? ((-(((/* implicit */int) (short)0)))) : (((/* implicit */int) (unsigned char)240)))))));
                arr_31 [i_6] [i_6] [i_7] = ((/* implicit */short) arr_9 [i_7] [i_7] [i_6] [i_6]);
                var_22 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((arr_4 [i_6] [i_7] [i_6]), (var_4)))))))) % (((((((/* implicit */_Bool) -3150457507015761032LL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)9))) : ((-9223372036854775807LL - 1LL)))) ^ (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_6] [i_7])) || (((/* implicit */_Bool) var_15))))))))));
            }
        } 
    } 
    var_23 = ((/* implicit */short) min((var_23), (var_11)));
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_8 = 0; i_8 < 20; i_8 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned char i_9 = 0; i_9 < 20; i_9 += 3) 
        {
            for (unsigned char i_10 = 0; i_10 < 20; i_10 += 3) 
            {
                {
                    arr_38 [i_9] [i_9] [i_9] [i_10] = var_15;
                    arr_39 [i_9] [i_9] [i_10] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [i_8] [i_9] [i_10]))))) ? (((/* implicit */int) arr_29 [i_8] [i_8] [i_9])) : (((/* implicit */int) arr_0 [i_8] [i_8]))));
                    var_24 -= ((/* implicit */short) (+(((((/* implicit */_Bool) arr_4 [i_8] [i_8] [i_8])) ? (((/* implicit */int) arr_9 [i_8] [i_8] [i_9] [i_10])) : (((/* implicit */int) var_0))))));
                    arr_40 [i_8] [i_9] [i_10] = ((/* implicit */long long int) (-(((/* implicit */int) arr_19 [i_10] [i_10] [i_10]))));
                }
            } 
        } 
        var_25 -= ((/* implicit */long long int) (~(((/* implicit */int) ((short) arr_27 [i_8] [(short)20])))));
        var_26 -= ((/* implicit */short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_1)) : (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_4))))));
    }
    for (long long int i_11 = 0; i_11 < 11; i_11 += 2) 
    {
        arr_43 [i_11] = arr_24 [i_11];
        arr_44 [i_11] [i_11] = ((/* implicit */short) ((((-1321478475136657362LL) + (((/* implicit */long long int) ((/* implicit */int) (short)-25862))))) != (((/* implicit */long long int) (~(((/* implicit */int) arr_37 [i_11] [i_11] [i_11] [i_11])))))));
        /* LoopSeq 1 */
        for (unsigned char i_12 = 3; i_12 < 8; i_12 += 2) 
        {
            arr_49 [i_12] = ((/* implicit */short) ((((/* implicit */int) var_14)) >> (((long long int) arr_45 [i_12 - 2] [i_11]))));
            arr_50 [i_11] = min((var_6), (((/* implicit */short) (!(((/* implicit */_Bool) (short)-25009))))));
        }
    }
    for (unsigned char i_13 = 2; i_13 < 20; i_13 += 1) 
    {
        /* LoopNest 3 */
        for (short i_14 = 2; i_14 < 18; i_14 += 4) 
        {
            for (short i_15 = 0; i_15 < 22; i_15 += 3) 
            {
                for (short i_16 = 0; i_16 < 22; i_16 += 2) 
                {
                    {
                        var_27 = ((/* implicit */short) (-(min((((/* implicit */long long int) (short)-1)), (5691989763959045119LL)))));
                        var_28 = ((/* implicit */short) (+(max((((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) arr_19 [i_13] [i_13] [i_13]))))), (((((/* implicit */_Bool) var_3)) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [3LL] [i_15] [i_16])))))))));
                    }
                } 
            } 
        } 
        arr_62 [i_13] [i_13] = ((/* implicit */unsigned char) (((!(((((/* implicit */_Bool) var_16)) || (((/* implicit */_Bool) var_10)))))) ? ((+(((/* implicit */int) (!(((/* implicit */_Bool) arr_61 [i_13] [i_13 - 1] [i_13 - 1]))))))) : (((((/* implicit */_Bool) arr_4 [i_13 - 1] [i_13 - 2] [i_13])) ? (((/* implicit */int) arr_4 [i_13 + 1] [i_13 + 1] [i_13])) : (((/* implicit */int) var_4))))));
        arr_63 [i_13] |= ((/* implicit */short) (((~((~(((/* implicit */int) (unsigned char)39)))))) ^ (((((/* implicit */int) max((var_12), (arr_55 [i_13] [i_13 + 1] [i_13] [i_13 + 2])))) << ((((~(((/* implicit */int) arr_3 [i_13] [i_13] [i_13])))) - (29597)))))));
    }
}
