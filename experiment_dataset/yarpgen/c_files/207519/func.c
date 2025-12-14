/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207519
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
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (unsigned short i_1 = 2; i_1 < 11; i_1 += 4) 
        {
            {
                arr_4 [i_1] = ((/* implicit */unsigned char) min(((-(((/* implicit */int) arr_0 [i_1 - 1] [i_1 + 1])))), (max((((var_0) ? (1777104316) : (((/* implicit */int) (unsigned char)99)))), (((/* implicit */int) arr_0 [i_1 - 2] [i_1 - 1]))))));
                var_11 = ((/* implicit */unsigned char) min((var_11), (((/* implicit */unsigned char) var_8))));
                var_12 = ((/* implicit */unsigned long long int) (+((((+(((/* implicit */int) (signed char)0)))) + ((-(((/* implicit */int) var_8))))))));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned short) var_7);
}
