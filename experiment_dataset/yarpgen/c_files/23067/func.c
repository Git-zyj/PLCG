/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23067
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23067 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23067
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
    for (int i_0 = 1; i_0 < 18; i_0 += 4) 
    {
        for (unsigned char i_1 = 2; i_1 < 16; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */short) var_4);
                var_19 = ((/* implicit */signed char) ((((/* implicit */int) ((signed char) var_12))) <= (((int) 90329149U))));
                arr_7 [i_0] [(_Bool)1] = ((/* implicit */signed char) ((unsigned long long int) ((unsigned char) max((((/* implicit */long long int) -2147483638)), (arr_3 [i_1] [3U] [i_0])))));
                arr_8 [i_0] = ((/* implicit */long long int) arr_6 [i_0 + 1] [i_1]);
            }
        } 
    } 
    var_20 ^= ((/* implicit */unsigned long long int) (((~(-2147483638))) << (((((max((-7425941715145095611LL), (((/* implicit */long long int) -2147483622)))) + (2147483633LL))) - (11LL)))));
    var_21 -= ((/* implicit */short) ((((unsigned long long int) ((((/* implicit */_Bool) 2147483637)) ? (((/* implicit */int) (unsigned short)21377)) : (-441196381)))) * (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (short)23354)) ? (((/* implicit */int) var_17)) : (2147483647))) / (((-2147483638) - (((/* implicit */int) (short)-23357)))))))));
}
