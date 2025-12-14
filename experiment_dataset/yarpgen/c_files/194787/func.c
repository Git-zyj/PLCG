/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194787
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194787 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194787
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
    var_14 = ((/* implicit */unsigned long long int) var_5);
    var_15 = ((/* implicit */int) var_6);
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */_Bool) max((((unsigned short) arr_1 [i_0 + 2])), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_1] [i_1 + 1] [i_1])) | (((/* implicit */int) arr_0 [i_0]))))))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_2 = 0; i_2 < 19; i_2 += 1) 
                {
                    var_17 = ((/* implicit */unsigned char) (signed char)-78);
                    var_18 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) arr_1 [i_0 - 1])) < (arr_7 [i_0 + 1] [i_0] [i_1 + 1] [i_2])));
                    arr_8 [i_0] [i_1] [i_0] = ((/* implicit */long long int) arr_3 [i_0] [i_0]);
                    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)84)) ? (var_12) : (((/* implicit */unsigned long long int) arr_7 [i_1 + 1] [i_0] [i_1 + 1] [i_1 + 1]))));
                }
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */int) var_8)) >> (((((/* implicit */int) var_11)) - (33)))));
}
