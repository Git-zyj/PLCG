/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44646
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44646 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44646
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                var_20 *= ((/* implicit */signed char) ((((/* implicit */_Bool) 2235110100U)) && (((/* implicit */_Bool) max((((/* implicit */long long int) arr_1 [i_1])), (max((((/* implicit */long long int) -1)), (arr_0 [i_0] [i_1]))))))));
                var_21 = ((((/* implicit */long long int) var_18)) / (arr_4 [i_0]));
                arr_5 [i_0] [i_0] = ((/* implicit */int) (~(min((((/* implicit */unsigned int) ((signed char) var_7))), (((((/* implicit */_Bool) arr_4 [i_0])) ? (arr_1 [i_1]) : (((/* implicit */unsigned int) arr_3 [i_0]))))))));
            }
        } 
    } 
    var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) var_6))));
    /* LoopNest 2 */
    for (short i_2 = 0; i_2 < 14; i_2 += 4) 
    {
        for (int i_3 = 3; i_3 < 13; i_3 += 2) 
        {
            {
                var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) var_16))));
                arr_10 [i_3 - 2] [i_2] &= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_3 - 2])) - (((/* implicit */int) arr_7 [i_3 - 2]))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)31)) ^ (((/* implicit */int) arr_7 [i_3 - 2]))))) : (min((((/* implicit */unsigned int) (short)3968)), (2059857196U)))));
            }
        } 
    } 
    var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) var_5))));
    var_25 ^= ((/* implicit */unsigned long long int) max((((((/* implicit */int) var_7)) >= (((((/* implicit */int) (unsigned short)2)) << (((var_2) + (6305932540960301565LL))))))), ((!(((/* implicit */_Bool) (unsigned char)64))))));
}
