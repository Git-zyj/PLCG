/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211469
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211469 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211469
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
    var_11 = ((/* implicit */int) var_5);
    var_12 |= ((/* implicit */unsigned int) ((unsigned char) (short)-7808));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 2; i_0 < 18; i_0 += 3) 
    {
        for (signed char i_1 = 2; i_1 < 21; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    arr_10 [i_0] [i_0 + 2] [i_1] [10ULL] |= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_2)))))));
                    arr_11 [i_0 + 1] [i_0] [i_0 - 1] = ((/* implicit */_Bool) 625596586U);
                    arr_12 [i_0] [i_0] = ((/* implicit */int) (~(var_4)));
                    arr_13 [i_0] [i_1] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) (-(((/* implicit */int) (_Bool)0)))))) ^ (((/* implicit */int) ((signed char) max((((/* implicit */unsigned short) arr_9 [i_0] [i_0] [i_0 - 1] [i_0])), ((unsigned short)0)))))));
                }
            } 
        } 
    } 
}
