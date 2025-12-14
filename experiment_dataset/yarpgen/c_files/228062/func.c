/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228062
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228062 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228062
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
    var_10 ^= ((/* implicit */unsigned char) ((unsigned short) -5));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                var_11 = ((/* implicit */int) ((unsigned int) (short)21844));
                arr_7 [i_0] [i_1] = ((/* implicit */signed char) arr_2 [i_0]);
            }
        } 
    } 
    var_12 = ((/* implicit */short) var_5);
    var_13 &= ((/* implicit */int) var_0);
    var_14 = ((/* implicit */unsigned char) min((((unsigned long long int) ((((/* implicit */_Bool) (unsigned char)255)) ? (4294967291U) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (11094655011092776897ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)62766))) : (((((/* implicit */unsigned long long int) -4389165272744891124LL)) - (var_4)))))));
}
