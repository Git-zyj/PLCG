/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43722
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
    var_14 = ((/* implicit */_Bool) var_0);
    var_15 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) != (max((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_10))))), (((var_6) * (((/* implicit */unsigned long long int) var_13))))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 4) /* same iter space */
    {
        var_16 |= ((/* implicit */unsigned short) (((-9223372036854775807LL - 1LL)) & (9223372036854775790LL)));
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_7 [i_2] [i_1] [i_1] = ((/* implicit */int) max((((((/* implicit */_Bool) (signed char)29)) ? (9223372036854775807LL) : (-9223372036854775791LL))), (((/* implicit */long long int) ((((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) var_0)))) ? (((var_3) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_0 [i_1] [7ULL])))) : (((/* implicit */int) var_5)))))));
                    var_17 = ((/* implicit */int) var_12);
                    var_18 = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((_Bool) arr_2 [i_1]))), (((((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) var_0)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))) : (max((var_2), (var_2)))))));
                    var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) (-(1412735266U))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (short i_3 = 0; i_3 < 12; i_3 += 3) 
        {
            for (unsigned short i_4 = 2; i_4 < 11; i_4 += 1) 
            {
                {
                    var_20 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-30)) && (((/* implicit */_Bool) 15038413133939528017ULL))))), (((((/* implicit */_Bool) min((arr_9 [i_0] [i_0]), (arr_5 [i_0] [i_3] [i_0])))) ? (((((/* implicit */_Bool) var_11)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_3] [i_4 - 2]))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) arr_13 [(short)8] [(short)8] [i_4]))))))))));
                    arr_14 [i_4] = ((/* implicit */unsigned char) (((-((-(arr_12 [i_0] [i_3] [i_3] [i_3]))))) & (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_1)) + (((/* implicit */int) var_11))))) && (var_1)))))));
                }
            } 
        } 
        var_21 ^= ((/* implicit */unsigned char) (+(var_2)));
        arr_15 [i_0] = (!(((/* implicit */_Bool) (-(((((/* implicit */int) var_7)) % (((/* implicit */int) var_10))))))));
    }
    for (unsigned char i_5 = 0; i_5 < 12; i_5 += 4) /* same iter space */
    {
        arr_20 [i_5] &= ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_0 [i_5] [i_5])))), (((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))))) ? (arr_12 [i_5] [i_5] [i_5] [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned short) var_4))) && (((/* implicit */_Bool) max((arr_12 [i_5] [1] [i_5] [1]), (((/* implicit */unsigned int) var_3))))))))));
        var_22 *= var_9;
    }
    var_23 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)27))));
}
