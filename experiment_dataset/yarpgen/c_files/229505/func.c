/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229505
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229505 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229505
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
    for (short i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                var_10 += ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((unsigned short) (-(((/* implicit */int) arr_3 [8LL])))))), (((((/* implicit */_Bool) arr_0 [i_0])) ? (6157559157955901303LL) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [(short)0])))))));
                var_11 += ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_0])) ? (min((((/* implicit */long long int) (signed char)56)), (70364449210368LL))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-26116))))))));
                var_12 -= ((((/* implicit */_Bool) ((unsigned int) 1625412197))) ? (max((arr_1 [i_0]), (((/* implicit */unsigned int) max(((unsigned short)61230), (((/* implicit */unsigned short) arr_2 [2ULL]))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)51280))));
            }
        } 
    } 
    var_13 = ((/* implicit */short) var_9);
}
