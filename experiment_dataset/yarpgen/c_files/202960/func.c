/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202960
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202960 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202960
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
    var_19 = var_6;
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_20 += ((/* implicit */unsigned char) min((arr_1 [i_0 + 1]), (((_Bool) ((_Bool) (unsigned char)183)))));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            /* LoopSeq 2 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
            {
                arr_7 [i_2] [i_2] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_5 [i_0 + 1]))))) ? (((((/* implicit */_Bool) arr_5 [i_0 + 1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_5 [i_0 + 1])))) : (((/* implicit */int) max(((unsigned char)139), (arr_5 [i_0 + 1]))))));
                arr_8 [i_2] = arr_5 [i_0 + 1];
                /* LoopSeq 2 */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    arr_12 [i_2] [i_3] = var_16;
                    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0 + 1])) && (((/* implicit */_Bool) arr_2 [i_0 + 1]))))) : (((/* implicit */int) (_Bool)1))));
                }
                for (unsigned char i_4 = 0; i_4 < 14; i_4 += 1) 
                {
                    /* LoopSeq 2 */
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                    {
                        var_22 += ((/* implicit */_Bool) (+((+(((/* implicit */int) arr_2 [i_0 + 1]))))));
                        var_23 += ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned char)239)) : (((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)42)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)234)))) >= (((((/* implicit */int) (unsigned char)253)) - (((/* implicit */int) arr_18 [i_0] [i_1] [i_2] [i_4])))))))));
                        var_24 |= ((/* implicit */_Bool) (unsigned char)235);
                    }
                    /* vectorizable */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        arr_21 [i_0] [i_1] [i_2] [i_4] [i_6] = ((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_0] [i_0 + 1] [i_0 + 1] [i_0])) << (((/* implicit */int) arr_20 [i_0] [i_0 + 1] [i_4]))));
                        arr_22 [i_1] [i_1] [i_0] [i_1] [i_0] &= ((/* implicit */unsigned char) ((arr_15 [i_0 + 1]) ? (((/* implicit */int) (unsigned char)157)) : (((/* implicit */int) arr_19 [i_0 + 1] [i_1] [i_1] [i_1] [i_1]))));
                        var_25 = ((/* implicit */unsigned char) ((arr_1 [i_0 + 1]) ? (((/* implicit */int) arr_1 [i_0 + 1])) : (((/* implicit */int) arr_1 [i_0 + 1]))));
                        var_26 = ((/* implicit */_Bool) max((var_26), (((((/* implicit */int) (unsigned char)239)) == (((/* implicit */int) (_Bool)1))))));
                        var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) ((((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_6])) + (((/* implicit */int) (unsigned char)21)))))));
                    }
                    var_28 = ((/* implicit */unsigned char) (((((_Bool)1) ? (((/* implicit */int) var_13)) : (((((/* implicit */int) arr_4 [i_0] [i_0] [i_2] [i_2])) << (((/* implicit */int) var_16)))))) % (((/* implicit */int) arr_5 [i_0 + 1]))));
                }
            }
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
            {
                arr_26 [i_1] [i_1] [i_1] = ((((/* implicit */int) min((((((/* implicit */int) arr_2 [i_0])) != (((/* implicit */int) (unsigned char)255)))), ((_Bool)1)))) <= (((((/* implicit */int) arr_20 [i_0] [i_1] [i_1])) ^ (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_16 [i_1] [i_1] [i_7] [i_7] [i_7])) : (((/* implicit */int) arr_20 [i_1] [i_1] [i_1])))))));
                var_29 *= (unsigned char)21;
            }
            /* LoopSeq 1 */
            for (unsigned char i_8 = 1; i_8 < 11; i_8 += 4) 
            {
                arr_30 [i_8] [i_8] = ((/* implicit */_Bool) (unsigned char)93);
                /* LoopSeq 1 */
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    var_30 = ((/* implicit */unsigned char) arr_15 [i_0]);
                    var_31 |= var_4;
                    arr_33 [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_17 [i_0] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_8 + 1])) ^ (((/* implicit */int) arr_19 [i_8] [i_1] [i_0] [i_1] [i_0]))))) ? (((/* implicit */int) arr_10 [i_0] [i_0] [i_0])) : (((/* implicit */int) max(((unsigned char)219), (((/* implicit */unsigned char) arr_27 [i_0 + 1] [i_0])))))));
                    var_32 = arr_11 [i_0] [i_0] [i_0] [i_0];
                }
                var_33 = ((/* implicit */_Bool) max((var_33), (((/* implicit */_Bool) ((((/* implicit */int) min((arr_27 [i_8] [i_1]), (arr_27 [i_0] [i_0])))) / (((/* implicit */int) ((((/* implicit */int) arr_27 [i_0] [i_1])) >= (((/* implicit */int) arr_27 [i_1] [i_0 + 1]))))))))));
            }
        }
    }
    for (unsigned char i_10 = 0; i_10 < 16; i_10 += 4) 
    {
        arr_36 [i_10] [i_10] = arr_34 [i_10] [i_10];
        /* LoopSeq 1 */
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            var_34 += ((/* implicit */unsigned char) (~((~(((/* implicit */int) arr_35 [i_10]))))));
            arr_39 [i_10] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) arr_34 [i_10] [i_10])) == (((/* implicit */int) arr_34 [i_10] [i_10]))))) & (((/* implicit */int) ((_Bool) arr_34 [i_10] [i_11])))));
        }
    }
}
