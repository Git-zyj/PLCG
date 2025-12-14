/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230759
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230759 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230759
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
    var_14 = ((5085125553966902374LL) != (((/* implicit */long long int) ((/* implicit */int) (unsigned char)127))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 1; i_0 < 15; i_0 += 4) 
    {
        arr_3 [i_0] [(short)14] = ((/* implicit */unsigned int) arr_0 [(short)15] [i_0]);
        /* LoopNest 2 */
        for (long long int i_1 = 3; i_1 < 16; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */unsigned char) var_11);
                    var_16 |= ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_2] [i_0]))) <= (arr_0 [i_0 + 1] [i_1]))))));
                    arr_8 [i_0] [i_0] [i_2] = ((/* implicit */short) (!(((/* implicit */_Bool) (signed char)123))));
                }
            } 
        } 
    }
    var_17 = ((/* implicit */long long int) var_11);
    var_18 = ((/* implicit */signed char) var_11);
}
