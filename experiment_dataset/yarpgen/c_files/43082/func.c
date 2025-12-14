/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43082
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43082 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43082
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
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (long long int i_1 = 4; i_1 < 20; i_1 += 3) 
        {
            {
                arr_6 [i_1] = ((/* implicit */int) arr_4 [i_1] [i_0]);
                var_17 += ((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) arr_1 [i_0] [7LL])) ? (0U) : (((/* implicit */unsigned int) -1231023609)))));
                var_18 ^= min((((/* implicit */unsigned long long int) 2U)), (max((((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */unsigned long long int) 4294967290U)) : (17304002759651752219ULL))), (((var_4) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)31173))))))));
            }
        } 
    } 
    var_19 ^= ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */int) var_0)), ((((((((-2147483647 - 1)) + (2147483647))) + (2147483647))) << (((((/* implicit */int) (unsigned char)223)) - (223))))))))));
    var_20 -= ((/* implicit */unsigned char) var_8);
    var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_3))));
}
