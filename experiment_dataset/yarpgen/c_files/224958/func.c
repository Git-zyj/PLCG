/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224958
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224958 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224958
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
    var_15 |= ((/* implicit */signed char) var_8);
    var_16 = ((/* implicit */unsigned int) ((signed char) var_14));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (short i_2 = 1; i_2 < 21; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        for (int i_4 = 0; i_4 < 22; i_4 += 2) 
                        {
                            {
                                arr_13 [i_0] [i_0] [i_3] = ((/* implicit */unsigned long long int) var_9);
                                arr_14 [i_0] [i_1] [i_3] [i_3] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (min((((/* implicit */long long int) var_12)), (var_10))) : (min((((/* implicit */long long int) arr_12 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 + 1] [i_2 - 1])), (var_8)))));
                                var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) min(((short)3251), ((short)32767))))));
                            }
                        } 
                    } 
                    arr_15 [i_0] [i_0] [i_1] [i_2 - 1] = ((/* implicit */short) ((unsigned char) ((unsigned long long int) arr_10 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 + 1])));
                }
            } 
        } 
        arr_16 [i_0] = ((/* implicit */short) (((!((_Bool)1))) ? (var_13) : (((/* implicit */unsigned int) arr_3 [i_0] [i_0]))));
        var_18 -= ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) (unsigned char)172)))), ((+(((/* implicit */int) max((((/* implicit */unsigned char) arr_10 [i_0] [i_0] [i_0] [i_0])), (arr_8 [12] [i_0] [i_0] [i_0]))))))));
    }
    for (long long int i_5 = 0; i_5 < 12; i_5 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 3) 
        {
            for (unsigned long long int i_7 = 3; i_7 < 11; i_7 += 3) 
            {
                {
                    arr_26 [i_5] [i_5] [i_6] [i_7] = ((/* implicit */short) max((min((arr_21 [i_5] [i_6] [i_7]), (arr_21 [i_5] [i_6] [i_7 - 3]))), (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_21 [i_5] [i_6] [i_6])) ? (var_12) : (((/* implicit */int) arr_6 [i_5] [i_6] [i_7])))), (((/* implicit */int) var_4)))))));
                    arr_27 [i_5] = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_10 [i_6] [i_6] [i_7] [i_7 - 3])) ? (((/* implicit */int) arr_10 [i_5] [(short)9] [i_7 - 2] [i_7 - 3])) : (((/* implicit */int) arr_17 [i_5])))) != (((/* implicit */int) arr_10 [(short)21] [i_6] [i_7 + 1] [i_7 - 3]))));
                    /* LoopSeq 2 */
                    for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) /* same iter space */
                    {
                        arr_32 [i_5] [i_6] [i_6] [i_6] [i_7] [i_8] = ((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) (!(((/* implicit */_Bool) var_7))))))));
                        arr_33 [i_5] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_6)), (var_14)))) ? ((~(arr_25 [i_7 - 2]))) : (min((arr_25 [i_7 - 1]), (((/* implicit */unsigned int) arr_30 [i_8 - 1] [i_8] [i_8 - 1] [i_8 - 1] [i_8]))))));
                    }
                    for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) /* same iter space */
                    {
                        arr_38 [i_7] [i_6] [i_5] [i_9] [i_6] = (~(((((/* implicit */long long int) var_5)) | (var_10))));
                        arr_39 [i_5] [i_6] [i_7] [i_9] = ((/* implicit */unsigned long long int) arr_8 [i_5] [i_9 - 1] [(unsigned char)5] [i_9 - 1]);
                        var_19 *= ((/* implicit */unsigned short) min(((~(var_14))), (((/* implicit */unsigned int) min((((/* implicit */unsigned short) arr_37 [i_7 - 3] [10LL] [10LL] [i_7])), (var_3))))));
                    }
                }
            } 
        } 
        var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) min((((min((arr_7 [12LL] [i_5] [i_5]), (((/* implicit */long long int) arr_22 [i_5] [i_5] [i_5])))) + (((/* implicit */long long int) ((/* implicit */int) arr_37 [i_5] [6ULL] [6ULL] [i_5]))))), (((long long int) (-(((/* implicit */int) arr_2 [i_5]))))))))));
    }
    var_21 = ((/* implicit */short) min((var_10), ((-(var_10)))));
}
