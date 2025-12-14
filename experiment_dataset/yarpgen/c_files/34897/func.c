/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34897
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34897 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34897
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
    var_18 = ((/* implicit */signed char) var_7);
    var_19 = ((/* implicit */long long int) ((unsigned char) (signed char)-120));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (signed char i_1 = 2; i_1 < 20; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) (~(((((((/* implicit */int) (signed char)-112)) + (2147483647))) << ((((~(var_3))) - (4025288825169049432LL)))))));
                var_20 = ((/* implicit */unsigned long long int) (~((-(((((/* implicit */int) var_6)) ^ (((/* implicit */int) (signed char)-76))))))));
                arr_6 [i_1 - 1] [i_1] [i_0] = (~(((/* implicit */int) (signed char)76)));
            }
        } 
    } 
}
