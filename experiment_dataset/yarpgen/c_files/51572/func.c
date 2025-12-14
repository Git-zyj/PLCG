/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51572
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51572 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51572
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
    for (int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    var_10 = ((/* implicit */unsigned short) ((((arr_0 [i_0]) + (arr_8 [i_1]))) - (((/* implicit */long long int) ((/* implicit */int) min((arr_3 [i_1]), (((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_2])) || (((/* implicit */_Bool) arr_4 [i_0] [i_1])))))))))));
                    arr_11 [i_1] [i_1] = ((/* implicit */int) arr_3 [i_1]);
                    arr_12 [i_1] [i_1] [(unsigned short)4] [5LL] = ((/* implicit */short) arr_6 [i_2]);
                }
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned short i_3 = 0; i_3 < 14; i_3 += 4) 
        {
            var_11 = ((/* implicit */unsigned char) arr_9 [i_3] [i_0] [i_0]);
            var_12 |= ((/* implicit */unsigned long long int) min((arr_1 [i_0] [i_3]), (((arr_1 [i_3] [i_0]) << (((arr_1 [i_0] [i_3]) - (158659260)))))));
            var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) arr_9 [i_0] [i_3] [i_3])) < (((/* implicit */int) arr_9 [i_0] [i_0] [i_3]))))) * (((/* implicit */int) ((((/* implicit */int) arr_9 [i_3] [i_0] [i_0])) != (((/* implicit */int) arr_9 [i_3] [i_0] [i_0])))))));
            var_14 = ((/* implicit */signed char) arr_8 [i_3]);
        }
        var_15 ^= max((min((arr_4 [i_0] [(signed char)8]), (arr_4 [4ULL] [4ULL]))), (((/* implicit */int) ((((/* implicit */long long int) arr_1 [i_0] [i_0])) > (arr_0 [i_0])))));
    }
    var_16 = ((/* implicit */unsigned long long int) var_7);
    var_17 = ((/* implicit */short) var_4);
    var_18 = ((/* implicit */unsigned int) var_8);
}
