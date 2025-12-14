/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195044
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195044 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195044
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 11; i_1 += 3) 
        {
            {
                /* LoopSeq 3 */
                for (short i_2 = 1; i_2 < 11; i_2 += 4) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        var_11 = ((/* implicit */_Bool) ((((/* implicit */int) (signed char)-1)) + (((/* implicit */int) arr_8 [i_0 - 1] [i_0 - 1] [i_2] [i_3 - 1] [i_3 - 1] [i_1 + 2]))));
                        var_12 = ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) arr_9 [i_0] [i_1 - 2] [i_2] [i_3 - 1])));
                        var_13 = ((/* implicit */unsigned int) (+(((/* implicit */int) (short)15150))));
                    }
                    var_14 += var_8;
                    var_15 ^= ((/* implicit */signed char) (~(((/* implicit */int) min((((/* implicit */short) arr_1 [i_2 + 2] [i_2])), (arr_8 [i_2] [i_2 - 1] [i_2] [i_2 - 1] [i_2 + 1] [i_2 + 2]))))));
                    arr_10 [i_2] [(signed char)0] = ((/* implicit */unsigned int) (signed char)-1);
                }
                /* vectorizable */
                for (unsigned int i_4 = 1; i_4 < 10; i_4 += 3) 
                {
                    var_16 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (short)8923)) ? (3796018663U) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))));
                    var_17 = ((/* implicit */_Bool) ((arr_1 [i_4 + 1] [i_0 - 1]) ? ((((_Bool)1) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) var_0)))) : (((/* implicit */int) arr_12 [i_0] [i_0] [i_0 - 1] [i_0]))));
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 1; i_5 < 12; i_5 += 4) 
                    {
                        for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                        {
                            {
                                var_18 &= ((/* implicit */_Bool) ((((/* implicit */int) var_10)) - (((/* implicit */int) arr_9 [i_0] [i_1 + 1] [i_4] [i_6 + 1]))));
                                var_19 ^= ((/* implicit */long long int) arr_17 [i_1]);
                            }
                        } 
                    } 
                }
                for (unsigned int i_7 = 0; i_7 < 13; i_7 += 2) 
                {
                    var_20 = ((/* implicit */_Bool) (signed char)-22);
                    arr_21 [i_0] [i_1 + 1] [i_7] = ((/* implicit */short) ((((((((/* implicit */int) arr_2 [i_0] [i_1 - 1])) + (((/* implicit */int) var_3)))) >= (((/* implicit */int) var_7)))) ? (min(((-(16382))), (((/* implicit */int) arr_2 [i_0 - 1] [i_0 - 1])))) : (((((/* implicit */int) min((var_3), (((/* implicit */unsigned char) arr_6 [i_0] [(unsigned char)3]))))) / (((/* implicit */int) var_0))))));
                }
                var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0 - 1] [i_0 - 1] [i_1 - 2])) && (((/* implicit */_Bool) arr_4 [i_0 - 1] [i_0 - 1] [i_1 - 2]))))))))));
                /* LoopNest 2 */
                for (int i_8 = 2; i_8 < 11; i_8 += 3) 
                {
                    for (unsigned int i_9 = 1; i_9 < 12; i_9 += 3) 
                    {
                        {
                            var_22 -= ((/* implicit */int) (unsigned char)128);
                            arr_26 [i_9] [i_1] [i_1] [i_1] [i_1 - 2] = ((((/* implicit */_Bool) (+(arr_3 [i_8 + 1] [i_0 - 1])))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_8 + 1] [i_0 - 1])) ? (((/* implicit */int) (short)32767)) : (859431690)))) : (max((arr_3 [i_8 + 1] [i_0 - 1]), (arr_3 [i_8 + 1] [i_0 - 1]))));
                            arr_27 [i_9] [i_9] [(_Bool)1] [(short)7] = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */int) (unsigned short)42037)) >> (((((/* implicit */int) (short)-15139)) + (15163))))) - (((/* implicit */int) min((((/* implicit */short) (signed char)-1)), ((short)-2309))))))) ? (((var_9) * (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_8 + 1] [i_9] [(unsigned short)6]))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_9])))));
                            var_23 &= ((/* implicit */unsigned int) max((min((var_5), (((/* implicit */long long int) (short)-1)))), (((/* implicit */long long int) (_Bool)1))));
                            var_24 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) 478441370)) ? (((/* implicit */int) arr_5 [i_8])) : (((/* implicit */int) var_10))))))) && (((/* implicit */_Bool) max((((((/* implicit */int) arr_12 [i_0] [i_1] [i_8] [i_1])) | (1381382217))), (min((((/* implicit */int) (short)-29541)), (arr_25 [i_0] [i_1] [i_8] [i_9]))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_25 = ((/* implicit */short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) max((((/* implicit */short) (!((_Bool)1)))), (var_7)))) : (((/* implicit */int) var_7))));
    /* LoopNest 2 */
    for (short i_10 = 1; i_10 < 23; i_10 += 3) 
    {
        for (int i_11 = 4; i_11 < 22; i_11 += 3) 
        {
            {
                var_26 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((unsigned int) (short)-15140))))) ? (max((-16362), (((/* implicit */int) arr_31 [i_10 + 1])))) : (((((/* implicit */int) arr_29 [i_11 + 1] [i_11 + 1])) / (((/* implicit */int) arr_33 [i_11]))))));
                /* LoopNest 2 */
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    for (unsigned short i_13 = 2; i_13 < 22; i_13 += 3) 
                    {
                        {
                            var_27 = ((/* implicit */int) arr_36 [i_13 + 1] [i_11] [i_11] [i_13]);
                            var_28 = ((/* implicit */signed char) (-(((((/* implicit */int) (short)7434)) + (-1163955484)))));
                            var_29 = ((/* implicit */unsigned int) (short)3884);
                            var_30 &= ((max((((/* implicit */int) min((arr_34 [i_10 + 1] [i_11] [i_11]), (((/* implicit */short) arr_37 [i_10]))))), (16370))) != (((/* implicit */int) min((var_10), (((/* implicit */short) arr_30 [i_11 + 2]))))));
                        }
                    } 
                } 
                arr_43 [i_11] = ((/* implicit */unsigned int) (short)23119);
                arr_44 [i_11] = ((/* implicit */int) ((((/* implicit */_Bool) ((min((arr_31 [i_10 - 1]), (arr_37 [i_11]))) ? ((~(((/* implicit */int) (short)1)))) : (((/* implicit */int) arr_31 [i_10]))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_35 [i_10 + 1] [i_11 + 2] [i_11]))))) : (((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)200)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) var_10))))) / (var_6)))));
            }
        } 
    } 
}
