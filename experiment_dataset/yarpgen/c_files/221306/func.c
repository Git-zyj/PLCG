/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221306
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221306 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221306
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
    for (long long int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                arr_4 [i_0] [i_1] [i_0] = ((/* implicit */signed char) (unsigned short)0);
                arr_5 [i_1] |= ((/* implicit */int) (unsigned short)65535);
            }
        } 
    } 
    var_11 += ((/* implicit */unsigned int) 7088128562569803431LL);
    var_12 = ((/* implicit */long long int) ((unsigned long long int) ((unsigned char) (unsigned short)65520)));
}
