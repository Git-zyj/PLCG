/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215937
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
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (+(491908949U)))) ? ((+(arr_0 [i_0] [10U]))) : (var_16)));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) var_19);
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                for (unsigned int i_3 = 0; i_3 < 18; i_3 += 2) 
                {
                    {
                        var_20 = ((/* implicit */short) ((((/* implicit */_Bool) (-(arr_0 [i_2] [(short)17])))) ? (((unsigned int) arr_5 [16U])) : (((unsigned int) (unsigned char)255))));
                        arr_10 [16U] [i_1] [i_2] [i_3] = ((/* implicit */unsigned char) arr_1 [i_0]);
                        var_21 = arr_7 [(short)6];
                    }
                } 
            } 
        } 
    }
    for (unsigned int i_4 = 0; i_4 < 11; i_4 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned int i_5 = 0; i_5 < 11; i_5 += 1) 
        {
            for (unsigned int i_6 = 4; i_6 < 10; i_6 += 1) 
            {
                {
                    arr_19 [i_6 - 1] [i_5] = arr_16 [i_5] [i_4];
                    /* LoopSeq 2 */
                    for (unsigned int i_7 = 0; i_7 < 11; i_7 += 1) 
                    {
                        var_22 = ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 3173414854U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [8U] [i_4] [i_5] [i_4]))) : (3173414855U)))) ? (((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_0))) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_13))))))) + (((3173414855U) + (3173414855U))));
                        arr_23 [i_4] [i_7] [i_6] [i_7] = arr_15 [i_4] [i_4] [i_7];
                    }
                    for (unsigned int i_8 = 2; i_8 < 10; i_8 += 4) 
                    {
                        var_23 = ((/* implicit */short) ((((/* implicit */_Bool) var_18)) ? ((-(((/* implicit */int) arr_17 [i_6 - 2] [i_6 - 2] [i_6 - 2])))) : (((((/* implicit */int) arr_17 [i_6 - 1] [i_6 - 3] [i_6 + 1])) | (((/* implicit */int) arr_17 [i_6 - 3] [i_6 - 1] [i_6 + 1]))))));
                        arr_27 [i_8] [i_8] [i_6] [8U] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_6 + 1])) && (((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) arr_11 [i_5])) || (((/* implicit */_Bool) arr_18 [(unsigned char)2] [i_5] [i_6]))))))));
                    }
                    arr_28 [i_4] [i_4] [i_4] = min((((((/* implicit */_Bool) ((unsigned int) arr_24 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]))) ? (arr_4 [i_6 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-10805))))), (var_10));
                }
            } 
        } 
        var_24 = min((((((/* implicit */_Bool) var_8)) ? (arr_21 [i_4] [i_4] [i_4] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) (short)-32764)))))))), (((((/* implicit */_Bool) var_8)) ? (min((((/* implicit */unsigned int) arr_12 [(unsigned char)0] [(unsigned char)0])), (var_3))) : (((unsigned int) arr_0 [i_4] [i_4])))));
        var_25 = ((/* implicit */unsigned char) ((unsigned int) arr_6 [i_4] [i_4]));
        /* LoopSeq 2 */
        for (short i_9 = 0; i_9 < 11; i_9 += 3) 
        {
            var_26 = ((/* implicit */short) (+(((/* implicit */int) arr_18 [i_4] [i_4] [i_9]))));
            var_27 = ((/* implicit */short) min((max((arr_8 [i_4] [i_9] [i_9] [i_4] [i_9]), (((/* implicit */unsigned int) var_19)))), (((((/* implicit */_Bool) arr_8 [i_4] [i_9] [i_9] [i_4] [i_9])) ? (33554431U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-1775)))))));
        }
        for (unsigned char i_10 = 2; i_10 < 8; i_10 += 3) 
        {
            var_28 = ((unsigned int) arr_6 [i_10] [0U]);
            var_29 = ((/* implicit */unsigned int) (~(((/* implicit */int) max((((/* implicit */short) (unsigned char)93)), ((short)-1))))));
        }
        var_30 = ((((/* implicit */_Bool) max((4294967295U), (((/* implicit */unsigned int) arr_15 [9U] [i_4] [i_4]))))) ? (((unsigned int) arr_15 [i_4] [i_4] [i_4])) : (((((/* implicit */_Bool) 4294967295U)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_4] [i_4] [i_4]))))));
    }
    for (unsigned int i_11 = 0; i_11 < 11; i_11 += 4) /* same iter space */
    {
        var_31 = (-(4294967295U));
        var_32 = ((/* implicit */unsigned char) ((min((((/* implicit */int) arr_32 [i_11] [i_11] [i_11])), ((+(((/* implicit */int) arr_12 [i_11] [i_11])))))) + (((((((/* implicit */_Bool) (unsigned char)142)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_12 [i_11] [i_11])))) - (((/* implicit */int) arr_17 [i_11] [i_11] [i_11]))))));
    }
    var_33 = ((/* implicit */unsigned int) (-(((((/* implicit */int) (!(((/* implicit */_Bool) (short)-25761))))) + (((/* implicit */int) var_14))))));
}
