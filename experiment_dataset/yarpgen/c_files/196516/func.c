/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196516
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196516 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196516
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
    var_18 += ((/* implicit */_Bool) (~(var_16)));
    var_19 = 7769158526082854781ULL;
    var_20 = ((/* implicit */unsigned short) var_4);
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 7; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_7 [i_2] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (-(288230376151711743LL)))) ? (max((max((10677585547626696811ULL), (arr_4 [i_1] [i_1]))), (max((arr_4 [i_0] [i_1]), (((/* implicit */unsigned long long int) var_3)))))) : (((/* implicit */unsigned long long int) min((2147483647), (((/* implicit */int) max(((unsigned short)7944), (arr_2 [i_1] [i_2])))))))));
                    arr_8 [i_2] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((unsigned short) max(((unsigned short)12684), (((/* implicit */unsigned short) (short)-31204)))));
                }
            } 
        } 
    } 
}
