/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198033
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198033 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198033
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
    var_20 = ((/* implicit */int) (-((-(min((((/* implicit */unsigned long long int) var_9)), (var_15)))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 3; i_0 < 23; i_0 += 2) 
    {
        var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) arr_0 [i_0] [i_0]))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            var_22 = ((/* implicit */long long int) arr_3 [i_0] [i_0]);
            var_23 ^= ((/* implicit */int) var_13);
            arr_4 [(signed char)24] [i_1] = ((/* implicit */unsigned char) (~(491424418008368342LL)));
            arr_5 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_0 - 2])) ? (((/* implicit */int) arr_0 [i_0] [i_0 + 2])) : (arr_1 [i_0 + 1])));
            var_24 -= ((/* implicit */unsigned long long int) arr_2 [i_1] [i_0]);
        }
    }
    var_25 = ((/* implicit */int) (+(491424418008368338LL)));
}
