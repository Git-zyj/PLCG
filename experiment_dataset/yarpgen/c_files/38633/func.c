/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38633
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38633 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38633
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
    var_19 = ((/* implicit */unsigned int) (!(((_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_15)))))));
    var_20 *= ((/* implicit */short) ((((/* implicit */_Bool) 2018561987)) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (max((min((((/* implicit */long long int) var_5)), (var_8))), (((/* implicit */long long int) max((var_3), ((_Bool)1))))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 13; i_0 += 4) 
    {
        for (unsigned int i_1 = 3; i_1 < 13; i_1 += 2) 
        {
            for (unsigned char i_2 = 1; i_2 < 12; i_2 += 4) 
            {
                {
                    arr_7 [i_1] [i_1 - 1] [(short)10] [i_2 + 1] = ((/* implicit */unsigned char) ((max((arr_6 [i_0] [i_1] [5U] [i_2 + 2]), (((/* implicit */unsigned long long int) var_10)))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_2), (var_17)))))));
                    var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_3) ? (arr_3 [i_1 - 1] [i_1]) : (arr_3 [i_0 + 1] [i_1])))) ? (((((/* implicit */_Bool) var_12)) ? (arr_3 [i_0 + 1] [i_1]) : (arr_3 [i_0 - 1] [i_1]))) : (((((/* implicit */_Bool) arr_3 [i_1 - 2] [i_1])) ? (((/* implicit */int) var_3)) : (arr_3 [i_0] [i_1])))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (10603499995263253515ULL)))));
}
