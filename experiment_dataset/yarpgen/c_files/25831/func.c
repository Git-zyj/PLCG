/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25831
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25831 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25831
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
    var_18 ^= min((((6572678286423648629ULL) - (((/* implicit */unsigned long long int) -16)))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) < ((-(((/* implicit */int) var_17))))))));
    var_19 = var_13;
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (short i_1 = 2; i_1 < 9; i_1 += 1) 
        {
            {
                arr_4 [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_12))))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_5)) : (var_6))) : (((/* implicit */int) arr_0 [i_0]))))) ? (((((6572678286423648629ULL) + (3403814536038835524ULL))) - (((/* implicit */unsigned long long int) -215501053)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))));
                arr_5 [i_0] [i_1] = ((/* implicit */short) arr_1 [i_1]);
            }
        } 
    } 
}
