/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20734
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20734 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20734
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            var_17 = ((/* implicit */int) var_16);
            var_18 = ((/* implicit */signed char) arr_3 [i_1] [i_1]);
        }
        for (unsigned int i_2 = 0; i_2 < 14; i_2 += 4) 
        {
            /* LoopSeq 2 */
            for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 1) /* same iter space */
            {
                /* LoopSeq 1 */
                for (signed char i_4 = 1; i_4 < 12; i_4 += 4) 
                {
                    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 22ULL)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)28660)) ? (arr_9 [i_2] [6LL] [6LL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [9ULL]))))))));
                    var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) arr_11 [i_4 + 2] [i_4] [i_4 + 2] [i_4 + 1])) : (((/* implicit */int) ((var_5) <= (((/* implicit */int) (short)28637))))))))));
                    var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) var_10))));
                }
                /* LoopNest 2 */
                for (signed char i_5 = 2; i_5 < 10; i_5 += 4) 
                {
                    for (int i_6 = 0; i_6 < 14; i_6 += 1) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned int) arr_3 [i_2] [i_2]);
                            arr_17 [i_0] [i_0] [i_3] [8U] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_16 [i_5 - 1] [i_5 + 1] [i_5 + 3] [i_5 + 3] [i_5 + 2])) ? (((/* implicit */int) arr_6 [i_0])) : (((/* implicit */int) (short)28660))));
                            arr_18 [i_0] [i_3] [i_3] [i_6] = ((/* implicit */short) ((int) arr_1 [8] [i_5 + 1]));
                        }
                    } 
                } 
                arr_19 [i_0] [i_3] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0])) && (((/* implicit */_Bool) (short)-28671))));
            }
            for (unsigned long long int i_7 = 0; i_7 < 14; i_7 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (short i_8 = 0; i_8 < 14; i_8 += 4) 
                {
                    for (long long int i_9 = 0; i_9 < 14; i_9 += 2) 
                    {
                        {
                            var_23 += ((/* implicit */unsigned int) ((unsigned long long int) arr_6 [i_7]));
                            arr_27 [i_7] [i_2] [i_2] = ((/* implicit */signed char) ((unsigned long long int) arr_14 [i_0] [i_2] [i_2] [i_8] [i_9] [i_9]));
                        }
                    } 
                } 
                var_24 = ((/* implicit */long long int) arr_8 [i_7] [1ULL] [13LL]);
            }
            var_25 -= arr_3 [(signed char)7] [7U];
        }
        var_26 = ((/* implicit */int) max((var_26), ((+((+(((/* implicit */int) (short)-28637))))))));
        arr_28 [i_0] = ((/* implicit */unsigned int) var_3);
        /* LoopSeq 2 */
        for (unsigned long long int i_10 = 0; i_10 < 14; i_10 += 3) 
        {
            var_27 = ((/* implicit */unsigned long long int) ((short) (short)28657));
            arr_31 [i_0] [i_10] = arr_7 [i_10];
        }
        for (signed char i_11 = 0; i_11 < 14; i_11 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_12 = 0; i_12 < 14; i_12 += 4) 
            {
                for (unsigned long long int i_13 = 0; i_13 < 14; i_13 += 2) 
                {
                    {
                        /* LoopSeq 3 */
                        for (unsigned short i_14 = 0; i_14 < 14; i_14 += 4) /* same iter space */
                        {
                            var_28 -= ((/* implicit */int) (short)28642);
                            var_29 = ((/* implicit */long long int) var_2);
                        }
                        for (unsigned short i_15 = 0; i_15 < 14; i_15 += 4) /* same iter space */
                        {
                            var_30 = ((((/* implicit */int) arr_6 [i_15])) > (((/* implicit */int) arr_6 [8])));
                            arr_46 [i_0] [i_12] [i_0] [(signed char)3] [1ULL] = ((/* implicit */unsigned long long int) arr_4 [i_13]);
                        }
                        for (unsigned int i_16 = 3; i_16 < 11; i_16 += 4) 
                        {
                            arr_49 [i_16] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_22 [i_16 - 1] [i_16 - 1] [i_16 - 2] [i_16] [i_16 - 3])) ? (((/* implicit */int) arr_26 [i_16 - 1] [i_16 - 3] [i_16 - 2] [i_16 + 2] [i_16 + 3])) : (((/* implicit */int) arr_26 [i_16 - 1] [6] [i_16] [i_16 + 2] [i_16]))));
                            var_31 = ((/* implicit */unsigned long long int) min((var_31), (((/* implicit */unsigned long long int) (-(arr_12 [i_12] [i_16 - 2] [i_16 + 3] [i_16 + 3] [i_16 - 3] [i_16 - 2]))))));
                            arr_50 [(unsigned short)13] [i_16 - 3] [i_16] [i_13] [i_16 - 1] [i_12] = ((/* implicit */unsigned long long int) (+(arr_12 [i_16] [i_16 + 1] [i_16 + 1] [i_16 + 1] [i_16 + 1] [i_16 - 2])));
                        }
                        var_32 = ((/* implicit */signed char) var_2);
                    }
                } 
            } 
            var_33 = ((/* implicit */unsigned long long int) (short)28660);
            var_34 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_21 [i_0] [i_0] [i_11])) ^ (((/* implicit */int) arr_20 [i_0] [i_11] [i_0]))));
        }
    }
    var_35 = var_6;
}
