/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27557
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27557 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27557
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
    var_18 &= var_5;
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */int) ((((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) arr_0 [i_1 - 1])) : (((/* implicit */int) arr_0 [i_1 - 1])))) < (min((var_2), (((/* implicit */int) arr_0 [i_1 - 1]))))));
                    arr_9 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)32256))))) ? (min((arr_3 [i_1 - 1] [i_1 - 1] [i_1 - 1]), (((/* implicit */long long int) var_8)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)178)) ? ((-(((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) 551873279)) ? (136875206) : (140783065))))))));
                }
            } 
        } 
    } 
}
