/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249018
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249018 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249018
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
    var_13 = ((/* implicit */short) min((max((((/* implicit */unsigned long long int) max((((/* implicit */long long int) (short)-1)), (var_8)))), (max((((/* implicit */unsigned long long int) (unsigned short)35481)), (var_5))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((341095330U), (((/* implicit */unsigned int) (unsigned short)31778))))) ? (((unsigned int) var_6)) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 1785815192)) ? (((/* implicit */int) (unsigned char)121)) : (((/* implicit */int) (unsigned short)33727))))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (unsigned short i_1 = 3; i_1 < 20; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_0] [i_1] = ((/* implicit */unsigned int) var_9);
                var_14 = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_9)) : (67108864))) >> (((/* implicit */int) arr_1 [i_1 - 2] [i_1 - 2])))) <= (((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) var_1)) : (-67108885)))));
            }
        } 
    } 
}
