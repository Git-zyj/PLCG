/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247146
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247146 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247146
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
    var_18 = ((/* implicit */short) var_14);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                arr_8 [i_0] = ((/* implicit */signed char) ((((unsigned int) arr_7 [i_0] [i_1])) < (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_1] [i_1])) ? (((/* implicit */int) arr_7 [i_1] [(unsigned short)12])) : (((/* implicit */int) (_Bool)0)))))));
                var_19 = ((/* implicit */short) var_11);
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 2) 
    {
        arr_12 [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_9) ? (var_2) : (arr_11 [13LL])))) ? ((~(((/* implicit */int) arr_9 [i_2])))) : ((+(((/* implicit */int) (_Bool)1))))));
        arr_13 [i_2] = ((/* implicit */signed char) ((_Bool) (~(((/* implicit */int) arr_9 [i_2])))));
        arr_14 [i_2] = ((/* implicit */unsigned char) var_2);
        var_20 = ((/* implicit */short) 16776960);
    }
}
