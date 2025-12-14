/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246104
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246104 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246104
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
    var_19 &= ((unsigned short) (unsigned short)8192);
    var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) var_11))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 12; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        {
                            arr_11 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) min((arr_7 [i_3] [i_2 + 1] [i_1] [i_0]), (arr_7 [i_0] [i_1] [i_2] [10]))))))));
                            var_21 ^= ((/* implicit */unsigned char) min((var_3), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) (signed char)62))) || (((/* implicit */_Bool) arr_0 [i_2 - 1])))))));
                            var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) var_18)) : (-367640215)))) * (((arr_1 [i_0]) / (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-65)))))))) && (((/* implicit */_Bool) max((min((((/* implicit */unsigned long long int) arr_7 [i_3] [i_2] [i_1] [i_0])), (14588694720542662240ULL))), (((/* implicit */unsigned long long int) arr_3 [i_2 + 1] [i_2 - 1] [i_2 + 1])))))));
                            arr_12 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */unsigned int) arr_2 [i_2]);
                            /* LoopSeq 3 */
                            for (unsigned short i_4 = 0; i_4 < 13; i_4 += 3) 
                            {
                                var_23 = ((/* implicit */unsigned short) ((unsigned long long int) (unsigned short)60250));
                                var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) min(((~(-2025483753))), (((/* implicit */int) ((signed char) arr_5 [i_1]))))))));
                            }
                            for (unsigned char i_5 = 0; i_5 < 13; i_5 += 2) 
                            {
                                var_25 *= ((/* implicit */unsigned long long int) 4294967286U);
                                var_26 = ((/* implicit */unsigned int) (~(((/* implicit */int) min((((/* implicit */short) arr_3 [i_2 + 1] [i_2 + 1] [i_2 + 1])), (arr_6 [i_2 + 1] [i_2] [i_2 - 1]))))));
                                var_27 *= ((/* implicit */signed char) ((((/* implicit */int) arr_0 [i_5])) ^ (((/* implicit */int) arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))));
                                arr_20 [i_5] [i_2] [i_2] [i_2] [i_0] = ((/* implicit */_Bool) min((((/* implicit */unsigned int) (~(((/* implicit */int) arr_8 [i_2] [i_0] [i_1] [i_2 + 1]))))), (((((/* implicit */_Bool) arr_8 [i_2] [i_1] [i_2] [i_2 + 1])) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)42392)))))));
                            }
                            /* vectorizable */
                            for (short i_6 = 4; i_6 < 11; i_6 += 3) 
                            {
                                var_28 ^= ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_3 [i_0] [i_2 + 1] [i_6])) ? (2025483747) : (((/* implicit */int) (unsigned short)248))))));
                                arr_25 [i_0] [i_1] [i_2] [i_3] [i_1] [i_0] = ((/* implicit */unsigned short) (!(arr_17 [i_3] [i_6 - 4] [i_3] [(unsigned short)1] [i_6] [i_6])));
                                arr_26 [i_0] [i_0] [5ULL] [i_0] [i_2] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [10ULL] [i_1] [i_3]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_2] [i_1] [i_1] [i_1]))))) : (((/* implicit */int) arr_22 [(unsigned char)10] [i_2 - 1] [i_2 - 1] [i_2] [i_2]))));
                            }
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_7 = 0; i_7 < 13; i_7 += 3) 
                {
                    for (unsigned short i_8 = 1; i_8 < 11; i_8 += 2) 
                    {
                        {
                            var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) max(((-(min((arr_32 [i_0] [i_0] [i_0]), (((/* implicit */long long int) arr_8 [i_1] [i_1] [i_7] [i_1])))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_23 [i_8 + 1] [3] [i_8] [i_8] [i_8 + 1] [i_7])) ? ((+(((/* implicit */int) (signed char)-63)))) : ((~(((/* implicit */int) arr_2 [i_0]))))))))))));
                            arr_34 [(unsigned short)8] [i_1] [(unsigned short)8] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) max((var_3), (((/* implicit */unsigned short) (signed char)75))))))) * (((((/* implicit */_Bool) (+(((/* implicit */int) arr_9 [i_0] [i_1] [i_7] [i_8]))))) ? (max((arr_16 [i_0] [i_0] [i_1] [i_1] [i_0] [i_7] [i_8]), (((/* implicit */unsigned long long int) arr_28 [i_0] [i_1] [i_1] [i_8])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))));
                            var_30 *= ((/* implicit */unsigned short) arr_17 [i_0] [i_1] [(unsigned short)2] [i_7] [i_8] [i_8]);
                            var_31 = ((/* implicit */unsigned short) min((var_31), (((/* implicit */unsigned short) ((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)224))) ^ (((((/* implicit */_Bool) (unsigned char)204)) ? (-1293400341501005353LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)34))))))) / (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-73))) + (((((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_8] [i_7] [i_1] [i_0]))) - (arr_1 [1])))))))))));
                        }
                    } 
                } 
                arr_35 [i_1] = ((/* implicit */unsigned short) max((((/* implicit */long long int) 4294967295U)), (arr_32 [i_0] [i_1] [i_1])));
                var_32 ^= ((/* implicit */_Bool) -682134144);
            }
        } 
    } 
    var_33 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (((+(((/* implicit */int) var_5)))) / ((~(((/* implicit */int) var_13)))))))));
}
