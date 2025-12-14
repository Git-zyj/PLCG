/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246337
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246337 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246337
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
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (unsigned int i_2 = 1; i_2 < 15; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 1; i_3 < 13; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                        {
                            {
                                arr_14 [i_0] [i_1] [i_3] [(signed char)10] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) max((arr_3 [i_4 + 1] [i_1] [i_1]), (arr_3 [i_4 + 1] [i_1] [i_2]))))) < (max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_1] [i_0])) || (((/* implicit */_Bool) 266287972352LL))))), (max((arr_7 [i_1] [i_1] [i_1]), (arr_7 [i_0] [i_2 + 2] [i_3])))))));
                                var_16 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) max((((/* implicit */unsigned char) var_0)), (var_13)))), (min((arr_12 [i_3] [i_1] [4U] [9U] [i_3 + 3] [i_4] [i_2 + 1]), (134086656U)))));
                                arr_15 [i_0] [i_0] [i_0] [i_3] [i_3] [i_0] [i_0] = ((/* implicit */short) min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_9 [i_3 + 2] [i_2 + 1] [i_2 + 2] [i_4 + 1])), (arr_0 [i_2 + 1])))), (((((/* implicit */unsigned long long int) arr_12 [i_3] [i_0] [i_1] [i_3 + 3] [i_3 + 3] [i_4 + 1] [i_4 + 1])) % (8196861871812606735ULL)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_5 = 0; i_5 < 17; i_5 += 4) 
                    {
                        for (unsigned char i_6 = 2; i_6 < 16; i_6 += 4) 
                        {
                            {
                                arr_20 [i_6] [(short)1] [(short)9] [i_6 - 1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) min((max((((/* implicit */unsigned char) arr_3 [i_5] [i_2 + 2] [10ULL])), (var_1))), (((/* implicit */unsigned char) min((var_0), (var_9))))))) * (((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) (short)16383)) - (16359)))))));
                                var_17 = max((((((/* implicit */unsigned int) ((/* implicit */int) var_0))) - (arr_12 [i_0] [0ULL] [0ULL] [i_5] [i_5] [(short)12] [0ULL]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_15)), (2243755640U)))) || (((/* implicit */_Bool) min((((/* implicit */short) arr_3 [i_0] [i_0] [i_0])), ((short)-32756))))))));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */unsigned int) ((min((min((1152921504606846975ULL), (((/* implicit */unsigned long long int) arr_19 [i_0] [i_0] [12ULL])))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)6145)) | (((/* implicit */int) arr_3 [i_0] [i_1] [(unsigned char)15]))))))) >> (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (short)-3272)) > (((/* implicit */int) var_6))))) <= (((/* implicit */int) min((((/* implicit */short) var_1)), (arr_5 [i_2] [i_1])))))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */short) max((((/* implicit */long long int) var_13)), (((max((((/* implicit */long long int) (_Bool)1)), (var_8))) >> (((max((((/* implicit */unsigned long long int) var_9)), (var_11))) - (13298029694240454802ULL)))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_7 = 0; i_7 < 21; i_7 += 4) /* same iter space */
    {
        arr_23 [i_7] = ((/* implicit */unsigned int) max((max((((/* implicit */unsigned long long int) -1LL)), (18446744073709551613ULL))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) var_4)), ((unsigned char)240))))));
        var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) max((max((min((18446744073709551607ULL), (((/* implicit */unsigned long long int) var_8)))), (((/* implicit */unsigned long long int) min((((/* implicit */signed char) var_15)), (var_4)))))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_6)), ((-9223372036854775807LL - 1LL))))))))));
        var_21 = ((/* implicit */unsigned char) ((max((0ULL), (((/* implicit */unsigned long long int) 4294967288U)))) + (((/* implicit */unsigned long long int) max((min((3U), (((/* implicit */unsigned int) var_0)))), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)170)) / (((/* implicit */int) var_13))))))))));
    }
    /* vectorizable */
    for (unsigned long long int i_8 = 0; i_8 < 21; i_8 += 4) /* same iter space */
    {
        var_22 = ((/* implicit */signed char) ((var_2) * (((/* implicit */unsigned long long int) var_8))));
        arr_26 [i_8] = ((/* implicit */unsigned char) ((arr_22 [i_8]) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))));
    }
    /* LoopNest 3 */
    for (unsigned int i_9 = 0; i_9 < 25; i_9 += 3) 
    {
        for (unsigned int i_10 = 0; i_10 < 25; i_10 += 3) 
        {
            for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) 
            {
                {
                    var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) max((min((arr_30 [i_11 + 1] [i_11] [22LL]), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (short)-1229)), (0U)))))), (((/* implicit */unsigned long long int) ((((var_14) ^ (((/* implicit */long long int) ((/* implicit */int) var_13))))) <= (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_10)), (arr_31 [(signed char)6])))))))))))));
                    arr_34 [i_9] [i_9] [(short)21] = ((/* implicit */unsigned int) ((min((max((var_11), (((/* implicit */unsigned long long int) (unsigned char)239)))), (((/* implicit */unsigned long long int) var_5)))) ^ (((max((arr_30 [i_9] [i_10] [i_9]), (((/* implicit */unsigned long long int) arr_27 [i_11])))) + (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) arr_27 [i_9])), (var_13)))))))));
                    arr_35 [i_9] = ((/* implicit */short) max((((/* implicit */int) min((min((arr_33 [23ULL] [i_11] [i_11] [i_11]), (((/* implicit */unsigned char) arr_32 [i_9] [i_9] [i_11 + 1] [i_9])))), (((/* implicit */unsigned char) var_15))))), (max((((((/* implicit */int) (unsigned char)0)) + (((/* implicit */int) arr_27 [i_10])))), (((/* implicit */int) arr_33 [i_11 + 1] [i_11] [i_10] [i_10]))))));
                    arr_36 [i_9] = max((((max((2313524087U), (2831395409U))) * (((/* implicit */unsigned int) ((/* implicit */int) ((arr_30 [i_9] [13U] [i_9]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))))))), (max((max((((/* implicit */unsigned int) var_9)), (var_5))), (((/* implicit */unsigned int) var_9)))));
                    arr_37 [i_10] [i_11 + 1] [i_10] [(unsigned char)0] &= ((/* implicit */short) min((max((min((((/* implicit */unsigned long long int) arr_28 [(unsigned char)18])), (18446744073709551603ULL))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_32 [i_9] [i_9] [(short)12] [10U])), (var_14)))))), (((/* implicit */unsigned long long int) min((min((((/* implicit */unsigned int) arr_31 [8U])), (255U))), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)65535)) % (((/* implicit */int) arr_33 [i_9] [i_9] [18ULL] [i_9]))))))))));
                }
            } 
        } 
    } 
}
