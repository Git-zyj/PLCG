/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198190
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198190 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198190
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
    var_18 = var_13;
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                for (long long int i_2 = 0; i_2 < 18; i_2 += 2) 
                {
                    var_19 = ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */int) arr_4 [(short)11] [i_1] [(unsigned char)12])) > (((/* implicit */int) arr_4 [i_0] [i_1] [i_2])))));
                    /* LoopSeq 1 */
                    for (short i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        arr_10 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_17))) : (arr_6 [i_2] [i_2]))) >= (((/* implicit */long long int) ((/* implicit */int) max(((unsigned char)40), (((/* implicit */unsigned char) var_4)))))))))));
                        var_20 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) (signed char)47)), (arr_5 [i_0])))) ? (((min((((/* implicit */unsigned long long int) 1239024939)), (arr_7 [i_0]))) >> (((((unsigned long long int) arr_6 [i_0] [i_0])) - (15716448535217424490ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */long long int) arr_0 [(signed char)2] [(signed char)11])) ^ (arr_6 [i_0] [i_0]))) <= (((/* implicit */long long int) ((/* implicit */int) var_8)))))))));
                        var_21 -= ((/* implicit */long long int) var_14);
                    }
                }
                for (short i_4 = 0; i_4 < 18; i_4 += 2) 
                {
                    var_22 &= ((/* implicit */int) arr_3 [i_4] [i_1] [i_4]);
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned int i_5 = 0; i_5 < 18; i_5 += 3) 
                    {
                        arr_17 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((signed char) ((((/* implicit */int) var_4)) | (((/* implicit */int) var_4)))));
                        /* LoopSeq 1 */
                        for (short i_6 = 2; i_6 < 17; i_6 += 2) 
                        {
                            var_23 = ((/* implicit */short) ((_Bool) arr_5 [i_6 + 1]));
                            var_24 = ((/* implicit */long long int) ((short) arr_15 [i_6 + 1] [(signed char)6] [i_0]));
                        }
                    }
                    for (short i_7 = 0; i_7 < 18; i_7 += 3) 
                    {
                        var_25 = ((/* implicit */unsigned char) ((short) arr_13 [i_0]));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned long long int i_8 = 4; i_8 < 17; i_8 += 3) 
                        {
                            var_26 ^= ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) var_3)) <= (arr_23 [i_4] [i_7] [i_4] [9ULL] [i_0])))) * (((/* implicit */int) (!(((/* implicit */_Bool) var_17)))))));
                            var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_18 [i_8 - 4] [i_8 - 3])) ? (arr_18 [i_8 - 3] [i_8 - 1]) : (arr_18 [i_8 - 2] [i_8 - 3]))))));
                            var_28 = ((/* implicit */signed char) (-(((/* implicit */int) arr_26 [(signed char)9] [i_8 - 3] [(short)8] [(unsigned char)9] [9]))));
                        }
                        for (unsigned char i_9 = 0; i_9 < 18; i_9 += 2) 
                        {
                            var_29 = ((/* implicit */unsigned long long int) arr_15 [i_0] [i_0] [i_0]);
                            arr_29 [i_0] [i_7] [i_4] [i_0] [i_0] = ((/* implicit */int) ((max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_9 [i_4] [i_0])) <= (arr_1 [i_0])))), (arr_7 [i_0]))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_15 [i_9] [i_9] [i_0])) - (((/* implicit */int) arr_19 [(unsigned char)7] [i_1] [(unsigned char)14] [i_0]))))) && (((/* implicit */_Bool) ((short) (short)-29486)))))))));
                            var_30 -= ((/* implicit */unsigned short) (~((~(((2545515135533075012LL) >> (((((/* implicit */int) (unsigned short)58008)) - (57948)))))))));
                            var_31 = ((/* implicit */long long int) max((var_31), (((/* implicit */long long int) min((((((/* implicit */_Bool) ((short) -1239024916))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((1043772980U) > (((/* implicit */unsigned int) ((/* implicit */int) (signed char)15))))))) : (((((/* implicit */_Bool) arr_8 [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_0] [i_0] [i_4] [i_4]))) : (arr_0 [i_1] [i_1]))))), (((/* implicit */unsigned int) var_8)))))));
                        }
                    }
                    var_32 = ((/* implicit */short) min((var_32), (((/* implicit */short) ((long long int) max((((var_8) ? (arr_18 [i_0] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_27 [0ULL] [i_0] [i_1] [i_1] [i_4]))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_4])) ? (((/* implicit */int) arr_15 [i_0] [i_1] [i_4])) : (((/* implicit */int) arr_28 [i_0] [8ULL] [i_0] [i_0] [16ULL])))))))))));
                }
                for (long long int i_10 = 0; i_10 < 18; i_10 += 2) 
                {
                    var_33 = ((/* implicit */int) arr_6 [i_1] [i_1]);
                    var_34 = ((/* implicit */unsigned short) min((var_34), (((/* implicit */unsigned short) (-(arr_24 [i_10] [10U] [i_10] [i_0] [10U]))))));
                }
                /* LoopNest 3 */
                for (unsigned short i_11 = 0; i_11 < 18; i_11 += 3) 
                {
                    for (long long int i_12 = 3; i_12 < 16; i_12 += 3) 
                    {
                        for (signed char i_13 = 0; i_13 < 18; i_13 += 2) 
                        {
                            {
                                var_35 += ((/* implicit */unsigned char) ((int) ((arr_38 [i_12] [i_1] [i_11] [i_12 - 2] [i_12 - 1] [i_1]) + (((/* implicit */int) arr_27 [(short)2] [i_12 + 2] [16U] [i_12 + 2] [i_0])))));
                                arr_39 [i_0] [i_0] [i_1] [i_11] [i_0] [i_0] [i_13] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) ((signed char) arr_33 [i_0] [i_1] [3] [3]))) ? (((/* implicit */int) arr_4 [i_0] [i_0] [i_0])) : (((/* implicit */int) min((((/* implicit */unsigned short) arr_31 [i_0])), (arr_25 [i_1] [i_1] [11ULL]))))))));
                            }
                        } 
                    } 
                } 
                var_36 *= ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_22 [14U] [i_1]))))) ? (((((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_0] [16])) ? (arr_14 [i_1] [i_0] [i_0] [i_0]) : (((/* implicit */long long int) arr_0 [i_0] [i_1])))) : (((/* implicit */long long int) (~((+(((/* implicit */int) arr_2 [10] [i_0] [i_0])))))))));
            }
        } 
    } 
    var_37 = ((/* implicit */long long int) min((var_37), (((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_17))) * (((var_2) >> (((var_10) - (3521977643784168404LL)))))))) - (min((((/* implicit */long long int) ((((/* implicit */int) var_3)) + (((/* implicit */int) var_17))))), (min((var_16), (((/* implicit */long long int) var_5))))))))));
}
