/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232511
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232511 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232511
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
    var_19 &= ((/* implicit */signed char) (-(((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)154))) : (869624968U)))));
    var_20 = ((/* implicit */signed char) (-(14558417803050127776ULL)));
    var_21 = ((/* implicit */unsigned int) var_1);
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned int i_1 = 2; i_1 < 11; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    var_22 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_6 [i_1 + 1] [i_1 - 1] [i_1 + 1])) > (((/* implicit */int) arr_6 [i_1 - 1] [0U] [i_1 - 1])))))) & (((unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0] [i_1 + 1] [i_1 + 1] [i_0]))) > (-3154769775278121977LL))))));
                    var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((var_13) != (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [6U] [6U] [8U] [i_2])))))))))));
                }
            } 
        } 
    } 
}
