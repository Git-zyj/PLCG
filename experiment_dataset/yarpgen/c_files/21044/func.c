/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21044
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21044 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21044
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
    var_20 = (_Bool)1;
    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_7))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_9)), (4183512247072161915ULL))))))) : (((/* implicit */int) (signed char)-49))));
    var_22 = ((/* implicit */long long int) ((max((max((14263231826637389700ULL), (14263231826637389722ULL))), (((/* implicit */unsigned long long int) var_2)))) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_17)))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 21; i_1 += 4) 
        {
            for (signed char i_2 = 1; i_2 < 21; i_2 += 3) 
            {
                {
                    var_23 = ((/* implicit */_Bool) max((max((arr_2 [i_0] [22LL] [i_2 + 2]), (arr_2 [i_0] [i_2] [i_2 + 2]))), (((signed char) var_1))));
                    var_24 = ((/* implicit */unsigned char) var_1);
                }
            } 
        } 
    } 
}
