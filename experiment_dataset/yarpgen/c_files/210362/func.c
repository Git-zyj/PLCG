/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210362
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210362 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210362
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
    var_20 = ((/* implicit */unsigned int) ((((max((var_2), (((/* implicit */int) (_Bool)1)))) >> (((/* implicit */int) (_Bool)1)))) >= (((/* implicit */int) (signed char)-20))));
    /* LoopNest 3 */
    for (signed char i_0 = 2; i_0 < 9; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    var_21 &= ((/* implicit */int) (!(var_10)));
                    arr_9 [i_1] = ((/* implicit */long long int) min(((~(((/* implicit */int) (unsigned char)175)))), (((/* implicit */int) ((949709076) != (((/* implicit */int) var_19)))))));
                }
            } 
        } 
    } 
    var_22 -= ((/* implicit */_Bool) (signed char)20);
    var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) var_19))));
    var_24 = ((/* implicit */long long int) min((4294967288U), (((/* implicit */unsigned int) (_Bool)1))));
}
