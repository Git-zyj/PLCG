/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32022
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32022 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32022
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
    var_19 = ((/* implicit */long long int) (~(min((((/* implicit */unsigned long long int) ((unsigned short) (-2147483647 - 1)))), (9007164895002624ULL)))));
    var_20 = ((/* implicit */short) var_2);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                arr_7 [i_1] [i_0] [i_1] = ((/* implicit */_Bool) (-((((+(((/* implicit */int) var_6)))) + (((int) 9007164895002617ULL))))));
                var_21 = ((/* implicit */int) (((+(9007164895002624ULL))) * (((/* implicit */unsigned long long int) ((min((((/* implicit */int) (signed char)-125)), (268402688))) * (((/* implicit */int) (unsigned short)65535)))))));
            }
        } 
    } 
    var_22 = ((/* implicit */short) 18437736908814548977ULL);
}
