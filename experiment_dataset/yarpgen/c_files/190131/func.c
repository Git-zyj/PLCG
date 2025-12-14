/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190131
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190131 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190131
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
    var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_3))))))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_10))));
    var_15 = ((unsigned short) var_13);
    /* LoopSeq 3 */
    for (unsigned short i_0 = 2; i_0 < 21; i_0 += 4) 
    {
        var_16 |= ((/* implicit */unsigned short) ((((/* implicit */int) max((var_4), ((unsigned short)22165)))) | (((/* implicit */int) arr_1 [i_0 - 2]))));
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) max((var_4), (arr_0 [i_0 + 1])))) / (((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (((/* implicit */int) arr_2 [i_0] [i_0 + 1])) : (((/* implicit */int) arr_0 [i_0 + 1]))))));
    }
    for (unsigned short i_1 = 1; i_1 < 21; i_1 += 3) 
    {
        arr_8 [(unsigned short)8] = (unsigned short)43370;
        /* LoopSeq 1 */
        for (unsigned short i_2 = 0; i_2 < 24; i_2 += 1) 
        {
            var_17 = ((/* implicit */unsigned short) ((((((/* implicit */int) (unsigned short)22165)) == (((/* implicit */int) (unsigned short)26858)))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_10 [i_1 + 1] [i_2] [i_1 + 2])) : (((/* implicit */int) (unsigned short)65534)))) : (((((/* implicit */int) (unsigned short)65504)) & (((/* implicit */int) arr_9 [i_1] [i_1]))))));
            var_18 = ((/* implicit */unsigned short) max((var_18), (((unsigned short) var_0))));
        }
    }
    for (unsigned short i_3 = 0; i_3 < 14; i_3 += 1) 
    {
        /* LoopSeq 3 */
        for (unsigned short i_4 = 1; i_4 < 11; i_4 += 1) /* same iter space */
        {
            /* LoopSeq 2 */
            for (unsigned short i_5 = 0; i_5 < 14; i_5 += 3) 
            {
                var_19 = ((unsigned short) arr_9 [i_4] [i_5]);
                arr_19 [i_4] = ((/* implicit */unsigned short) min((((/* implicit */int) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_15 [i_5] [i_4]))))), (arr_16 [i_5] [i_5] [i_4 + 3])))), ((~(((/* implicit */int) arr_9 [i_4 + 3] [i_4 - 1]))))));
                arr_20 [i_4] [i_4] [(unsigned short)6] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)65515)) ? (((((/* implicit */_Bool) arr_7 [i_3])) ? (((/* implicit */int) arr_5 [i_4 + 2] [i_3])) : (((/* implicit */int) (unsigned short)65527)))) : ((~(((/* implicit */int) max(((unsigned short)21121), (var_4))))))));
            }
            for (unsigned short i_6 = 0; i_6 < 14; i_6 += 1) 
            {
                arr_23 [i_4] = ((/* implicit */unsigned short) (+(min((((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (unsigned short)65523)) : (((/* implicit */int) (unsigned short)65535)))), (((/* implicit */int) var_12))))));
                /* LoopSeq 2 */
                for (unsigned short i_7 = 0; i_7 < 14; i_7 += 3) 
                {
                    arr_27 [(unsigned short)10] [(unsigned short)12] [(unsigned short)10] [i_4] = min((max((max(((unsigned short)65502), (arr_10 [(unsigned short)4] [(unsigned short)4] [i_6]))), (min((var_9), (var_11))))), (((/* implicit */unsigned short) (!(((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) (unsigned short)65534))))))));
                    arr_28 [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) (unsigned short)34504)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_0)))))) ? (((/* implicit */int) var_8)) : (((((/* implicit */int) arr_21 [i_4] [i_6] [i_4] [i_4])) | (((/* implicit */int) ((((/* implicit */int) (unsigned short)28794)) <= (((/* implicit */int) var_1)))))))));
                    arr_29 [(unsigned short)13] [i_4] [(unsigned short)12] [i_7] [i_7] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_16 [i_4 + 3] [i_4 + 3] [i_4 + 3])) ? (((/* implicit */int) arr_16 [i_4] [i_4 - 1] [i_4 - 1])) : (((/* implicit */int) arr_16 [(unsigned short)6] [i_4 + 3] [i_4]))))));
                    var_20 -= ((unsigned short) ((((/* implicit */_Bool) (unsigned short)37693)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned short)1023))));
                }
                for (unsigned short i_8 = 4; i_8 < 11; i_8 += 4) 
                {
                    var_21 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [(unsigned short)1]))))) ? ((-(((/* implicit */int) (unsigned short)65516)))) : (((((/* implicit */_Bool) arr_11 [i_6])) ? (((/* implicit */int) arr_2 [i_3] [(unsigned short)17])) : (((/* implicit */int) (unsigned short)11045)))))))));
                    arr_32 [(unsigned short)7] [i_8] [i_4] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)26837)) ? (((/* implicit */int) (unsigned short)65525)) : (((/* implicit */int) (unsigned short)47143))));
                    var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)50934)) ? ((~(((/* implicit */int) (unsigned short)65505)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)41057)))))));
                }
            }
            var_23 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) ((unsigned short) var_10))) ? ((+(((/* implicit */int) (unsigned short)2972)))) : (((/* implicit */int) var_11))))));
        }
        for (unsigned short i_9 = 1; i_9 < 11; i_9 += 1) /* same iter space */
        {
            arr_35 [i_3] [i_9 - 1] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)5527)) == (((/* implicit */int) (unsigned short)0))));
            arr_36 [i_9] = var_13;
            var_24 *= ((/* implicit */unsigned short) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_33 [i_9 + 3] [i_9 - 1] [i_9 + 1]))))), ((-(((/* implicit */int) arr_33 [i_9 + 3] [i_9 - 1] [i_9 + 1]))))));
            /* LoopSeq 1 */
            for (unsigned short i_10 = 0; i_10 < 14; i_10 += 1) 
            {
                arr_39 [i_10] [i_9] [i_3] = min((max((var_12), (var_7))), (((unsigned short) arr_12 [i_3] [i_10])));
                arr_40 [i_3] [i_9 - 1] [i_10] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) arr_34 [i_9 + 2] [i_9 - 1]))) ? (((/* implicit */int) ((unsigned short) arr_14 [i_9 + 2]))) : ((-(((/* implicit */int) arr_14 [i_9 + 1]))))));
            }
        }
        for (unsigned short i_11 = 0; i_11 < 14; i_11 += 3) 
        {
            /* LoopSeq 3 */
            for (unsigned short i_12 = 0; i_12 < 14; i_12 += 3) 
            {
                arr_48 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned short) (((-(((/* implicit */int) var_1)))) > (((((/* implicit */_Bool) arr_1 [i_11])) ? (((/* implicit */int) arr_1 [i_12])) : (((/* implicit */int) arr_1 [i_11]))))));
                arr_49 [i_3] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) arr_33 [(unsigned short)13] [(unsigned short)4] [i_12])) : (((/* implicit */int) arr_33 [i_3] [i_11] [i_3]))))) ? (((((/* implicit */_Bool) arr_33 [(unsigned short)4] [i_11] [i_11])) ? (((/* implicit */int) arr_33 [i_12] [i_11] [i_3])) : (((/* implicit */int) var_5)))) : (((((/* implicit */_Bool) arr_33 [i_12] [i_12] [i_12])) ? (((/* implicit */int) arr_33 [(unsigned short)9] [i_3] [i_3])) : (((/* implicit */int) arr_33 [i_3] [i_3] [i_3]))))));
            }
            for (unsigned short i_13 = 0; i_13 < 14; i_13 += 4) 
            {
                var_25 ^= var_2;
                var_26 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_37 [i_13] [i_11] [i_11] [i_3])) ? (((/* implicit */int) arr_17 [i_13] [i_13])) : (((/* implicit */int) var_8))))));
                arr_52 [i_13] [i_11] [i_3] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_46 [i_3] [i_11] [i_13])) : (((/* implicit */int) arr_46 [i_13] [i_11] [i_3]))))) ? ((+(((/* implicit */int) arr_46 [i_3] [i_11] [i_13])))) : (((/* implicit */int) ((unsigned short) arr_46 [i_13] [i_13] [i_13])))));
                var_27 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_6 [i_3]), (var_5)))) ? (max(((~(((/* implicit */int) arr_46 [i_3] [(unsigned short)5] [i_3])))), ((-(((/* implicit */int) arr_4 [(unsigned short)18])))))) : (((/* implicit */int) (unsigned short)65535))));
            }
            for (unsigned short i_14 = 2; i_14 < 13; i_14 += 3) 
            {
                arr_55 [i_11] [i_14] = min(((unsigned short)39286), ((unsigned short)43355));
                var_28 ^= ((/* implicit */unsigned short) ((((((/* implicit */int) ((((/* implicit */int) (unsigned short)18383)) > (((/* implicit */int) (unsigned short)65535))))) >= (((/* implicit */int) max((var_11), (arr_43 [i_11] [i_3])))))) ? (((((/* implicit */_Bool) max(((unsigned short)1490), (var_4)))) ? (((/* implicit */int) min((var_12), (var_0)))) : (((/* implicit */int) arr_10 [i_14 + 1] [i_14] [i_14 + 1])))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned short)65526)) : (((/* implicit */int) var_7))))) ? (((/* implicit */int) ((unsigned short) (unsigned short)256))) : (((/* implicit */int) arr_9 [i_11] [(unsigned short)12]))))));
            }
            /* LoopSeq 1 */
            for (unsigned short i_15 = 1; i_15 < 13; i_15 += 1) 
            {
                arr_58 [i_3] [(unsigned short)10] = var_1;
                /* LoopNest 2 */
                for (unsigned short i_16 = 0; i_16 < 14; i_16 += 4) 
                {
                    for (unsigned short i_17 = 3; i_17 < 11; i_17 += 1) 
                    {
                        {
                            arr_64 [i_17] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_33 [i_3] [i_3] [i_3])) & (min((((/* implicit */int) arr_24 [i_17 - 3] [i_17 + 2] [i_17 + 3] [i_17] [i_17 - 3])), ((-(((/* implicit */int) arr_38 [(unsigned short)2] [i_15] [i_11] [i_3]))))))));
                            var_29 = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned short)14334))));
                        }
                    } 
                } 
            }
            var_30 *= ((/* implicit */unsigned short) (((-(((((/* implicit */_Bool) arr_26 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_2)))))) / (((((/* implicit */int) arr_9 [i_11] [i_11])) / (((/* implicit */int) min((arr_14 [i_3]), ((unsigned short)32768))))))));
            arr_65 [i_3] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_42 [i_3] [i_11])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_26 [i_11] [i_11] [i_11] [i_3] [i_3] [i_3])))), (((/* implicit */int) max((arr_42 [i_3] [i_11]), (arr_42 [i_3] [i_11]))))));
        }
        arr_66 [i_3] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_21 [i_3] [i_3] [i_3] [(unsigned short)10])) : (((/* implicit */int) var_1))))) ? (((((/* implicit */_Bool) (unsigned short)2965)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (unsigned short)0)))) : (((/* implicit */int) min((arr_21 [(unsigned short)8] [i_3] [i_3] [(unsigned short)8]), (arr_21 [i_3] [(unsigned short)2] [i_3] [(unsigned short)4]))))));
    }
}
