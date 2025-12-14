/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223625
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (short i_2 = 2; i_2 < 8; i_2 += 2) 
            {
                {
                    var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(1532534465877285097LL)))) ? (min((((/* implicit */long long int) (unsigned short)3457)), (arr_4 [i_0 + 1] [i_0] [i_0 + 1]))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)21573))) : ((~(2790368844U)))));
                    arr_8 [i_0] [i_1] [i_1] [i_0] = ((unsigned short) arr_4 [i_0] [i_0] [i_0]);
                    arr_9 [i_0] [i_0] [i_0] [i_0 + 1] = ((/* implicit */unsigned int) max((((/* implicit */long long int) arr_1 [i_0] [i_1])), (var_1)));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned short) ((long long int) var_8));
}
