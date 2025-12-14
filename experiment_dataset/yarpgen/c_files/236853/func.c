/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236853
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236853 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236853
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
    var_12 = ((max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) + (((/* implicit */int) (_Bool)1))))), (var_8))) | (((((/* implicit */_Bool) var_7)) ? (var_10) : (min((((/* implicit */unsigned long long int) (signed char)93)), (var_10))))));
    var_13 = ((/* implicit */unsigned long long int) var_4);
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 18; i_0 += 4) 
    {
        for (short i_1 = 2; i_1 < 18; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    var_14 *= ((/* implicit */_Bool) (~(((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_1] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)32766))) : (arr_2 [i_0] [i_1] [i_2])))))));
                    arr_7 [i_0] [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) (~((~(222342754)))));
                }
            } 
        } 
    } 
    var_15 = 6;
}
