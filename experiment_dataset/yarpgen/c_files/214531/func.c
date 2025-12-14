/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214531
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214531 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214531
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
    var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) (~(var_15))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        /* LoopSeq 3 */
        for (int i_1 = 2; i_1 < 16; i_1 += 3) 
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned short i_2 = 3; i_2 < 16; i_2 += 3) 
            {
                /* LoopSeq 2 */
                for (unsigned int i_3 = 2; i_3 < 14; i_3 += 4) 
                {
                    var_17 = ((/* implicit */int) max((var_17), ((-(((/* implicit */int) arr_7 [i_1 - 2] [(_Bool)1] [i_3 - 1] [i_2 - 1]))))));
                    /* LoopSeq 1 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        arr_12 [i_2] [i_1] [7ULL] [i_3 - 1] [i_4] [i_2] [i_1] = ((/* implicit */short) (~(arr_5 [i_4] [i_3 - 2] [i_3] [i_2 + 1])));
                        var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [12LL] [12LL] [i_2] [i_2]))) < (0U))))));
                    }
                    arr_13 [i_0] [(_Bool)1] [i_0] = ((/* implicit */_Bool) ((4294967295U) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                    arr_14 [i_0] [i_1] [i_2 - 2] [i_3 - 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_10 [i_3] [i_0] [(_Bool)1] [i_3 - 1] [i_1 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1 - 1] [i_2 - 3]))) : (((arr_0 [i_0]) - (((/* implicit */unsigned long long int) arr_2 [i_0]))))));
                }
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    arr_17 [i_0] = ((/* implicit */unsigned short) (-(((unsigned int) arr_4 [i_5] [i_5]))));
                    var_19 -= ((/* implicit */short) (+(arr_5 [i_2 - 2] [i_1 + 1] [0LL] [i_5])));
                }
                arr_18 [i_1] [i_2 - 2] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) var_0)) ? (arr_11 [i_0] [i_0] [(short)12] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65527)))))));
                arr_19 [i_0] [i_0] [i_0] [(unsigned char)15] = ((/* implicit */unsigned long long int) (-(((unsigned int) arr_15 [i_0] [(_Bool)1] [i_2]))));
            }
            for (signed char i_6 = 1; i_6 < 15; i_6 += 4) 
            {
                arr_22 [i_0] [i_1] = ((/* implicit */int) (unsigned short)26);
                var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((((/* implicit */int) arr_3 [i_6 - 1])) - (((/* implicit */int) arr_21 [i_0]))))))) ? (((/* implicit */int) ((signed char) var_15))) : (((/* implicit */int) max((((/* implicit */signed char) max((arr_15 [i_0] [i_1] [i_6 + 1]), (arr_16 [2])))), (arr_21 [i_0]))))));
                arr_23 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) * (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (arr_11 [i_0] [i_1] [i_0] [(signed char)0] [i_0] [(signed char)0]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1 - 2] [i_1 + 1]))) / (arr_8 [i_1 - 2] [i_1] [i_1 - 1] [i_1 - 1] [i_1 - 2] [i_1]))))));
            }
            arr_24 [i_0] [i_0] [10LL] = ((/* implicit */signed char) max((max((max((((/* implicit */unsigned long long int) var_6)), (arr_20 [i_1]))), (((/* implicit */unsigned long long int) arr_4 [i_0] [i_1 - 1])))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_11)) - (((/* implicit */int) arr_9 [i_1 + 1] [i_0])))))));
        }
        for (signed char i_7 = 2; i_7 < 13; i_7 += 1) 
        {
            arr_27 [(signed char)10] &= ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_3 [i_7 + 1])))) > ((-(max((((/* implicit */unsigned int) var_2)), (4294967293U)))))));
            var_21 = ((/* implicit */_Bool) max((((arr_15 [i_7 + 1] [i_7 + 1] [i_7]) ? (((/* implicit */int) arr_15 [i_7 + 4] [i_7 + 3] [i_7 - 2])) : (((/* implicit */int) arr_15 [i_7 - 1] [i_7 + 2] [i_7 - 1])))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0])) ? (288230238712758272ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)38956)))))) ? (((/* implicit */int) ((3740796193U) > (28122084U)))) : (((/* implicit */int) (unsigned short)8))))));
        }
        for (signed char i_8 = 1; i_8 < 16; i_8 += 3) 
        {
            /* LoopNest 3 */
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                for (unsigned int i_10 = 0; i_10 < 17; i_10 += 3) 
                {
                    for (unsigned int i_11 = 1; i_11 < 14; i_11 += 2) 
                    {
                        {
                            var_22 = ((/* implicit */short) (-((-(arr_11 [(short)7] [(unsigned short)10] [i_8] [(unsigned char)13] [i_8 + 1] [i_8])))));
                            var_23 += ((/* implicit */short) ((((/* implicit */_Bool) ((int) arr_21 [i_8 + 1]))) && (((var_1) || (((/* implicit */_Bool) arr_21 [i_8 - 1]))))));
                            arr_39 [i_8] [i_11] [2U] [(signed char)15] [i_9] [2U] [i_8] = ((/* implicit */int) arr_34 [i_8]);
                            var_24 = ((/* implicit */unsigned long long int) var_7);
                        }
                    } 
                } 
            } 
            arr_40 [12] [i_8] = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_3 [i_8 - 1])), (arr_11 [i_0] [i_8 - 1] [i_8] [i_0] [i_0] [i_8 - 1])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0U)) ? (arr_37 [7LL] [i_8] [i_0] [9U] [7LL] [i_8 - 1] [i_8 + 1]) : (arr_37 [i_0] [i_8] [i_8] [(short)7] [i_8 + 1] [i_0] [i_8 - 1])))) : (((((/* implicit */_Bool) arr_3 [i_8 - 1])) ? (((/* implicit */unsigned long long int) arr_37 [i_0] [(short)0] [i_8] [(unsigned short)10] [i_0] [(short)9] [i_8 + 1])) : (arr_11 [i_0] [i_8 - 1] [i_0] [i_8] [i_0] [i_8 + 1])))));
            arr_41 [i_0] [i_8 + 1] [i_8] = ((/* implicit */unsigned int) min((max((arr_6 [0ULL] [(signed char)2] [i_8 - 1]), (arr_6 [i_0] [i_0] [i_8 + 1]))), (((/* implicit */long long int) ((unsigned int) max((((/* implicit */signed char) arr_7 [i_0] [i_0] [0U] [i_0])), (arr_10 [i_0] [i_8 + 1] [12] [i_8] [i_0])))))));
        }
        arr_42 [i_0] [i_0] = ((/* implicit */unsigned int) (-(((((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0])) << (((arr_33 [i_0]) - (2833833510U)))))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_12 = 2; i_12 < 13; i_12 += 2) 
    {
        var_25 += ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_21 [i_12]))));
        var_26 = ((/* implicit */signed char) var_1);
        arr_46 [7LL] = ((/* implicit */short) arr_21 [i_12 - 1]);
    }
    var_27 = ((/* implicit */unsigned int) min((((((/* implicit */int) var_9)) << (((((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) var_9)) : (var_2))) + (1584788388))))), (((int) min((((/* implicit */long long int) var_11)), (var_7))))));
    var_28 = ((/* implicit */unsigned long long int) var_3);
}
