/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29946
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29946 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29946
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
    for (unsigned char i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                var_15 = ((/* implicit */signed char) 15784997912430671168ULL);
                arr_4 [i_1] [5LL] = ((/* implicit */unsigned int) var_13);
                var_16 = ((/* implicit */signed char) (unsigned short)58219);
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)127)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (-8665711448664311568LL)));
}
