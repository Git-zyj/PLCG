/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233738
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233738 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233738
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
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 15; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])), (((((/* implicit */_Bool) max((2387747930U), (((/* implicit */unsigned int) var_18))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned short)16384), (((/* implicit */unsigned short) (signed char)-1)))))) : (var_4)))));
                var_21 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1))) <= (var_14)));
                var_22 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_2 [(unsigned short)11])), (max((((/* implicit */unsigned int) (unsigned char)26)), (1907219366U)))));
                var_23 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned long long int) 1346929926)))));
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 2) 
    {
        var_24 = ((/* implicit */unsigned long long int) ((unsigned char) arr_1 [i_2]));
        arr_9 [i_2] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) (unsigned short)16369)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (-1LL)))));
    }
}
