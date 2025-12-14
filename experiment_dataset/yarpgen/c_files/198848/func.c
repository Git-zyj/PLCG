/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198848
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198848 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198848
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
    var_15 = ((/* implicit */unsigned int) max((((/* implicit */long long int) min(((+(((/* implicit */int) var_10)))), (((/* implicit */int) min(((unsigned char)161), (((/* implicit */unsigned char) (signed char)(-127 - 1))))))))), (((long long int) var_14))));
    /* LoopNest 3 */
    for (short i_0 = 3; i_0 < 23; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                {
                    var_16 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_1 [i_0 - 1] [i_0 - 2])) : (-1585585485))) + (((/* implicit */int) min((((/* implicit */short) (signed char)125)), (arr_1 [i_0 + 2] [i_0 - 2]))))));
                    var_17 = ((/* implicit */long long int) arr_2 [i_1] [i_2]);
                }
            } 
        } 
    } 
}
