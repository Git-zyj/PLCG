/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41014
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41014 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41014
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
    var_20 = ((/* implicit */unsigned short) var_19);
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            var_21 -= ((/* implicit */short) max((max((((/* implicit */long long int) (-(var_7)))), (0LL))), (((/* implicit */long long int) ((unsigned char) 3040233322U)))));
            var_22 |= ((/* implicit */short) (!(((((/* implicit */_Bool) var_17)) || (((/* implicit */_Bool) var_12))))));
        }
        for (long long int i_2 = 1; i_2 < 14; i_2 += 2) 
        {
            var_23 = ((/* implicit */unsigned char) (!(((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned short)0)), (18019950748367833205ULL)))) || (((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1)))))))));
            var_24 |= ((/* implicit */signed char) ((unsigned long long int) min(((_Bool)1), (arr_2 [i_2 - 1] [i_2] [i_2 + 1]))));
            var_25 = ((/* implicit */_Bool) max((var_25), ((!(((/* implicit */_Bool) (unsigned char)168))))));
            arr_6 [i_0] = ((/* implicit */long long int) (+(arr_3 [i_0])));
            arr_7 [i_0] [(unsigned char)12] [i_0] = ((/* implicit */long long int) var_11);
        }
        var_26 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)660)) ? (((/* implicit */int) (short)10968)) : (-7)))) != (min((((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)99))))), (arr_4 [11] [11] [i_0])))));
        var_27 -= ((/* implicit */signed char) max((arr_3 [i_0]), (arr_3 [i_0])));
        var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) 1326355044616517937LL))));
    }
    for (unsigned short i_3 = 1; i_3 < 21; i_3 += 4) 
    {
        var_29 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) arr_9 [i_3] [i_3 + 1]))) ? (1326355044616517937LL) : (((/* implicit */long long int) ((min((1164066161U), (((/* implicit */unsigned int) (unsigned char)45)))) | (((/* implicit */unsigned int) ((/* implicit */int) var_15))))))));
        var_30 = ((/* implicit */unsigned char) (~(((/* implicit */int) max((var_6), ((unsigned char)145))))));
        var_31 += ((/* implicit */signed char) (unsigned short)668);
        arr_11 [i_3] [i_3] = ((/* implicit */unsigned long long int) ((var_7) <= (((/* implicit */unsigned int) 424332680))));
    }
    for (long long int i_4 = 4; i_4 < 12; i_4 += 2) 
    {
        var_32 &= ((/* implicit */_Bool) var_4);
        var_33 = ((/* implicit */unsigned char) max((var_33), (((/* implicit */unsigned char) arr_4 [i_4 - 4] [i_4] [i_4]))));
        var_34 = ((/* implicit */_Bool) max((var_34), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [1LL] [(unsigned short)7])) ? (((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)192))))) & (((/* implicit */int) var_15))))) : (max((((/* implicit */long long int) (short)-5236)), (-8233545852464340483LL))))))));
    }
}
