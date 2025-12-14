/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193405
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193405 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193405
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
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        arr_2 [(unsigned short)12] = ((/* implicit */signed char) ((((((/* implicit */int) var_10)) & (((/* implicit */int) (short)11748)))) << (((((unsigned long long int) arr_0 [i_0] [i_0])) - (3995469395ULL)))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned int i_3 = 0; i_3 < 13; i_3 += 1) /* same iter space */
                    {
                        var_11 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (short)32758)) & (((/* implicit */int) arr_9 [i_3] [i_2] [i_1] [i_0]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_1] [i_1]))) : (((((/* implicit */_Bool) arr_0 [i_0] [i_3])) ? (arr_3 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-11748)))))));
                        var_12 = ((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) arr_10 [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (arr_0 [i_2] [i_0]))));
                        arr_11 [i_2] [i_2] [9LL] [i_0] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_1])) ? (((/* implicit */long long int) (-(arr_0 [0U] [i_1])))) : (arr_5 [i_0])));
                    }
                    for (unsigned int i_4 = 0; i_4 < 13; i_4 += 1) /* same iter space */
                    {
                        arr_15 [i_0] [i_1] [i_2] [i_4] [(short)3] [i_4] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 3084279525U)) ? (((/* implicit */int) (short)11733)) : (((/* implicit */int) (unsigned char)229))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-19)) ? (arr_6 [3ULL]) : (((/* implicit */long long int) arr_13 [i_0] [i_0] [(unsigned char)9] [i_4]))))) : (((unsigned long long int) var_3)))) == (((/* implicit */unsigned long long int) max((((/* implicit */long long int) max(((short)-11747), ((short)17163)))), (arr_5 [10U]))))));
                        var_13 = ((/* implicit */signed char) arr_14 [i_4] [i_1] [i_0]);
                    }
                    for (unsigned int i_5 = 0; i_5 < 13; i_5 += 1) /* same iter space */
                    {
                        var_14 = ((/* implicit */short) arr_6 [(unsigned char)2]);
                        var_15 = ((/* implicit */_Bool) max((var_15), (((((arr_0 [i_0] [i_1]) == (((/* implicit */unsigned int) ((/* implicit */int) var_2))))) || (((/* implicit */_Bool) max((((((/* implicit */_Bool) (short)-11743)) ? (arr_10 [(unsigned short)6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9281388601108737309ULL)) ? (((/* implicit */int) (unsigned short)63890)) : (((/* implicit */int) var_8))))))))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned long long int i_6 = 0; i_6 < 13; i_6 += 2) 
                    {
                        for (unsigned long long int i_7 = 0; i_7 < 13; i_7 += 1) 
                        {
                            {
                                arr_25 [i_2] = ((/* implicit */unsigned int) max((((arr_1 [i_1] [i_0]) | (arr_1 [i_0] [i_0]))), (((/* implicit */long long int) max((((/* implicit */unsigned int) ((short) arr_20 [i_7] [i_0] [i_2] [i_0]))), (867707646U))))));
                                var_16 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((short) arr_17 [i_0] [i_1] [i_0] [i_1] [i_7])))) + (((long long int) ((unsigned int) arr_20 [i_7] [i_6] [i_0] [i_0])))));
                                var_17 = ((/* implicit */unsigned char) arr_17 [i_0] [i_1] [i_2] [i_1] [i_7]);
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */long long int) ((signed char) ((short) (!(((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_2]))))));
                    var_19 &= (~(arr_6 [i_1]));
                    /* LoopSeq 1 */
                    for (short i_8 = 2; i_8 < 12; i_8 += 2) 
                    {
                        var_20 = ((/* implicit */signed char) (+(((/* implicit */int) arr_29 [i_2] [i_1] [i_1] [i_1] [i_1] [i_1]))));
                        /* LoopSeq 1 */
                        for (long long int i_9 = 0; i_9 < 13; i_9 += 1) 
                        {
                            var_21 = ((/* implicit */unsigned long long int) ((short) var_0));
                            arr_32 [i_0] [i_2] [i_0] [i_8] = ((/* implicit */unsigned long long int) ((25LL) & (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) ((short) (signed char)68)))))));
                            var_22 = ((/* implicit */_Bool) var_1);
                        }
                        var_23 = ((/* implicit */unsigned int) arr_3 [i_2] [i_2] [i_2]);
                        arr_33 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((arr_6 [i_1]) & (((/* implicit */long long int) ((/* implicit */int) var_0))))) == (((/* implicit */long long int) ((/* implicit */int) arr_29 [i_2] [i_0] [i_1] [i_2] [i_2] [i_8]))))))) | (((((((/* implicit */int) (unsigned short)65532)) < (((/* implicit */int) var_9)))) ? (((/* implicit */unsigned long long int) ((arr_20 [i_0] [i_1] [i_2] [i_1]) & (((/* implicit */long long int) ((/* implicit */int) arr_26 [i_2])))))) : (((unsigned long long int) arr_20 [i_0] [i_1] [i_2] [i_8 + 1]))))));
                    }
                }
            } 
        } 
        var_24 = ((short) max((arr_13 [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned int) arr_7 [(unsigned short)12] [(unsigned short)12]))));
    }
    var_25 &= ((/* implicit */short) 1585957818U);
    var_26 = ((/* implicit */unsigned int) ((((((var_5) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) - (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)255)) - (((((/* implicit */int) var_8)) + (((/* implicit */int) (signed char)72)))))))));
}
