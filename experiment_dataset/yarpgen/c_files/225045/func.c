/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225045
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225045 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225045
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
    var_19 ^= ((/* implicit */unsigned int) max((var_17), (((/* implicit */int) var_12))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 14; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 15; i_1 += 3) 
        {
            {
                var_20 ^= ((/* implicit */short) (((-(8222101696109313085ULL))) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))));
                arr_4 [i_1] [i_1 + 2] [i_1] = ((/* implicit */short) min((var_9), (((/* implicit */unsigned short) arr_0 [i_0 - 1]))));
                arr_5 [i_1] = min((((((/* implicit */_Bool) max((((/* implicit */short) var_11)), ((short)32767)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 - 1]))) : (max((8222101696109313079ULL), (((/* implicit */unsigned long long int) var_3)))))), ((~(min((var_4), (((/* implicit */unsigned long long int) arr_2 [(_Bool)1])))))));
                var_21 = ((/* implicit */short) max((((((/* implicit */_Bool) arr_1 [i_0 - 3])) ? (arr_1 [i_0 - 3]) : (arr_1 [i_0 - 3]))), (((arr_1 [i_0 - 3]) + (arr_1 [i_0 - 3])))));
            }
        } 
    } 
    var_22 &= ((/* implicit */unsigned long long int) var_13);
}
