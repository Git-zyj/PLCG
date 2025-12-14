/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204684
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204684 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204684
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 2; i_0 < 18; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    arr_10 [i_0] [i_0] [i_1 - 1] [i_2] = max(((+(var_3))), (((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)3651))))) ? (((/* implicit */int) max(((unsigned short)22818), (var_1)))) : ((~(arr_1 [i_0] [6])))))));
                    var_12 += var_5;
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 4200065095U))));
    var_14 = ((/* implicit */unsigned int) var_1);
}
