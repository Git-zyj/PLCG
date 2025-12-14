/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223226
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223226 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223226
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
    var_17 = ((/* implicit */signed char) max((((((/* implicit */int) var_2)) / (var_3))), ((-(((/* implicit */int) var_0))))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            var_18 ^= ((/* implicit */unsigned int) ((int) ((((/* implicit */int) arr_3 [i_0] [i_0])) + (((/* implicit */int) arr_1 [10U])))));
            /* LoopSeq 1 */
            for (unsigned char i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                arr_7 [i_0] [i_1] = (((_Bool)1) ? (((/* implicit */unsigned long long int) arr_0 [i_0])) : (arr_2 [i_0]));
                var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) ((arr_6 [i_0] [i_1] [14LL]) != (arr_6 [i_1] [i_0] [0]))))));
                var_20 *= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_3 [i_1] [i_2]))));
            }
            arr_8 [i_0] [i_0] = ((/* implicit */int) arr_1 [i_0]);
        }
        var_21 = ((/* implicit */short) ((long long int) ((((/* implicit */int) arr_4 [i_0] [i_0])) != (((/* implicit */int) arr_4 [i_0] [i_0])))));
    }
}
