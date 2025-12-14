/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2197
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2197 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2197
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
    var_19 = ((/* implicit */long long int) var_12);
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 17; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 18; i_1 += 1) 
        {
            {
                arr_5 [(unsigned char)10] |= var_14;
                arr_6 [i_0] [i_1 - 2] [10U] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)2985)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1 - 1] [(unsigned char)1])) ? (arr_4 [i_0] [i_0] [10U]) : (((/* implicit */int) arr_0 [(signed char)14] [(signed char)14]))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)51450))) : (((4670571290303314955LL) & (((/* implicit */long long int) arr_4 [i_0] [i_1] [(signed char)10])))))) : (((/* implicit */long long int) ((/* implicit */int) ((-268435456) <= (((/* implicit */int) arr_3 [i_0 + 2] [i_1 + 1]))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned char) var_17);
    var_21 = ((/* implicit */int) ((((/* implicit */_Bool) 651509522253065236ULL)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)43769)))));
    var_22 = ((/* implicit */unsigned long long int) var_2);
}
