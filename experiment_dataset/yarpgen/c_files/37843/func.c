/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37843
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37843 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37843
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
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 4; i_1 < 10; i_1 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_2 = 3; i_2 < 9; i_2 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned char i_3 = 0; i_3 < 11; i_3 += 4) 
                {
                    for (unsigned char i_4 = 1; i_4 < 9; i_4 += 1) 
                    {
                        {
                            var_19 = (unsigned char)105;
                            var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) max(((unsigned char)23), ((unsigned char)23))))))) ? (((/* implicit */int) max((arr_0 [i_2 + 2] [i_1 - 3]), ((unsigned char)247)))) : (((((/* implicit */int) arr_1 [i_4 + 1])) & (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)81)))))))));
                            arr_11 [i_2] [i_1 - 1] [i_1] = ((/* implicit */unsigned char) max((((/* implicit */int) arr_0 [i_3] [i_1 + 1])), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_0 [i_1 - 3] [i_1 - 3])) : (((/* implicit */int) arr_0 [i_1] [i_1 - 2]))))));
                            var_21 = arr_2 [i_0] [i_1] [i_2];
                        }
                    } 
                } 
                arr_12 [i_0] [i_1 - 4] [i_1 - 4] [i_2] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) ? ((-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)103))))))) : (((((/* implicit */int) arr_2 [i_1 - 1] [i_2 + 1] [i_1 - 1])) / (((/* implicit */int) max((var_7), (var_17))))))));
                var_22 = (unsigned char)23;
            }
            var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) var_6)) + (((/* implicit */int) arr_9 [i_1 + 1] [i_1 - 1] [i_1 - 1] [i_1 - 2] [i_1 - 4]))))) ? (((((/* implicit */_Bool) arr_9 [i_0] [i_1 - 2] [i_1] [i_1 - 1] [i_1 - 3])) ? (((/* implicit */int) arr_9 [(unsigned char)10] [i_1 - 4] [i_1 - 1] [i_1 - 2] [i_1 - 3])) : (((/* implicit */int) arr_9 [(unsigned char)10] [i_1 + 1] [i_1 + 1] [i_1 - 2] [i_1 - 2])))) : (((((/* implicit */_Bool) (unsigned char)253)) ? (((/* implicit */int) (unsigned char)147)) : (((/* implicit */int) var_18)))))))));
        }
        /* LoopNest 2 */
        for (unsigned char i_5 = 0; i_5 < 11; i_5 += 2) 
        {
            for (unsigned char i_6 = 1; i_6 < 8; i_6 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_7 = 0; i_7 < 11; i_7 += 2) 
                    {
                        for (unsigned char i_8 = 0; i_8 < 11; i_8 += 1) 
                        {
                            {
                                var_24 += (unsigned char)106;
                                arr_22 [i_8] [i_7] [i_6] [i_5] [i_0] &= ((/* implicit */unsigned char) (-(((/* implicit */int) var_0))));
                                var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) ((unsigned char) (unsigned char)154))) : (((((/* implicit */_Bool) (unsigned char)123)) ? (((/* implicit */int) arr_10 [i_6 - 1] [i_6 + 3] [i_6 - 1] [i_6 + 1] [i_6 - 1])) : (((/* implicit */int) (unsigned char)88))))));
                                var_26 = ((/* implicit */unsigned char) (((+(((/* implicit */int) var_3)))) * ((~(((/* implicit */int) arr_14 [i_6 + 3] [i_6 - 1]))))));
                                var_27 = var_14;
                            }
                        } 
                    } 
                    var_28 &= var_2;
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned char i_9 = 0; i_9 < 11; i_9 += 1) 
        {
            for (unsigned char i_10 = 0; i_10 < 11; i_10 += 1) 
            {
                for (unsigned char i_11 = 3; i_11 < 10; i_11 += 3) 
                {
                    {
                        var_29 = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_28 [(unsigned char)0] [i_9] [i_0] [i_0])) <= (((((/* implicit */_Bool) (unsigned char)230)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned char)117)))))) ? (((((/* implicit */_Bool) arr_4 [(unsigned char)3])) ? ((+(((/* implicit */int) arr_1 [i_0])))) : (((/* implicit */int) arr_20 [i_11 - 2] [(unsigned char)0])))) : (((/* implicit */int) max(((unsigned char)38), (arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))));
                        var_30 = ((/* implicit */unsigned char) min((var_30), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)15)) ? (((((/* implicit */_Bool) (unsigned char)117)) ? (((/* implicit */int) (unsigned char)60)) : (((/* implicit */int) (unsigned char)208)))) : (((((/* implicit */int) (unsigned char)155)) & (((((/* implicit */int) (unsigned char)69)) >> (((/* implicit */int) (unsigned char)18)))))))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned char i_12 = 0; i_12 < 11; i_12 += 4) /* same iter space */
    {
        var_31 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_6))));
        var_32 = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned char)145))));
        arr_31 [i_12] &= arr_14 [i_12] [i_12];
    }
    for (unsigned char i_13 = 0; i_13 < 11; i_13 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned char i_14 = 4; i_14 < 10; i_14 += 4) 
        {
            for (unsigned char i_15 = 0; i_15 < 11; i_15 += 2) 
            {
                {
                    var_33 -= ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)120))));
                    /* LoopNest 2 */
                    for (unsigned char i_16 = 0; i_16 < 11; i_16 += 2) 
                    {
                        for (unsigned char i_17 = 0; i_17 < 11; i_17 += 4) 
                        {
                            {
                                var_34 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)48)) ? (((/* implicit */int) (unsigned char)5)) : (((/* implicit */int) (unsigned char)11))));
                                arr_44 [i_13] [i_13] [i_13] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_40 [i_17] [i_16] [i_13] [i_13])) ? (((/* implicit */int) min((var_12), ((unsigned char)122)))) : ((+(((/* implicit */int) (unsigned char)149))))))));
                            }
                        } 
                    } 
                    var_35 += ((/* implicit */unsigned char) max((((/* implicit */int) var_2)), ((~(((((/* implicit */int) var_10)) / (((/* implicit */int) (unsigned char)147))))))));
                }
            } 
        } 
        var_36 = ((/* implicit */unsigned char) min(((+(((/* implicit */int) arr_28 [i_13] [i_13] [i_13] [i_13])))), (((/* implicit */int) var_7))));
        arr_45 [i_13] [i_13] = ((/* implicit */unsigned char) max(((-(((((/* implicit */_Bool) arr_29 [i_13] [i_13])) ? (((/* implicit */int) (unsigned char)37)) : (((/* implicit */int) (unsigned char)42)))))), ((-(((/* implicit */int) (unsigned char)252))))));
    }
    var_37 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_15))));
    var_38 = (unsigned char)120;
}
