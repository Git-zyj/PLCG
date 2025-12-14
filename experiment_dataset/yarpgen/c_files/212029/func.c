/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212029
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212029 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212029
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
    var_17 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)251))) : (var_10)))) && (((/* implicit */_Bool) ((unsigned short) var_12)))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 24; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned int) max((arr_0 [i_1 - 1]), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_13)) ? (462515759U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))))) * (((/* implicit */unsigned int) (+(((/* implicit */int) (short)32753))))))))));
                var_18 = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) min((((/* implicit */unsigned int) (_Bool)0)), (arr_1 [i_0]))))))));
                /* LoopNest 2 */
                for (signed char i_2 = 4; i_2 < 22; i_2 += 3) 
                {
                    for (long long int i_3 = 2; i_3 < 24; i_3 += 3) 
                    {
                        {
                            arr_11 [(unsigned short)15] [i_2] = ((/* implicit */unsigned short) (-(20ULL)));
                            arr_12 [(short)0] [i_2] [2U] [(short)0] = arr_8 [i_2] [3] [i_2];
                            /* LoopSeq 3 */
                            for (long long int i_4 = 1; i_4 < 24; i_4 += 4) 
                            {
                                var_19 = ((/* implicit */long long int) max((-1762979532), (((/* implicit */int) (signed char)127))));
                                arr_15 [i_2] [i_3] [i_2 - 2] [i_1] [i_2] = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */unsigned long long int) arr_8 [i_2] [i_1] [i_1])) : (var_12)))) ? (((((/* implicit */_Bool) arr_9 [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_0]))) : (var_11))) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) (unsigned char)201)))))) < (((/* implicit */unsigned int) ((/* implicit */int) (short)0)))));
                                var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((arr_13 [i_2 + 1] [i_2 - 4] [i_3 + 1] [i_4 + 1] [23U]) + (((((/* implicit */unsigned long long int) 853365143)) + (arr_13 [i_0] [i_3] [i_3 - 1] [i_0] [i_0]))))))));
                                arr_16 [i_2] = arr_10 [i_1] [i_1 + 1] [i_3 - 2] [i_4 - 1];
                            }
                            /* vectorizable */
                            for (unsigned short i_5 = 0; i_5 < 25; i_5 += 2) 
                            {
                                arr_20 [i_5] [i_1] [(unsigned short)14] [i_3 - 1] [i_5] &= ((arr_18 [i_0] [i_1] [i_1] [i_3 - 1] [i_5] [i_5]) >= (arr_18 [i_5] [i_3 - 2] [10] [i_0] [10] [i_5]));
                                arr_21 [i_2] [i_0] [13ULL] [i_0] [i_0] [i_0] [i_2] = ((/* implicit */unsigned short) var_6);
                                var_21 = ((((/* implicit */_Bool) arr_10 [i_1] [i_1 - 3] [i_3 - 2] [i_3])) ? (((/* implicit */unsigned long long int) 536870912)) : (arr_18 [i_1] [i_1] [i_1 - 3] [i_1 - 3] [i_2 + 3] [i_2]));
                            }
                            for (short i_6 = 0; i_6 < 25; i_6 += 2) 
                            {
                                var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)18)) ? (((/* implicit */int) (unsigned char)245)) : (((/* implicit */int) (!((!(((/* implicit */_Bool) 2621032026U))))))))))));
                                arr_24 [i_6] [i_3 - 1] [i_2] [i_2] [i_0] [16ULL] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(arr_8 [i_2] [i_1 - 3] [i_2 + 3]))))));
                                arr_25 [12LL] [i_1] [i_2] [i_6] [i_6] |= ((/* implicit */unsigned int) ((((((/* implicit */long long int) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) (signed char)-37)) : (((/* implicit */int) (short)-32567))))) / (((((/* implicit */_Bool) (unsigned char)134)) ? (((/* implicit */long long int) ((/* implicit */int) arr_14 [(signed char)11]))) : (-1471339011499563649LL))))) & (((/* implicit */long long int) ((((((/* implicit */_Bool) (unsigned char)226)) ? (((/* implicit */int) (unsigned short)16097)) : (((/* implicit */int) arr_22 [i_0] [i_1 - 1] [(unsigned char)0] [i_3] [16U])))) | (((/* implicit */int) max((arr_10 [i_0] [i_2 + 1] [i_3] [i_2 + 1]), (((/* implicit */unsigned short) (unsigned char)240))))))))));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
}
