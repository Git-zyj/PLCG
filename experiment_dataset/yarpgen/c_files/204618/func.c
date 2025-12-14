/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204618
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204618 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204618
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
    var_14 = ((3725014464U) + (((((/* implicit */_Bool) 3466373225U)) ? ((~(649245572U))) : ((+(var_1))))));
    var_15 *= var_13;
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        var_16 = ((arr_1 [i_0] [i_0]) + ((~(((((/* implicit */_Bool) 3645721724U)) ? (arr_1 [i_0] [i_0]) : (arr_2 [i_0]))))));
        var_17 = ((unsigned int) ((arr_1 [i_0] [i_0]) + (arr_1 [i_0] [i_0])));
        /* LoopSeq 3 */
        for (unsigned int i_1 = 1; i_1 < 20; i_1 += 3) 
        {
            arr_6 [i_1] &= ((((arr_1 [i_0] [i_0]) % ((-(3645721730U))))) + (((arr_2 [3U]) / (((arr_4 [i_0] [8U] [i_0]) % (arr_3 [i_0] [i_0]))))));
            /* LoopNest 3 */
            for (unsigned int i_2 = 2; i_2 < 21; i_2 += 3) 
            {
                for (unsigned int i_3 = 0; i_3 < 22; i_3 += 4) 
                {
                    for (unsigned int i_4 = 3; i_4 < 21; i_4 += 3) 
                    {
                        {
                            arr_14 [11U] = 3365622999U;
                            arr_15 [19U] [i_3] [19U] [i_0] [i_0] = arr_7 [i_4 - 3] [i_3] [i_1 + 1] [i_0];
                            var_18 = ((((((/* implicit */_Bool) arr_13 [18U] [7U] [i_0] [i_0] [i_1] [i_1 + 1] [i_3])) && (((/* implicit */_Bool) arr_8 [i_4 - 3] [i_4 - 3] [i_4 - 3] [i_4 - 2])))) ? (((((/* implicit */_Bool) arr_1 [i_1 - 1] [i_2 - 2])) ? (arr_5 [i_2 - 2] [i_2] [i_2 - 2]) : (arr_5 [i_2 - 1] [17U] [i_2 + 1]))) : (arr_3 [2U] [2U]));
                        }
                    } 
                } 
            } 
        }
        /* vectorizable */
        for (unsigned int i_5 = 0; i_5 < 22; i_5 += 3) 
        {
            var_19 = arr_3 [i_5] [0U];
            arr_18 [i_0] [i_5] = arr_0 [i_0];
            /* LoopSeq 1 */
            for (unsigned int i_6 = 0; i_6 < 22; i_6 += 3) 
            {
                var_20 = (+(4294967295U));
                /* LoopSeq 1 */
                for (unsigned int i_7 = 0; i_7 < 22; i_7 += 3) 
                {
                    var_21 -= arr_1 [i_7] [i_5];
                    var_22 = 3231722030U;
                    /* LoopSeq 1 */
                    for (unsigned int i_8 = 0; i_8 < 22; i_8 += 2) 
                    {
                        var_23 = 4294967295U;
                        var_24 = 1446005220U;
                    }
                    var_25 = ((/* implicit */unsigned int) max((var_25), (arr_10 [i_7] [i_6] [16U] [16U] [i_0])));
                }
                arr_26 [i_6] [21U] [21U] [i_6] = arr_9 [i_0];
            }
            arr_27 [i_0] = 2881777962U;
            /* LoopSeq 1 */
            for (unsigned int i_9 = 2; i_9 < 21; i_9 += 1) 
            {
                var_26 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_9 + 1] [i_0] [i_0] [i_0])) && (((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [i_0]))));
                var_27 = arr_9 [i_9];
                arr_30 [i_0] [i_0] [i_0] [i_9 + 1] = (+(arr_16 [i_9 - 1] [i_9 - 1]));
            }
        }
        for (unsigned int i_10 = 0; i_10 < 22; i_10 += 3) 
        {
            /* LoopNest 3 */
            for (unsigned int i_11 = 0; i_11 < 22; i_11 += 4) 
            {
                for (unsigned int i_12 = 1; i_12 < 19; i_12 += 1) 
                {
                    for (unsigned int i_13 = 2; i_13 < 21; i_13 += 1) 
                    {
                        {
                            arr_43 [i_0] [i_0] [i_10] [i_10] [i_11] [11U] [i_13 - 2] = ((((/* implicit */_Bool) 14U)) ? (((((/* implicit */_Bool) arr_16 [i_11] [i_10])) ? (arr_7 [i_0] [i_11] [i_12 + 1] [i_0]) : (arr_17 [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0] [i_11] [i_13 - 1])) && (((/* implicit */_Bool) arr_4 [i_11] [20U] [20U])))))));
                            arr_44 [i_13] [i_13] [7U] [6U] [0U] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(max((3299470566U), (649245555U))))))));
                            arr_45 [i_0] [i_10] [i_11] [i_0] [i_13 - 1] = arr_32 [i_13 + 1];
                        }
                    } 
                } 
            } 
            /* LoopSeq 1 */
            for (unsigned int i_14 = 0; i_14 < 22; i_14 += 1) 
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_15 = 0; i_15 < 22; i_15 += 3) 
                {
                    /* LoopSeq 3 */
                    for (unsigned int i_16 = 0; i_16 < 22; i_16 += 2) 
                    {
                        var_28 *= ((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (arr_42 [i_0] [i_0] [15U] [i_16] [i_16]) : (arr_11 [i_0]));
                        arr_55 [i_15] [i_15] [i_15] [i_0] = ((/* implicit */unsigned int) ((arr_5 [i_14] [2U] [5U]) > (arr_12 [i_0] [4U] [16U] [16U] [i_16])));
                        var_29 = (-(arr_36 [i_0] [i_10] [i_14] [i_15]));
                    }
                    for (unsigned int i_17 = 0; i_17 < 22; i_17 += 1) 
                    {
                        arr_59 [i_10] [i_10] [i_10] [i_15] [6U] = (-(arr_57 [i_15] [i_15] [i_15] [18U] [i_14] [11U] [i_15]));
                        arr_60 [i_0] [i_10] [i_14] [i_10] [i_0] [i_15] = ((((/* implicit */_Bool) arr_20 [11U] [i_10] [i_15] [i_14])) ? ((-(264929441U))) : (arr_28 [i_0] [6U]));
                        var_30 |= (~(3645721721U));
                        var_31 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 1766390289U))));
                    }
                    for (unsigned int i_18 = 3; i_18 < 20; i_18 += 4) 
                    {
                        arr_64 [i_0] [i_0] [i_0] [18U] [i_15] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(arr_5 [i_0] [7U] [i_0]))))));
                        var_32 = ((/* implicit */unsigned int) max((var_32), (arr_57 [i_0] [i_18 - 1] [i_18 - 2] [14U] [i_18 - 1] [i_14] [i_0])));
                    }
                    var_33 = 649245572U;
                }
                arr_65 [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_7 [14U] [i_10] [3U] [i_14]))));
                /* LoopNest 2 */
                for (unsigned int i_19 = 3; i_19 < 21; i_19 += 3) 
                {
                    for (unsigned int i_20 = 0; i_20 < 22; i_20 += 3) 
                    {
                        {
                            var_34 = ((unsigned int) (!(((/* implicit */_Bool) 3352222114U))));
                            arr_70 [i_20] [i_19 - 2] [i_14] [i_10] [0U] [i_0] [i_0] = (((~(arr_4 [i_19 - 1] [i_19 - 1] [i_14]))) >> (((arr_2 [i_19 - 2]) - (2125195190U))));
                            var_35 = ((arr_2 [i_19 + 1]) + (((arr_11 [i_19 - 3]) >> (((arr_11 [i_0]) - (3629460327U))))));
                            var_36 = ((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) 4294967295U)))))));
                        }
                    } 
                } 
                var_37 = ((unsigned int) (~((~(208187994U)))));
            }
        }
    }
}
