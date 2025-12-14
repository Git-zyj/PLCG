/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208166
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208166 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208166
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
    var_10 -= ((/* implicit */unsigned int) (~(((unsigned long long int) ((int) var_0)))));
    var_11 = ((/* implicit */long long int) (~((~((+(var_3)))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    var_12 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (!(((/* implicit */_Bool) max((arr_2 [i_0]), (((/* implicit */unsigned long long int) var_0))))))))));
                    var_13 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)85)) ? (((/* implicit */unsigned int) 2147483647)) : (max(((+(4184267184U))), (110700111U)))));
                }
            } 
        } 
    } 
}
