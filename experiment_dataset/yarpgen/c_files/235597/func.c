/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235597
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235597 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235597
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
    var_10 = var_2;
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                arr_4 [i_0] [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-66)) || (((/* implicit */_Bool) ((int) var_4)))));
                var_11 = ((/* implicit */signed char) max((var_11), (((/* implicit */signed char) ((long long int) max(((~(((/* implicit */int) (short)4166)))), ((~(((/* implicit */int) (unsigned short)65535))))))))));
            }
        } 
    } 
}
