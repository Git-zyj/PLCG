/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231694
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231694 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231694
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
    var_14 = ((/* implicit */_Bool) var_12);
    var_15 = ((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) (((!(((/* implicit */_Bool) 1878845617624666075LL)))) ? (((/* implicit */int) max(((short)16525), (((/* implicit */short) var_7))))) : (max((-1489732516), (((/* implicit */int) (unsigned short)65535))))))) : (var_2)));
    var_16 = ((/* implicit */long long int) (short)-16534);
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 15; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_17 -= (-(max((16252928), (((/* implicit */int) (_Bool)1)))));
                    var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) (~((+(((((/* implicit */_Bool) var_3)) ? (3616858398U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))))))));
                }
            } 
        } 
    } 
}
