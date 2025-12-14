/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230434
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230434 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230434
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
    var_20 = ((/* implicit */short) ((((/* implicit */int) var_14)) == (((/* implicit */int) var_12))));
    /* LoopNest 3 */
    for (long long int i_0 = 3; i_0 < 10; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (signed char i_2 = 4; i_2 < 7; i_2 += 2) 
            {
                {
                    var_21 = ((/* implicit */_Bool) max((((/* implicit */unsigned short) (unsigned char)34)), ((unsigned short)1351)));
                    var_22 = ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */int) var_11)) != (((/* implicit */int) arr_2 [i_2 + 1])))))));
                    arr_7 [i_0] [i_1] [i_2 - 3] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (0LL)));
                }
            } 
        } 
    } 
}
