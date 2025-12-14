/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238863
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238863 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238863
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
    var_16 = ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) > (((((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), (var_0))))) ^ (((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) + (var_15))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (unsigned char i_1 = 3; i_1 < 20; i_1 += 1) 
        {
            for (unsigned int i_2 = 1; i_2 < 22; i_2 += 2) 
            {
                {
                    arr_6 [i_1] [i_1] [i_1] = ((/* implicit */long long int) var_13);
                    var_17 = ((/* implicit */_Bool) (+(min((min((((/* implicit */unsigned long long int) (_Bool)1)), (var_2))), (((/* implicit */unsigned long long int) (((_Bool)1) ? (8673617292916305973LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))))));
                    arr_7 [i_1] [i_1] = ((/* implicit */unsigned int) ((unsigned short) (((!(var_13))) ? (max((arr_2 [i_0] [i_1]), (((/* implicit */unsigned int) (short)511)))) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))));
                }
            } 
        } 
    } 
    var_18 ^= ((/* implicit */_Bool) var_0);
}
