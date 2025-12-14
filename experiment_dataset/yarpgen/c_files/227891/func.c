/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227891
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227891 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227891
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
    var_17 = ((/* implicit */short) var_0);
    var_18 = ((/* implicit */unsigned long long int) max(((unsigned short)28672), ((unsigned short)36864)));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                var_19 = arr_5 [i_0] [(unsigned char)12] [i_0];
                arr_6 [i_0] [i_1] [(unsigned short)16] = ((/* implicit */int) max((((/* implicit */unsigned long long int) (((+(618718178U))) * (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) 7941872637248505550LL))))))), (max((((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) / (4807058588112877148ULL))), (((/* implicit */unsigned long long int) arr_1 [i_0]))))));
                arr_7 [i_1] = ((/* implicit */int) (+(18381983757628782754ULL)));
            }
        } 
    } 
    var_20 = ((/* implicit */signed char) var_10);
}
