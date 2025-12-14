/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249724
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249724 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249724
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
    for (unsigned int i_0 = 2; i_0 < 16; i_0 += 4) 
    {
        for (int i_1 = 2; i_1 < 16; i_1 += 1) 
        {
            {
                arr_8 [i_0] [i_0 + 1] [i_1] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_7 [i_1] [i_1] [i_1]))))) ? ((-(16663736913746719831ULL))) : (((/* implicit */unsigned long long int) ((arr_4 [i_1 + 1]) + (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1] [i_1]))))))))));
                /* LoopSeq 1 */
                for (unsigned char i_2 = 1; i_2 < 15; i_2 += 1) 
                {
                    var_11 &= ((/* implicit */short) arr_7 [i_0] [i_1 + 1] [i_1 + 1]);
                    var_12 -= ((/* implicit */unsigned long long int) ((signed char) arr_7 [i_0] [i_2] [i_2]));
                }
                var_13 = ((/* implicit */unsigned char) ((arr_10 [(short)4] [i_1 + 1] [i_1] [i_1]) / (((/* implicit */long long int) ((((/* implicit */unsigned int) 2145386496)) | (((((/* implicit */unsigned int) var_3)) ^ (arr_5 [i_1] [i_1]))))))));
            }
        } 
    } 
    var_14 = 3520298382U;
}
