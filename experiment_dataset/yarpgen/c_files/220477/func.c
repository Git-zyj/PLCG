/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220477
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220477 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220477
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 24; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 22; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) (+(((((/* implicit */int) (unsigned short)65534)) << (((/* implicit */int) (unsigned short)2)))))))));
                var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) (((((+(((((/* implicit */_Bool) arr_4 [(signed char)24])) ? (((/* implicit */int) (short)-25726)) : (((/* implicit */int) (unsigned short)65510)))))) + (2147483647))) << (((var_2) - (6248534896770531463ULL))))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned char) var_16);
    var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) var_13))));
}
