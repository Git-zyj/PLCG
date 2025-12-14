/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247065
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247065 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247065
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
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) ((unsigned long long int) (signed char)118)))));
        arr_4 [i_0] = max((((((/* implicit */_Bool) 16383)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-84))))), (((/* implicit */unsigned long long int) (signed char)83)));
    }
    var_20 = 11;
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_1 = 3; i_1 < 15; i_1 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_2 = 3; i_2 < 15; i_2 += 3) 
        {
            arr_11 [i_1] [i_1] = ((/* implicit */unsigned long long int) var_6);
            var_21 = ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-4)) ? (arr_2 [i_1 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)8191)))));
        }
        var_22 = ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_1 - 2])) ? (((/* implicit */int) arr_1 [i_1 + 1])) : (((/* implicit */int) arr_1 [i_1 - 1]))));
    }
    var_23 ^= ((/* implicit */short) max((((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-84)) / (((/* implicit */int) (signed char)-69))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 15623546146082222350ULL)) ? (var_14) : (((/* implicit */int) var_15))))) ? (((((/* implicit */_Bool) var_3)) ? (7736301101368840725ULL) : (3266245124436037239ULL))) : (((/* implicit */unsigned long long int) max((var_16), (((/* implicit */int) var_17)))))))));
}
