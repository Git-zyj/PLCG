/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32867
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32867 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32867
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
    var_14 = ((/* implicit */unsigned char) var_11);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                arr_5 [i_0] [(unsigned short)9] [i_0] = ((/* implicit */unsigned char) (~(max((arr_3 [i_1]), (((/* implicit */unsigned int) var_5))))));
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((min((5492720768901756876LL), (((/* implicit */long long int) arr_2 [i_0])))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [3]))) : (var_4))))))) ? (var_3) : (((/* implicit */long long int) ((int) ((((/* implicit */_Bool) 5069486925510706720ULL)) ? (13377257148198844895ULL) : (5069486925510706720ULL)))))));
            }
        } 
    } 
    var_15 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) max((5069486925510706741ULL), (((/* implicit */unsigned long long int) (+(var_0))))))) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))));
}
