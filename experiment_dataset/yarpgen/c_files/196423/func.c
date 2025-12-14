/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196423
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196423 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196423
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
    var_14 = ((/* implicit */unsigned short) 2147483647);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */int) 1790451139880443113LL);
                arr_7 [6ULL] [i_1] [i_1] = ((/* implicit */unsigned short) min((((unsigned long long int) ((signed char) var_0))), (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_12), (((/* implicit */unsigned short) arr_4 [i_0] [i_1] [i_0])))))) : (10329601071795281510ULL)))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) 926710928U))));
    var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) (~(415211765080306801ULL))))));
}
