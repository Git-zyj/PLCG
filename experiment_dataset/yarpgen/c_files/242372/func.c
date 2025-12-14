/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242372
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
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (short i_1 = 4; i_1 < 15; i_1 += 3) 
        {
            for (unsigned char i_2 = 2; i_2 < 16; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */unsigned char) (~((+(var_17)))));
                    var_19 += ((/* implicit */_Bool) max((((((/* implicit */_Bool) (-(var_2)))) ? (arr_5 [i_1 - 4] [i_1 - 4]) : (((/* implicit */unsigned long long int) ((var_2) / (7316139906376925143LL)))))), (max((((/* implicit */unsigned long long int) arr_1 [i_0])), (arr_5 [i_1 + 3] [i_2 - 1])))));
                    var_20 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_1])))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned int) var_4);
}
