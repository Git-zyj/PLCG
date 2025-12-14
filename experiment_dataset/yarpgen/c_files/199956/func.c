/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199956
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199956 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199956
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
    for (long long int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        arr_11 [i_1] [(short)10] [i_2] [i_3] = ((/* implicit */int) ((arr_4 [i_1]) & (((/* implicit */unsigned long long int) -870451482))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 2) 
                        {
                            var_16 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_5 [i_2] [i_3] [i_4])) << (((arr_2 [i_0] [i_0]) - (2084750522U)))));
                            arr_15 [i_0] [i_1] [i_1] [i_1] [i_3] [i_4] [i_3] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) arr_14 [i_1] [i_1] [i_1] [i_1] [i_1])) ? (arr_7 [i_0] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1])))))));
                        }
                        arr_16 [i_0] [i_1] [i_3] [i_3] [i_2] [i_0] = ((/* implicit */unsigned long long int) ((int) arr_2 [i_1] [i_0]));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_5 = 0; i_5 < 22; i_5 += 2) 
                        {
                            var_17 *= ((/* implicit */unsigned char) arr_18 [i_1] [i_5] [i_5]);
                            arr_20 [i_0] [i_1] [i_1] [i_1] [i_3] [i_1] [i_5] = ((/* implicit */long long int) ((((/* implicit */int) ((18446744073709551615ULL) < (((/* implicit */unsigned long long int) -1099675899052070170LL))))) >> (((/* implicit */int) (unsigned char)22))));
                            var_18 ^= ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)91)))))));
                            arr_21 [i_1] [i_1] [i_1] [i_3] [i_5] = ((/* implicit */int) (!(((/* implicit */_Bool) (short)32767))));
                        }
                        for (short i_6 = 0; i_6 < 22; i_6 += 2) 
                        {
                            arr_25 [i_1] [(unsigned char)13] [i_2] [16LL] [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((unsigned char) (unsigned char)168));
                            arr_26 [i_6] [i_6] [i_1] [i_2] [i_1] [(_Bool)1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 870451482)) ? (((/* implicit */int) (unsigned char)255)) : (-870451490)));
                            arr_27 [i_6] [i_1] [i_2] [i_1] [i_0] = ((/* implicit */int) ((unsigned int) arr_14 [i_0] [i_1] [i_1] [i_3] [i_6]));
                        }
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_7 = 0; i_7 < 22; i_7 += 4) 
                    {
                        for (signed char i_8 = 1; i_8 < 20; i_8 += 2) 
                        {
                            {
                                var_19 += ((/* implicit */long long int) ((min((((((/* implicit */_Bool) arr_33 [i_8] [(short)6] [i_2] [i_1] [i_2] [i_0] [i_0])) ? (7787223749350523540ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)149))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_28 [i_1] [i_2] [i_0]))))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_0] [i_7]))))))));
                                var_20 = ((/* implicit */long long int) min((min((((/* implicit */unsigned long long int) ((_Bool) (_Bool)0))), (max((((/* implicit */unsigned long long int) var_13)), (14922020269343684707ULL))))), (((/* implicit */unsigned long long int) max((((/* implicit */int) (!(var_2)))), (((int) arr_4 [i_1])))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_9 = 0; i_9 < 22; i_9 += 3) 
                    {
                        for (signed char i_10 = 0; i_10 < 22; i_10 += 1) 
                        {
                            {
                                var_21 |= ((/* implicit */long long int) ((((((((/* implicit */int) min((((/* implicit */short) (signed char)15)), ((short)-11525)))) + (2147483647))) >> (((/* implicit */int) arr_9 [i_0] [i_0] [i_2] [i_9] [i_10])))) >= (((/* implicit */int) arr_10 [i_0] [i_0]))));
                                var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_14 [i_10] [i_10] [i_1] [i_10] [i_10])) % (((/* implicit */int) arr_14 [(_Bool)1] [i_1] [i_1] [(_Bool)1] [i_10]))))) && (((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)13)) ? (((/* implicit */int) var_7)) : (var_8)))), (((long long int) arr_33 [i_0] [i_0] [i_1] [(short)10] [(_Bool)1] [i_0] [i_0])))))));
                                var_23 += max((((((/* implicit */int) arr_23 [i_10] [i_1] [i_2] [i_0] [i_2] [i_2])) >> (((arr_39 [i_10] [i_0] [i_0] [i_0]) - (9182798718878123425ULL))))), (((((/* implicit */int) arr_23 [i_0] [i_0] [i_0] [i_2] [i_0] [i_0])) ^ (((/* implicit */int) arr_23 [i_0] [i_0] [i_2] [i_0] [i_9] [(short)0])))));
                                arr_40 [(signed char)8] [(signed char)8] [i_1] [i_9] [(signed char)8] = ((/* implicit */short) ((((/* implicit */_Bool) ((6364487470574196332LL) / (((/* implicit */long long int) ((/* implicit */int) arr_32 [i_1] [i_1] [i_2] [i_9] [i_10])))))) ? (arr_35 [i_1] [i_9] [i_1] [i_1]) : (0ULL)));
                            }
                        } 
                    } 
                    arr_41 [i_2] [i_2] [i_2] [i_0] &= ((/* implicit */_Bool) max(((+(((long long int) -679655624)))), (((/* implicit */long long int) ((max((16447416689800680128ULL), (((/* implicit */unsigned long long int) arr_13 [13ULL] [i_2])))) == (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-12531))))))))));
                }
            } 
        } 
    } 
    var_24 &= ((/* implicit */unsigned char) (+(((/* implicit */int) min((((/* implicit */short) (signed char)-15)), ((short)12530))))));
}
