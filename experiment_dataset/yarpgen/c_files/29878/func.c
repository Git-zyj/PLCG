/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29878
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
    var_13 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) min((15), (((/* implicit */int) var_9))))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) var_10)) : (var_7))))))));
    var_14 = ((/* implicit */_Bool) var_7);
    /* LoopNest 3 */
    for (signed char i_0 = 3; i_0 < 14; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                {
                    var_15 = ((/* implicit */unsigned short) ((var_3) >> (((((long long int) 18446744073709551615ULL)) + (17LL)))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        var_16 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_7 [i_0 - 3] [i_3 - 1]))));
                        /* LoopSeq 1 */
                        for (unsigned char i_4 = 0; i_4 < 17; i_4 += 3) 
                        {
                            var_17 *= ((/* implicit */int) ((((unsigned int) arr_8 [4LL] [12U] [i_2] [i_1])) >> (((((/* implicit */int) var_2)) - (61422)))));
                            var_18 = ((/* implicit */long long int) ((var_3) >> (((arr_0 [i_0 - 3] [i_0 - 1]) - (1792016796U)))));
                            arr_12 [i_3] [6] = ((/* implicit */unsigned short) arr_5 [i_0] [0LL] [(signed char)5]);
                            arr_13 [i_3] [i_1] [(_Bool)0] [i_1] [6ULL] = ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned char)67))));
                        }
                        arr_14 [i_0] [i_3] [(unsigned char)7] [13LL] = ((/* implicit */unsigned int) (~(var_1)));
                    }
                    for (short i_5 = 0; i_5 < 17; i_5 += 3) 
                    {
                        var_19 = ((/* implicit */signed char) 2960143980U);
                        var_20 = ((/* implicit */short) (+(min((10698653842996772837ULL), (min((var_3), (((/* implicit */unsigned long long int) arr_0 [(unsigned short)9] [(signed char)10]))))))));
                        var_21 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(347880024U))))));
                    }
                    /* LoopSeq 2 */
                    for (unsigned int i_6 = 1; i_6 < 15; i_6 += 3) 
                    {
                        arr_20 [i_0] [i_1] [(unsigned char)8] [(short)5] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */short) var_5)), (arr_8 [i_0] [i_0 + 1] [6ULL] [i_2])))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0 - 2])) || (var_5)))) : (((((/* implicit */int) (unsigned short)57683)) / (var_1)))));
                        var_22 = ((((var_9) ? (min((var_3), (var_3))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_9 [i_1] [i_1] [i_2] [12U]), (((/* implicit */unsigned short) arr_8 [i_1] [i_2] [i_1] [i_1])))))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))));
                        var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) ((max((((/* implicit */int) arr_10 [(_Bool)1] [i_0 - 2] [i_1] [i_0] [2U] [i_2])), (var_1))) / (((/* implicit */int) arr_11 [(short)4] [i_0 - 2] [i_2] [16] [(unsigned char)16] [(signed char)10])))))));
                    }
                    /* vectorizable */
                    for (signed char i_7 = 1; i_7 < 16; i_7 += 3) 
                    {
                        arr_23 [8] [2ULL] [(_Bool)1] [13LL] [(unsigned char)3] [i_7] = ((/* implicit */unsigned short) ((_Bool) 10698653842996772825ULL));
                        var_24 = ((/* implicit */short) ((((/* implicit */int) var_5)) >> (((((/* implicit */int) var_0)) - (60950)))));
                        arr_24 [16] [i_1] [i_2] [i_7] |= ((/* implicit */_Bool) (((~(var_8))) ^ (((/* implicit */int) arr_22 [(_Bool)1] [i_1] [i_1] [i_7]))));
                    }
                }
            } 
        } 
    } 
    var_25 = var_0;
}
