/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231682
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231682 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231682
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
    var_15 |= ((/* implicit */_Bool) min((var_13), (((/* implicit */int) var_10))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 3; i_0 < 21; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                var_16 |= ((/* implicit */_Bool) min((arr_5 [i_0 + 2] [i_0] [i_0]), (((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [12])) + (((/* implicit */int) arr_1 [(_Bool)1])))))));
                arr_7 [i_0] [i_0] = ((/* implicit */unsigned int) (((~(var_5))) >> (((((((/* implicit */_Bool) 5610863596450830454ULL)) ? (659923019) : (((/* implicit */int) (signed char)19)))) - (659923000)))));
                var_17 &= ((/* implicit */unsigned long long int) arr_4 [i_0] [i_1] [2]);
                var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) arr_4 [(unsigned short)0] [i_0] [(unsigned short)0]))));
            }
        } 
    } 
}
