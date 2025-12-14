/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223066
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223066 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223066
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
    var_19 = ((/* implicit */signed char) max((var_1), (var_1)));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */_Bool) arr_2 [(_Bool)1]);
                var_20 |= ((/* implicit */int) arr_0 [i_0] [i_1]);
                arr_6 [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_1 [i_0])) << (((((((((arr_3 [i_0] [(signed char)5]) ^ (((/* implicit */long long int) arr_0 [i_1] [12])))) + (9223372036854775807LL))) >> (((/* implicit */int) min((arr_1 [i_0]), (((/* implicit */unsigned char) arr_2 [i_0]))))))) - (1230428620603008773LL)))));
                var_21 = ((/* implicit */int) min((((arr_0 [i_0] [i_1]) ^ (((/* implicit */unsigned int) arr_4 [i_1] [i_1] [i_1])))), (((/* implicit */unsigned int) arr_4 [i_0] [i_0] [5U]))));
                var_22 = ((/* implicit */short) max((((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [i_1])))))), (((min((((/* implicit */long long int) arr_1 [(unsigned short)11])), (arr_3 [i_0] [(short)12]))) / (((arr_3 [i_0] [i_0]) & (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0])))))))));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned char) var_14);
    var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_7)))) * (min((2195198500200299653LL), (var_4)))))) || (((/* implicit */_Bool) ((((_Bool) var_4)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) ((_Bool) var_10))))))));
    var_25 = ((/* implicit */int) max((((var_11) - (((/* implicit */long long int) ((var_2) ^ (((/* implicit */int) var_14))))))), (var_11)));
}
