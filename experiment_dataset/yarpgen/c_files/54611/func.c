/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54611
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54611 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54611
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
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 9; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */short) max((var_12), (((/* implicit */short) arr_0 [6]))));
                arr_4 [i_0] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_0 [i_0]))));
                var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) var_4))));
                var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) (~((~(((/* implicit */int) (unsigned char)102)))))))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned long long int) max(((~((-(((/* implicit */int) var_11)))))), ((-((-(((/* implicit */int) var_11))))))));
    var_16 = ((/* implicit */short) (+(((/* implicit */int) (short)6045))));
    var_17 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) (~(1995812935U)))))))));
}
