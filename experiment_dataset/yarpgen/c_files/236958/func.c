/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236958
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236958 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236958
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
    var_19 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_17))));
    var_20 = ((/* implicit */unsigned char) ((unsigned short) (unsigned char)178));
    var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_1)) ^ (((/* implicit */int) var_1))))) ? (((((/* implicit */long long int) ((/* implicit */int) var_12))) / (-7163362053108344466LL))) : (((/* implicit */long long int) ((/* implicit */int) var_13)))))) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_16)))))));
    var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) ((((/* implicit */int) var_18)) > (((/* implicit */int) (short)-1))))) : (((/* implicit */int) var_8))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                var_23 = ((/* implicit */unsigned long long int) max((var_23), (max((16735101709758857722ULL), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) arr_2 [i_0] [i_0] [i_1])), ((unsigned short)34934))))))));
                var_24 *= ((/* implicit */_Bool) var_8);
                /* LoopNest 3 */
                for (signed char i_2 = 4; i_2 < 11; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 3; i_4 < 11; i_4 += 3) 
                        {
                            {
                                var_25 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_2] [i_1] [i_1])) ? (((((/* implicit */unsigned int) (+(((/* implicit */int) arr_5 [i_1] [2LL] [i_4] [i_4]))))) & (1455066095U))) : (((/* implicit */unsigned int) ((((((/* implicit */int) var_1)) + (((/* implicit */int) arr_5 [i_1] [i_1] [8LL] [i_3])))) - (((/* implicit */int) (unsigned char)3)))))));
                                var_26 = ((/* implicit */short) arr_1 [i_0] [i_3]);
                                arr_11 [(signed char)2] [i_1] [8U] [4ULL] [i_4 + 1] [i_4] [i_4] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_14)), (min((((/* implicit */unsigned long long int) var_14)), (18446744073709551615ULL)))))) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((1455066099U) > (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))))));
                            }
                        } 
                    } 
                } 
                var_27 = ((/* implicit */unsigned char) min(((+(((((/* implicit */_Bool) var_13)) ? (arr_9 [i_1] [i_1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))), ((~(arr_9 [i_1] [i_1] [i_1])))));
                arr_12 [3ULL] = ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_1] [(unsigned short)8] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)217)) ? (1169701501U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)11))))) != (((/* implicit */unsigned int) ((int) var_6))))))) : (min((((/* implicit */unsigned long long int) arr_4 [i_0] [(short)3] [i_1])), (arr_6 [i_0] [i_0] [i_1])))));
            }
        } 
    } 
}
