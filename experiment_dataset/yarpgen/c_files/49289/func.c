/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49289
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49289 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49289
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
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            var_19 = ((/* implicit */unsigned long long int) ((long long int) arr_5 [i_0]));
            var_20 |= ((/* implicit */unsigned int) ((_Bool) arr_1 [i_1]));
        }
        arr_7 [i_0] = ((/* implicit */unsigned long long int) ((unsigned char) ((signed char) arr_0 [i_0])));
        var_21 |= ((/* implicit */unsigned char) arr_4 [i_0] [i_0] [7LL]);
    }
    /* LoopSeq 1 */
    for (unsigned char i_2 = 0; i_2 < 19; i_2 += 4) 
    {
        arr_10 [i_2] = ((/* implicit */int) ((unsigned short) ((short) arr_9 [i_2])));
        /* LoopSeq 1 */
        for (unsigned char i_3 = 0; i_3 < 19; i_3 += 2) 
        {
            arr_14 [i_2] [i_2] [i_2] = ((/* implicit */short) arr_13 [i_2] [i_2] [i_2]);
            var_22 = ((/* implicit */unsigned char) arr_11 [i_2] [i_2] [i_2]);
        }
    }
}
