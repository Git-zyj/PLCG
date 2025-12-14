/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19247
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
    for (unsigned char i_0 = 1; i_0 < 17; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 2; i_3 < 17; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 20; i_4 += 1) 
                        {
                            {
                                var_20 -= ((/* implicit */unsigned char) ((max((var_18), (min((var_4), (arr_3 [i_2] [i_3] [i_2]))))) ? (((/* implicit */int) ((unsigned char) (+(((/* implicit */int) (unsigned char)116)))))) : (((/* implicit */int) arr_5 [i_0] [i_1] [i_1]))));
                                arr_11 [i_3] [i_3] [(_Bool)1] [i_1] [i_3] = ((/* implicit */unsigned char) arr_10 [i_0] [i_1] [i_0] [i_3] [i_4] [i_3] [(_Bool)1]);
                                arr_12 [i_4] [i_3] [(unsigned char)6] = ((_Bool) (unsigned char)233);
                            }
                        } 
                    } 
                    arr_13 [i_0] [i_1] [i_1] [(unsigned char)11] &= ((((((/* implicit */_Bool) (~(((/* implicit */int) arr_7 [i_1] [i_2]))))) ? (((/* implicit */int) arr_4 [i_0 + 3] [i_0 + 3] [i_0 + 2])) : (((/* implicit */int) arr_9 [i_2] [(unsigned char)13] [i_1] [i_0] [i_0 + 3])))) >= ((~(((/* implicit */int) arr_0 [i_0 + 3])))));
                    var_21 = ((/* implicit */unsigned char) max((var_21), (((unsigned char) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) arr_0 [i_2])) : (((/* implicit */int) var_19)))))));
                }
                var_22 *= ((/* implicit */_Bool) ((var_1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((_Bool) (~(((/* implicit */int) arr_0 [i_0]))))))));
                var_23 = ((/* implicit */_Bool) (((+(((var_14) ? (((/* implicit */int) (unsigned char)240)) : (((/* implicit */int) (_Bool)1)))))) - (((/* implicit */int) (((!(var_6))) || ((!(((/* implicit */_Bool) var_2)))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_5 = 0; i_5 < 15; i_5 += 1) 
    {
        for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
        {
            for (unsigned char i_7 = 0; i_7 < 15; i_7 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_15 [i_5]))));
                                var_25 = ((/* implicit */_Bool) (unsigned char)26);
                                arr_31 [i_5] [(_Bool)1] [i_5] [i_5] [i_5] [i_9] = ((/* implicit */unsigned char) (~(((/* implicit */int) max(((!(((/* implicit */_Bool) arr_22 [i_9] [i_9] [i_9] [i_9])))), (((_Bool) arr_6 [i_5])))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        for (unsigned char i_11 = 2; i_11 < 12; i_11 += 1) 
                        {
                            {
                                arr_36 [i_5] [i_11] [i_7] [i_6] [i_7] [i_5] [i_7] = ((unsigned char) (((((_Bool)0) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_15)))) * (((/* implicit */int) ((_Bool) var_10)))));
                                arr_37 [i_5] [i_10] [i_5] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((_Bool) ((arr_1 [i_5]) ? (((/* implicit */int) arr_4 [i_6] [i_7] [i_11])) : (((/* implicit */int) (unsigned char)241))))))));
                                var_26 *= ((/* implicit */_Bool) (~(((var_1) ? (((/* implicit */int) arr_26 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5])) : (((/* implicit */int) arr_15 [i_7]))))));
                                var_27 = ((/* implicit */_Bool) arr_30 [i_5] [i_5]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
