/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23590
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23590 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23590
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
    var_19 = ((/* implicit */int) var_6);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) -8912225684294299113LL))))) <= (((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) arr_0 [i_1]))))));
                var_20 = ((/* implicit */int) min((((/* implicit */long long int) (!(((/* implicit */_Bool) ((var_6) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))))), (8912225684294299109LL)));
                var_21 -= ((/* implicit */unsigned int) -4154875778973550050LL);
                arr_6 [13ULL] [i_0] = ((/* implicit */int) ((unsigned long long int) min((((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)22309)) || (((/* implicit */_Bool) var_17))))), (var_7))));
            }
        } 
    } 
}
