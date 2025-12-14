/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201675
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201675 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201675
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
    var_20 = ((/* implicit */int) (_Bool)1);
    var_21 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_15)), (var_18)));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        for (unsigned char i_1 = 3; i_1 < 9; i_1 += 3) 
        {
            {
                var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) arr_3 [i_0] [i_0]))));
                arr_4 [(_Bool)0] [(_Bool)0] [(_Bool)0] = ((/* implicit */short) (+(min((arr_0 [i_1 - 2] [i_1]), (((/* implicit */unsigned long long int) var_6))))));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned char) (short)8438);
}
