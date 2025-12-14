/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190873
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190873 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190873
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_0 [i_0] [i_0]))));
        arr_4 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))));
        var_19 *= ((/* implicit */unsigned char) (((+(((/* implicit */int) (unsigned short)58284)))) - (((/* implicit */int) (unsigned short)63046))));
        var_20 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) var_18)) - (((/* implicit */int) (unsigned char)250)))))));
    }
    /* LoopSeq 2 */
    for (unsigned short i_1 = 4; i_1 < 20; i_1 += 3) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) arr_6 [i_1]))) ? (min((((((/* implicit */int) var_0)) & (((/* implicit */int) var_4)))), (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (unsigned char)244)))))) : (((((/* implicit */_Bool) arr_7 [i_1 - 2] [i_1 - 3])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [(unsigned char)10] [(unsigned char)10]))))) : (((/* implicit */int) arr_8 [i_1]))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned short i_2 = 2; i_2 < 21; i_2 += 3) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned char i_3 = 4; i_3 < 20; i_3 += 1) 
            {
                for (unsigned short i_4 = 0; i_4 < 22; i_4 += 2) 
                {
                    for (unsigned char i_5 = 0; i_5 < 22; i_5 += 2) 
                    {
                        {
                            arr_18 [i_1] [i_5] [i_2] [i_3] [i_4] [i_4] [i_5] |= ((/* implicit */unsigned short) ((((/* implicit */int) arr_12 [i_3 - 3] [i_3 - 3] [(unsigned char)14] [(unsigned char)15])) & (((/* implicit */int) var_9))));
                            var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) (-(((/* implicit */int) ((unsigned short) (unsigned char)9))))))));
                        }
                    } 
                } 
            } 
            var_23 *= ((/* implicit */unsigned char) ((((/* implicit */int) var_14)) | (((/* implicit */int) var_10))));
            arr_19 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_8 [i_1])) * ((~(((/* implicit */int) var_14))))));
            var_24 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_2))));
        }
        for (unsigned short i_6 = 2; i_6 < 21; i_6 += 3) /* same iter space */
        {
            /* LoopSeq 2 */
            for (unsigned short i_7 = 0; i_7 < 22; i_7 += 4) /* same iter space */
            {
                var_25 += ((/* implicit */unsigned short) ((((((/* implicit */int) arr_23 [i_7] [i_6 + 1] [(unsigned short)20])) / (((/* implicit */int) arr_9 [i_7] [i_7])))) & ((-(((/* implicit */int) arr_9 [i_7] [i_7]))))));
                var_26 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_21 [i_7] [i_6 - 1] [i_7])) - (((/* implicit */int) arr_21 [i_7] [i_6 - 2] [i_7]))))) && (((/* implicit */_Bool) (-(((/* implicit */int) var_3)))))));
                var_27 = ((/* implicit */unsigned short) var_9);
            }
            for (unsigned short i_8 = 0; i_8 < 22; i_8 += 4) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned short i_9 = 0; i_9 < 22; i_9 += 3) 
                {
                    for (unsigned char i_10 = 0; i_10 < 22; i_10 += 2) 
                    {
                        {
                            arr_34 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) min(((~(((/* implicit */int) var_18)))), (((/* implicit */int) max((((unsigned short) var_15)), (max((arr_8 [i_1]), (var_17))))))));
                            var_28 = ((/* implicit */unsigned char) ((((/* implicit */int) (((+(((/* implicit */int) arr_8 [i_1 + 2])))) > ((-(((/* implicit */int) var_13))))))) >= (((/* implicit */int) var_11))));
                            var_29 = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_12 [(unsigned short)10] [i_6] [i_1 - 1] [i_6 - 2])) > (((/* implicit */int) var_3)))) ? (((/* implicit */int) arr_15 [i_1] [i_1] [i_1] [i_1] [i_1] [(unsigned short)12])) : (((/* implicit */int) min((arr_14 [i_1] [i_1] [i_6 + 1]), (arr_14 [i_1] [i_1] [i_6 - 1]))))));
                            arr_35 [i_1] [i_1] [i_8] [i_8] [i_8] = ((/* implicit */unsigned short) var_9);
                        }
                    } 
                } 
                var_30 = var_6;
                var_31 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((unsigned short) ((((/* implicit */int) var_15)) % (((/* implicit */int) var_6))))))));
            }
            arr_36 [i_1] = ((/* implicit */unsigned short) var_1);
            arr_37 [i_1] [i_1] = ((/* implicit */unsigned short) arr_11 [i_1] [i_1] [i_6]);
        }
        var_32 = ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned short)33171))))) ? (((/* implicit */int) ((unsigned short) var_11))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned short)37756)) : (((/* implicit */int) var_17))))));
    }
    for (unsigned short i_11 = 4; i_11 < 20; i_11 += 3) /* same iter space */
    {
        arr_40 [i_11] = ((/* implicit */unsigned short) (+((-((-(((/* implicit */int) arr_28 [i_11]))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_12 = 2; i_12 < 19; i_12 += 1) 
        {
            var_33 = ((/* implicit */unsigned char) max((var_33), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_7)))))));
            var_34 += ((/* implicit */unsigned char) ((((((/* implicit */int) (unsigned short)58292)) >> (((((/* implicit */int) (unsigned short)14443)) - (14431))))) | (((/* implicit */int) (!(((/* implicit */_Bool) var_15)))))));
        }
        arr_44 [i_11] [i_11] = var_6;
        var_35 += max((var_2), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_6))))));
    }
    var_36 = ((unsigned short) var_18);
}
