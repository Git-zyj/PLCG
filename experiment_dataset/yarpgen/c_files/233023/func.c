/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233023
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233023 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233023
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
    var_20 = (((((((-2147483647 - 1)) + (2147483647))) + (2147483647))) << (((((/* implicit */int) (unsigned short)35520)) - (35520))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (short i_1 = 1; i_1 < 13; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    var_21 ^= ((/* implicit */signed char) (-(max((((/* implicit */unsigned long long int) arr_6 [i_2] [(unsigned char)11] [i_0])), ((-(16901556599223378302ULL)))))));
                    arr_9 [(short)10] [i_1] [i_2] [i_0] = ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) 2147483641)))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) max((max(((short)-19614), ((short)23868))), (((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) < (-2104754517369955704LL)))))))) ^ (var_5)));
}
