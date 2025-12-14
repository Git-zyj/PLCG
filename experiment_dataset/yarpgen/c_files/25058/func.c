/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25058
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
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) (unsigned short)15911))));
        arr_3 [i_0] [i_0] &= ((/* implicit */unsigned short) ((arr_1 [i_0]) * (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0])))));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (unsigned short i_2 = 1; i_2 < 23; i_2 += 2) 
            {
                {
                    var_19 -= ((/* implicit */unsigned long long int) max((max((((/* implicit */unsigned int) max((arr_6 [i_0]), ((unsigned short)15910)))), (max((2292251764U), (((/* implicit */unsigned int) (unsigned char)104)))))), (((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)8)) << (((((/* implicit */int) arr_6 [i_1])) - (24509)))))) - (((arr_2 [i_0] [i_0]) ^ (arr_2 [i_0] [i_1])))))));
                    arr_10 [i_0] [i_1] [i_2] = ((/* implicit */unsigned int) ((short) ((unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65519))) ^ (-2LL)))));
                }
            } 
        } 
    }
    for (long long int i_3 = 1; i_3 < 24; i_3 += 2) 
    {
        var_20 -= ((/* implicit */unsigned char) 2292251764U);
        arr_14 [i_3] = ((/* implicit */signed char) max((((/* implicit */unsigned short) ((-9223372036854775790LL) < (((/* implicit */long long int) ((/* implicit */int) (unsigned short)49624)))))), ((unsigned short)49609)));
        arr_15 [i_3] = ((/* implicit */unsigned int) -2LL);
    }
    for (unsigned short i_4 = 0; i_4 < 15; i_4 += 1) 
    {
        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((4294967281U), (((/* implicit */unsigned int) (_Bool)1))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_4] [i_4] [i_4])) ? (((/* implicit */int) arr_16 [i_4])) : (((/* implicit */int) ((unsigned char) (signed char)-16)))))) : (((((/* implicit */_Bool) arr_12 [i_4])) ? (arr_4 [i_4]) : (arr_4 [i_4])))));
        arr_19 [i_4] [i_4] = ((/* implicit */unsigned short) arr_12 [i_4]);
        var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_4 [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((18446744073709551614ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)6204))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_4] [i_4] [i_4] [i_4]))))))) : (((((/* implicit */unsigned int) ((/* implicit */int) max((arr_16 [i_4]), (arr_5 [i_4] [i_4]))))) & (min((((/* implicit */unsigned int) (unsigned short)15911)), (2292251743U))))))))));
        var_23 = ((/* implicit */long long int) arr_9 [i_4] [i_4]);
    }
    var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)152))) | (4294967281U))))));
}
