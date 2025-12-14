/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27206
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27206 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27206
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
    for (short i_0 = 3; i_0 < 13; i_0 += 2) 
    {
        for (int i_1 = 1; i_1 < 14; i_1 += 4) 
        {
            {
                var_16 = arr_1 [i_0];
                var_17 = ((/* implicit */unsigned short) ((unsigned long long int) (~(arr_3 [i_1 + 2] [i_0] [i_0 - 2]))));
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_2 = 2; i_2 < 20; i_2 += 2) 
    {
        arr_8 [12LL] = ((/* implicit */long long int) ((int) (signed char)14));
        var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_2 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 562867375U)))))) : (arr_6 [i_2 - 1])));
        var_19 = ((/* implicit */int) arr_5 [i_2]);
    }
    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) 590765603)) : (var_5)))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_11))))) : (max((((/* implicit */unsigned int) var_0)), (4U)))))) ? (((min((var_2), (((/* implicit */unsigned long long int) (short)-12986)))) & (((unsigned long long int) var_13)))) : (((/* implicit */unsigned long long int) -1562823567))));
}
