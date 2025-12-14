/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227228
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227228 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227228
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 12; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) (~(((((/* implicit */long long int) (~(var_16)))) | (arr_3 [(unsigned short)1] [i_1]))))))));
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned int) ((((arr_3 [i_1] [i_0]) + (9223372036854775807LL))) << (((max((((/* implicit */int) (unsigned short)57020)), (427331620))) - (427331620)))));
                arr_7 [i_0] = arr_0 [i_1];
            }
        } 
    } 
    var_19 = ((/* implicit */short) max((((/* implicit */long long int) (_Bool)1)), (max((var_13), (((/* implicit */long long int) var_16))))));
}
