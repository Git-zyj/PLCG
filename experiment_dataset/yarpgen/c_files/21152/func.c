/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21152
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21152 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21152
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
    var_18 = ((/* implicit */unsigned short) (-((-(((/* implicit */int) (short)-1218))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 14; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    var_19 += ((/* implicit */long long int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) -2001675077)) ? (((/* implicit */unsigned long long int) 7474582546502300823LL)) : (1048575ULL)))) ? (((((/* implicit */int) arr_5 [i_0] [i_1 - 1] [i_2])) ^ (((/* implicit */int) arr_3 [i_0] [i_1 - 4] [i_0])))) : (((/* implicit */int) arr_8 [i_0] [(unsigned short)4] [i_2] [i_1]))))));
                    var_20 = ((/* implicit */long long int) arr_2 [i_1]);
                    var_21 -= ((/* implicit */short) arr_2 [i_0]);
                }
            } 
        } 
    } 
}
