/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196193
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196193 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196193
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
    var_19 = var_2;
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 8; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (signed char i_2 = 1; i_2 < 8; i_2 += 2) 
            {
                {
                    arr_8 [(unsigned short)4] = ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */int) min((((/* implicit */short) var_10)), (arr_5 [i_0 + 1] [i_0 + 1] [i_0 + 1])))) * (((/* implicit */int) (unsigned char)0)))));
                    var_20 *= ((/* implicit */unsigned char) var_2);
                }
            } 
        } 
    } 
}
