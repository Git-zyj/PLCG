/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190336
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190336 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190336
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
    var_16 = (+(min((var_4), (((unsigned int) 2630819278U)))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_0 = 3; i_0 < 19; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 3; i_1 < 19; i_1 += 4) 
        {
            for (unsigned int i_2 = 3; i_2 < 19; i_2 += 1) 
            {
                {
                    arr_7 [i_1 - 3] [12U] [i_2] [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_2 - 2])) ? (3820882615U) : (arr_1 [i_0] [i_0])))) ? (((unsigned int) 3972401550U)) : ((-(arr_3 [i_1] [i_1 - 1]))));
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 1; i_3 < 19; i_3 += 3) 
                    {
                        arr_10 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 2635652708U))));
                        var_17 += ((/* implicit */unsigned int) ((3918291902U) <= (1911721800U)));
                    }
                    for (unsigned int i_4 = 0; i_4 < 20; i_4 += 4) 
                    {
                        arr_14 [i_0] [i_1] [i_2] [i_0] = ((((/* implicit */_Bool) ((unsigned int) arr_8 [i_0 - 2] [i_0 - 2] [i_1] [i_4]))) ? (2789173669U) : (((unsigned int) arr_5 [i_0] [i_1 - 3] [i_1])));
                        var_18 = (+(arr_8 [i_0] [i_0] [i_1] [1U]));
                        var_19 = 1911721800U;
                        var_20 = arr_0 [8U];
                        var_21 = ((/* implicit */unsigned int) max((var_21), (var_9)));
                    }
                }
            } 
        } 
        var_22 &= 3159959850U;
    }
    /* vectorizable */
    for (unsigned int i_5 = 3; i_5 < 20; i_5 += 3) 
    {
        var_23 = ((unsigned int) arr_15 [i_5] [i_5]);
        /* LoopSeq 2 */
        for (unsigned int i_6 = 3; i_6 < 20; i_6 += 4) 
        {
            var_24 = ((((/* implicit */_Bool) 445567766U)) ? (2U) : (0U));
            arr_19 [i_5] = ((((/* implicit */_Bool) arr_16 [i_6 - 3])) ? (arr_16 [i_5 - 3]) : (arr_15 [i_5] [i_5]));
            arr_20 [i_5] = ((((/* implicit */_Bool) var_1)) ? (var_14) : (arr_15 [i_6 - 1] [i_6]));
            /* LoopSeq 1 */
            for (unsigned int i_7 = 0; i_7 < 22; i_7 += 1) 
            {
                var_25 = arr_23 [i_5] [i_6] [12U];
                /* LoopNest 2 */
                for (unsigned int i_8 = 0; i_8 < 22; i_8 += 3) 
                {
                    for (unsigned int i_9 = 2; i_9 < 20; i_9 += 3) 
                    {
                        {
                            var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_31 [i_6 + 1] [i_8] [i_5 - 1] [i_8] [i_5 - 1])) || (((/* implicit */_Bool) ((unsigned int) arr_24 [i_5] [i_6])))));
                            arr_32 [0U] [i_8] [0U] &= 1401618927U;
                            var_27 &= ((((/* implicit */_Bool) arr_21 [i_5 + 1] [i_5 - 3])) ? (arr_21 [i_9 + 2] [i_9 + 2]) : (arr_21 [i_5 - 3] [i_5 + 2]));
                            var_28 = ((/* implicit */unsigned int) min((var_28), (((arr_17 [i_5 - 1] [i_6 - 1] [i_9 + 1]) - (((unsigned int) var_15))))));
                        }
                    } 
                } 
                var_29 = ((/* implicit */unsigned int) ((arr_15 [i_7] [i_7]) <= (arr_15 [i_5 - 3] [i_6 - 3])));
                var_30 = ((arr_26 [14U] [14U] [i_6] [i_7]) | (arr_26 [14U] [14U] [i_6 + 2] [i_7]));
            }
            arr_33 [i_5] [i_5] = ((/* implicit */unsigned int) ((((arr_30 [i_5] [i_5] [i_5] [i_6] [i_6]) / (arr_26 [4U] [4U] [i_6] [i_6]))) < (((arr_26 [4U] [i_6] [4U] [i_6]) - (1135007443U)))));
        }
        for (unsigned int i_10 = 0; i_10 < 22; i_10 += 1) 
        {
            var_31 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_26 [i_10] [i_5 + 1] [i_5 - 2] [i_10]))));
            arr_37 [i_5] [i_10] [13U] = ((((/* implicit */_Bool) arr_17 [i_5] [i_10] [i_5 - 2])) ? (arr_16 [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_26 [i_10] [i_10] [i_10] [i_10])))))));
            var_32 ^= ((((/* implicit */_Bool) 4294967295U)) ? (((((/* implicit */_Bool) 4294967288U)) ? (arr_15 [i_5] [i_10]) : (arr_16 [i_5]))) : (arr_15 [i_5 + 2] [i_10]));
            var_33 = ((/* implicit */unsigned int) min((var_33), (((((arr_35 [6U]) % (1965622571U))) ^ (3972401537U)))));
            arr_38 [i_10] = arr_17 [i_10] [i_5 - 3] [i_10];
        }
        var_34 = 3548376701U;
    }
    /* vectorizable */
    for (unsigned int i_11 = 2; i_11 < 13; i_11 += 1) 
    {
        var_35 = ((/* implicit */unsigned int) ((((var_7) >> (((var_4) - (1697516922U))))) >= (((arr_40 [i_11]) * (1874097777U)))));
        var_36 += ((((/* implicit */_Bool) arr_12 [14U] [i_11 - 1] [i_11 - 2])) ? (arr_40 [i_11 + 1]) : (((arr_39 [i_11]) | (2620982207U))));
    }
    var_37 = ((var_1) + (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) var_4)) ? (3339791139U) : (1135007445U))) != (var_14))))));
    var_38 = min((var_11), (max((var_15), (((((/* implicit */_Bool) 0U)) ? (262128U) : (var_1))))));
    var_39 *= var_12;
}
