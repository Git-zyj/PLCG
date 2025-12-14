/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21582
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21582 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21582
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
    for (short i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_1] [i_1] = ((/* implicit */signed char) ((((unsigned int) arr_0 [i_0])) / (min((4294967274U), (3186767807U)))));
                arr_6 [i_1] [i_0] [i_0] = ((/* implicit */unsigned int) ((signed char) ((var_10) < (((/* implicit */int) (unsigned short)52448)))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_2 = 2; i_2 < 18; i_2 += 3) 
    {
        for (signed char i_3 = 3; i_3 < 18; i_3 += 3) 
        {
            {
                arr_11 [i_3] = ((/* implicit */_Bool) ((unsigned int) ((signed char) var_1)));
                var_13 *= ((/* implicit */short) (-(((/* implicit */int) max((var_9), (((/* implicit */unsigned short) arr_8 [i_3 + 1])))))));
            }
        } 
    } 
    var_14 += ((/* implicit */unsigned short) ((((/* implicit */int) var_5)) > (((/* implicit */int) var_5))));
    var_15 -= ((/* implicit */unsigned long long int) var_6);
    var_16 = ((/* implicit */unsigned int) var_1);
}
