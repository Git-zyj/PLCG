/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34059
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34059 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34059
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
    var_16 -= var_8;
    var_17 = ((/* implicit */signed char) max((max((((/* implicit */int) (unsigned char)73)), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (short)24633)) : (((/* implicit */int) (unsigned char)182)))))), (((/* implicit */int) var_1))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    var_18 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))));
                    var_19 = ((/* implicit */unsigned int) max((((((/* implicit */unsigned long long int) var_12)) & (0ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_2]) : (arr_0 [i_0]))))));
                    var_20 = ((/* implicit */unsigned short) var_10);
                    arr_9 [i_0] [(_Bool)1] [i_1] [i_2] = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */int) arr_6 [i_0] [i_1] [i_2] [i_1])) & (((/* implicit */int) arr_6 [i_0] [i_1] [(short)5] [i_1])))));
                    arr_10 [i_0] [i_1] [i_1] [i_2] |= ((/* implicit */unsigned short) max((((/* implicit */long long int) var_5)), (max((((arr_2 [(unsigned char)3]) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))))), (((/* implicit */long long int) ((((/* implicit */int) arr_4 [i_2])) | (((/* implicit */int) (short)16384)))))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */short) var_15);
    var_22 = ((/* implicit */unsigned int) var_2);
}
