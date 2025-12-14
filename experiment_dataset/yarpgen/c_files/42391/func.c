/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42391
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42391 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42391
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
    var_20 = ((/* implicit */unsigned char) var_0);
    var_21 += ((unsigned long long int) var_16);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                arr_6 [i_0] [(_Bool)0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) var_17))) * (((/* implicit */int) arr_1 [i_1] [i_0]))));
                arr_7 [i_1] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 805306368U)) ? (arr_4 [i_1] [i_1] [i_0]) : (((/* implicit */int) arr_5 [i_1]))))), (((unsigned long long int) arr_2 [i_0]))));
            }
        } 
    } 
}
