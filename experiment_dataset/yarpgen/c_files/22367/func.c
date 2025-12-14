/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22367
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22367 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22367
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
    var_18 = ((/* implicit */unsigned char) var_6);
    /* LoopNest 3 */
    for (short i_0 = 3; i_0 < 15; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                {
                    var_19 = max((min((((/* implicit */unsigned long long int) (short)-5004)), (9406534543063279606ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9406534543063279606ULL)) ? (9406534543063279606ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)4356))))));
                    arr_7 [i_0] [i_0 + 1] = ((/* implicit */short) min((-393198387917389731LL), (-393198387917389731LL)));
                }
            } 
        } 
    } 
}
