/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42108
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42108 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42108
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
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))) - (0U)));
    var_20 = ((/* implicit */_Bool) min((((/* implicit */long long int) (~(((/* implicit */int) var_13))))), (var_15)));
    /* LoopNest 3 */
    for (signed char i_0 = 2; i_0 < 11; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 9; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 12; i_2 += 2) 
            {
                {
                    arr_7 [(signed char)2] [(unsigned short)6] [(unsigned short)6] [i_2] = ((/* implicit */short) arr_1 [i_0]);
                    var_21 = ((/* implicit */unsigned short) min((((/* implicit */int) (signed char)32)), (max(((~(((/* implicit */int) (signed char)41)))), (((/* implicit */int) (unsigned short)55260))))));
                }
            } 
        } 
    } 
    var_22 = var_2;
    var_23 = ((/* implicit */int) var_0);
}
