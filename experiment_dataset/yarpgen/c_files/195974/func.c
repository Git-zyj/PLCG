/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195974
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195974 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195974
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = var_0;
        arr_3 [i_0] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned char)24)), (var_2)))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) || (((/* implicit */_Bool) var_2))))) : (((/* implicit */int) (unsigned char)255)))), (((/* implicit */int) max((((unsigned char) var_7)), (var_4))))));
        var_17 = ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (unsigned char)191)) : (((/* implicit */int) var_9)))) - (((/* implicit */int) ((unsigned char) var_15)))))) ? (max((((((/* implicit */unsigned int) ((/* implicit */int) var_10))) + (arr_1 [i_0]))), (((/* implicit */unsigned int) max(((unsigned char)227), (var_8)))))) : (((((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)62))))) / (max((var_13), (((/* implicit */unsigned int) arr_0 [i_0])))))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 1; i_1 < 15; i_1 += 2) 
    {
        arr_6 [i_1] [i_1] = var_5;
        arr_7 [(unsigned char)14] = ((unsigned char) var_1);
        var_18 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_1 [(unsigned char)18]))));
        arr_8 [i_1] = arr_0 [(unsigned char)8];
    }
    /* LoopSeq 1 */
    for (unsigned int i_2 = 1; i_2 < 12; i_2 += 2) 
    {
        arr_11 [i_2] = ((unsigned int) (-(((/* implicit */int) ((unsigned char) var_15)))));
        /* LoopSeq 3 */
        for (unsigned int i_3 = 0; i_3 < 13; i_3 += 4) 
        {
            var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_1 [i_3])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_3]))))) : (((/* implicit */int) arr_5 [i_2 + 1])))))));
            arr_14 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)73)) > (((((((/* implicit */int) arr_9 [(unsigned char)8])) ^ (((/* implicit */int) arr_10 [i_2])))) / (((/* implicit */int) ((unsigned char) arr_10 [i_2])))))));
            /* LoopSeq 2 */
            for (unsigned char i_4 = 1; i_4 < 12; i_4 += 2) 
            {
                var_20 = ((unsigned char) var_7);
                arr_17 [i_2] [i_2] = ((/* implicit */unsigned char) (+(min((2047U), (((/* implicit */unsigned int) (unsigned char)14))))));
                arr_18 [i_2] = ((/* implicit */unsigned int) ((unsigned char) var_10));
                arr_19 [i_2] = ((/* implicit */unsigned char) min((max((min((((/* implicit */unsigned int) (unsigned char)175)), (var_1))), (((/* implicit */unsigned int) arr_15 [i_2] [i_3] [i_4])))), (((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) (unsigned char)105)) ? (((/* implicit */int) (unsigned char)126)) : (((/* implicit */int) (unsigned char)18))))))));
            }
            for (unsigned char i_5 = 0; i_5 < 13; i_5 += 2) 
            {
                arr_24 [i_2] [i_3] [i_2] = ((unsigned char) min((((/* implicit */unsigned int) (unsigned char)193)), (876042190U)));
                var_21 |= ((/* implicit */unsigned char) (-(((/* implicit */int) var_16))));
                var_22 = max((((/* implicit */unsigned int) ((((/* implicit */int) arr_20 [9U] [i_2 - 1] [i_2])) / (((/* implicit */int) arr_0 [i_2]))))), (((unsigned int) max((3U), (((/* implicit */unsigned int) var_11))))));
            }
            var_23 |= ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) 790481133U)) ? (((/* implicit */int) arr_22 [i_2 - 1] [i_3])) : (((/* implicit */int) var_11))))) == (2540120999U)))) ^ (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_2 - 1] [i_3]))) != (max((arr_23 [i_3] [i_3]), (((/* implicit */unsigned int) (unsigned char)222)))))))));
        }
        /* vectorizable */
        for (unsigned char i_6 = 1; i_6 < 10; i_6 += 2) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned char i_7 = 3; i_7 < 12; i_7 += 2) 
            {
                var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) (~(0U))))));
                arr_31 [i_2] = ((/* implicit */unsigned char) 9059849U);
                var_25 *= var_10;
                /* LoopSeq 1 */
                for (unsigned int i_8 = 0; i_8 < 13; i_8 += 3) 
                {
                    arr_36 [i_2] [i_2] [i_7] [i_6] [i_2] [i_2] = ((/* implicit */unsigned int) (+((-(((/* implicit */int) arr_27 [i_2] [i_2] [(unsigned char)0]))))));
                    arr_37 [i_7 - 3] [i_6 + 2] [i_6] [i_2] [i_2] [i_7 - 3] = (unsigned char)175;
                    /* LoopSeq 3 */
                    for (unsigned char i_9 = 0; i_9 < 13; i_9 += 1) 
                    {
                        var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) ((arr_1 [(unsigned char)6]) > (arr_1 [(unsigned char)0]))))));
                        var_27 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned char) arr_38 [i_2] [i_2] [i_2] [(unsigned char)9] [i_2])))));
                    }
                    for (unsigned char i_10 = 1; i_10 < 11; i_10 += 3) /* same iter space */
                    {
                        var_28 += ((/* implicit */unsigned char) ((((/* implicit */int) arr_21 [i_7 - 2] [i_6 + 3] [i_10 + 1] [(unsigned char)8])) == (((/* implicit */int) (unsigned char)255))));
                        var_29 = ((arr_23 [i_2] [i_8]) + (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))));
                    }
                    for (unsigned char i_11 = 1; i_11 < 11; i_11 += 3) /* same iter space */
                    {
                        var_30 = arr_0 [i_2];
                        arr_45 [i_2] [(unsigned char)3] [i_2] [i_8] [i_2] = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)9))));
                        arr_46 [i_2] [i_6 + 1] [i_7 - 3] [i_2] [i_6] = ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)13))) + (2447755715U));
                    }
                    arr_47 [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */int) var_10)) < (((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))));
                }
                var_31 ^= ((/* implicit */unsigned char) ((unsigned int) (~(((/* implicit */int) var_5)))));
            }
            var_32 = ((/* implicit */unsigned int) ((unsigned char) arr_43 [i_2] [i_2]));
            arr_48 [i_2] [i_2] [i_2] = (~(((((/* implicit */_Bool) (unsigned char)8)) ? (arr_29 [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)176))))));
            arr_49 [i_2] [i_2] [i_6 + 2] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)182))) + (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_2)))));
            var_33 = var_11;
        }
        /* vectorizable */
        for (unsigned char i_12 = 1; i_12 < 10; i_12 += 2) /* same iter space */
        {
            arr_53 [i_2] [i_12 + 1] [i_2] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_27 [i_2 + 1] [i_12 + 1] [i_12 + 2]))));
            var_34 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_12 [i_2] [i_2 + 1] [i_12 - 1])) ? (((((/* implicit */int) (unsigned char)167)) + (((/* implicit */int) (unsigned char)213)))) : (((/* implicit */int) ((unsigned char) 2954214789U)))));
            arr_54 [i_2] = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_10)))));
        }
    }
    var_35 |= ((/* implicit */unsigned char) ((max((((/* implicit */unsigned int) ((unsigned char) (unsigned char)122))), (((unsigned int) 1673747054U)))) <= (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned char)74), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)137)))))))))));
}
