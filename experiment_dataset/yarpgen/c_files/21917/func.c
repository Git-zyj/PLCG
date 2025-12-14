/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21917
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21917 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21917
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
    /* LoopNest 3 */
    for (long long int i_0 = 4; i_0 < 17; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_3 = 2; i_3 < 17; i_3 += 1) 
                    {
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned short i_4 = 3; i_4 < 18; i_4 += 3) 
                        {
                            var_14 = ((/* implicit */signed char) (short)32765);
                            arr_16 [i_0] [i_1 - 1] [i_2] [(unsigned short)18] [i_3] [i_4 - 1] [i_0] = var_9;
                        }
                        for (unsigned short i_5 = 3; i_5 < 15; i_5 += 4) 
                        {
                            arr_19 [i_0] [i_0] [i_2] [4LL] [i_0] [i_3] = ((/* implicit */unsigned char) -4932756894910244163LL);
                            arr_20 [i_0] [(unsigned short)1] = ((/* implicit */unsigned short) min((((/* implicit */long long int) arr_15 [i_1 - 1] [(unsigned short)8] [17LL] [(_Bool)1])), (((-3235884857658748787LL) & (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_0])))))));
                            arr_21 [i_5] [i_0] [i_2] [i_1] [i_0] [i_0 - 4] = ((/* implicit */_Bool) (~(min((-1LL), (((/* implicit */long long int) arr_1 [i_0]))))));
                        }
                        for (int i_6 = 2; i_6 < 18; i_6 += 1) 
                        {
                            var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) ((var_0) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (signed char)-70)) : (((/* implicit */int) (signed char)(-127 - 1)))))))))))));
                            var_16 = ((/* implicit */_Bool) arr_13 [i_0 - 4] [i_0] [i_0]);
                            var_17 = ((/* implicit */unsigned long long int) min((var_17), (min((((((/* implicit */_Bool) ((long long int) 2601721776642038180LL))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned char)0), (((/* implicit */unsigned char) arr_17 [i_2] [i_1] [i_2] [i_3] [0LL])))))) : (((((/* implicit */_Bool) var_9)) ? (6962403435804684142ULL) : (((/* implicit */unsigned long long int) arr_25 [i_2] [i_1] [i_2] [i_3 - 1] [i_6])))))), (5858831403628519756ULL)))));
                        }
                        var_18 = ((/* implicit */_Bool) arr_5 [i_0] [i_0]);
                        arr_26 [i_0] [i_0] [i_0] [i_3] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((short) (unsigned short)24406))), (arr_25 [i_0] [i_0] [17LL] [i_1 - 1] [i_2])));
                    }
                    for (unsigned short i_7 = 4; i_7 < 17; i_7 += 1) 
                    {
                        var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) var_5))));
                        var_20 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 2291650617804169051LL)) ? (((/* implicit */int) (signed char)63)) : (-139585834))) * ((~(((/* implicit */int) arr_7 [i_0] [i_2] [i_7]))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned long long int i_8 = 0; i_8 < 19; i_8 += 4) 
                    {
                        for (unsigned short i_9 = 0; i_9 < 19; i_9 += 4) 
                        {
                            {
                                arr_35 [i_0] [i_0] [i_0] [i_2] [i_0] [(signed char)18] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_34 [i_1] [i_1] [i_1] [i_0] [(signed char)9] [(_Bool)1])) ? (3235884857658748786LL) : (((/* implicit */long long int) ((/* implicit */int) var_11)))))))) ? (-3235884857658748787LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [i_1 - 1] [i_0] [i_0 - 1])) ? (((/* implicit */int) arr_14 [i_1 - 1] [i_1] [i_0 + 1])) : (((/* implicit */int) arr_7 [i_1 - 1] [i_0] [i_0 - 2])))))));
                                arr_36 [i_0] [2LL] [i_9] [i_0] |= ((/* implicit */long long int) (signed char)-103);
                                var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) min((arr_0 [i_0 - 1]), (arr_0 [i_0 - 2])))) < (max((((((/* implicit */_Bool) arr_30 [i_0 - 2] [i_0 - 2] [i_0 - 2] [3LL] [i_9])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_0] [i_2] [i_0] [i_8] [(signed char)8] [i_9]))) : (9ULL))), (((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_17 [i_2] [i_1 - 1] [14LL] [i_1] [i_1 - 1])) + (2147483647))) << (((((/* implicit */int) (short)15)) - (15)))))))))))));
                                arr_37 [(signed char)16] [(signed char)16] [i_2] [0ULL] [i_8] [i_8] [i_9] |= ((/* implicit */int) ((((/* implicit */_Bool) max((((((/* implicit */int) arr_9 [i_0 + 1] [i_8])) ^ (((/* implicit */int) arr_33 [i_2] [i_1] [10ULL] [i_8] [i_2] [10ULL] [(signed char)16])))), ((((_Bool)1) ? (((/* implicit */int) (signed char)86)) : (((/* implicit */int) (signed char)-102))))))) ? (min((arr_25 [i_8] [i_8] [i_2] [i_8] [i_9]), (((/* implicit */long long int) var_6)))) : (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_9] [(short)18] [(short)15] [i_9])))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_0] [i_0 - 1] [i_0 + 1] [i_0 - 4])) ? (((/* implicit */int) arr_8 [i_0])) : (((/* implicit */int) arr_8 [i_0]))))), (min((((/* implicit */unsigned long long int) (short)-4895)), (11754135454919152647ULL)))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_10 = 0; i_10 < 12; i_10 += 3) 
    {
        for (int i_11 = 0; i_11 < 12; i_11 += 1) 
        {
            for (unsigned short i_12 = 0; i_12 < 12; i_12 += 4) 
            {
                {
                    var_23 = ((/* implicit */unsigned short) ((long long int) (!(((/* implicit */_Bool) max((arr_2 [i_11] [i_11]), (((/* implicit */unsigned char) arr_27 [i_10] [i_10] [i_11] [i_12]))))))));
                    arr_46 [i_10] [4LL] [i_11] = ((/* implicit */unsigned int) (unsigned short)41122);
                    /* LoopNest 2 */
                    for (unsigned long long int i_13 = 2; i_13 < 10; i_13 += 1) 
                    {
                        for (unsigned long long int i_14 = 0; i_14 < 12; i_14 += 1) 
                        {
                            {
                                var_24 = ((/* implicit */short) (~(((/* implicit */int) max((arr_15 [i_13] [i_13] [i_13 - 1] [i_13 - 1]), (arr_15 [i_13] [i_13 + 2] [i_13] [i_13 - 1]))))));
                                arr_53 [i_10] [i_11] [i_12] [i_11] [i_14] = ((/* implicit */long long int) (signed char)-34);
                                var_25 = arr_8 [i_11];
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_26 = ((/* implicit */unsigned short) (_Bool)1);
}
