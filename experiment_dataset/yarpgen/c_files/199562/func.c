/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199562
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199562 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199562
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
    var_16 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) 32767)) ? (((/* implicit */unsigned long long int) ((((-1) + (2147483647))) << (((((/* implicit */int) (_Bool)1)) - (1)))))) : (var_4)))));
    var_17 = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned char)127))));
    var_18 = ((/* implicit */int) var_9);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        /* LoopSeq 3 */
        for (int i_1 = 1; i_1 < 22; i_1 += 4) 
        {
            var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) arr_3 [i_0] [21U] [i_1 + 1])) < (((arr_2 [i_1 + 1] [i_1 + 1]) ? (((((/* implicit */unsigned int) arr_4 [i_0] [i_1 + 1] [i_1])) | (3440805866U))) : (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)142))))))))))));
            var_20 -= ((/* implicit */_Bool) ((unsigned long long int) (!(((/* implicit */_Bool) var_9)))));
        }
        for (int i_2 = 3; i_2 < 21; i_2 += 4) 
        {
            var_21 = ((/* implicit */unsigned long long int) arr_4 [i_2] [i_2 - 2] [i_2 - 2]);
            var_22 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)15)) || (((/* implicit */_Bool) (unsigned char)128))));
            arr_8 [(_Bool)1] [i_0] = ((/* implicit */unsigned char) max((((2781618087U) * (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_2] [i_0]))))), (((/* implicit */unsigned int) (-(((/* implicit */int) ((arr_1 [i_2] [i_0]) >= (((/* implicit */unsigned int) var_5))))))))));
        }
        for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned char i_4 = 0; i_4 < 23; i_4 += 4) 
            {
                for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                {
                    {
                        arr_17 [i_5 + 1] [i_4] [i_3 - 1] [i_3 - 1] [i_0] = ((int) ((max((((/* implicit */unsigned int) arr_10 [7] [i_4] [i_0])), (arr_1 [i_5] [i_0]))) - (((/* implicit */unsigned int) ((/* implicit */int) ((var_6) || (((/* implicit */_Bool) (unsigned char)64))))))));
                        var_23 = ((/* implicit */int) ((min((((/* implicit */unsigned int) arr_3 [i_3 - 1] [i_0] [i_5 + 1])), (((unsigned int) var_11)))) * (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_5] [i_4] [i_0])))));
                    }
                } 
            } 
            var_24 |= arr_16 [i_0];
        }
        arr_18 [i_0] &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_0] [i_0])) ? (var_1) : (((/* implicit */unsigned int) arr_12 [i_0] [i_0])))))));
        var_25 = ((/* implicit */unsigned char) max((16347952191096009218ULL), (((/* implicit */unsigned long long int) (+(max((arr_14 [i_0] [i_0]), (var_9))))))));
    }
}
