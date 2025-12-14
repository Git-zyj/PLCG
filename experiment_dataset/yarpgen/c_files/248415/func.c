/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248415
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248415 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248415
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
    var_18 = ((/* implicit */unsigned long long int) ((unsigned short) max((var_11), (((/* implicit */long long int) ((int) 736344811))))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */int) (+(min((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0])))));
        arr_5 [i_0] = ((/* implicit */long long int) arr_0 [i_0] [i_0]);
        var_19 ^= ((/* implicit */unsigned char) 9223372036854775807LL);
        var_20 = ((/* implicit */short) arr_2 [(unsigned short)13] [i_0]);
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_21 = ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)0))));
        /* LoopNest 2 */
        for (unsigned short i_2 = 2; i_2 < 20; i_2 += 4) 
        {
            for (signed char i_3 = 4; i_3 < 21; i_3 += 4) 
            {
                {
                    var_22 = ((/* implicit */_Bool) ((arr_11 [i_2 + 3]) - (arr_11 [i_2 - 2])));
                    var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) (+(((/* implicit */int) (unsigned short)65526)))))));
                    var_24 = ((/* implicit */short) (+(((((/* implicit */_Bool) arr_12 [22U] [i_2] [22U] [i_2])) ? (((/* implicit */int) (unsigned char)144)) : (((/* implicit */int) arr_8 [i_1] [i_3]))))));
                }
            } 
        } 
        var_25 ^= ((/* implicit */unsigned int) arr_8 [i_1] [i_1]);
    }
    for (unsigned int i_4 = 1; i_4 < 24; i_4 += 2) 
    {
        var_26 = ((/* implicit */long long int) ((unsigned int) (~(((arr_13 [i_4]) & (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_4]))))))));
        arr_17 [i_4] = (-(((/* implicit */int) (short)-6590)));
    }
    var_27 = ((/* implicit */unsigned long long int) var_11);
    var_28 = ((/* implicit */int) (+(min((((((/* implicit */_Bool) 508)) ? (-9223372036854775807LL) : (((/* implicit */long long int) var_5)))), (((/* implicit */long long int) max((((/* implicit */int) (signed char)-56)), (100663296))))))));
    var_29 = ((/* implicit */long long int) var_15);
}
