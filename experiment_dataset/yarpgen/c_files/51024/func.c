/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51024
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51024 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51024
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
    for (int i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        arr_4 [(short)6] = arr_2 [i_0];
        var_11 *= ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_1 [i_0]))));
        /* LoopSeq 2 */
        for (unsigned char i_1 = 2; i_1 < 8; i_1 += 3) 
        {
            var_12 |= ((/* implicit */short) ((unsigned long long int) arr_7 [i_0]));
            var_13 = ((/* implicit */unsigned long long int) (((~(((127ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-125))))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1])))));
            arr_8 [5ULL] [i_1] |= ((/* implicit */short) arr_5 [i_0]);
        }
        for (short i_2 = 0; i_2 < 10; i_2 += 1) 
        {
            var_14 = ((/* implicit */short) ((((min((((/* implicit */unsigned long long int) arr_1 [i_2])), (arr_7 [i_0]))) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_2]))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (~(arr_7 [i_2]))))))));
            var_15 = ((/* implicit */short) arr_0 [(signed char)1] [i_0]);
        }
    }
    var_16 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max(((~(var_10))), (((var_9) / (((/* implicit */int) (unsigned char)29)))))))));
}
