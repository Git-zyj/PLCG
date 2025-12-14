/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21173
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21173 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21173
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
    for (int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (long long int i_1 = 2; i_1 < 13; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_1] [i_2] |= ((/* implicit */short) (~(((long long int) (~(18446744073709551615ULL))))));
                    var_13 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) ((long long int) 8386560ULL))) ? (arr_6 [4U] [i_1 + 2] [i_2] [i_2]) : (((/* implicit */long long int) (-(-306953290))))))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */int) (-(((((/* implicit */_Bool) (-(4294967295U)))) ? (8386544ULL) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_8)))))))));
}
