/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210723
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210723 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210723
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
    for (short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (unsigned int i_1 = 2; i_1 < 10; i_1 += 3) 
        {
            {
                arr_5 [(_Bool)1] |= ((/* implicit */short) ((((/* implicit */int) arr_4 [0ULL] [i_0] [0ULL])) << (((((arr_2 [i_0] [i_1 - 2]) >> (((((((/* implicit */int) arr_4 [(short)6] [i_1 + 1] [(short)6])) | (((/* implicit */int) arr_4 [8ULL] [i_0] [i_1])))) - (19340))))) - (28895410029046ULL)))));
                var_12 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_1] [i_1] [i_1])) || (((((arr_2 [i_1] [i_0]) ^ (arr_2 [(_Bool)1] [(_Bool)1]))) >= (((((/* implicit */unsigned long long int) arr_0 [i_0])) | (arr_2 [i_0] [i_0])))))));
                var_13 -= ((/* implicit */_Bool) arr_4 [(signed char)0] [(unsigned short)2] [i_1 + 1]);
                var_14 = ((/* implicit */unsigned short) min((var_14), (arr_4 [(unsigned short)10] [i_1 - 1] [i_1 - 1])));
                var_15 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0] [(unsigned short)2])) || (((((/* implicit */int) arr_3 [i_1] [i_0] [i_1])) <= (((/* implicit */int) arr_4 [i_1] [i_1] [i_1]))))))) - (((((((/* implicit */int) arr_1 [i_0] [i_0])) - (((/* implicit */int) arr_3 [i_0] [i_0] [i_1])))) ^ (((((/* implicit */int) arr_4 [i_1] [i_1] [i_0])) - (((/* implicit */int) arr_1 [i_0] [i_0]))))))));
            }
        } 
    } 
    var_16 = ((/* implicit */short) var_11);
    var_17 |= ((/* implicit */unsigned int) var_9);
}
