/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194004
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194004 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194004
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
    var_18 ^= ((/* implicit */signed char) ((((/* implicit */int) ((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (short)32643)) : (((/* implicit */int) var_10)))) == (((((/* implicit */int) var_17)) ^ (((/* implicit */int) var_16))))))) % ((+(((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) var_5)))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 7; i_1 += 3) 
        {
            {
                arr_4 [i_0] [7LL] = ((/* implicit */int) min((arr_0 [i_0]), (((/* implicit */unsigned short) ((arr_3 [i_1]) > (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1 + 3]))))))));
                arr_5 [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) ((long long int) min((((unsigned long long int) (unsigned short)47937)), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_16))) : (arr_1 [i_1 + 2])))))));
                var_19 ^= ((/* implicit */signed char) max((((/* implicit */unsigned long long int) var_8)), ((((-(18446744073709551615ULL))) % (((/* implicit */unsigned long long int) ((/* implicit */int) max(((short)32652), ((short)32750)))))))));
                arr_6 [i_0] [i_0] = ((/* implicit */short) var_8);
            }
        } 
    } 
    var_20 = ((/* implicit */int) 18446744073709551615ULL);
}
