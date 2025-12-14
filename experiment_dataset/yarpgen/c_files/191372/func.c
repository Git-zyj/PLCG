/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191372
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
    var_14 = ((/* implicit */unsigned short) var_13);
    /* LoopNest 3 */
    for (unsigned short i_0 = 2; i_0 < 20; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 18; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    var_15 = ((/* implicit */unsigned short) var_13);
                    var_16 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? ((~(12802320979787705904ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned short)44539)))))))) ? (max((arr_5 [i_0 - 1] [i_1 + 2] [i_0 - 1] [i_1 - 1]), (((/* implicit */int) arr_2 [i_0 + 2] [i_0 + 1] [i_1 - 1])))) : (((/* implicit */int) var_3))));
                    var_17 = ((/* implicit */signed char) (+(9223372036854775807LL)));
                }
            } 
        } 
    } 
}
