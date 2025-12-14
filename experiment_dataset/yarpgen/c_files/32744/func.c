/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32744
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32744 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32744
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
    var_10 ^= ((/* implicit */_Bool) var_7);
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 12; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                var_11 ^= arr_1 [6U] [6U];
                var_12 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [(unsigned short)10] [i_0 + 1]))) : (((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0]))) : (arr_5 [i_0])))))) ? (((((/* implicit */_Bool) arr_1 [(unsigned short)8] [i_0])) ? (((/* implicit */int) arr_1 [(signed char)12] [i_1])) : (((/* implicit */int) arr_1 [8] [4U])))) : (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) var_3)) != (((/* implicit */int) (unsigned short)60382))))) != (((/* implicit */int) arr_3 [i_0])))))));
                var_13 -= ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_2 [i_0 - 1])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)57344)) ? (((/* implicit */int) arr_0 [i_0] [i_1])) : (((/* implicit */int) arr_4 [(signed char)12] [i_1] [i_0 - 1]))))) : ((~(arr_5 [i_1]))))), (-23LL)));
                arr_6 [i_0] [i_0 - 1] [i_0] = ((/* implicit */signed char) arr_4 [i_0 - 1] [i_0 - 1] [i_1]);
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_2 = 0; i_2 < 24; i_2 += 2) 
    {
        for (unsigned short i_3 = 2; i_3 < 23; i_3 += 2) 
        {
            {
                arr_11 [i_2] [i_2] [i_2] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_10 [9ULL] [i_2] [9ULL])) ? (0U) : (((((/* implicit */_Bool) max((((/* implicit */unsigned short) (signed char)106)), (arr_7 [i_3])))) ? (((((/* implicit */_Bool) (unsigned short)61717)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_2] [i_2] [i_2])))))));
                /* LoopNest 2 */
                for (long long int i_4 = 1; i_4 < 21; i_4 += 4) 
                {
                    for (unsigned int i_5 = 0; i_5 < 24; i_5 += 2) 
                    {
                        {
                            /* LoopSeq 3 */
                            for (unsigned long long int i_6 = 0; i_6 < 24; i_6 += 2) 
                            {
                                var_14 *= ((/* implicit */signed char) (unsigned short)65531);
                                arr_19 [i_5] &= ((/* implicit */long long int) (+(((((/* implicit */_Bool) max((((/* implicit */unsigned char) (_Bool)1)), (arr_18 [i_5] [i_4 - 1] [i_5] [i_5] [i_4 - 1] [i_5])))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_18 [i_2] [i_3 - 1] [i_4 + 2] [i_5] [i_3 - 1] [i_6])) : (((/* implicit */int) (signed char)127)))) : (((((/* implicit */_Bool) arr_7 [i_2])) ? (((/* implicit */int) arr_8 [i_2] [i_5])) : (((/* implicit */int) (_Bool)1))))))));
                                arr_20 [i_2] [i_3] [i_2] [i_4] [i_6] = ((((max((((/* implicit */int) (signed char)-116)), (arr_13 [(_Bool)1] [(short)21] [i_4]))) / (((/* implicit */int) ((unsigned short) arr_17 [i_2] [i_2] [i_4] [i_5] [i_6]))))) >= (((/* implicit */int) ((short) (+(arr_15 [i_4] [i_4]))))));
                                var_15 = ((/* implicit */unsigned int) (-((+(0LL)))));
                            }
                            for (int i_7 = 2; i_7 < 22; i_7 += 4) 
                            {
                                var_16 = ((/* implicit */short) max((((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_15 [i_2] [i_2])) ? (((/* implicit */int) arr_10 [i_5] [i_5] [i_5])) : (((/* implicit */int) (signed char)(-127 - 1))))), (arr_12 [i_2] [i_2] [i_3 - 2] [i_2])))), (13U)));
                                var_17 ^= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_18 [i_2] [i_3 + 1] [i_4] [i_4 + 3] [i_5] [i_2])) || (((/* implicit */_Bool) arr_18 [i_3] [(unsigned short)11] [i_4 + 2] [i_5] [i_7 + 1] [i_5])))) || (((/* implicit */_Bool) var_4))));
                                var_18 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_15 [i_3 - 1] [i_4 + 1]), (arr_15 [i_3 - 2] [i_4 + 1])))) ? (max((arr_15 [i_3 + 1] [i_4 - 1]), (arr_15 [i_3 - 1] [i_4 + 1]))) : (max((arr_15 [i_3 - 1] [i_4 + 1]), (((/* implicit */unsigned int) (_Bool)1))))));
                            }
                            for (unsigned long long int i_8 = 0; i_8 < 24; i_8 += 4) 
                            {
                                var_19 -= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_10 [i_3 + 1] [i_3 - 1] [i_4 + 3])) ? (((/* implicit */int) arr_10 [i_3 - 1] [i_3 + 1] [i_4 + 3])) : (((/* implicit */int) arr_10 [i_3 - 1] [i_3 + 1] [i_4 - 1])))) % (((/* implicit */int) arr_10 [i_3 - 1] [i_3 + 1] [i_4 + 3]))));
                                arr_26 [i_2] [i_3] [i_4 - 1] [i_5] [i_4] = ((/* implicit */unsigned char) arr_13 [i_8] [i_5] [i_2]);
                                arr_27 [i_2] [i_3 + 1] [i_4 - 1] [i_5] [i_8] [i_8] [i_4] = ((/* implicit */_Bool) ((((/* implicit */int) arr_21 [i_2] [i_3 + 1] [i_3 + 1] [i_4] [i_8])) << (((max((((1691309877U) % (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [3U]))))), (((/* implicit */unsigned int) arr_16 [i_4] [i_4] [i_4 + 3] [i_4 + 1] [i_4 - 1] [i_4] [i_4 - 1])))) - (4294967242U)))));
                            }
                            var_20 = ((/* implicit */unsigned short) 4072746728548373106LL);
                            /* LoopSeq 1 */
                            for (long long int i_9 = 0; i_9 < 24; i_9 += 1) 
                            {
                                var_21 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_21 [i_2] [i_2] [i_3] [i_4] [(short)21])) || (((((/* implicit */_Bool) arr_13 [i_2] [i_2] [i_2])) || (((/* implicit */_Bool) arr_15 [i_4 - 1] [i_4 + 2])))))) ? (max((min((arr_14 [i_4]), (((/* implicit */unsigned int) (signed char)-51)))), (((/* implicit */unsigned int) arr_23 [(unsigned short)4] [2] [i_4] [i_5] [(unsigned short)4])))) : (((((/* implicit */_Bool) var_2)) ? (arr_28 [i_3] [i_3 + 1] [i_3 - 1] [i_4 + 3] [i_9]) : (((/* implicit */unsigned int) (+(((/* implicit */int) arr_17 [i_9] [i_5] [i_4] [i_4] [i_9])))))))));
                                var_22 = ((/* implicit */unsigned int) max((((/* implicit */long long int) arr_7 [i_9])), (((((/* implicit */long long int) ((/* implicit */int) arr_16 [i_9] [i_3] [i_3] [i_3] [i_3] [i_5] [i_4]))) % ((+(-4438761732601401891LL)))))));
                                var_23 = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_10 [i_2] [i_3 + 1] [i_9])) != (((/* implicit */int) arr_10 [3U] [i_3 + 1] [i_3 + 1])))) ? (((/* implicit */int) ((unsigned short) arr_17 [i_2] [i_3 - 1] [(_Bool)1] [i_2] [i_4 + 2]))) : (((((/* implicit */_Bool) arr_17 [i_2] [i_2] [i_4 + 3] [i_5] [i_4 + 3])) ? (((/* implicit */int) arr_10 [i_2] [i_2] [i_2])) : (((/* implicit */int) (signed char)-127))))));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
}
