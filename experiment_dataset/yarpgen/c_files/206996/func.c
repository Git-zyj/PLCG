/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206996
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206996 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206996
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
    var_11 = var_10;
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        var_12 &= arr_0 [i_0];
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (unsigned short)62337)) : (((/* implicit */int) arr_1 [i_0] [i_0]))));
    }
    for (unsigned short i_1 = 0; i_1 < 19; i_1 += 1) 
    {
        arr_5 [i_1] = ((/* implicit */unsigned short) max((max((((((/* implicit */int) (unsigned short)30815)) << (((((/* implicit */int) var_3)) - (53451))))), (((((/* implicit */_Bool) (unsigned short)27779)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_1 [i_1] [i_1])))))), (((/* implicit */int) max((var_2), (arr_0 [i_1]))))));
        var_13 ^= ((/* implicit */unsigned short) max((((/* implicit */int) var_5)), ((~(((/* implicit */int) arr_4 [i_1]))))));
        var_14 += ((/* implicit */unsigned short) (((+(((/* implicit */int) var_4)))) > (((((/* implicit */int) var_3)) | (((/* implicit */int) ((unsigned short) (unsigned short)496)))))));
    }
    /* vectorizable */
    for (unsigned short i_2 = 0; i_2 < 16; i_2 += 4) 
    {
        var_15 |= arr_7 [i_2];
        /* LoopNest 3 */
        for (unsigned short i_3 = 0; i_3 < 16; i_3 += 1) 
        {
            for (unsigned short i_4 = 0; i_4 < 16; i_4 += 4) 
            {
                for (unsigned short i_5 = 0; i_5 < 16; i_5 += 2) 
                {
                    {
                        var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) ((((/* implicit */int) arr_19 [i_3] [i_3])) <= (((/* implicit */int) arr_8 [i_4] [i_4] [i_4])))))));
                        var_17 ^= ((unsigned short) ((((/* implicit */int) var_4)) % (((/* implicit */int) arr_15 [i_2] [i_3] [i_5]))));
                        var_18 &= ((unsigned short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_0))));
                        var_19 = ((unsigned short) arr_10 [i_2]);
                    }
                } 
            } 
        } 
        var_20 += ((/* implicit */unsigned short) (~(((/* implicit */int) ((unsigned short) arr_17 [i_2] [i_2] [i_2] [i_2] [i_2])))));
        var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_17 [i_2] [i_2] [i_2] [i_2] [i_2])) ? (((/* implicit */int) arr_17 [(unsigned short)11] [i_2] [i_2] [i_2] [i_2])) : (((/* implicit */int) arr_17 [i_2] [i_2] [i_2] [i_2] [i_2]))));
        var_22 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)8634)) - (((/* implicit */int) (unsigned short)65524))));
    }
}
