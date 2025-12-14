/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227945
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227945 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227945
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
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        var_19 = ((/* implicit */short) (~(((var_16) + (((/* implicit */int) var_4))))));
        arr_2 [i_0] = ((/* implicit */long long int) ((signed char) (unsigned char)95));
        var_20 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) + (((unsigned long long int) var_9))));
    }
    for (unsigned int i_1 = 1; i_1 < 12; i_1 += 1) 
    {
        var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */int) var_3)) > (arr_5 [i_1 + 1])))))));
        var_22 = ((/* implicit */unsigned long long int) ((max((((/* implicit */unsigned int) arr_3 [i_1])), (var_2))) * ((~((~(3921206459U)))))));
        var_23 = ((/* implicit */unsigned char) (+(max((max((((/* implicit */unsigned long long int) (unsigned char)248)), (var_6))), (((/* implicit */unsigned long long int) 2670390644690493796LL))))));
        var_24 = ((/* implicit */unsigned short) (~(max((((/* implicit */unsigned long long int) ((signed char) var_14))), (min((6064240650434311142ULL), (((/* implicit */unsigned long long int) 373760837U))))))));
    }
    for (long long int i_2 = 0; i_2 < 25; i_2 += 4) 
    {
        arr_10 [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_2] [i_2])) ? (arr_9 [i_2] [i_2]) : (arr_9 [i_2] [i_2])))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)57))))) : (((((/* implicit */_Bool) -2644659865784236574LL)) ? (var_6) : (((/* implicit */unsigned long long int) arr_1 [i_2] [i_2]))))));
        var_25 *= ((/* implicit */unsigned long long int) ((1971605981) >> (((3921206459U) - (3921206428U)))));
    }
    /* LoopNest 2 */
    for (unsigned char i_3 = 0; i_3 < 13; i_3 += 4) 
    {
        for (unsigned int i_4 = 0; i_4 < 13; i_4 += 2) 
        {
            {
                arr_17 [i_3] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((long long int) var_8))) | ((~(18446744073709551615ULL)))));
                var_26 = ((/* implicit */unsigned long long int) min((var_26), (((unsigned long long int) ((((/* implicit */_Bool) (+(arr_9 [i_3] [14U])))) ? (((/* implicit */unsigned long long int) (-(var_16)))) : (((((/* implicit */unsigned long long int) 3921206458U)) | (18446744073709551615ULL))))))));
                arr_18 [7LL] [i_3] [i_3] = ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_0))) >= (var_7))))));
            }
        } 
    } 
    var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) (unsigned char)7))));
}
