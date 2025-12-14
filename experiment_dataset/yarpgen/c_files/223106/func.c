/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223106
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223106 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223106
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
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (signed char i_2 = 1; i_2 < 12; i_2 += 3) 
            {
                {
                    var_11 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((arr_3 [i_2 + 1]), (((/* implicit */signed char) (_Bool)1)))))));
                    var_12 = min((min((((/* implicit */long long int) arr_3 [i_2 + 1])), (var_8))), (((/* implicit */long long int) (-(((/* implicit */int) arr_3 [i_2 + 1]))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_3 = 4; i_3 < 14; i_3 += 1) 
    {
        for (long long int i_4 = 0; i_4 < 17; i_4 += 4) 
        {
            {
                var_13 &= ((/* implicit */long long int) (((-(5614976012097689119ULL))) < (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)41570)))))));
                arr_12 [i_3] [10ULL] [i_4] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)23976)) <= (((/* implicit */int) (unsigned short)41570))));
            }
        } 
    } 
}
