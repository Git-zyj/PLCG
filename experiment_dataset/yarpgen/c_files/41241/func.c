/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41241
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41241 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41241
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
    var_19 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(var_14)))) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))));
    var_20 = ((/* implicit */int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_8))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_6)));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_15))) / (arr_1 [i_0] [i_0])))) ? (arr_0 [i_0]) : (((((/* implicit */int) arr_2 [i_0])) * (((/* implicit */int) arr_2 [i_0])))))))));
        var_22 = ((/* implicit */unsigned int) min((((/* implicit */long long int) (~(arr_0 [i_0])))), ((-(arr_1 [i_0] [i_0])))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 19; i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] [i_1] = ((/* implicit */long long int) (+(arr_3 [i_1] [i_1])));
        var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_17))))) ? (((/* implicit */int) arr_4 [i_1] [i_1])) : (((((/* implicit */int) arr_4 [i_1] [i_1])) >> (((((/* implicit */int) var_3)) - (50474)))))));
        /* LoopNest 2 */
        for (unsigned char i_2 = 2; i_2 < 18; i_2 += 1) 
        {
            for (unsigned long long int i_3 = 1; i_3 < 17; i_3 += 1) 
            {
                {
                    var_24 -= ((/* implicit */unsigned int) var_9);
                    var_25 = ((/* implicit */unsigned short) 2147483647);
                }
            } 
        } 
        var_26 = ((/* implicit */unsigned char) arr_11 [i_1] [(short)16] [i_1] [i_1]);
        arr_13 [i_1] [i_1] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_7 [i_1]))));
    }
    for (unsigned char i_4 = 0; i_4 < 19; i_4 += 1) /* same iter space */
    {
        var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((min((0ULL), (18446744073709551606ULL))) - (min((((/* implicit */unsigned long long int) arr_9 [i_4])), (var_6)))))) ? (arr_5 [i_4] [i_4]) : (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_11 [i_4] [(signed char)12] [i_4] [i_4])), (arr_3 [i_4] [i_4]))))));
        arr_16 [i_4] = ((/* implicit */short) (+(((((/* implicit */int) arr_4 [i_4] [i_4])) * (((/* implicit */int) arr_4 [i_4] [i_4]))))));
    }
}
