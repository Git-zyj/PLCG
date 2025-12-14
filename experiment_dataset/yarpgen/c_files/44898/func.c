/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44898
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44898 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44898
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        /* LoopSeq 3 */
        for (short i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            arr_5 [i_1] [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_1]))));
            var_11 = ((/* implicit */short) ((arr_0 [i_0]) >= (arr_0 [i_1])));
            arr_6 [6U] = (!(((/* implicit */_Bool) 3917465020U)));
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_12 = ((/* implicit */short) max((var_12), (((/* implicit */short) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_0] [i_2]))))))))));
            /* LoopSeq 1 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                var_13 = ((/* implicit */unsigned int) var_9);
                var_14 = ((/* implicit */short) arr_9 [i_2] [i_2] [i_2]);
            }
        }
        for (short i_4 = 2; i_4 < 18; i_4 += 2) 
        {
            /* LoopNest 3 */
            for (unsigned int i_5 = 4; i_5 < 17; i_5 += 4) 
            {
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    for (short i_7 = 4; i_7 < 18; i_7 += 1) 
                    {
                        {
                            var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_5] [i_5 - 2] [i_5 + 1] [i_5 - 1] [i_6])) ? (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) : (var_5)));
                            var_16 = (((~(((/* implicit */int) var_1)))) != (((/* implicit */int) arr_20 [i_5 + 1] [i_5 + 2] [i_4 + 2] [i_4 - 2])));
                            var_17 = ((/* implicit */short) ((((/* implicit */_Bool) (+(arr_13 [i_5 - 4])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_5 - 2] [i_5 - 1] [i_5 - 4] [i_5]))) : (((var_7) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (arr_18 [18U] [i_0] [i_0] [i_0] [i_0] [i_0])))));
                        }
                    } 
                } 
            } 
            var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) arr_13 [i_0]))));
            var_19 = ((/* implicit */unsigned int) (-(((arr_9 [i_0] [i_4] [i_4]) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_1))))));
        }
        arr_22 [i_0] = ((/* implicit */unsigned int) var_7);
    }
    for (unsigned int i_8 = 1; i_8 < 15; i_8 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (short i_9 = 2; i_9 < 16; i_9 += 1) 
        {
            for (unsigned int i_10 = 0; i_10 < 17; i_10 += 4) 
            {
                {
                    var_20 *= ((/* implicit */unsigned int) min(((+(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_9 - 2] [i_9 - 2] [i_9 + 1]))) >= ((-(3004170863U))))))));
                    var_21 ^= ((/* implicit */short) min((max(((+(2843930721U))), (((((/* implicit */_Bool) var_6)) ? (arr_21 [(short)0] [i_9] [i_10] [i_9] [i_10]) : (var_5))))), (((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1)))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (short i_11 = 0; i_11 < 17; i_11 += 3) 
        {
            for (short i_12 = 0; i_12 < 17; i_12 += 3) 
            {
                {
                    arr_37 [i_11] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_9 [i_8 + 1] [i_8 + 1] [i_11]))))) ? (((/* implicit */int) min((arr_9 [i_8] [i_8] [i_11]), (arr_9 [i_8] [i_8 + 2] [i_11])))) : (((/* implicit */int) arr_9 [i_8] [i_8] [i_11]))));
                    var_22 -= (+(((((/* implicit */_Bool) arr_31 [i_8 + 1])) ? (arr_31 [i_8 + 1]) : (arr_31 [i_8 + 1]))));
                }
            } 
        } 
    }
    for (unsigned int i_13 = 1; i_13 < 15; i_13 += 2) /* same iter space */
    {
        arr_41 [i_13 + 2] = ((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_13 + 2] [i_13 + 1])) || (((/* implicit */_Bool) min((arr_35 [2U] [i_13 - 1] [i_13 + 1]), (arr_35 [(_Bool)1] [i_13 + 2] [i_13 - 1]))))));
        var_23 -= ((/* implicit */_Bool) min((((((/* implicit */_Bool) (+(arr_26 [i_13])))) ? (max((((/* implicit */unsigned int) var_1)), (arr_24 [(_Bool)1]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_28 [(_Bool)0] [i_13 + 1]))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_3) ? (((/* implicit */int) arr_38 [i_13])) : (((/* implicit */int) arr_36 [i_13 + 1] [i_13 + 1] [i_13]))))) ? ((~(((/* implicit */int) var_0)))) : (((/* implicit */int) ((_Bool) arr_10 [i_13] [i_13] [i_13 + 2] [i_13]))))))));
        arr_42 [i_13] = ((/* implicit */_Bool) max((1073479680U), (((/* implicit */unsigned int) (short)-6108))));
        var_24 = ((/* implicit */short) (-(max((arr_21 [i_13 - 1] [i_13 + 2] [i_13] [i_13 - 1] [(_Bool)1]), (arr_21 [i_13] [i_13] [i_13 + 2] [i_13 + 2] [(short)8])))));
    }
    /* vectorizable */
    for (unsigned int i_14 = 1; i_14 < 15; i_14 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned int i_15 = 0; i_15 < 17; i_15 += 2) 
        {
            for (short i_16 = 0; i_16 < 17; i_16 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (short i_17 = 1; i_17 < 16; i_17 += 2) 
                    {
                        var_25 = ((((/* implicit */int) arr_15 [i_14 + 1] [i_15] [i_16])) != (((/* implicit */int) arr_15 [i_14 - 1] [i_15] [i_17 - 1])));
                        arr_53 [(_Bool)1] [(_Bool)1] [i_16] [i_16] [i_16] [(_Bool)1] = ((/* implicit */_Bool) (~(arr_39 [i_14 + 1])));
                        arr_54 [(_Bool)1] [i_16] [i_16] [i_17 - 1] = (+((-(var_10))));
                        var_26 = ((/* implicit */short) (+(((/* implicit */int) arr_36 [i_14 + 1] [i_14 + 1] [i_17 - 1]))));
                    }
                    var_27 = arr_4 [i_14 + 1] [i_14 - 1] [i_14 - 1];
                    var_28 = ((/* implicit */unsigned int) max((var_28), (((((/* implicit */_Bool) arr_51 [(short)2] [i_14 + 2] [i_16] [i_16])) ? (((unsigned int) (_Bool)1)) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))));
                }
            } 
        } 
        arr_55 [i_14 - 1] [i_14] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_46 [i_14 + 2])) >> (((/* implicit */int) arr_28 [10U] [10U]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_35 [(short)0] [(short)0] [i_14]))) : (arr_11 [i_14 + 2])));
        var_29 -= ((((/* implicit */_Bool) arr_19 [i_14 + 1] [0U] [i_14 - 1] [(short)10])) ? (arr_19 [i_14] [i_14] [i_14 + 1] [16U]) : (arr_19 [i_14 + 2] [i_14] [i_14 - 1] [(_Bool)1]));
    }
    /* LoopSeq 2 */
    for (unsigned int i_18 = 0; i_18 < 14; i_18 += 2) /* same iter space */
    {
        var_30 &= min((((/* implicit */unsigned int) arr_58 [i_18])), (((((/* implicit */unsigned int) ((/* implicit */int) (short)-14635))) % (264303449U))));
        var_31 = ((/* implicit */_Bool) (-(((/* implicit */int) min((arr_10 [i_18] [i_18] [i_18] [i_18]), (arr_10 [i_18] [18U] [18U] [i_18]))))));
    }
    for (unsigned int i_19 = 0; i_19 < 14; i_19 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        for (short i_20 = 3; i_20 < 13; i_20 += 4) 
        {
            /* LoopNest 2 */
            for (short i_21 = 1; i_21 < 10; i_21 += 1) 
            {
                for (_Bool i_22 = 0; i_22 < 0; i_22 += 1) 
                {
                    {
                        var_32 |= ((/* implicit */unsigned int) var_6);
                        var_33 -= arr_14 [i_19] [i_20] [i_20] [i_22];
                    }
                } 
            } 
            /* LoopNest 3 */
            for (short i_23 = 1; i_23 < 13; i_23 += 4) 
            {
                for (_Bool i_24 = 0; i_24 < 0; i_24 += 1) 
                {
                    for (unsigned int i_25 = 0; i_25 < 14; i_25 += 3) 
                    {
                        {
                            var_34 &= ((/* implicit */_Bool) min((arr_59 [i_23] [i_23]), (min((2843930721U), (((/* implicit */unsigned int) (_Bool)1))))));
                            var_35 |= ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_45 [i_20 - 1] [i_23 - 1]))))) ? (((((/* implicit */int) arr_69 [i_24 + 1] [i_20] [i_24 + 1] [i_23 - 1])) - (((/* implicit */int) arr_69 [i_24 + 1] [i_24 + 1] [i_23] [i_23 - 1])))) : ((((!(((/* implicit */_Bool) var_6)))) ? (((/* implicit */int) ((_Bool) var_9))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))))));
                        }
                    } 
                } 
            } 
            arr_78 [i_19] [i_20] [i_19] = ((/* implicit */short) (~(((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_15 [i_20] [i_20] [i_20 - 3])), (var_10)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_51 [i_19] [i_19] [i_19] [i_20 + 1]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_61 [(_Bool)1])))))))));
        }
        var_36 += (-(min((((/* implicit */unsigned int) arr_8 [i_19])), (min((arr_19 [i_19] [i_19] [i_19] [i_19]), (arr_14 [i_19] [i_19] [i_19] [i_19]))))));
        var_37 = ((/* implicit */_Bool) min((var_37), (((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_51 [i_19] [i_19] [i_19] [i_19])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_3)))) : ((+(1451036572U))))))))));
        arr_79 [i_19] [i_19] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) min((arr_25 [i_19] [i_19]), (((/* implicit */unsigned int) arr_10 [i_19] [i_19] [i_19] [i_19]))))) ? (max((arr_70 [i_19] [i_19] [i_19] [i_19]), (((/* implicit */unsigned int) arr_52 [i_19] [i_19] [i_19] [i_19])))) : (arr_59 [i_19] [i_19])))));
        var_38 += ((/* implicit */short) min((315726485U), (((/* implicit */unsigned int) (short)-19085))));
    }
}
