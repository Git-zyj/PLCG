/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23466
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23466 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23466
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
    var_17 = ((/* implicit */unsigned long long int) min((var_1), (var_14)));
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        var_18 = ((/* implicit */unsigned int) arr_1 [i_0]);
        var_19 &= ((/* implicit */signed char) arr_0 [i_0]);
        var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((long long int) arr_0 [i_0])))));
        /* LoopSeq 1 */
        for (short i_1 = 3; i_1 < 23; i_1 += 3) 
        {
            arr_4 [4LL] [6LL] [6LL] = ((/* implicit */unsigned short) arr_1 [i_1]);
            arr_5 [i_0] = ((/* implicit */unsigned long long int) ((int) arr_3 [i_0] [i_1 - 2]));
        }
    }
    for (unsigned short i_2 = 0; i_2 < 21; i_2 += 3) 
    {
        var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) min((min((((/* implicit */unsigned long long int) (signed char)73)), (18079560961127044727ULL))), (((/* implicit */unsigned long long int) ((unsigned char) 2710608968U))))))));
        var_22 = ((/* implicit */unsigned long long int) min((((((/* implicit */int) arr_0 [i_2])) ^ (((/* implicit */int) arr_0 [i_2])))), (((/* implicit */int) arr_0 [i_2]))));
    }
    var_23 = ((/* implicit */_Bool) ((short) var_14));
}
