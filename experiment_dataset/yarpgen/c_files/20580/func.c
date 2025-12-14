/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20580
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20580 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20580
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
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (unsigned short i_1 = 2; i_1 < 16; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                {
                    var_10 *= arr_4 [i_2];
                    arr_6 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */signed char) max((((/* implicit */int) arr_3 [i_0] [i_0])), (((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) (signed char)-124)) : (855000684)))));
                    var_11 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)-24))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_3 = 1; i_3 < 8; i_3 += 1) 
    {
        for (unsigned char i_4 = 0; i_4 < 11; i_4 += 2) 
        {
            {
                var_12 = (~(min((4194303U), (7864320U))));
                var_13 *= ((/* implicit */unsigned long long int) arr_12 [i_3] [i_4] [(short)6]);
            }
        } 
    } 
    var_14 ^= (+(15LL));
    var_15 ^= ((/* implicit */unsigned long long int) var_7);
}
