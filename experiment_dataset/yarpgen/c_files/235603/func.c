/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235603
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235603 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235603
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
    var_18 = ((/* implicit */unsigned short) max(((!(((/* implicit */_Bool) max((((/* implicit */int) var_17)), (var_3)))))), (var_15)));
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 16; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (signed char i_2 = 3; i_2 < 15; i_2 += 3) 
            {
                {
                    var_19 -= max((var_13), (((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */signed char) var_15)), ((signed char)118))))) <= (arr_2 [i_2 - 2])))));
                    var_20 = var_15;
                    var_21 = ((/* implicit */unsigned int) min((((long long int) (signed char)127)), (((/* implicit */long long int) (_Bool)1))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */signed char) (~(((/* implicit */int) (short)-9489))));
}
