/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204418
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204418 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204418
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
    for (unsigned long long int i_0 = 2; i_0 < 8; i_0 += 2) 
    {
        arr_4 [i_0 + 1] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_3 [i_0 - 1] [i_0 + 2]))));
        /* LoopNest 2 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 1; i_2 < 9; i_2 += 3) 
            {
                {
                    var_14 = (~(-1));
                    /* LoopSeq 3 */
                    for (unsigned long long int i_3 = 3; i_3 < 9; i_3 += 3) /* same iter space */
                    {
                        /* LoopSeq 3 */
                        for (int i_4 = 4; i_4 < 9; i_4 += 4) 
                        {
                            arr_13 [i_0] [i_1 - 1] [i_2 + 1] [i_3] [i_2] = var_0;
                            var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) ((10198171567485164629ULL) < (((/* implicit */unsigned long long int) 26U)))))));
                        }
                        for (signed char i_5 = 1; i_5 < 9; i_5 += 3) 
                        {
                            arr_16 [i_5] [i_2] [i_2] [i_2] [i_0] = var_7;
                            arr_17 [i_0 - 2] [i_1 - 1] [i_2] [i_2] [i_5 + 1] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_2 [i_0 - 2])) - (arr_8 [i_0 + 1] [4U] [i_2])));
                            var_16 += ((int) var_3);
                            var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) arr_3 [i_1 - 1] [(signed char)1]))));
                        }
                        for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                        {
                            var_18 = ((/* implicit */int) arr_8 [i_0] [i_3] [i_0]);
                            var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_0 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0 + 2]))) : (var_6)));
                            var_20 -= ((((/* implicit */_Bool) arr_11 [i_0] [i_1 - 1] [i_2 - 1] [i_1 - 1] [i_6] [i_1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -6)) ? (0) : (((/* implicit */int) (signed char)69))))) : (arr_10 [i_0 - 2] [i_1] [i_2] [i_2] [4]));
                            var_21 = ((/* implicit */signed char) ((unsigned int) ((unsigned short) (short)24478)));
                        }
                        arr_22 [i_0 - 1] [i_2] [i_0 - 1] [i_2] [i_3] = ((/* implicit */signed char) ((unsigned long long int) 3859045005400785408LL));
                    }
                    for (unsigned long long int i_7 = 3; i_7 < 9; i_7 += 3) /* same iter space */
                    {
                        var_22 = arr_19 [8U] [i_1] [i_2];
                        var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_0 + 2])) ? (arr_15 [i_0] [5U] [i_1] [i_2] [i_2] [i_7 + 1] [i_7 - 1]) : (((/* implicit */unsigned long long int) ((long long int) arr_9 [i_0] [i_1] [i_2 + 1] [(unsigned short)4] [i_2 + 1]))))))));
                    }
                    for (unsigned long long int i_8 = 3; i_8 < 9; i_8 += 3) /* same iter space */
                    {
                        var_24 = ((unsigned char) arr_18 [i_8 - 1] [i_8 - 2] [i_2 - 1] [i_0 - 2] [i_2]);
                        var_25 *= ((/* implicit */short) arr_8 [i_8 - 3] [i_8 - 1] [i_8 + 1]);
                    }
                    var_26 = ((/* implicit */unsigned short) ((((/* implicit */int) var_9)) * (((/* implicit */int) ((24) <= (((/* implicit */int) arr_12 [i_2])))))));
                    var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0 + 1])) || (arr_14 [i_0 + 1] [i_0] [i_0] [i_0] [i_0] [i_0])));
                }
            } 
        } 
        var_28 = ((/* implicit */unsigned int) min((var_28), (((/* implicit */unsigned int) arr_21 [i_0]))));
        /* LoopSeq 1 */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            /* LoopSeq 1 */
            for (signed char i_10 = 4; i_10 < 8; i_10 += 3) 
            {
                var_29 = ((/* implicit */short) ((unsigned long long int) arr_26 [i_0 - 1] [i_10]));
                var_30 -= arr_1 [i_10];
            }
            arr_34 [i_9] [i_9] = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) | (((((/* implicit */int) arr_30 [i_0 - 1])) ^ (((/* implicit */int) arr_11 [1] [i_9] [i_9] [i_9] [1] [i_9]))))));
            var_31 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) var_1)) < (((/* implicit */int) arr_3 [i_0] [(unsigned char)6]))))) + (((/* implicit */int) var_5))));
            var_32 = ((/* implicit */unsigned char) ((int) ((((/* implicit */int) arr_26 [i_0] [i_9])) <= (((/* implicit */int) arr_29 [i_0 + 2])))));
        }
    }
    var_33 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) var_12))) ? (var_0) : (((/* implicit */int) var_1))));
    var_34 = ((/* implicit */unsigned int) ((((/* implicit */int) ((short) ((var_10) - (var_10))))) > (((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_5))))) < (((long long int) var_9)))))));
    var_35 = var_12;
}
