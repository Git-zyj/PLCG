/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3343
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3343 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3343
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
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                var_10 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_4 [i_0] [i_1])) ? (((/* implicit */unsigned long long int) arr_2 [i_0])) : (arr_4 [i_1] [11U]))) + (((/* implicit */unsigned long long int) ((long long int) arr_2 [i_0])))));
                /* LoopSeq 1 */
                for (int i_2 = 0; i_2 < 12; i_2 += 2) 
                {
                    var_11 += ((/* implicit */_Bool) ((((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) ((unsigned short) 0U))))) ? ((+(4294967290U))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)15712)))));
                    var_12 -= ((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) > (0U))) ? ((((_Bool)1) ? (1343789829U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_1])) ^ (((/* implicit */int) arr_3 [i_2])))))));
                }
                var_13 = (~(((/* implicit */int) ((arr_2 [i_0]) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_0])))))));
                var_14 *= ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0]))))), ((~(((/* implicit */int) arr_9 [i_0] [i_1] [i_0] [i_0]))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_0] [i_1])) ? (((/* implicit */int) min(((unsigned short)65524), (((/* implicit */unsigned short) (_Bool)1))))) : (((/* implicit */int) ((arr_2 [i_1]) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_1] [8LL]))))))))) : (min((4294967295U), (265565558U)))));
            }
        } 
    } 
    var_15 = ((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) var_1)))))));
    /* LoopSeq 2 */
    for (unsigned short i_3 = 0; i_3 < 25; i_3 += 3) 
    {
        /* LoopSeq 1 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            var_16 = ((/* implicit */unsigned int) (-(-9089332228978690698LL)));
            /* LoopSeq 1 */
            /* vectorizable */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                var_17 += ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1317884034)) ? (((/* implicit */int) arr_12 [i_5])) : (((/* implicit */int) arr_15 [i_3] [i_3]))))) ? (((/* implicit */unsigned long long int) ((0U) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)76)))))) : (((((/* implicit */_Bool) var_4)) ? (arr_18 [i_3] [i_4] [(short)11]) : (arr_18 [i_3] [i_4] [i_5])))));
                var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) arr_19 [i_3] [i_4] [i_5]))));
                /* LoopSeq 1 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    arr_24 [i_6] [6LL] [3U] [i_6] [6LL] = ((((/* implicit */_Bool) (signed char)-81)) ? (((/* implicit */int) (unsigned short)65520)) : (((/* implicit */int) (_Bool)1)));
                    arr_25 [(signed char)3] [12] [i_6] = ((/* implicit */unsigned long long int) ((arr_14 [i_3] [i_5]) + (arr_14 [i_4] [i_4])));
                }
                /* LoopNest 2 */
                for (short i_7 = 1; i_7 < 24; i_7 += 1) 
                {
                    for (unsigned short i_8 = 2; i_8 < 21; i_8 += 2) 
                    {
                        {
                            arr_32 [i_3] [i_5] [i_4] [i_7] [(unsigned short)5] = ((/* implicit */long long int) ((((/* implicit */int) (signed char)94)) % (((/* implicit */int) (_Bool)1))));
                            arr_33 [i_7] = ((/* implicit */unsigned char) (+(((((/* implicit */unsigned int) -28)) | (0U)))));
                        }
                    } 
                } 
            }
        }
        var_19 = ((/* implicit */long long int) max((max((((/* implicit */unsigned int) ((unsigned short) arr_26 [i_3] [i_3] [i_3] [i_3] [(short)8]))), (min((4294967282U), (((/* implicit */unsigned int) (unsigned short)0)))))), ((~(arr_22 [i_3] [i_3] [i_3] [i_3] [(unsigned char)10] [i_3])))));
    }
    for (unsigned short i_9 = 0; i_9 < 22; i_9 += 1) 
    {
        var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_9] [(signed char)8])) ? (arr_14 [(unsigned char)2] [i_9]) : (((/* implicit */int) ((((/* implicit */_Bool) -2040176831)) && (((/* implicit */_Bool) var_6)))))))) ? (arr_17 [i_9] [i_9] [i_9] [i_9]) : (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) != (70334384439296LL)))) / (((((/* implicit */_Bool) 4294967288U)) ? (((/* implicit */int) (_Bool)1)) : (255))))))));
        arr_36 [i_9] = ((/* implicit */signed char) (-(((/* implicit */int) ((unsigned short) arr_12 [i_9])))));
        var_21 = ((/* implicit */_Bool) max((((unsigned int) arr_31 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9])), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_28 [i_9] [i_9] [i_9] [i_9])))))));
    }
}
