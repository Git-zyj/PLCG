/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49595
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49595 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49595
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
    var_15 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) ((unsigned int) 3582874004785018979LL))) ? (max((3582874004785018970LL), (((/* implicit */long long int) var_9)))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 1922918157U)))))))), (((/* implicit */long long int) (-((+(1393034119))))))));
    var_16 = ((/* implicit */long long int) ((((((((/* implicit */_Bool) 5459429066742331262LL)) ? (3402730413U) : (2372049139U))) & (((/* implicit */unsigned int) var_4)))) << (((((((/* implicit */_Bool) ((((/* implicit */_Bool) 2372049138U)) ? (-3582874004785018965LL) : (((/* implicit */long long int) var_4))))) ? (((/* implicit */long long int) var_11)) : (min((((/* implicit */long long int) var_7)), (1109430782795491350LL))))) - (1644158464LL)))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 2; i_0 < 9; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) ((int) arr_1 [6])))));
            var_18 |= (~(((((/* implicit */_Bool) -2237425613332866419LL)) ? (3402730418U) : (2321579014U))));
            arr_5 [i_0 - 2] [2U] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */long long int) arr_2 [i_0 + 2] [i_0])) + (((((/* implicit */_Bool) arr_4 [i_1])) ? (-1109430782795491351LL) : (((/* implicit */long long int) arr_2 [i_0 - 1] [i_0]))))));
            var_19 = ((/* implicit */int) (~(((((/* implicit */_Bool) -7791242218338828955LL)) ? (1109430782795491363LL) : (-6211388234519275514LL)))));
        }
        for (long long int i_2 = 0; i_2 < 12; i_2 += 4) 
        {
            var_20 = ((/* implicit */unsigned int) ((int) arr_1 [i_0]));
            /* LoopSeq 1 */
            for (int i_3 = 0; i_3 < 12; i_3 += 2) 
            {
                arr_12 [i_0] [i_0] [i_0] = (+(arr_1 [i_0]));
                arr_13 [i_0] [i_0] [i_2] = ((int) -1393034118);
            }
        }
        for (long long int i_4 = 0; i_4 < 12; i_4 += 4) 
        {
            var_21 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) -2237425613332866418LL)) ? (arr_8 [i_4] [i_4] [i_4]) : (arr_8 [i_4] [i_4] [i_4])));
            /* LoopSeq 3 */
            for (int i_5 = 0; i_5 < 12; i_5 += 2) 
            {
                var_22 *= ((/* implicit */unsigned int) ((arr_1 [i_4]) / (arr_9 [i_0] [i_4] [i_5] [i_0 + 3])));
                /* LoopSeq 2 */
                for (unsigned int i_6 = 0; i_6 < 12; i_6 += 4) 
                {
                    var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_16 [i_0 + 1] [8] [i_4])) ? (arr_16 [i_0 + 2] [i_4] [i_5]) : (arr_16 [i_0 - 1] [i_4] [i_5])));
                    arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((long long int) 1393034108));
                }
                for (unsigned int i_7 = 2; i_7 < 10; i_7 += 1) 
                {
                    var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_17 [i_0]) : (((/* implicit */unsigned int) arr_0 [i_0]))));
                    var_25 = ((/* implicit */int) (+(((((/* implicit */_Bool) 459981572)) ? (((/* implicit */long long int) 875279112)) : (-3582874004785018954LL)))));
                }
            }
            for (int i_8 = 0; i_8 < 12; i_8 += 4) 
            {
                var_26 = ((/* implicit */int) ((long long int) ((long long int) 3145793687U)));
                var_27 = ((/* implicit */long long int) (+(((int) 3582874004785018965LL))));
                var_28 = arr_1 [i_4];
            }
            for (int i_9 = 0; i_9 < 12; i_9 += 4) 
            {
                arr_31 [i_0] [i_0] [i_0] [1] = ((/* implicit */int) ((unsigned int) -349545099));
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 12; i_10 += 1) 
                {
                    for (int i_11 = 0; i_11 < 12; i_11 += 4) 
                    {
                        {
                            var_29 |= ((/* implicit */int) ((((/* implicit */unsigned int) arr_20 [i_0 + 1] [i_0 - 2] [i_0 + 3] [i_0])) < (arr_27 [i_0 + 2] [i_0])));
                            var_30 = ((int) ((int) 577234080));
                        }
                    } 
                } 
                var_31 |= ((/* implicit */long long int) ((unsigned int) ((int) arr_32 [i_9])));
                var_32 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_32 [i_0])) ? (((/* implicit */unsigned int) arr_0 [i_0])) : (arr_26 [i_0])))) ? (((/* implicit */unsigned int) ((int) arr_24 [i_0] [i_0 - 2]))) : (1229309447U)));
                /* LoopSeq 1 */
                for (int i_12 = 0; i_12 < 12; i_12 += 2) 
                {
                    arr_39 [i_0] [i_0] [i_0] [i_0] = ((((((/* implicit */unsigned int) 104626050)) & (arr_27 [i_4] [10LL]))) << (((((((/* implicit */_Bool) 1393034119)) ? (((/* implicit */long long int) 57060309)) : (-2775770492057085829LL))) - (57060298LL))));
                    var_33 = ((/* implicit */unsigned int) ((long long int) ((int) 2237425613332866417LL)));
                    var_34 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_12] [i_9])) ? (((/* implicit */unsigned int) 875279112)) : (arr_18 [i_12] [1] [2] [2])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 2237425613332866418LL)) ? (63992743) : (-1158510319)))) : (((long long int) 1229309440U)));
                }
            }
        }
        var_35 = ((unsigned int) ((((/* implicit */_Bool) 39016612)) ? (((/* implicit */long long int) 2285928339U)) : (arr_11 [i_0] [i_0 + 3])));
        arr_40 [i_0] [i_0] = ((/* implicit */int) (((-(arr_34 [i_0] [i_0] [i_0] [i_0] [i_0]))) > ((-(arr_34 [i_0] [i_0 - 1] [i_0] [i_0] [i_0])))));
    }
    /* vectorizable */
    for (unsigned int i_13 = 0; i_13 < 18; i_13 += 4) 
    {
        arr_43 [i_13] [i_13] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) 665372291)))) ? (((((/* implicit */_Bool) arr_42 [2LL] [i_13])) ? (-259517105) : (1399954342))) : (((((/* implicit */_Bool) -899338660)) ? (349545099) : (arr_41 [i_13])))));
        var_36 = ((/* implicit */long long int) min((var_36), (((/* implicit */long long int) ((((3332097870U) / (((/* implicit */unsigned int) arr_41 [i_13])))) & (((/* implicit */unsigned int) -509930160)))))));
        var_37 = ((/* implicit */unsigned int) ((long long int) ((((/* implicit */unsigned int) arr_41 [7LL])) - (4241311424U))));
        var_38 = ((/* implicit */int) max((var_38), (((/* implicit */int) (!(((((/* implicit */long long int) 2813098650U)) < (2237425613332866418LL))))))));
    }
}
