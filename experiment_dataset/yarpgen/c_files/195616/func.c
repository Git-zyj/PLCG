/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195616
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195616 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195616
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 4; i_1 < 22; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned char i_2 = 0; i_2 < 24; i_2 += 3) 
                {
                    var_11 = ((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned char) (-(((/* implicit */int) (_Bool)1))))))));
                    var_12 = ((/* implicit */unsigned char) max((var_12), (((/* implicit */unsigned char) min(((!(((/* implicit */_Bool) (unsigned char)252)))), (arr_1 [(_Bool)1] [i_2]))))));
                }
                for (unsigned char i_3 = 0; i_3 < 24; i_3 += 2) 
                {
                    arr_11 [i_0] [i_1] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_2 [i_1])) % (((/* implicit */int) var_10)))) / (((/* implicit */int) arr_2 [i_0]))))) ? (((((/* implicit */int) (((_Bool)1) || ((_Bool)1)))) >> (((/* implicit */int) arr_8 [i_3] [i_1] [i_1] [i_3])))) : (((arr_10 [i_0] [i_1] [i_3] [i_3]) ? (((/* implicit */int) var_1)) : (((((/* implicit */int) var_0)) | (((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))))))));
                    var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) (unsigned char)0))));
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
                    {
                        var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_8))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_3 [i_1 + 1])))))));
                        arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] = (unsigned char)187;
                    }
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            arr_23 [i_0] [i_1 - 2] [i_1 - 2] [i_3] [i_1 - 2] [i_6] = ((/* implicit */_Bool) arr_14 [i_0]);
                            var_15 ^= ((/* implicit */unsigned char) (~(((/* implicit */int) (_Bool)1))));
                        }
                        var_16 ^= ((/* implicit */unsigned char) (((_Bool)0) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned char)113))));
                    }
                    /* vectorizable */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
                    {
                        var_17 = ((_Bool) ((((/* implicit */int) (unsigned char)91)) + (((/* implicit */int) arr_8 [i_7] [(_Bool)1] [i_3] [i_7]))));
                        var_18 ^= ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) (unsigned char)255)) >= (((/* implicit */int) (unsigned char)31))))) | (((/* implicit */int) ((((/* implicit */int) var_5)) == (((/* implicit */int) arr_16 [i_0] [i_0] [i_0] [i_0])))))));
                        var_19 |= arr_24 [i_0] [(_Bool)1];
                    }
                    /* vectorizable */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
                    {
                        var_20 = (!(((/* implicit */_Bool) arr_19 [i_1 + 1] [i_1 + 2] [(unsigned char)16] [i_1 - 2] [i_1 + 1])));
                        arr_30 [i_0] [i_1 - 4] [i_3] [i_3] [(_Bool)1] = ((/* implicit */_Bool) ((unsigned char) arr_1 [i_1 - 3] [i_1 - 4]));
                        var_21 ^= ((((/* implicit */int) var_6)) > (((/* implicit */int) arr_9 [i_1 + 1] [i_1 - 4] [i_1 + 1])));
                    }
                    /* LoopNest 2 */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            {
                                arr_37 [(unsigned char)22] = ((/* implicit */unsigned char) (~((((~(((/* implicit */int) var_4)))) | (((arr_4 [i_0] [i_3]) ? (((/* implicit */int) arr_24 [i_10] [i_9])) : (((/* implicit */int) var_8))))))));
                                var_22 = ((unsigned char) max((min((arr_22 [i_1]), (arr_6 [i_0] [i_1] [i_9] [i_10]))), (((/* implicit */unsigned char) arr_20 [i_10] [i_1] [i_3] [(_Bool)1] [i_1 - 4]))));
                                arr_38 [i_0] [(_Bool)1] [i_3] [(_Bool)1] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)37)) < (((/* implicit */int) ((((/* implicit */int) max(((unsigned char)69), (var_8)))) == (((/* implicit */int) arr_12 [i_1 - 4] [i_1 - 3] [i_1 - 3])))))));
                            }
                        } 
                    } 
                }
                /* LoopNest 2 */
                for (unsigned char i_11 = 0; i_11 < 24; i_11 += 3) 
                {
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((arr_34 [i_0] [i_0] [(unsigned char)11] [i_0] [i_0]) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_8 [i_11] [i_1 + 1] [i_11] [(_Bool)1]))))))) ? (((arr_21 [i_1 + 2] [i_1 - 1] [i_1 + 2] [i_1] [i_1 + 1]) ? (((/* implicit */int) arr_21 [i_1 + 1] [i_1 - 1] [i_1 - 3] [i_1] [i_1 + 2])) : (((/* implicit */int) arr_21 [i_1 - 2] [i_1 - 1] [i_1 - 2] [i_1] [i_1 - 3])))) : (((/* implicit */int) arr_10 [(unsigned char)14] [i_1] [i_11] [i_12]))));
                            arr_46 [i_0] [i_1 - 2] [i_1 - 2] [i_11] [i_11] [(unsigned char)11] = ((/* implicit */_Bool) (-((+(((/* implicit */int) arr_24 [i_1 - 3] [i_1]))))));
                        }
                    } 
                } 
                var_24 ^= ((/* implicit */unsigned char) ((((min((var_1), (var_5))) ? (((/* implicit */int) (unsigned char)166)) : (((/* implicit */int) max((arr_6 [i_1 - 3] [i_1] [i_1] [i_0]), (((/* implicit */unsigned char) var_5))))))) & (((((((/* implicit */_Bool) arr_14 [i_1 + 1])) ? (((/* implicit */int) arr_17 [i_0] [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) (_Bool)0)))) | (((arr_21 [i_0] [i_0] [i_0] [i_1] [i_1]) ? (((/* implicit */int) (unsigned char)115)) : (((/* implicit */int) arr_40 [i_0] [i_0] [(_Bool)1]))))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
        {
            for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_16 = 3; i_16 < 9; i_16 += 4) 
                    {
                        for (unsigned char i_17 = 1; i_17 < 11; i_17 += 3) 
                        {
                            {
                                var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) (((~(((/* implicit */int) (unsigned char)1)))) % (((((/* implicit */_Bool) arr_56 [i_17 - 1] [i_17 - 1] [i_17] [(_Bool)1] [i_17] [(unsigned char)4])) ? (((/* implicit */int) arr_56 [i_17 - 1] [i_14] [(unsigned char)12] [(_Bool)1] [i_16 + 2] [i_14])) : (((/* implicit */int) arr_56 [i_17 - 1] [i_14] [i_14] [(unsigned char)10] [i_17 - 1] [i_17 - 1])))))))));
                                var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) min(((_Bool)0), (arr_39 [(_Bool)1] [i_15] [(_Bool)1] [i_15]))))) / (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (unsigned char)94)))))))));
                            }
                        } 
                    } 
                    var_27 = min((arr_48 [i_13]), (max((arr_48 [i_13]), ((unsigned char)187))));
                    var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_50 [i_14] [i_15]) ? (((/* implicit */int) arr_50 [i_14] [i_15])) : (((/* implicit */int) arr_40 [i_14] [i_14] [i_15]))))) ? (((/* implicit */int) min((var_5), (arr_50 [i_13] [i_14])))) : (((/* implicit */int) min((arr_40 [i_13] [i_14] [i_15]), (arr_50 [i_13] [i_13]))))));
                }
            } 
        } 
        arr_59 [i_13] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) ((arr_39 [(unsigned char)18] [(unsigned char)4] [i_13] [i_13]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)128))))))) ? (((arr_58 [(unsigned char)10] [i_13] [i_13] [i_13]) ? (((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), (arr_48 [(_Bool)1])))) : (((/* implicit */int) ((arr_16 [i_13] [i_13] [i_13] [i_13]) && (arr_4 [(unsigned char)22] [i_13])))))) : (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_58 [(_Bool)1] [i_13] [i_13] [i_13])) : (((/* implicit */int) arr_9 [i_13] [(_Bool)1] [i_13]))))))));
    }
    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
    {
        var_29 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_18 [i_18] [i_18] [i_18])))), (((((/* implicit */_Bool) (unsigned char)81)) ? (((/* implicit */int) (unsigned char)201)) : (((/* implicit */int) (unsigned char)236))))));
        var_30 = ((/* implicit */unsigned char) min((var_30), (((/* implicit */unsigned char) (-((-(((/* implicit */int) var_2)))))))));
    }
}
