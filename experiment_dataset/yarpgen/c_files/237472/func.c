/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237472
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237472 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237472
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
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (int i_1 = 2; i_1 < 12; i_1 += 4) 
        {
            for (long long int i_2 = 3; i_2 < 12; i_2 += 1) 
            {
                {
                    arr_8 [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) max((-1183836312), (((((/* implicit */_Bool) (short)32256)) ? (((/* implicit */int) (unsigned char)233)) : (((/* implicit */int) var_5)))))))));
                    var_19 ^= ((/* implicit */short) (~(((/* implicit */int) arr_2 [i_1]))));
                    var_20 = ((/* implicit */long long int) arr_4 [i_0] [i_0] [i_2 - 1]);
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) (short)-32257)) ? (((/* implicit */int) (short)32276)) : (((/* implicit */int) (short)-32257))));
}
