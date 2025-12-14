/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40949
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40949 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40949
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
    var_20 &= ((/* implicit */int) var_11);
    var_21 = ((/* implicit */unsigned short) (_Bool)0);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 22; i_1 += 4) 
        {
            {
                var_22 &= ((/* implicit */_Bool) 1964231789);
                /* LoopSeq 1 */
                for (unsigned short i_2 = 0; i_2 < 24; i_2 += 3) 
                {
                    arr_7 [(unsigned char)8] [i_0] [(unsigned char)8] [(unsigned char)8] = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)-32748)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32728))) : (2797299620680559045ULL)));
                    arr_8 [i_0] [i_0] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-32747)) & (((/* implicit */int) arr_3 [i_1 + 1] [i_1 + 2]))));
                    var_23 = ((/* implicit */int) max((var_23), ((-(((/* implicit */int) (_Bool)1))))));
                }
            }
        } 
    } 
}
