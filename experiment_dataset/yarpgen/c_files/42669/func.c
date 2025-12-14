/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42669
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42669 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42669
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
    var_19 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_18))))), (((((/* implicit */_Bool) 994157895)) ? (((/* implicit */unsigned long long int) -994157895)) : (1106933225364780102ULL)))));
    var_20 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((var_3), ((~(-994157895))))))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        var_21 = ((/* implicit */unsigned long long int) max((var_21), (((arr_0 [i_0] [(unsigned short)14]) & ((+(((((/* implicit */_Bool) var_4)) ? (1106933225364780096ULL) : (17339810848344771519ULL)))))))));
        var_22 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0]))));
    }
    for (int i_1 = 0; i_1 < 14; i_1 += 1) 
    {
        var_23 = -1211398776;
        var_24 = (~(min((6218594619358615782ULL), (17684495779836566109ULL))));
        /* LoopSeq 1 */
        for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 3) 
        {
            var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((unsigned long long int) var_2))))) ? (251658240) : (((/* implicit */int) (signed char)60))));
            var_26 = ((/* implicit */int) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) ((-994157887) != (994157895))))))), (arr_6 [8] [i_2])));
            /* LoopSeq 1 */
            for (signed char i_3 = 0; i_3 < 14; i_3 += 1) 
            {
                var_27 = ((/* implicit */int) max((min((((/* implicit */unsigned long long int) arr_11 [i_2])), (17339810848344771527ULL))), (((((/* implicit */_Bool) arr_11 [i_1])) ? (11254055976053645495ULL) : (17339810848344771521ULL)))));
                arr_12 [i_1] [i_1] [i_3] [i_3] = ((/* implicit */int) 13194139533312ULL);
                var_28 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_11 [i_2]))));
            }
            var_29 = ((/* implicit */signed char) (~(1555461582)));
        }
        var_30 = (-(max((((/* implicit */int) max((var_6), (var_17)))), (arr_9 [i_1] [i_1] [i_1]))));
    }
}
