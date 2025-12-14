/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198089
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198089 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198089
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
    var_17 += max((((unsigned short) min((((/* implicit */short) var_10)), ((short)15822)))), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned char)103)) ? (-16LL) : (16777216LL))) <= (((/* implicit */long long int) ((/* implicit */int) (short)15822)))))));
    var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) ((((/* implicit */_Bool) min((min((var_4), (((/* implicit */unsigned long long int) var_2)))), (((((/* implicit */_Bool) var_12)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))))))) ? (((var_14) ? (min((((/* implicit */unsigned long long int) var_7)), (var_12))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (6920497838696080040ULL))))) : (max((((/* implicit */unsigned long long int) var_13)), (min((((/* implicit */unsigned long long int) var_9)), (var_8))))))))));
    var_19 = var_2;
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (unsigned int i_1 = 3; i_1 < 9; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (16777213LL) : (((/* implicit */long long int) arr_4 [i_1 - 1] [i_1 + 2] [i_1 - 3]))))) ? (((((/* implicit */_Bool) arr_4 [i_1 + 2] [i_1 + 1] [i_1 - 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)15808))) : (var_11))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_1 - 1] [i_1 - 2] [i_1 + 1])) && (((/* implicit */_Bool) arr_4 [i_1 + 1] [i_1 + 1] [i_1 - 2]))))))));
                var_21 ^= ((/* implicit */int) var_2);
            }
        } 
    } 
}
