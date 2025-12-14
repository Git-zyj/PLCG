/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24369
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24369 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24369
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
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) arr_0 [i_0])), (min((((/* implicit */unsigned long long int) (unsigned short)57563)), (2251799813685247ULL)))));
        var_20 += ((/* implicit */unsigned short) arr_1 [2ULL]);
        var_21 = ((/* implicit */short) arr_0 [i_0]);
        arr_3 [i_0] = ((/* implicit */unsigned int) (~(((min((arr_0 [i_0]), (((/* implicit */long long int) (_Bool)0)))) - (((/* implicit */long long int) 4294967295U))))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 2; i_1 < 9; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    var_22 = ((/* implicit */unsigned int) -667812417679383404LL);
                    arr_10 [i_0] [(short)4] [i_0] [i_2] = ((/* implicit */unsigned long long int) min(((unsigned short)7954), (((/* implicit */unsigned short) (_Bool)1))));
                    arr_11 [i_0] [i_0] = ((long long int) arr_7 [i_0] [i_0] [9] [i_2]);
                    arr_12 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((_Bool) ((((/* implicit */unsigned int) ((int) 2515422373U))) >= (min((((/* implicit */unsigned int) (unsigned short)16384)), (678955542U))))));
                }
            } 
        } 
    }
    var_23 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) ((short) 678955547U))) <= (((/* implicit */int) min((((/* implicit */unsigned short) var_4)), (var_9))))))) / (((/* implicit */int) var_0))));
}
