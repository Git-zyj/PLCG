/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213505
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213505 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213505
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
    for (int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                arr_5 [6ULL] [6LL] = ((/* implicit */long long int) var_10);
                arr_6 [(unsigned char)0] [(unsigned char)0] [(unsigned char)0] |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))) ? (((/* implicit */int) var_8)) : (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_10)) : (var_18)))))) ? (((/* implicit */int) ((signed char) arr_2 [i_0] [i_1]))) : ((+(((/* implicit */int) var_19))))));
            }
        } 
    } 
    var_20 = ((/* implicit */long long int) var_11);
    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1488968149)) ? (((((/* implicit */_Bool) (unsigned short)39871)) ? (var_13) : (((/* implicit */unsigned long long int) 3289360607U)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -2358399929693967296LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_19))) : (2358399929693967299LL))))))) && (((/* implicit */_Bool) var_9))));
    var_22 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_8))));
    var_23 = ((/* implicit */unsigned int) var_18);
}
