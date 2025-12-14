/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44300
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44300 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44300
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
    var_18 = ((((((/* implicit */_Bool) ((unsigned short) var_16))) ? (var_10) : (((/* implicit */unsigned int) min((((/* implicit */int) (unsigned short)0)), (-528583170)))))) & (((/* implicit */unsigned int) ((((min((-1896516472), (1896516472))) + (2147483647))) << (((4294967295U) - (4294967295U)))))));
    var_19 = ((/* implicit */signed char) max((((/* implicit */unsigned int) var_16)), (((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_16)), (var_4)))) ? (((((/* implicit */_Bool) -1285165000)) ? (3295199770U) : (((/* implicit */unsigned int) -1896516485)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_13))))))));
    var_20 = ((/* implicit */long long int) 4294967291U);
    var_21 = ((/* implicit */signed char) max((max((var_4), (var_2))), (((((/* implicit */_Bool) var_14)) ? (((((/* implicit */_Bool) var_7)) ? (var_14) : (var_1))) : (((/* implicit */unsigned int) var_17))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 13; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                {
                    var_22 = (+(((263614378) % (2147483647))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 13; i_3 += 3) 
                    {
                        arr_11 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_4 [i_0] [i_1 + 2])) | (((/* implicit */int) arr_4 [i_1 - 1] [i_2]))));
                        var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 1285165000)) ? (((((/* implicit */_Bool) (short)16738)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)69)))) : (((/* implicit */int) (unsigned short)65472)))))));
                        arr_12 [i_0] = ((((/* implicit */_Bool) arr_4 [i_1 - 2] [i_1 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_1 - 1] [i_3 + 4] [i_1 - 2] [i_1 - 1]))) : (var_7));
                        arr_13 [i_0] [i_1] [i_2] [(_Bool)1] [i_0] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_1 + 1])) ? (-4400026793970974454LL) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1 - 1])))));
                    }
                    arr_14 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) var_7);
                }
            } 
        } 
    } 
}
