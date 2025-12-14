/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32119
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32119 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32119
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
    var_11 = ((/* implicit */unsigned char) min((var_11), (((/* implicit */unsigned char) min((((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned char)103)) : (((/* implicit */int) var_9)))) : ((~(((/* implicit */int) var_1)))))), (((((/* implicit */_Bool) min(((unsigned char)152), ((unsigned char)113)))) ? (((/* implicit */int) min(((unsigned char)40), ((unsigned char)115)))) : (((((/* implicit */int) var_2)) % (((/* implicit */int) var_5)))))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (unsigned char i_2 = 1; i_2 < 23; i_2 += 3) 
            {
                {
                    var_12 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_6 [i_2] [i_1] [i_2]))));
                    var_13 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_2] [i_2 - 1] [(unsigned char)22])) ? (((/* implicit */int) arr_6 [i_1] [i_2 - 1] [i_1])) : (((/* implicit */int) arr_4 [i_2] [i_2 + 1] [i_2 + 1]))));
                    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? ((+(((/* implicit */int) (unsigned char)165)))) : (((/* implicit */int) var_6))));
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        arr_9 [i_2] [i_1] [i_2 + 1] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)143)) < (((/* implicit */int) ((((/* implicit */int) (unsigned char)103)) != (((/* implicit */int) (unsigned char)111)))))));
                        var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)153)) && (((/* implicit */_Bool) var_1))));
                        /* LoopSeq 2 */
                        for (unsigned char i_4 = 3; i_4 < 23; i_4 += 2) 
                        {
                            var_16 |= arr_11 [i_0] [i_1] [i_2] [i_3] [i_0] [i_4];
                            var_17 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_0 [i_1]))));
                            var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_10 [(unsigned char)16] [i_0] [(unsigned char)16] [i_3] [i_3] [i_3])) - (((/* implicit */int) arr_5 [i_1]))))) ? (((/* implicit */int) arr_5 [i_3])) : (((/* implicit */int) var_9)))))));
                        }
                        for (unsigned char i_5 = 0; i_5 < 24; i_5 += 4) 
                        {
                            var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)72)) ? (((/* implicit */int) arr_5 [i_2])) : (((/* implicit */int) arr_5 [i_2]))));
                            var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_11 [i_2 - 1] [i_2] [i_2 - 1] [i_2] [(unsigned char)14] [i_2])) : (((/* implicit */int) var_0))));
                        }
                    }
                }
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned char i_6 = 3; i_6 < 23; i_6 += 3) 
        {
            var_21 &= ((/* implicit */unsigned char) (~(((/* implicit */int) arr_1 [i_0] [i_6 - 3]))));
            /* LoopSeq 1 */
            for (unsigned char i_7 = 0; i_7 < 24; i_7 += 3) 
            {
                var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) arr_6 [i_6] [i_6 + 1] [i_6]))));
                var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)189)) ? (((/* implicit */int) var_4)) : (((((/* implicit */int) (unsigned char)113)) ^ (((/* implicit */int) (unsigned char)153))))));
                arr_21 [i_6] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)133)) / (((/* implicit */int) (unsigned char)153))));
                /* LoopNest 2 */
                for (unsigned char i_8 = 0; i_8 < 24; i_8 += 1) 
                {
                    for (unsigned char i_9 = 0; i_9 < 24; i_9 += 2) 
                    {
                        {
                            var_24 = var_8;
                            var_25 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)132)) / (((/* implicit */int) var_8))));
                            var_26 = var_4;
                            var_27 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_3 [(unsigned char)5] [(unsigned char)0] [i_6]))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (unsigned char i_10 = 0; i_10 < 24; i_10 += 3) 
                {
                    var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_23 [(unsigned char)11] [(unsigned char)11] [i_6 + 1] [i_7] [i_10] [(unsigned char)11])) || (((/* implicit */_Bool) (unsigned char)31))));
                    var_29 = ((/* implicit */unsigned char) (((-(((/* implicit */int) (unsigned char)245)))) - ((~(((/* implicit */int) (unsigned char)143))))));
                    var_30 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_18 [i_6] [i_6] [i_6 + 1])) > (((/* implicit */int) arr_12 [i_0] [(unsigned char)18] [i_6 - 1] [i_6 - 1]))));
                }
                for (unsigned char i_11 = 2; i_11 < 23; i_11 += 2) 
                {
                    var_31 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_12 [i_0] [i_6 - 3] [i_11 - 2] [i_11])) : (((/* implicit */int) arr_10 [i_6 + 1] [i_6] [i_7] [i_7] [i_6] [i_11 - 2]))));
                    var_32 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_9))));
                }
            }
        }
        var_33 = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)30))));
        var_34 = ((/* implicit */unsigned char) ((((/* implicit */int) var_5)) ^ (((/* implicit */int) var_2))));
    }
}
