/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190489
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190489 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190489
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
    var_20 = ((/* implicit */unsigned short) var_9);
    var_21 = ((/* implicit */short) (+(((/* implicit */int) var_16))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 3; i_0 < 20; i_0 += 3) 
    {
        for (unsigned char i_1 = 3; i_1 < 21; i_1 += 3) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned long long int) arr_4 [i_1 - 1] [i_1 + 1]);
                arr_6 [i_0] [i_1 - 1] [i_1 - 1] = ((/* implicit */_Bool) max((max((((/* implicit */unsigned long long int) var_10)), (arr_0 [i_0 - 3]))), (max((((/* implicit */unsigned long long int) (_Bool)1)), (7019966058971846741ULL)))));
            }
        } 
    } 
    var_22 = max((var_14), (((/* implicit */unsigned char) (((~(((/* implicit */int) var_10)))) < (((/* implicit */int) min((var_0), (((/* implicit */short) var_9)))))))));
}
