/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241617
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241617 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241617
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
    var_16 |= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (signed char)-98)) ? (((((/* implicit */_Bool) (signed char)95)) ? (960461165U) : (var_3))) : (((/* implicit */unsigned int) (-(2145386496)))))) * (((/* implicit */unsigned int) ((/* implicit */int) (!(var_15)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 4; i_1 < 23; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned short) var_11);
                /* LoopSeq 2 */
                for (unsigned short i_2 = 0; i_2 < 25; i_2 += 2) 
                {
                    arr_10 [i_0] [i_0] = ((/* implicit */unsigned char) arr_1 [i_0]);
                    var_17 = ((/* implicit */short) (!(((/* implicit */_Bool) var_4))));
                }
                /* vectorizable */
                for (unsigned long long int i_3 = 2; i_3 < 24; i_3 += 1) 
                {
                    var_18 = ((/* implicit */unsigned long long int) ((_Bool) (+(((/* implicit */int) (signed char)112)))));
                    arr_14 [4U] [i_0] = ((/* implicit */long long int) ((arr_7 [i_1 + 1]) | (arr_7 [i_1 - 1])));
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 14; i_4 += 2) 
    {
        for (unsigned int i_5 = 0; i_5 < 14; i_5 += 2) 
        {
            {
                var_19 ^= ((/* implicit */short) var_9);
                var_20 -= ((/* implicit */short) (signed char)-113);
            }
        } 
    } 
}
