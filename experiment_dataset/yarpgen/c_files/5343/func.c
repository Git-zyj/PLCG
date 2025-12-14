/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5343
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5343 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5343
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
    var_13 -= ((/* implicit */long long int) (+(((/* implicit */int) (short)-19890))));
    var_14 -= ((/* implicit */unsigned char) ((int) (+(((/* implicit */int) var_11)))));
    /* LoopNest 3 */
    for (signed char i_0 = 2; i_0 < 20; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 20; i_2 += 3) 
            {
                {
                    var_15 = ((/* implicit */long long int) min((max(((-(392965138))), (((/* implicit */int) ((((/* implicit */long long int) 859333167U)) == (576460752295034880LL)))))), (((/* implicit */int) ((_Bool) var_9)))));
                    arr_8 [6ULL] |= ((/* implicit */unsigned long long int) (((-(max((((/* implicit */int) var_1)), (var_8))))) % (((/* implicit */int) (!(((/* implicit */_Bool) 0LL)))))));
                }
            } 
        } 
    } 
}
