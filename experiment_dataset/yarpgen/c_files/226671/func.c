/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226671
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226671 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226671
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
    var_18 *= var_4;
    var_19 = ((/* implicit */unsigned long long int) var_1);
    var_20 &= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */int) var_1)) / (var_3)))) ? (var_7) : (((/* implicit */long long int) var_8)))) << (((var_16) - (5345592426403151128ULL)))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (unsigned int i_1 = 2; i_1 < 21; i_1 += 1) 
        {
            for (short i_2 = 2; i_2 < 23; i_2 += 1) 
            {
                {
                    arr_7 [22] [(short)23] [22] = ((/* implicit */unsigned char) arr_0 [i_2 + 1]);
                    var_21 = ((/* implicit */short) arr_4 [i_2 - 1]);
                    var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) ((var_8) & (((/* implicit */unsigned int) ((((((/* implicit */_Bool) 1179592251U)) ? (arr_6 [i_0] [i_0] [i_0] [i_2]) : (arr_6 [i_0] [(unsigned short)16] [(unsigned char)0] [(unsigned char)1]))) >> (((-618092908) + (618092936)))))))))));
                }
            } 
        } 
    } 
}
