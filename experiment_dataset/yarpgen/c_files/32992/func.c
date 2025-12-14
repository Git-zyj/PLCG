/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32992
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32992 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32992
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
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (unsigned char i_1 = 1; i_1 < 20; i_1 += 2) 
        {
            {
                arr_4 [17U] = ((/* implicit */long long int) ((short) (signed char)-126));
                /* LoopSeq 3 */
                for (long long int i_2 = 0; i_2 < 22; i_2 += 3) 
                {
                    var_13 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_5 [i_0] [i_0])))) == (((arr_5 [15ULL] [i_1]) ^ (((/* implicit */unsigned long long int) var_5)))))))) & (((((unsigned int) var_10)) ^ (((/* implicit */unsigned int) ((((/* implicit */int) var_9)) >> (((((/* implicit */int) var_11)) - (11626))))))))));
                    var_14 = ((/* implicit */int) ((4292870144U) >> (((33554431ULL) - (33554409ULL)))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 1; i_3 < 20; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 22; i_4 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) 3695744422U)) > (18446744073709551615ULL))))));
                                arr_13 [i_4] [i_2] [i_1 + 1] = ((/* implicit */unsigned int) ((((((/* implicit */int) ((((/* implicit */_Bool) (signed char)113)) && (((/* implicit */_Bool) (signed char)126))))) | (((int) arr_2 [i_1 + 2] [i_2] [i_2])))) >> (((((4292870144U) - (599222865U))) - (3693647268U)))));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (unsigned short i_5 = 2; i_5 < 20; i_5 += 3) 
                {
                    var_16 = ((/* implicit */_Bool) max((var_16), (((4000986198999611784ULL) == (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-30)) ^ (((/* implicit */int) (signed char)30)))))))));
                    var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) ((unsigned short) ((signed char) var_1))))));
                    var_18 += ((/* implicit */unsigned short) ((((var_5) - (((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [16])))) | (((((/* implicit */int) (signed char)125)) * (((/* implicit */int) (signed char)-106))))));
                    arr_17 [i_5] [i_1] [i_1 + 1] [8U] = ((((((/* implicit */long long int) 4292870144U)) / (arr_15 [(signed char)21] [4] [i_5]))) << (((/* implicit */int) ((((/* implicit */int) var_11)) > (var_5)))));
                }
                for (unsigned char i_6 = 0; i_6 < 22; i_6 += 1) 
                {
                    var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) ((((((4663952073167964181ULL) | (((/* implicit */unsigned long long int) -2147483644)))) & (((unsigned long long int) (signed char)-45)))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (_Bool)1)))))))));
                    arr_21 [i_6] [6LL] [(unsigned short)3] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) (_Bool)1))) && (((/* implicit */_Bool) 18446744073709551615ULL))));
                    arr_22 [i_0] [(_Bool)1] [i_6] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (signed char)-12)) + (2147483647))) >> (((/* implicit */int) (_Bool)1))));
                }
                var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((unsigned short) ((short) ((_Bool) var_6)))))));
                var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) ((9223372036854775797LL) >> (((/* implicit */int) (signed char)52)))))));
            }
        } 
    } 
    var_22 = ((/* implicit */signed char) ((((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-125))) | (3600907055U))) ^ (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (unsigned short)11408))))))) ^ (((/* implicit */unsigned int) ((((/* implicit */int) ((_Bool) (unsigned short)11408))) ^ (((/* implicit */int) ((_Bool) var_0))))))));
    var_23 = ((/* implicit */signed char) ((((((long long int) (unsigned char)130)) >> (((((/* implicit */int) ((short) 6865182780266921965ULL))) - (16341))))) << (((/* implicit */int) ((unsigned char) (signed char)30)))));
    var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */int) ((-1LL) == (((/* implicit */long long int) ((/* implicit */int) (signed char)125)))))) < (((var_12) >> (((/* implicit */int) (unsigned char)0))))))))));
}
