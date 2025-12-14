/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221689
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221689 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221689
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
    var_19 = ((/* implicit */unsigned short) min(((~(((/* implicit */int) ((unsigned short) var_18))))), ((((~(((/* implicit */int) var_16)))) & ((~(((/* implicit */int) var_10))))))));
    var_20 = ((/* implicit */unsigned short) max(((+(((/* implicit */int) var_12)))), (((/* implicit */int) min((((/* implicit */unsigned short) var_15)), (min(((unsigned short)18708), ((unsigned short)58175))))))));
    var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (unsigned short)65527)) ? (((/* implicit */int) (unsigned short)52376)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((_Bool) var_2)))))) ? ((((((~(((/* implicit */int) var_11)))) + (2147483647))) >> (((((/* implicit */int) var_5)) - (55775))))) : (((/* implicit */int) (!(var_2))))));
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 1; i_3 < 14; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 13; i_4 += 2) 
                        {
                            {
                                arr_12 [i_1] |= ((/* implicit */unsigned short) max((((((_Bool) arr_6 [i_0] [i_0] [i_0] [i_1])) ? ((~(((/* implicit */int) var_10)))) : (((/* implicit */int) min((arr_10 [(_Bool)1] [i_1] [i_1] [i_2] [(unsigned short)2]), (var_14)))))), ((~(((/* implicit */int) max((var_5), (var_0))))))));
                                var_22 = ((/* implicit */unsigned short) ((max((((/* implicit */int) max((arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned short) var_9))))), ((~(((/* implicit */int) arr_4 [i_0])))))) % (max(((~(((/* implicit */int) arr_9 [i_3 + 1] [i_3 + 1] [i_0] [i_0] [i_1] [i_0])))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_9 [i_0] [i_1] [i_0] [i_3] [i_0] [i_3])) : (((/* implicit */int) arr_10 [i_0] [i_1] [i_0] [i_4] [i_2]))))))));
                                arr_13 [i_0] = ((/* implicit */unsigned short) arr_3 [i_0] [i_3]);
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */_Bool) min((var_23), (((_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_7 [i_1] [i_2]))))) ? (((/* implicit */int) ((unsigned short) arr_3 [i_2] [i_1]))) : ((+(((/* implicit */int) (unsigned short)39954)))))))));
                    /* LoopSeq 1 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        var_24 = ((/* implicit */unsigned short) max((((/* implicit */int) var_13)), (max(((~(((/* implicit */int) arr_4 [i_1])))), ((~(((/* implicit */int) var_15))))))));
                        var_25 |= ((((/* implicit */_Bool) ((unsigned short) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0]))) || (((/* implicit */_Bool) ((((_Bool) var_4)) ? (((/* implicit */int) ((_Bool) arr_5 [(unsigned short)9] [(unsigned short)9] [(unsigned short)9] [i_1]))) : (((/* implicit */int) var_3))))));
                        var_26 = ((/* implicit */_Bool) (~(((/* implicit */int) ((unsigned short) ((var_12) ? (((/* implicit */int) arr_1 [i_5])) : (((/* implicit */int) var_6))))))));
                    }
                    var_27 = ((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_1] [i_1] [i_2]);
                }
            } 
        } 
        arr_17 [i_0] = var_7;
    }
    for (unsigned short i_6 = 0; i_6 < 19; i_6 += 2) 
    {
        var_28 = ((/* implicit */_Bool) min((var_28), (((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_6] [i_6])) ? (((/* implicit */int) arr_19 [i_6] [i_6])) : (((/* implicit */int) var_9))))) || (((/* implicit */_Bool) var_0))))))))));
        arr_20 [i_6] |= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(((((/* implicit */int) arr_19 [i_6] [i_6])) | (((/* implicit */int) var_17)))))))));
        /* LoopNest 2 */
        for (unsigned short i_7 = 3; i_7 < 18; i_7 += 1) 
        {
            for (unsigned short i_8 = 3; i_8 < 15; i_8 += 1) 
            {
                {
                    arr_25 [i_7] [i_8] = ((/* implicit */unsigned short) min((min((((/* implicit */int) var_14)), ((-(((/* implicit */int) var_15)))))), (((((/* implicit */_Bool) arr_24 [(unsigned short)15] [i_7] [i_6])) ? (((arr_21 [i_8 + 1] [i_7] [i_6]) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_5)))) : (((((/* implicit */_Bool) arr_24 [i_6] [i_7 + 1] [i_6])) ? (((/* implicit */int) arr_18 [(unsigned short)1] [i_6])) : (((/* implicit */int) var_7))))))));
                    arr_26 [i_6] [i_6] [i_8] = ((/* implicit */_Bool) (-(max((((arr_18 [i_6] [i_8 + 2]) ? (((/* implicit */int) arr_23 [i_6] [i_7] [i_8] [i_6])) : (((/* implicit */int) arr_24 [i_6] [i_7] [i_8])))), (((/* implicit */int) var_18))))));
                    var_29 = ((/* implicit */unsigned short) var_6);
                }
            } 
        } 
    }
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
    {
        var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) ((_Bool) ((unsigned short) (unsigned short)39954))))));
        arr_30 [i_9] [i_9] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) min(((unsigned short)57447), (arr_28 [i_9]))))))) ? (((/* implicit */int) arr_22 [i_9] [i_9])) : (((/* implicit */int) arr_27 [i_9]))));
        arr_31 [i_9] [i_9] |= ((((/* implicit */int) arr_19 [i_9] [i_9])) >= ((-(((((/* implicit */_Bool) arr_22 [i_9] [i_9])) ? (((/* implicit */int) var_18)) : (((/* implicit */int) arr_21 [i_9] [i_9] [i_9])))))));
        arr_32 [i_9] [i_9] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+((+(((/* implicit */int) arr_27 [i_9]))))))) ? ((~(((/* implicit */int) ((_Bool) arr_22 [i_9] [i_9]))))) : (((/* implicit */int) ((unsigned short) min((arr_24 [i_9] [i_9] [i_9]), (((/* implicit */unsigned short) var_12))))))));
    }
    /* vectorizable */
    for (unsigned short i_10 = 2; i_10 < 11; i_10 += 3) 
    {
        arr_35 [i_10] [i_10] = ((/* implicit */unsigned short) arr_34 [i_10]);
        var_31 = ((_Bool) var_15);
    }
    var_32 -= ((/* implicit */unsigned short) max(((-(((/* implicit */int) (_Bool)0)))), (min((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_1)))), (((/* implicit */int) var_13))))));
}
