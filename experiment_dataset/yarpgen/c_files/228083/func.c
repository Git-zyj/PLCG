/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228083
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228083 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228083
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
    var_17 = var_5;
    /* LoopNest 2 */
    for (unsigned int i_0 = 3; i_0 < 17; i_0 += 2) 
    {
        for (unsigned int i_1 = 1; i_1 < 17; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 20; i_2 += 1) 
                {
                    for (unsigned int i_3 = 1; i_3 < 18; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_12 [i_0] [i_1] [i_3] [i_3] = ((/* implicit */short) min(((+(((arr_0 [i_4]) & (((/* implicit */unsigned long long int) arr_2 [i_3] [i_2])))))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */int) (signed char)127)) >= (((/* implicit */int) (_Bool)0))))))))));
                                arr_13 [i_0] [19U] [i_1] [i_3] [i_4] = ((/* implicit */int) var_5);
                            }
                        } 
                    } 
                } 
                arr_14 [i_0] [i_1] = ((/* implicit */signed char) max((max((((((/* implicit */_Bool) var_11)) ? (arr_8 [i_0 + 1] [i_1] [i_1] [(unsigned short)14] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned long long int) max((((/* implicit */int) (signed char)127)), (arr_2 [i_0] [i_0])))))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [(short)11] [i_0]))))))))));
                arr_15 [i_1] [i_1] = ((/* implicit */unsigned int) (signed char)(-127 - 1));
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 19; i_5 += 4) 
    {
        for (unsigned short i_6 = 3; i_6 < 18; i_6 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_7 = 0; i_7 < 19; i_7 += 3) 
                {
                    for (signed char i_8 = 0; i_8 < 19; i_8 += 1) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (unsigned short i_9 = 0; i_9 < 19; i_9 += 4) 
                            {
                                arr_26 [i_7] [i_6] [i_7] [i_6] [i_5] = ((/* implicit */unsigned short) arr_20 [i_6] [i_6]);
                                arr_27 [i_5] [9ULL] [i_7] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_9 [i_6] [i_6] [i_6 + 1] [i_6 - 3]))))) ? (((((/* implicit */_Bool) 3195249100U)) ? (min((arr_2 [i_8] [i_9]), (arr_7 [(unsigned short)19] [i_6] [i_7]))) : (((/* implicit */int) arr_3 [i_5] [(short)4] [i_6])))) : ((~(((/* implicit */int) ((((/* implicit */int) arr_16 [i_5])) > (((/* implicit */int) (unsigned char)222)))))))));
                            }
                            arr_28 [i_6] [i_7] [i_7] [i_6 - 1] [i_6] = ((/* implicit */signed char) (-(((((((/* implicit */int) arr_3 [i_6] [(unsigned short)7] [i_6])) >= (((/* implicit */int) arr_9 [i_5] [12ULL] [i_7] [12ULL])))) ? (arr_0 [2U]) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_14)) ^ (((/* implicit */int) arr_18 [i_5] [2])))))))));
                            arr_29 [i_5] [i_5] [i_5] [i_6] [i_7] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((655060626U) * (((/* implicit */unsigned int) ((/* implicit */int) (signed char)3)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_5] [i_8]))) : (arr_17 [i_6] [i_8])));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_10 = 2; i_10 < 17; i_10 += 3) 
                {
                    for (unsigned long long int i_11 = 0; i_11 < 19; i_11 += 2) 
                    {
                        {
                            arr_35 [(_Bool)1] [i_6] [i_10] [i_11] |= ((/* implicit */short) arr_8 [i_5] [i_11] [i_6 - 1] [i_10 + 2] [i_10]);
                            arr_36 [i_11] [i_11] [i_6] [i_6] [i_5] [i_5] = ((/* implicit */int) max((((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))))), (655060612U)));
                            arr_37 [i_10] [i_6] [i_6] [i_5] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) (+(arr_5 [i_6] [i_6])))))) ? (((/* implicit */long long int) 3639906647U)) : (((long long int) ((((/* implicit */_Bool) var_10)) ? (-1674505345) : (((/* implicit */int) arr_19 [i_5] [i_10])))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_18 = ((/* implicit */long long int) (_Bool)0);
}
