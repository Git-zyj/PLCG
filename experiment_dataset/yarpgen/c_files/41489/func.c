/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41489
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41489 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41489
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
    var_18 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) ((unsigned char) var_13))) : (((/* implicit */int) ((unsigned char) var_1)))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                {
                    arr_8 [i_2] [i_0] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_0 [i_0] [9U]))));
                    arr_9 [(unsigned char)6] = ((unsigned int) (unsigned char)112);
                    arr_10 [i_2] [i_1] [i_0] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_6 [i_0] [i_1] [i_1] [i_2]))));
                    arr_11 [i_0] [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_2])) ? (((/* implicit */int) (unsigned char)51)) : (((/* implicit */int) arr_1 [i_0])))) != (((/* implicit */int) ((unsigned char) (unsigned char)177)))));
                }
            } 
        } 
        arr_12 [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned char)128)))) == (((/* implicit */int) arr_6 [i_0] [(unsigned char)7] [i_0] [i_0]))));
        /* LoopSeq 2 */
        for (unsigned char i_3 = 0; i_3 < 16; i_3 += 3) /* same iter space */
        {
            arr_16 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)107)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_0)))) || (((/* implicit */_Bool) var_7))));
            arr_17 [i_3] = ((unsigned char) (unsigned char)124);
            /* LoopNest 2 */
            for (unsigned char i_4 = 0; i_4 < 16; i_4 += 4) 
            {
                for (unsigned char i_5 = 3; i_5 < 14; i_5 += 1) 
                {
                    {
                        arr_23 [i_0] [i_0] [i_0] [i_3] [(unsigned char)8] = ((/* implicit */unsigned int) (unsigned char)98);
                        arr_24 [i_0] [i_3] [i_0] [i_0] = ((unsigned char) ((((/* implicit */_Bool) arr_1 [i_0])) || (((/* implicit */_Bool) (unsigned char)77))));
                        arr_25 [i_0] [i_3] [10U] [i_4] [i_5 + 1] [i_4] = ((/* implicit */unsigned char) ((((unsigned int) arr_14 [i_0] [i_0] [i_0])) < (((/* implicit */unsigned int) ((/* implicit */int) ((2558031271U) >= (4294967276U)))))));
                        arr_26 [i_3] [(unsigned char)9] [i_3] [i_3] [i_3] = arr_18 [i_0] [i_0] [i_0];
                    }
                } 
            } 
        }
        for (unsigned char i_6 = 0; i_6 < 16; i_6 += 3) /* same iter space */
        {
            arr_30 [i_0] = ((/* implicit */unsigned char) ((arr_18 [i_0] [i_0] [(unsigned char)4]) ^ (((((/* implicit */_Bool) var_16)) ? (arr_4 [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0])))))));
            /* LoopSeq 1 */
            for (unsigned int i_7 = 2; i_7 < 14; i_7 += 1) 
            {
                arr_34 [i_0] [i_7] [(unsigned char)8] [i_7] = var_10;
                /* LoopSeq 1 */
                for (unsigned char i_8 = 0; i_8 < 16; i_8 += 2) 
                {
                    arr_38 [i_0] [i_7] = ((/* implicit */unsigned int) arr_35 [i_6] [i_7 - 2] [i_6] [i_0]);
                    arr_39 [i_0] [i_7] [i_7] [i_7] = var_12;
                    arr_40 [i_7] [i_7] [i_0] = ((/* implicit */unsigned char) (+(((unsigned int) arr_15 [i_0] [i_0] [i_0]))));
                }
            }
            /* LoopNest 2 */
            for (unsigned int i_9 = 0; i_9 < 16; i_9 += 1) 
            {
                for (unsigned char i_10 = 0; i_10 < 16; i_10 += 1) 
                {
                    {
                        arr_46 [i_10] [i_10] [i_9] [(unsigned char)11] [i_6] [10U] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_37 [i_0] [i_6] [i_9] [i_6] [i_6] [i_6])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_13 [i_0]))));
                        arr_47 [i_0] [i_9] [i_0] = ((/* implicit */unsigned int) arr_7 [i_0] [i_0] [i_0]);
                        arr_48 [i_6] [i_6] [i_0] |= arr_41 [i_6] [i_10];
                        /* LoopSeq 3 */
                        for (unsigned char i_11 = 3; i_11 < 12; i_11 += 3) 
                        {
                            arr_51 [i_0] [i_0] [i_9] [i_10] [i_11] = ((unsigned char) (unsigned char)206);
                            arr_52 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (arr_32 [i_0] [i_6] [i_9] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_36 [i_0])))))) ? (((/* implicit */int) ((unsigned char) arr_44 [10U] [i_6] [i_9] [i_10]))) : (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) arr_35 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) (unsigned char)88))))));
                            arr_53 [i_0] [(unsigned char)15] [i_9] [i_9] [i_10] [i_11] = ((/* implicit */unsigned int) arr_7 [i_0] [14U] [i_9]);
                            arr_54 [i_0] [i_6] [i_9] [i_10] [i_11] |= ((/* implicit */unsigned int) (unsigned char)0);
                        }
                        for (unsigned char i_12 = 0; i_12 < 16; i_12 += 3) 
                        {
                            arr_59 [i_0] = ((/* implicit */unsigned char) ((unsigned int) arr_42 [i_12] [i_10] [i_9]));
                            arr_60 [i_0] [i_0] [i_6] [i_9] [i_6] [i_12] [i_12] = ((/* implicit */unsigned char) ((arr_19 [(unsigned char)7] [i_12]) != (((/* implicit */unsigned int) (~(((/* implicit */int) arr_50 [i_6] [i_6] [i_6] [i_6] [i_12] [i_0])))))));
                            arr_61 [i_0] [i_6] [i_9] [i_9] [i_12] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_45 [i_0] [5U] [i_9] [i_10] [i_12] [i_12])) ? (((/* implicit */int) arr_45 [i_0] [i_0] [i_9] [i_0] [i_12] [11U])) : (((/* implicit */int) arr_45 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))));
                            arr_62 [i_6] [i_6] [i_6] [i_6] [(unsigned char)5] [i_6] [(unsigned char)8] = arr_55 [(unsigned char)6] [i_12] [i_12] [i_12] [i_12];
                        }
                        for (unsigned char i_13 = 1; i_13 < 14; i_13 += 4) 
                        {
                            arr_65 [(unsigned char)4] [i_6] [10U] [i_10] [i_13 + 2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_36 [i_0])) : (((/* implicit */int) var_16))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [(unsigned char)1] [i_6]))))) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)15)) && (((/* implicit */_Bool) arr_35 [i_6] [i_6] [i_6] [i_6])))))));
                            arr_66 [i_10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_13 + 2] [i_13 - 1])) ? (((/* implicit */int) arr_0 [i_13 + 1] [i_13 + 1])) : (((/* implicit */int) arr_0 [i_13 - 1] [(unsigned char)15]))));
                        }
                    }
                } 
            } 
            arr_67 [i_6] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_56 [i_0] [i_0] [i_0] [i_0] [i_0])) & (((/* implicit */int) arr_56 [i_0] [i_6] [i_6] [i_0] [i_6]))));
            arr_68 [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)173))));
        }
        arr_69 [(unsigned char)13] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) arr_45 [2U] [i_0] [i_0] [i_0] [(unsigned char)12] [i_0])) : (((/* implicit */int) arr_36 [i_0]))))) ? (13U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)102))));
        arr_70 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)131)) ? (((/* implicit */int) arr_45 [i_0] [i_0] [1U] [12U] [i_0] [i_0])) : (((/* implicit */int) arr_7 [i_0] [i_0] [i_0]))));
    }
    for (unsigned char i_14 = 0; i_14 < 19; i_14 += 1) 
    {
        arr_74 [i_14] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) (unsigned char)255))) ? (((/* implicit */int) arr_71 [i_14] [i_14])) : (((((/* implicit */_Bool) arr_71 [i_14] [i_14])) ? (((/* implicit */int) (unsigned char)197)) : (((/* implicit */int) arr_71 [i_14] [i_14]))))));
        arr_75 [i_14] = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) (unsigned char)27))) | (((/* implicit */int) (unsigned char)64))));
    }
    var_19 = ((/* implicit */unsigned char) var_0);
}
