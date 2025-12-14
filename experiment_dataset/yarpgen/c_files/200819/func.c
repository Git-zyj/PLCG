/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200819
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200819 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200819
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
    var_13 = ((/* implicit */unsigned short) var_9);
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 13; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 14; i_1 += 2) 
        {
            {
                arr_4 [i_1 - 2] [i_0] [i_0] = ((/* implicit */unsigned short) var_7);
                var_14 = (i_0 % 2 == zero) ? (((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) min((((/* implicit */int) arr_3 [i_0])), (((((/* implicit */int) (unsigned short)18500)) - (var_7)))))), (max((max((((/* implicit */unsigned long long int) var_5)), (var_12))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) >> (((arr_0 [i_0]) + (256883040))))))))))) : (((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) min((((/* implicit */int) arr_3 [i_0])), (((((/* implicit */int) (unsigned short)18500)) - (var_7)))))), (max((max((((/* implicit */unsigned long long int) var_5)), (var_12))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) >> (((((arr_0 [i_0]) + (256883040))) - (1336834556)))))))))));
                var_15 = ((/* implicit */unsigned short) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_1 + 2]))))), ((+(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)57344))) != (arr_2 [i_0] [i_1]))))))));
                var_16 = ((/* implicit */unsigned long long int) min(((~(((((/* implicit */_Bool) var_1)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_10))))))), (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)197)) * (((/* implicit */int) (signed char)-16)))))));
            }
        } 
    } 
    var_17 = ((/* implicit */signed char) var_1);
}
