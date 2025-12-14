/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42776
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42776 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42776
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
    var_19 = ((/* implicit */unsigned long long int) min((var_19), (((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */int) var_1)) >= (((/* implicit */int) (short)3663)))))) ? ((~(var_3))) : (((/* implicit */unsigned long long int) max(((-(((/* implicit */int) var_6)))), (((((/* implicit */int) (short)10957)) ^ (349920294))))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) arr_2 [i_0]);
                arr_7 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) min((arr_5 [i_0]), (arr_2 [i_0])))) ? (min((arr_5 [i_0]), (((/* implicit */unsigned long long int) min((-349920295), (((/* implicit */int) var_6))))))) : (((((/* implicit */_Bool) var_0)) ? (min((((/* implicit */unsigned long long int) arr_3 [i_0] [0] [0])), (arr_2 [i_0]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) arr_1 [i_0] [i_0])))))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (long long int i_2 = 0; i_2 < 24; i_2 += 3) 
    {
        arr_11 [i_2] = min((var_4), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_9 [i_2] [i_2])) : (((/* implicit */int) arr_9 [i_2] [i_2]))))));
        var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_10) << (((((unsigned long long int) arr_8 [i_2])) - (10286541283505008641ULL)))))) ? (-17) : (((/* implicit */int) arr_9 [i_2] [10]))));
    }
}
