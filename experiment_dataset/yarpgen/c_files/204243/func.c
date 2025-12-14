/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204243
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204243 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204243
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
    var_13 = (-(var_11));
    var_14 = ((/* implicit */unsigned int) ((unsigned long long int) min((((((/* implicit */_Bool) 1073741823ULL)) ? (1681188528860096991ULL) : (((/* implicit */unsigned long long int) 2689679860U)))), (var_12))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 2; i_0 < 8; i_0 += 3) 
    {
        var_15 = ((/* implicit */unsigned int) ((unsigned long long int) ((arr_0 [i_0 - 1]) * (1605287436U))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            var_16 = ((unsigned int) arr_0 [i_0 + 2]);
            var_17 = ((/* implicit */unsigned int) ((unsigned long long int) arr_2 [i_0 + 2] [i_0 - 2] [i_0 + 1]));
        }
        /* vectorizable */
        for (unsigned long long int i_2 = 2; i_2 < 9; i_2 += 4) 
        {
            arr_9 [i_0 - 2] = ((4194300U) >> (((1644506893U) - (1644506863U))));
            var_18 = ((/* implicit */unsigned long long int) min((var_18), (((((/* implicit */_Bool) ((arr_6 [i_0] [i_2] [i_0 + 1]) * (var_3)))) ? (((/* implicit */unsigned long long int) 1644506899U)) : (var_3)))));
        }
        var_19 *= ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_5 [i_0 + 2])) ? (arr_4 [i_0 + 2] [0U]) : (arr_5 [i_0 + 1]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_0 + 1] [8ULL])) && (((/* implicit */_Bool) arr_5 [i_0 - 2])))))));
        /* LoopNest 2 */
        for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 1) 
        {
            for (unsigned int i_4 = 0; i_4 < 10; i_4 += 1) 
            {
                {
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (unsigned int i_5 = 0; i_5 < 10; i_5 += 4) 
                    {
                        var_20 *= ((/* implicit */unsigned long long int) (-(arr_16 [i_0 - 2] [0U] [i_4] [i_4])));
                        var_21 = arr_7 [i_0 + 2];
                        var_22 = ((((/* implicit */unsigned long long int) var_0)) & (arr_11 [i_0] [i_0 - 1] [i_0]));
                        arr_17 [i_0] [i_0] [0ULL] [3ULL] [i_5] [i_5] = ((/* implicit */unsigned long long int) 4294967286U);
                        var_23 = ((/* implicit */unsigned int) min((var_23), ((~(var_10)))));
                    }
                    for (unsigned long long int i_6 = 2; i_6 < 6; i_6 += 4) 
                    {
                        var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? ((+(arr_8 [i_0 + 1]))) : (((/* implicit */unsigned long long int) arr_2 [i_0 + 1] [i_0 + 1] [i_6 + 1]))));
                        var_25 = ((/* implicit */unsigned int) ((((max((var_3), (arr_15 [i_6] [i_4] [i_4] [0ULL] [i_3] [2U]))) >> (((((((/* implicit */unsigned long long int) arr_0 [i_0])) + (arr_11 [8ULL] [i_3] [i_4]))) - (13716933571099989878ULL))))) * (((/* implicit */unsigned long long int) var_10))));
                    }
                    for (unsigned long long int i_7 = 0; i_7 < 10; i_7 += 2) 
                    {
                        var_26 = max((((/* implicit */unsigned long long int) var_11)), (min((5862547501722609901ULL), (((/* implicit */unsigned long long int) arr_0 [i_0 - 2])))));
                        var_27 = var_7;
                    }
                    /* vectorizable */
                    for (unsigned long long int i_8 = 0; i_8 < 10; i_8 += 4) 
                    {
                        var_28 = ((/* implicit */unsigned int) arr_22 [i_0] [3U] [i_4] [i_8]);
                        var_29 = ((/* implicit */unsigned int) (~(arr_8 [i_0 + 2])));
                        arr_27 [5ULL] [3U] [i_3] [3U] [3U] = ((((/* implicit */_Bool) arr_10 [i_8])) ? (((/* implicit */unsigned long long int) ((arr_18 [i_8] [i_4] [i_3] [i_0]) >> (((var_5) - (13409957027552462193ULL)))))) : (arr_8 [i_0 - 2]));
                    }
                    var_30 = ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) 2689679860U)))))));
                    var_31 = arr_12 [i_0 - 2] [i_3] [i_4];
                    /* LoopSeq 1 */
                    for (unsigned long long int i_9 = 0; i_9 < 10; i_9 += 4) 
                    {
                        var_32 = var_7;
                        var_33 = ((/* implicit */unsigned int) min((var_33), (min(((+(((var_8) * (arr_19 [i_9] [i_9] [8U] [i_3] [i_3] [8U]))))), (1644506916U)))));
                        var_34 = min(((~(((arr_0 [i_0]) - (var_8))))), (arr_26 [i_0] [2ULL] [i_0 + 2] [i_0]));
                    }
                }
            } 
        } 
    }
    for (unsigned long long int i_10 = 0; i_10 < 24; i_10 += 3) 
    {
        arr_34 [i_10] = min((arr_33 [6U]), (max((arr_33 [i_10]), (arr_33 [i_10]))));
        arr_35 [21ULL] = ((unsigned int) arr_31 [i_10]);
        /* LoopNest 3 */
        for (unsigned int i_11 = 0; i_11 < 24; i_11 += 1) 
        {
            for (unsigned int i_12 = 0; i_12 < 24; i_12 += 2) 
            {
                for (unsigned int i_13 = 0; i_13 < 24; i_13 += 3) 
                {
                    {
                        var_35 &= ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((var_3) >> (((arr_30 [3U]) - (8034823602034055850ULL))))))))), (((min((((/* implicit */unsigned long long int) var_8)), (var_7))) >> (((((((/* implicit */_Bool) arr_40 [21U] [i_12] [17ULL] [i_10])) ? (var_9) : (3294307216U))) - (2343761624U)))))));
                        arr_43 [12U] [i_11] [i_10] = max((((/* implicit */unsigned long long int) ((var_8) + (3573196649U)))), ((-(5335262819817861162ULL))));
                        var_36 = ((/* implicit */unsigned int) arr_37 [6U] [6U]);
                    }
                } 
            } 
        } 
    }
    for (unsigned long long int i_14 = 3; i_14 < 21; i_14 += 3) 
    {
        var_37 = var_4;
        var_38 = ((/* implicit */unsigned int) max(((~((-(arr_30 [i_14]))))), (((/* implicit */unsigned long long int) ((unsigned int) 2650460410U)))));
    }
    /* LoopSeq 1 */
    for (unsigned long long int i_15 = 0; i_15 < 11; i_15 += 3) 
    {
        var_39 &= max((((((/* implicit */_Bool) var_2)) ? (arr_37 [i_15] [i_15]) : (var_2))), (((/* implicit */unsigned long long int) 1000660080U)));
        var_40 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(var_11)))) ? (((min((var_5), (((/* implicit */unsigned long long int) 1644506893U)))) >> (min((arr_36 [12U] [7U]), (((/* implicit */unsigned long long int) 0U)))))) : (0ULL)));
        var_41 = 3573196649U;
        /* LoopNest 3 */
        for (unsigned long long int i_16 = 2; i_16 < 9; i_16 += 4) 
        {
            for (unsigned int i_17 = 1; i_17 < 10; i_17 += 2) 
            {
                for (unsigned int i_18 = 1; i_18 < 7; i_18 += 2) 
                {
                    {
                        arr_59 [10U] [i_16] [i_17] = ((unsigned long long int) max((((unsigned long long int) arr_33 [i_16])), (((/* implicit */unsigned long long int) ((unsigned int) var_5)))));
                        arr_60 [i_15] [8U] [i_15] = 855994316U;
                    }
                } 
            } 
        } 
        var_42 = ((/* implicit */unsigned long long int) ((unsigned int) max((min((arr_33 [14U]), (arr_44 [i_15] [i_15]))), (((unsigned int) var_4)))));
    }
}
