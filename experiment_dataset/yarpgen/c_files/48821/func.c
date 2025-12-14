/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48821
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48821 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48821
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
    var_19 = ((/* implicit */unsigned long long int) 2101897154);
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 20; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                arr_8 [i_0] [(signed char)8] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) (signed char)43)), (min((((/* implicit */long long int) (_Bool)0)), (9223372036854775807LL))))))));
                var_20 += ((/* implicit */signed char) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned long long int) (-(4232415749U)))) : (3903268702670389251ULL)));
                /* LoopSeq 2 */
                for (long long int i_2 = 1; i_2 < 23; i_2 += 2) /* same iter space */
                {
                    var_21 = ((/* implicit */_Bool) (((-(2039195361975730441ULL))) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0 + 3] [i_0 - 2] [i_0 - 1])))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        for (short i_4 = 4; i_4 < 23; i_4 += 4) 
                        {
                            {
                                arr_16 [i_0 - 1] [i_0 + 2] [i_0] [10ULL] [i_3] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0])) ? ((~(((/* implicit */int) var_10)))) : (((/* implicit */int) arr_1 [i_0 + 4]))));
                                arr_17 [i_0] = ((/* implicit */long long int) min((max((min((arr_10 [i_4] [i_4] [i_4] [18]), (((/* implicit */unsigned long long int) var_7)))), (((/* implicit */unsigned long long int) ((unsigned short) arr_10 [i_0] [i_1] [i_2 + 1] [i_3]))))), (((/* implicit */unsigned long long int) ((unsigned int) arr_5 [i_0])))));
                                arr_18 [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((arr_9 [(unsigned short)7] [i_2 + 1] [i_3] [i_4 + 1]) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (2307113878U)))))))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) ((((/* implicit */_Bool) (-(max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (short)31151))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)111))))) ? (((/* implicit */int) min(((unsigned char)34), (((/* implicit */unsigned char) var_14))))) : (((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_1] [i_2])) ? (((/* implicit */int) arr_7 [20ULL] [(unsigned short)12] [20ULL])) : (((/* implicit */int) (unsigned char)181))))))) : (min((((/* implicit */unsigned long long int) arr_12 [i_0 + 1] [i_2 - 1] [i_2 - 1] [(short)16] [i_2])), (arr_10 [i_0 + 3] [(_Bool)1] [(_Bool)1] [(_Bool)1]))))))));
                    var_23 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((9223372036854775807LL), (((/* implicit */long long int) arr_1 [i_2 - 1]))))) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_2 + 1])))));
                }
                for (long long int i_5 = 1; i_5 < 23; i_5 += 2) /* same iter space */
                {
                    arr_22 [i_0] [i_0] [i_0 + 2] [i_0] = ((/* implicit */short) max((((((/* implicit */int) arr_4 [i_0])) - (((/* implicit */int) arr_15 [i_0] [i_1] [i_0] [i_5 + 1] [i_1])))), (((/* implicit */int) min((((/* implicit */short) arr_15 [i_0] [i_1] [(unsigned short)8] [i_5 + 1] [i_0])), (arr_4 [i_0]))))));
                    arr_23 [(signed char)16] [i_0] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_0])) | (((/* implicit */int) arr_1 [i_1]))))) ? (((((/* implicit */_Bool) arr_11 [2ULL] [2ULL] [i_0] [i_0 + 1] [i_0 + 1] [i_0])) ? (var_11) : (((/* implicit */unsigned long long int) 2416400322U)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)133)) ? (((/* implicit */int) arr_5 [i_0])) : (((/* implicit */int) arr_4 [i_0])))))))));
                    arr_24 [2LL] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 1987853419U)) ? (3903268702670389251ULL) : (((/* implicit */unsigned long long int) var_8))))))))) : (((((/* implicit */_Bool) (short)-64)) ? (3903268702670389251ULL) : (((/* implicit */unsigned long long int) 2307113878U))))));
                }
            }
        } 
    } 
}
