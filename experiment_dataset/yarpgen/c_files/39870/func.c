/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39870
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39870 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39870
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
    for (int i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        var_11 = ((/* implicit */unsigned int) arr_1 [i_0]);
        arr_3 [i_0] [i_0 + 1] = ((/* implicit */int) (((+(arr_2 [i_0 + 1]))) / (((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (((/* implicit */int) (signed char)-86)) : (((/* implicit */int) var_2))))) : (((705046716U) / (var_3)))))));
    }
    /* vectorizable */
    for (signed char i_1 = 3; i_1 < 13; i_1 += 1) 
    {
        var_12 = ((/* implicit */signed char) (((+(25U))) != (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-86)))))));
        var_13 = (+(((/* implicit */int) arr_4 [i_1 - 2])));
        arr_7 [i_1] = ((/* implicit */signed char) var_8);
    }
    for (int i_2 = 0; i_2 < 21; i_2 += 1) 
    {
        var_14 = ((/* implicit */int) ((((/* implicit */unsigned int) (~(((/* implicit */int) arr_10 [i_2]))))) ^ (((3589920552U) & (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)(-127 - 1))))))))));
        arr_11 [i_2] = var_7;
    }
    var_15 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((var_8) != (((((/* implicit */_Bool) var_6)) ? (3758635893U) : (3589920605U))))))) != (var_7)));
    /* LoopSeq 1 */
    for (signed char i_3 = 0; i_3 < 13; i_3 += 4) 
    {
        arr_14 [i_3] = ((/* implicit */signed char) (+(((/* implicit */int) ((signed char) ((0U) != (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_3])))))))));
        /* LoopSeq 2 */
        for (unsigned int i_4 = 1; i_4 < 9; i_4 += 4) 
        {
            arr_19 [i_4] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-12)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (-1649055113)));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned int i_5 = 0; i_5 < 13; i_5 += 1) 
            {
                var_16 = ((/* implicit */signed char) ((((var_0) != (3589920579U))) ? ((+(var_4))) : (((/* implicit */int) ((3589920580U) != (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-86))))))));
                /* LoopNest 2 */
                for (int i_6 = 2; i_6 < 12; i_6 += 4) 
                {
                    for (signed char i_7 = 0; i_7 < 13; i_7 += 1) 
                    {
                        {
                            var_17 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (arr_20 [i_3] [i_4 - 1] [i_5] [i_6]) : (((/* implicit */unsigned int) arr_5 [(signed char)12] [i_3]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((645198180U) != (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_3]))))))) : (((((/* implicit */_Bool) 8323072U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_3] [i_4] [i_5] [i_4] [i_7]))) : (3589920580U)))));
                            arr_27 [i_3] [i_3] [10] [i_3] [i_3] [i_7] [i_3] = ((/* implicit */int) ((unsigned int) arr_9 [i_4 - 1]));
                        }
                    } 
                } 
            }
            var_18 = ((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-66))) | (3589920580U))) != (var_6)));
            var_19 = ((/* implicit */unsigned int) ((0U) != (((/* implicit */unsigned int) min(((~(arr_21 [i_4 + 1] [i_4] [i_4]))), ((~(arr_17 [i_3]))))))));
            arr_28 [5] [i_4 + 3] = ((/* implicit */int) (+(4294967295U)));
        }
        for (unsigned int i_8 = 0; i_8 < 13; i_8 += 4) 
        {
            arr_31 [i_3] [3] [i_8] = ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */int) (signed char)-89)) != (1649055112))))));
            arr_32 [(signed char)5] [i_3] |= (+(((/* implicit */int) var_5)));
            var_20 |= ((/* implicit */signed char) ((((/* implicit */unsigned int) arr_24 [0U] [0U] [6] [i_3] [i_8])) / (((((/* implicit */unsigned int) 1649055122)) / (591226185U)))));
            /* LoopNest 2 */
            for (signed char i_9 = 2; i_9 < 11; i_9 += 1) 
            {
                for (signed char i_10 = 0; i_10 < 13; i_10 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned int i_11 = 1; i_11 < 10; i_11 += 1) 
                        {
                            arr_41 [i_3] [i_3] [i_9] [i_3] [i_11] = (+(((/* implicit */int) arr_25 [i_3] [(signed char)4] [i_3] [i_10] [i_10])));
                            var_21 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) arr_16 [i_11 + 1] [i_10]))) ? (arr_18 [i_8] [i_10] [3U]) : (((/* implicit */int) ((((/* implicit */int) var_9)) != (((/* implicit */int) arr_30 [i_3] [i_10])))))));
                            arr_42 [i_3] [i_3] [i_9] [i_10] [i_11] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_16 [2] [i_11 + 1])) ? (((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) arr_20 [i_3] [i_8] [i_9] [i_9]))))) : (((/* implicit */int) (signed char)-22))));
                            arr_43 [i_9] = ((/* implicit */int) ((signed char) arr_13 [i_3]));
                            arr_44 [11U] [i_11] [8U] [i_10] [i_11] [i_9] [i_10] = ((/* implicit */unsigned int) (+(((/* implicit */int) ((var_6) != (arr_26 [i_3] [i_3] [i_8] [i_9] [i_10] [i_11] [i_11]))))));
                        }
                        arr_45 [i_9] [i_8] [i_9 + 2] [i_10] [i_10] [i_3] |= ((/* implicit */signed char) 3537323177U);
                        var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_40 [i_9 + 1] [i_8])) ? ((+(((((/* implicit */_Bool) arr_17 [i_10])) ? (((/* implicit */unsigned int) arr_39 [i_8] [i_8] [i_9 + 2] [i_10] [i_8] [i_3] [i_9 + 2])) : (arr_26 [i_10] [i_10] [i_9] [i_8] [i_8] [i_3] [i_3]))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (signed char)-1)) != (((/* implicit */int) arr_30 [6U] [i_9]))))))));
                    }
                } 
            } 
        }
    }
    var_23 = ((((/* implicit */int) ((((unsigned int) var_1)) != (((((/* implicit */_Bool) var_1)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-105)))))))) / ((+(var_4))));
}
