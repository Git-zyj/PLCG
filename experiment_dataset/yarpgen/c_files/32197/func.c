/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32197
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32197 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32197
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
    var_17 |= ((/* implicit */unsigned short) var_8);
    var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) 8884417371472246930ULL))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (int i_1 = 2; i_1 < 19; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    var_19 ^= ((/* implicit */unsigned short) var_6);
                    var_20 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)45619)) ? (arr_0 [i_1 - 2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))) ? (((((/* implicit */_Bool) (short)-7535)) ? (arr_0 [i_1 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))) : (((((/* implicit */_Bool) arr_0 [i_1 - 1])) ? (arr_0 [i_1 - 1]) : (var_1)))));
                    var_21 = ((/* implicit */long long int) min((var_21), (min((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))) % (arr_9 [i_0] [i_1] [i_2])))), (((((var_0) / (3LL))) / (((/* implicit */long long int) ((4294967295U) / (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((max((var_5), (((/* implicit */long long int) var_6)))), (((/* implicit */long long int) max((var_3), (var_2)))))))));
}
