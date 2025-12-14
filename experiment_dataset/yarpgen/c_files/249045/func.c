/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249045
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249045 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249045
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
    var_20 += ((/* implicit */unsigned short) var_11);
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 22; i_0 += 3) 
    {
        for (signed char i_1 = 3; i_1 < 22; i_1 += 2) 
        {
            for (unsigned char i_2 = 2; i_2 < 21; i_2 += 3) 
            {
                {
                    arr_8 [5LL] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) min((4264921512U), (3513867865U)));
                    var_21 = ((/* implicit */unsigned char) arr_5 [i_1] [i_1] [i_1]);
                }
            } 
        } 
    } 
}
