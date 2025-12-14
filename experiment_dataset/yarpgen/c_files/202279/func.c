/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202279
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202279 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202279
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
    var_10 += ((/* implicit */int) ((_Bool) ((min((9205357638345293824ULL), (((/* implicit */unsigned long long int) (signed char)-53)))) ^ (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_1))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 4; i_0 < 7; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_1] = ((/* implicit */int) var_3);
                var_11 = max(((~(arr_2 [i_0 + 4]))), (max((((/* implicit */unsigned long long int) (_Bool)1)), (arr_4 [i_0 - 3]))));
            }
        } 
    } 
}
