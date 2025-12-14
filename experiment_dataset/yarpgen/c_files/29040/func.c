/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29040
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29040 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29040
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
    for (int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (short i_2 = 1; i_2 < 21; i_2 += 3) 
            {
                {
                    var_11 = (+(max((((/* implicit */long long int) (+(var_8)))), (var_10))));
                    arr_8 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) arr_0 [i_1]);
                    var_12 &= ((/* implicit */short) ((unsigned short) (!(((/* implicit */_Bool) (~(9551009539915289908ULL)))))));
                    arr_9 [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) var_9);
                    var_13 = ((/* implicit */long long int) var_7);
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned short) max((((/* implicit */long long int) var_8)), (var_6)));
}
