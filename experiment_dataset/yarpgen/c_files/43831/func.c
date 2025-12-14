/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43831
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43831 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43831
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
    var_18 = ((/* implicit */int) (((((~(4321951388749663933ULL))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 67107840)))))))) >> (((((/* implicit */int) var_1)) - (70)))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 14; i_0 += 2) 
    {
        for (unsigned char i_1 = 2; i_1 < 16; i_1 += 3) 
        {
            {
                arr_5 [(unsigned short)12] = ((/* implicit */unsigned char) arr_3 [i_0]);
                arr_6 [i_1] = ((/* implicit */int) arr_2 [i_0] [i_0]);
            }
        } 
    } 
    var_19 &= ((/* implicit */int) (!(((/* implicit */_Bool) min((var_1), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_3))))))))));
}
