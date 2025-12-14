/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42206
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42206 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42206
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
    var_19 = ((/* implicit */short) (+((~((+(var_17)))))));
    var_20 = (+(((/* implicit */int) (signed char)-94)));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 1; i_1 < 8; i_1 += 2) 
        {
            arr_5 [i_0] [i_0] [i_1] &= ((/* implicit */signed char) var_6);
            arr_6 [i_0] [i_0] |= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) var_9)))) <= (min((max((374339077675726117LL), (((/* implicit */long long int) var_9)))), (((/* implicit */long long int) min((((/* implicit */int) (short)-20242)), (var_18))))))));
            var_21 = ((/* implicit */unsigned int) arr_0 [i_0]);
        }
        arr_7 [i_0] [i_0] = ((/* implicit */_Bool) arr_3 [5U]);
        arr_8 [i_0] = ((/* implicit */_Bool) arr_0 [i_0]);
    }
    var_22 = ((/* implicit */unsigned long long int) min((var_2), (((/* implicit */unsigned int) ((int) ((5622953620945338466ULL) / (var_13)))))));
    var_23 = ((/* implicit */signed char) var_4);
}
