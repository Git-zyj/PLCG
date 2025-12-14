/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22698
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22698 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22698
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
    var_12 ^= ((/* implicit */int) var_7);
    var_13 = ((/* implicit */unsigned char) var_11);
    var_14 &= ((/* implicit */short) 4062296096U);
    var_15 -= ((/* implicit */_Bool) var_5);
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        for (signed char i_1 = 2; i_1 < 20; i_1 += 3) 
        {
            {
                arr_7 [i_0] [i_0] = ((/* implicit */signed char) (short)-27981);
                var_16 = ((/* implicit */unsigned char) (signed char)54);
                var_17 = ((/* implicit */signed char) (unsigned char)10);
                arr_8 [i_0] [i_0] = ((/* implicit */short) -4499032661718069168LL);
                arr_9 [i_1] [(signed char)20] [i_1] |= ((/* implicit */short) 1106192841);
            }
        } 
    } 
}
