/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192634
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192634 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192634
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
    var_15 ^= (+((((+(((/* implicit */int) var_4)))) ^ (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (signed char)-54)))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (unsigned int i_2 = 2; i_2 < 9; i_2 += 2) 
            {
                {
                    var_16 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1] [(unsigned short)7]))) ^ (((((/* implicit */_Bool) arr_3 [i_2] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_1] [i_1])))))) : (((((/* implicit */_Bool) 34902897112121344LL)) ? (1987800105U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1] [i_1])))))))));
                    var_17 = ((/* implicit */unsigned long long int) 34902897112121344LL);
                    arr_8 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) arr_1 [i_0]);
                }
            } 
        } 
    } 
    var_18 |= 18446744073709551602ULL;
    var_19 -= ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) ((unsigned int) (unsigned short)65531))) ? (((((/* implicit */_Bool) (unsigned short)42266)) ? (((/* implicit */int) var_3)) : (1835952643))) : ((~(var_10)))))));
}
