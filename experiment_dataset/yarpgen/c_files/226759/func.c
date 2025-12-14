/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226759
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226759 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226759
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
    var_19 |= ((/* implicit */long long int) var_1);
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        arr_2 [i_0] &= ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */long long int) var_9)) > (-3416329547841866013LL))))));
        arr_3 [i_0] [i_0] = ((/* implicit */int) (unsigned short)55802);
    }
    for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 2) 
    {
        arr_7 [i_1] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) -3416329547841866013LL)) < (10310304755701780745ULL)));
        var_20 *= ((/* implicit */unsigned short) 3416329547841866012LL);
    }
    for (short i_2 = 1; i_2 < 14; i_2 += 3) 
    {
        var_21 *= ((/* implicit */unsigned int) -3416329547841866013LL);
        arr_11 [i_2] = ((/* implicit */long long int) arr_9 [i_2]);
        var_22 = ((/* implicit */int) arr_10 [i_2]);
    }
    var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) var_8))));
}
