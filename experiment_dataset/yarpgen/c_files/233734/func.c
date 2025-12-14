/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233734
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233734 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233734
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_11 = ((/* implicit */short) max((var_11), (((/* implicit */short) arr_0 [i_0 + 1] [i_0 + 1]))));
        var_12 &= 2147483647;
    }
    /* LoopNest 2 */
    for (short i_1 = 0; i_1 < 25; i_1 += 4) 
    {
        for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 3) 
        {
            {
                arr_8 [i_2] [i_2] [4U] = ((((((/* implicit */int) arr_6 [i_1] [i_2])) + (((/* implicit */int) arr_5 [i_1] [i_1])))) + (((((/* implicit */int) (signed char)21)) / (-1))));
                var_13 = (-(min(((-(((/* implicit */int) (short)-17647)))), (((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_10))))))));
            }
        } 
    } 
}
