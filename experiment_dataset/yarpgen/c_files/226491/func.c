/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226491
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226491 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226491
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
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 15; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 16; i_1 += 3) 
        {
            for (unsigned char i_2 = 1; i_2 < 17; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */_Bool) arr_1 [i_0]);
                    var_20 *= ((/* implicit */_Bool) min((arr_4 [i_0] [i_0] [i_2 + 1]), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0 + 2])) || (((/* implicit */_Bool) arr_5 [i_0] [i_1 + 2] [i_2])))))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (long long int i_3 = 1; i_3 < 14; i_3 += 2) 
    {
        var_21 = ((/* implicit */int) var_14);
        var_22 *= ((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) arr_1 [(short)4])) ? (((/* implicit */long long int) arr_11 [i_3])) : (var_0))) % (((/* implicit */long long int) (-(arr_11 [i_3])))))) >> (((((((var_17) / (((/* implicit */long long int) ((/* implicit */int) var_2))))) / (((/* implicit */long long int) ((var_7) * (((/* implicit */unsigned int) var_3))))))) - (64636LL)))));
        var_23 = ((/* implicit */_Bool) max(((+(max((arr_10 [i_3 + 1]), (((/* implicit */long long int) var_10)))))), (((/* implicit */long long int) arr_1 [(short)2]))));
        var_24 = ((/* implicit */long long int) (~(879209410U)));
    }
}
