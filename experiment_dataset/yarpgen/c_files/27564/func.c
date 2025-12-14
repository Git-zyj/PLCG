/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27564
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27564 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27564
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 18; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (int i_2 = 0; i_2 < 20; i_2 += 1) 
                {
                    var_12 = ((/* implicit */short) (signed char)95);
                    var_13 -= ((/* implicit */signed char) ((unsigned char) arr_0 [i_0 + 1]));
                    var_14 *= ((/* implicit */unsigned short) ((var_8) != (arr_6 [(unsigned short)10] [(_Bool)1] [i_1 + 2] [i_1 + 2])));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 20; i_4 += 1) 
                        {
                            {
                                arr_13 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)70)) & (((/* implicit */int) (short)17810))));
                                var_15 = ((/* implicit */unsigned short) var_5);
                                var_16 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [i_0]))));
                                arr_14 [15U] [(_Bool)1] [i_0] [i_1] [i_0] [(unsigned char)14] [i_0] = ((/* implicit */long long int) var_9);
                            }
                        } 
                    } 
                }
                for (short i_5 = 0; i_5 < 20; i_5 += 1) 
                {
                    var_17 -= ((/* implicit */unsigned int) ((unsigned short) min((min((var_6), (((/* implicit */unsigned long long int) arr_8 [i_0] [i_1] [i_0] [i_5])))), (((/* implicit */unsigned long long int) arr_16 [(short)12])))));
                    var_18 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_4 [i_0] [i_1] [i_0])) : (((/* implicit */int) arr_7 [i_0] [i_1 - 1] [i_5] [i_5]))))), (var_0)))), (max((((((/* implicit */unsigned long long int) var_3)) | (562941363486720ULL))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (unsigned short)42608)), (arr_11 [i_1]))))))));
                }
                arr_17 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 3659205020U)) ^ (562941363486720ULL)))) ? (((/* implicit */int) arr_10 [i_0] [i_1 + 1])) : (min((((/* implicit */int) arr_10 [i_0] [i_1 + 1])), (2147483634)))));
                var_19 = ((/* implicit */unsigned int) var_9);
                var_20 = (+(min((12025706912303684675ULL), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)146))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_6 = 0; i_6 < 23; i_6 += 1) 
    {
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            for (long long int i_8 = 0; i_8 < 23; i_8 += 4) 
            {
                {
                    arr_29 [i_6] [i_7] [i_8] [2ULL] = ((/* implicit */unsigned short) ((unsigned char) (-(arr_27 [i_6]))));
                    arr_30 [i_6] [16] [i_6] = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) arr_18 [i_6] [i_6])) ? (arr_23 [i_6] [1ULL] [(unsigned char)2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_6] [i_7] [i_8] [i_8]))))));
                    var_21 = ((/* implicit */unsigned long long int) max((var_21), (((((/* implicit */_Bool) 18446181132346064896ULL)) ? (((/* implicit */unsigned long long int) 4294967295U)) : (562941363486719ULL)))));
                }
            } 
        } 
    } 
}
