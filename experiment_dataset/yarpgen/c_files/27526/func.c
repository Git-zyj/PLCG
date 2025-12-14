/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27526
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27526 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27526
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
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                var_11 += ((/* implicit */short) (+(((((((/* implicit */int) arr_3 [i_0] [i_0] [i_0])) > (((/* implicit */int) var_2)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1] [i_0]))))) : (((/* implicit */int) ((((/* implicit */int) var_5)) == (var_8))))))));
                arr_5 [i_0] [i_0] = ((/* implicit */signed char) var_2);
                var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) arr_1 [i_1]))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 1) 
        {
            {
                arr_12 [i_2] [i_3] = ((/* implicit */unsigned long long int) arr_8 [i_2]);
                var_13 = (!(((/* implicit */_Bool) (unsigned short)62467)));
            }
        } 
    } 
}
