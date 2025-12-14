/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235088
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
    var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))) : (var_4)))) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned short) (short)26068)), ((unsigned short)34398))))))))));
    /* LoopNest 3 */
    for (long long int i_0 = 2; i_0 < 11; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                {
                    var_13 |= ((/* implicit */unsigned char) (unsigned short)3954);
                    arr_6 [i_0] = ((/* implicit */long long int) var_3);
                }
            } 
        } 
    } 
}
