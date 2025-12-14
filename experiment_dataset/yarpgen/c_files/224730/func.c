/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224730
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224730 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224730
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
    var_18 = var_5;
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 10; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (unsigned char i_4 = 0; i_4 < 10; i_4 += 4) 
                            {
                                arr_12 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (-(((/* implicit */int) (((!(((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_2] [i_3] [i_4])))) && (((/* implicit */_Bool) ((((/* implicit */int) arr_11 [i_0] [i_1] [i_2] [i_3] [i_4])) + (((/* implicit */int) arr_4 [i_0] [i_1] [i_2] [i_3]))))))))));
                                var_19 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) ^ (((((/* implicit */int) arr_5 [i_1] [i_1] [i_2])) ^ (((/* implicit */int) arr_10 [i_0] [i_0] [i_2] [i_3] [i_1] [i_4] [i_0]))))))) ? (min((((((/* implicit */int) var_5)) | (((/* implicit */int) (_Bool)1)))), (((((/* implicit */_Bool) arr_6 [i_0] [i_3] [i_4])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_2 [i_0] [i_1] [i_2])))))) : (((/* implicit */int) (_Bool)1))));
                                var_20 -= ((/* implicit */_Bool) (+((-(((/* implicit */int) ((unsigned char) (_Bool)1)))))));
                            }
                            for (unsigned char i_5 = 0; i_5 < 10; i_5 += 4) 
                            {
                                var_21 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_3 [i_1] [i_3] [i_5]))));
                                var_22 += ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_3))))) ? ((+(((/* implicit */int) arr_8 [i_0] [i_2] [i_2])))) : (((/* implicit */int) arr_14 [i_0] [i_1] [i_2] [i_3] [i_5])))), (((/* implicit */int) arr_0 [i_5]))));
                                arr_16 [i_0] [i_1] [i_2] [i_0] [i_5] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) arr_8 [i_5] [i_3] [i_1]))));
                            }
                            var_23 |= ((_Bool) (unsigned char)192);
                            /* LoopSeq 4 */
                            for (unsigned char i_6 = 0; i_6 < 10; i_6 += 1) 
                            {
                                var_24 = ((/* implicit */unsigned char) ((_Bool) (+(((/* implicit */int) (!((_Bool)1)))))));
                                var_25 = ((/* implicit */unsigned short) ((_Bool) max((arr_8 [i_1] [i_1] [i_1]), (arr_0 [i_0]))));
                            }
                            for (unsigned char i_7 = 0; i_7 < 10; i_7 += 3) 
                            {
                                var_26 *= ((/* implicit */unsigned char) (unsigned short)10);
                                var_27 ^= ((/* implicit */unsigned char) var_12);
                            }
                            /* vectorizable */
                            for (unsigned char i_8 = 0; i_8 < 10; i_8 += 4) 
                            {
                                arr_24 [i_0] [i_1] [i_0] [i_0] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_15 [i_0] [i_1] [i_0] [i_1] [i_2] [i_3] [i_8])) : (((/* implicit */int) arr_17 [i_0] [i_1] [i_2] [i_3] [i_8]))))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) arr_14 [i_8] [i_8] [i_8] [i_8] [i_8])) ? (((/* implicit */int) arr_1 [i_0] [i_8])) : (((/* implicit */int) var_16))))));
                                var_28 = ((/* implicit */unsigned short) ((unsigned char) (((_Bool)1) ? (((/* implicit */int) (unsigned short)65520)) : (((/* implicit */int) (_Bool)1)))));
                                arr_25 [i_0] [i_1] [i_2] [i_0] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_5 [i_3] [i_1] [i_0])) / (((((/* implicit */int) arr_17 [i_0] [i_1] [i_2] [i_3] [i_8])) / (((/* implicit */int) (unsigned char)131))))));
                                var_29 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_14 [i_1] [i_3] [i_3] [i_3] [i_2]))));
                            }
                            for (unsigned short i_9 = 0; i_9 < 10; i_9 += 2) 
                            {
                                var_30 = ((/* implicit */_Bool) (unsigned short)45856);
                                var_31 = ((/* implicit */_Bool) max(((unsigned char)241), (((/* implicit */unsigned char) (_Bool)1))));
                                arr_28 [i_0] [i_1] [i_1] [i_2] [i_2] [i_0] [i_9] = ((/* implicit */unsigned short) var_5);
                                var_32 = ((/* implicit */unsigned short) ((unsigned char) ((((((/* implicit */int) var_7)) & (((/* implicit */int) arr_22 [i_0] [i_1] [i_2] [i_3] [i_9] [i_3])))) < (((/* implicit */int) (unsigned char)31)))));
                            }
                        }
                    } 
                } 
                var_33 -= ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)65524)) > (((/* implicit */int) (unsigned short)59948))));
                var_34 += ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) arr_7 [i_1] [i_1] [i_1] [i_0])) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0])))));
                var_35 = ((unsigned char) arr_26 [i_0] [i_0] [i_0] [i_1]);
            }
        } 
    } 
}
