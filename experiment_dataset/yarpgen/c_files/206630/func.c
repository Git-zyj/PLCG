/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206630
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206630 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206630
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
    var_18 = ((/* implicit */unsigned char) ((unsigned int) 149206333891341252ULL));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                arr_6 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((long long int) min((var_9), (((/* implicit */long long int) arr_4 [i_1] [i_0])))))) - (max((arr_3 [i_0 + 2]), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) + (((/* implicit */int) arr_1 [i_0] [i_0])))))))));
                arr_7 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_4 [i_0] [i_0 + 2])), (3715106089699642166LL)))) * (arr_2 [i_0 + 2] [i_0 + 2])));
                arr_8 [i_0] [i_1] [i_1] = ((/* implicit */int) max(((-(max((-6027519970861618812LL), (((/* implicit */long long int) arr_5 [3LL] [21U])))))), (((/* implicit */long long int) arr_5 [i_0] [(unsigned short)11]))));
            }
        } 
    } 
}
