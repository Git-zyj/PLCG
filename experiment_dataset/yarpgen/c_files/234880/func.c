/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234880
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
    var_12 = ((/* implicit */unsigned char) var_4);
    var_13 = ((/* implicit */signed char) max((((/* implicit */unsigned int) (short)5744)), (4096U)));
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 18; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    var_14 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)5744))));
                    arr_6 [i_0 - 1] [i_1] [(signed char)11] [i_2] = ((/* implicit */short) ((((/* implicit */int) (short)-29143)) > (((/* implicit */int) (unsigned char)255))));
                }
            } 
        } 
    } 
}
