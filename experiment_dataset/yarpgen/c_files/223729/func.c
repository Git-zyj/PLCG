/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223729
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223729 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223729
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
    var_18 = ((/* implicit */_Bool) (-(((/* implicit */int) var_11))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                var_19 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))))) || (((/* implicit */_Bool) 10173549440825120870ULL))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))) : (var_7)))) ? (((((/* implicit */_Bool) -5812753224495506038LL)) ? (12375132191610968898ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)192))))) : (((6071611882098582717ULL) & (((/* implicit */unsigned long long int) arr_1 [i_0]))))))));
                var_20 = ((/* implicit */unsigned short) var_5);
            }
        } 
    } 
}
