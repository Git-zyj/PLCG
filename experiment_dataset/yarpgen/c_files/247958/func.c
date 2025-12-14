/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247958
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247958 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247958
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
    /* LoopSeq 2 */
    for (long long int i_0 = 1; i_0 < 11; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */short) arr_1 [i_0]);
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)112)) * (((/* implicit */int) (unsigned char)119))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_16 = ((/* implicit */signed char) ((((/* implicit */int) arr_5 [i_1])) | (((/* implicit */int) arr_5 [i_1]))));
        /* LoopNest 3 */
        for (unsigned short i_2 = 0; i_2 < 15; i_2 += 4) 
        {
            for (signed char i_3 = 0; i_3 < 15; i_3 += 3) 
            {
                for (unsigned char i_4 = 3; i_4 < 14; i_4 += 4) 
                {
                    {
                        arr_12 [i_1] [i_1] [(unsigned char)12] [i_4] = (!(((((/* implicit */_Bool) 1901819972U)) || (((/* implicit */_Bool) var_0)))));
                        arr_13 [i_1] [(unsigned char)14] [i_3] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) 3992556236569359954ULL)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (unsigned char)119))));
                    }
                } 
            } 
        } 
    }
    var_17 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) (signed char)-7)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) > (var_2)))))), (((/* implicit */int) max((((/* implicit */unsigned char) var_11)), (var_6))))));
    var_18 = ((/* implicit */unsigned short) var_1);
}
