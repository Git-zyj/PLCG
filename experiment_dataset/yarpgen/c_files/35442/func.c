/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35442
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35442 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35442
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
    var_15 = ((/* implicit */_Bool) ((signed char) max((((/* implicit */unsigned long long int) var_5)), (var_14))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                arr_8 [i_1] = ((/* implicit */signed char) arr_5 [i_1] [i_0]);
                var_16 = ((/* implicit */unsigned short) max((((long long int) var_1)), (((/* implicit */long long int) arr_3 [i_0] [i_1]))));
                arr_9 [i_1] = ((/* implicit */unsigned short) arr_0 [i_1]);
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_2 = 0; i_2 < 16; i_2 += 3) 
    {
        for (short i_3 = 0; i_3 < 16; i_3 += 3) 
        {
            {
                var_17 = ((/* implicit */unsigned char) ((int) ((unsigned long long int) arr_2 [i_2] [i_3])));
                var_18 = ((/* implicit */short) min((((long long int) 8390739903438702296LL)), (((/* implicit */long long int) var_8))));
                var_19 = var_14;
            }
        } 
    } 
}
