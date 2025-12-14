/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44723
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44723 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44723
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
    var_12 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (!((!(((/* implicit */_Bool) (signed char)-94))))))) : ((~(1043857757)))));
    var_13 ^= ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (unsigned char)102))))) ? (((((/* implicit */_Bool) (unsigned char)54)) ? (((/* implicit */int) (signed char)110)) : (-1043857744))) : ((~(0)))))));
    var_14 = ((/* implicit */signed char) (((!((!(((/* implicit */_Bool) 70771900U)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 2623630349U))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 7600738327686639863ULL)) ? (((/* implicit */unsigned long long int) 1043857757)) : (var_7)))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        arr_2 [(unsigned char)6] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(var_4)))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_0 [i_0] [i_0])))) : (((/* implicit */int) arr_0 [i_0] [i_0]))));
        var_15 -= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (var_5))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) var_8);
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                for (int i_3 = 0; i_3 < 14; i_3 += 1) 
                {
                    {
                        var_16 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_7 [i_0]))));
                        var_17 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 4224195380U)) ? (((/* implicit */int) (signed char)-38)) : (((/* implicit */int) (unsigned char)96)))))));
                        var_18 |= (((!(((/* implicit */_Bool) arr_4 [i_0] [i_1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 2796587292U)))))) : (arr_4 [i_1] [i_1]));
                    }
                } 
            } 
        } 
    }
    for (unsigned int i_4 = 2; i_4 < 20; i_4 += 4) 
    {
        arr_14 [i_4 + 1] = ((/* implicit */int) (!((!(((/* implicit */_Bool) (+(2083999257))))))));
        arr_15 [i_4] = ((/* implicit */signed char) (~((((!(((/* implicit */_Bool) arr_12 [i_4])))) ? ((~(((/* implicit */int) var_10)))) : ((~(((/* implicit */int) (signed char)78))))))));
        var_19 = ((/* implicit */unsigned long long int) 4224195413U);
        var_20 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) 70771915U))));
        var_21 *= ((/* implicit */unsigned long long int) (~(639108247)));
    }
}
