/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51953
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51953 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51953
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
    var_17 = ((/* implicit */unsigned char) var_4);
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        var_18 *= (_Bool)1;
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    arr_9 [i_0] [i_1] [i_1] [i_0] = ((((/* implicit */_Bool) (signed char)52)) ? (arr_7 [i_0] [i_0] [i_0 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_13))));
                    /* LoopSeq 3 */
                    for (int i_3 = 2; i_3 < 8; i_3 += 2) 
                    {
                        var_19 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_0 + 1])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)95)) ? (((/* implicit */int) (signed char)4)) : (((/* implicit */int) (unsigned short)1631))))) : (var_11)));
                        var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((arr_5 [i_1]) < (((/* implicit */long long int) ((arr_0 [7LL] [i_1]) / (((/* implicit */int) (signed char)8))))))))));
                        var_21 = ((/* implicit */long long int) max((var_21), (((((/* implicit */_Bool) 72053195991416832LL)) ? (var_14) : (arr_12 [i_1] [(unsigned short)5] [i_2])))));
                        var_22 = ((long long int) (+(arr_6 [i_0] [i_1] [i_3 - 1])));
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        var_23 = ((/* implicit */unsigned char) ((_Bool) 8633655123252634913LL));
                        arr_16 [i_0] [2LL] [i_2] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_7 [i_0] [i_0 - 1] [i_2])) && (((/* implicit */_Bool) arr_0 [i_0 + 1] [i_0 - 1]))));
                        var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) arr_15 [i_0 - 1] [i_0] [i_0] [i_0]))));
                    }
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                    {
                        var_25 = ((((-567152962619448831LL) / (var_10))) * (((/* implicit */long long int) ((/* implicit */int) var_7))));
                        arr_19 [i_0] = ((/* implicit */int) (signed char)-111);
                        var_26 = ((/* implicit */_Bool) ((unsigned int) arr_15 [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_5 - 1]));
                        var_27 = (((!(((/* implicit */_Bool) 2082266371267893590LL)))) ? (((arr_18 [i_0] [i_1] [i_0] [i_2] [(unsigned char)4] [(signed char)1]) / (((/* implicit */long long int) ((/* implicit */int) arr_15 [9U] [i_1] [i_1] [i_1]))))) : (((/* implicit */long long int) arr_7 [i_0] [i_1] [(signed char)4])));
                    }
                    var_28 -= ((/* implicit */unsigned int) (unsigned short)15824);
                }
            } 
        } 
        var_29 = var_5;
        /* LoopSeq 1 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            var_30 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(64512U)))) ? (-1LL) : (arr_20 [i_6] [i_0] [i_0])));
            arr_23 [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(((/* implicit */int) (short)-6943)))))));
            var_31 = ((/* implicit */int) ((unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) - (var_9))));
            var_32 = ((3686714579361311173LL) != (((arr_20 [i_0 + 1] [i_0] [i_0 - 1]) & (((/* implicit */long long int) 0U)))));
        }
        var_33 = ((/* implicit */long long int) (+(((/* implicit */int) (signed char)-64))));
    }
}
