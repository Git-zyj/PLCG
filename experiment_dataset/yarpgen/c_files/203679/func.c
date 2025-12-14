/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203679
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203679 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203679
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
    var_13 ^= ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_8)))) : (var_1)))));
    /* LoopNest 2 */
    for (short i_0 = 3; i_0 < 7; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */unsigned int) arr_0 [i_0]);
                arr_6 [i_0] [7] = ((/* implicit */int) ((923339252463687061ULL) == (923339252463687071ULL)));
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_2 = 3; i_2 < 15; i_2 += 2) 
    {
        for (long long int i_3 = 0; i_3 < 19; i_3 += 4) 
        {
            {
                var_15 = ((/* implicit */long long int) 18446744073709551604ULL);
                arr_14 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)83)) < (((/* implicit */int) (signed char)-84))));
                arr_15 [13U] = ((/* implicit */unsigned char) var_6);
            }
        } 
    } 
    var_16 = ((/* implicit */_Bool) (+(((/* implicit */int) ((unsigned short) var_2)))));
}
