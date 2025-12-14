/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20237
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20237 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20237
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
    for (short i_0 = 1; i_0 < 17; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (signed char i_2 = 1; i_2 < 17; i_2 += 3) 
            {
                {
                    var_15 -= ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_1 [(signed char)16]) && (((/* implicit */_Bool) (unsigned char)88)))))) + (18446744073709551615ULL)))) && (((/* implicit */_Bool) arr_6 [i_0 - 1] [(signed char)4])));
                    var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) var_8))));
                    var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) var_14))));
                    var_18 = ((/* implicit */unsigned short) min((min((7680085259796173357LL), (((/* implicit */long long int) (_Bool)1)))), (((/* implicit */long long int) (((~(((/* implicit */int) var_10)))) != ((~(((/* implicit */int) var_10)))))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) var_4))));
    var_20 = ((((/* implicit */long long int) ((/* implicit */int) var_4))) | (var_7));
}
