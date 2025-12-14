/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35480
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35480 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35480
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
    var_14 = ((/* implicit */short) ((((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))))) + (max((((unsigned int) var_10)), (((((/* implicit */_Bool) var_4)) ? (var_4) : (524160U)))))));
    var_15 ^= ((/* implicit */short) var_7);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 4; i_0 < 17; i_0 += 2) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned int i_1 = 1; i_1 < 17; i_1 += 1) /* same iter space */
        {
            var_16 = ((/* implicit */unsigned short) (short)-32761);
            /* LoopSeq 1 */
            for (unsigned short i_2 = 1; i_2 < 17; i_2 += 4) 
            {
                var_17 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_0 [i_0] [i_2]))));
                var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1957553844U)) ? (arr_3 [i_0 - 3] [i_2 + 1]) : (arr_3 [i_0 - 1] [i_2 - 1])));
                var_19 = ((/* implicit */unsigned int) arr_0 [i_1] [i_2]);
                var_20 = ((/* implicit */unsigned short) ((unsigned int) arr_6 [i_2 + 1] [i_0 - 2]));
            }
            var_21 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_0 [15U] [i_1 - 1]))));
        }
        for (unsigned int i_3 = 1; i_3 < 17; i_3 += 1) /* same iter space */
        {
            /* LoopSeq 4 */
            for (unsigned short i_4 = 1; i_4 < 14; i_4 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned short i_5 = 0; i_5 < 18; i_5 += 1) 
                {
                    for (unsigned int i_6 = 1; i_6 < 15; i_6 += 3) 
                    {
                        {
                            arr_17 [i_0] [i_3 + 1] [i_0] [i_3 + 1] [i_3] = ((/* implicit */short) (!(((((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_6] [i_6 + 3] [i_3] [i_6 - 1] [i_6]))) == (11U)))));
                            var_22 *= ((/* implicit */short) max(((~(1957553830U))), (arr_8 [i_6 - 1])));
                        }
                    } 
                } 
                var_23 = ((/* implicit */short) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (short)-30770)) : (((/* implicit */int) ((short) 3577001768U)))));
                arr_18 [i_3] [i_3] [10U] = ((/* implicit */unsigned int) arr_4 [i_0] [i_0 - 4]);
                /* LoopNest 2 */
                for (unsigned short i_7 = 1; i_7 < 17; i_7 += 1) 
                {
                    for (short i_8 = 2; i_8 < 15; i_8 += 2) 
                    {
                        {
                            arr_26 [i_3] [i_3 - 1] [i_3] [i_3] [i_3 - 1] = ((((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_3 - 1] [i_3] [i_7 + 1] [i_3] [(short)1]))) - (((((/* implicit */_Bool) (unsigned short)41381)) ? (1732332678U) : (6U))));
                            var_24 ^= ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) (short)-30770)) ? (2337413451U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)30749))))))) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) (((~(arr_19 [i_0] [i_0 + 1]))) < (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))));
                            var_25 = ((unsigned short) ((((/* implicit */_Bool) arr_0 [i_0 - 3] [i_3 + 1])) ? (((/* implicit */int) arr_12 [i_3] [i_3] [i_4 + 4] [i_3] [i_4 + 4])) : (((/* implicit */int) arr_0 [i_0 + 1] [i_3 + 1]))));
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (unsigned short i_9 = 1; i_9 < 14; i_9 += 1) /* same iter space */
            {
                arr_29 [i_3] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_28 [i_3] [i_3 + 1] [i_9] [i_3]))) >= (((((/* implicit */_Bool) 2617423339U)) ? (arr_8 [i_0]) : (var_0)))));
                var_26 = ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_0] [i_3] [i_0] [(unsigned short)7] [(short)4]))) : (arr_3 [(short)16] [i_3]))) << (((((((/* implicit */_Bool) arr_7 [i_3] [11U] [i_9])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_11))) - (51773U))));
            }
            for (unsigned int i_10 = 2; i_10 < 17; i_10 += 4) 
            {
                var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) (!(((/* implicit */_Bool) var_8)))))));
                arr_32 [i_0] [i_3] [i_3] = ((/* implicit */unsigned int) var_9);
                var_28 = ((/* implicit */unsigned int) (unsigned short)38724);
                var_29 |= ((/* implicit */short) ((((/* implicit */_Bool) arr_15 [i_0] [i_3] [i_0] [i_0])) ? (((((/* implicit */_Bool) arr_14 [i_0 - 2] [i_0 - 2] [i_10] [i_10] [i_10 - 1])) ? (arr_3 [i_3] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_0] [i_0] [i_3 - 1] [i_10] [i_10]))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))));
            }
            /* vectorizable */
            for (unsigned int i_11 = 1; i_11 < 17; i_11 += 3) 
            {
                var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_3] [i_0]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_3 - 1] [i_11] [i_3] [i_3 - 1] [i_0 - 1]))) : (var_0)));
                /* LoopNest 2 */
                for (unsigned short i_12 = 3; i_12 < 16; i_12 += 4) 
                {
                    for (unsigned short i_13 = 2; i_13 < 16; i_13 += 1) 
                    {
                        {
                            var_31 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_33 [(short)4] [(short)4] [i_11 + 1] [i_12 + 2]))) + (arr_8 [i_0 - 2])));
                            arr_42 [i_0] [i_3] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [6U] [i_3] [i_0 - 3])) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_0] [15U] [i_3] [i_12] [i_13]))))))));
                            var_32 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_11 + 1] [i_13 - 1])) ? (((/* implicit */int) arr_6 [i_11 - 1] [i_13 - 1])) : (((/* implicit */int) arr_6 [i_11 - 1] [i_13 - 2]))));
                            var_33 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_28 [i_3] [i_3] [i_3] [i_12 - 2])) ? (((/* implicit */int) arr_28 [i_3] [14U] [14U] [14U])) : (((/* implicit */int) arr_28 [i_3] [i_3] [i_12 + 2] [(short)9]))));
                            var_34 = ((((/* implicit */_Bool) 1844513602U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)41375))) : (627947874U));
                        }
                    } 
                } 
            }
            arr_43 [i_3] [i_3] [i_3] = var_8;
        }
        for (unsigned int i_14 = 1; i_14 < 17; i_14 += 1) /* same iter space */
        {
            arr_46 [i_0] |= ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_14 + 1])))))));
            var_35 = ((/* implicit */short) ((549701979U) > (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_41 [i_0] [i_14] [i_14] [i_14 - 1] [i_14 - 1]))))))));
            var_36 = var_6;
            arr_47 [i_14] = ((max((arr_27 [i_14]), ((-(arr_45 [i_0] [i_14 - 1] [(short)8]))))) - (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_39 [i_0] [i_0] [i_14 + 1] [i_14 + 1] [i_14])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-19431))) : (arr_22 [i_0] [13U] [i_0])))) ? (((((/* implicit */_Bool) arr_38 [i_14] [i_0] [i_14] [i_14] [i_14])) ? (var_10) : (arr_40 [i_0] [i_0] [i_0 - 2] [i_14] [i_14]))) : ((-(var_10))))));
        }
        var_37 ^= ((/* implicit */unsigned int) max(((-(((/* implicit */int) ((unsigned short) 1831936925U))))), (((/* implicit */int) arr_28 [i_0] [(short)2] [i_0] [i_0]))));
        arr_48 [i_0] [i_0] = ((/* implicit */short) (~((+(((/* implicit */int) arr_12 [i_0] [i_0] [i_0 + 1] [i_0] [i_0 - 3]))))));
    }
    var_38 = var_10;
}
