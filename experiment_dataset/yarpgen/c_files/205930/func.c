/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205930
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205930 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205930
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
        for (unsigned char i_1 = 1; i_1 < 11; i_1 += 3) 
        {
            {
                var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) (~(((/* implicit */int) (!(arr_2 [(_Bool)1] [i_1 + 2])))))))));
                var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) ((var_2) ? (((/* implicit */int) arr_2 [i_0] [i_1 + 3])) : (((/* implicit */int) var_8)))))) ? ((((_Bool)1) ? (((/* implicit */int) arr_4 [i_1] [i_1])) : (((/* implicit */int) arr_3 [i_1] [i_1 - 1] [i_1])))) : (min(((+(((/* implicit */int) arr_2 [i_0] [i_1 + 2])))), (((/* implicit */int) min(((_Bool)1), (arr_0 [i_0]))))))));
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_10 [i_1] [(_Bool)1] [i_1] [i_0]))))) ? (min((((arr_0 [(_Bool)1]) ? (((/* implicit */int) (unsigned char)55)) : (((/* implicit */int) var_1)))), (((/* implicit */int) ((((/* implicit */int) arr_6 [i_4] [i_3] [i_2 + 1] [i_1 + 1])) > (((/* implicit */int) arr_0 [i_3]))))))) : (((((/* implicit */int) (unsigned char)197)) - (((/* implicit */int) ((_Bool) arr_9 [i_4] [(_Bool)1] [i_1] [i_0])))))));
                                arr_14 [i_1] [i_1] [i_2 + 1] [i_3] [(_Bool)1] [(unsigned char)7] [i_4] = (!(min(((!(arr_2 [(_Bool)1] [(_Bool)1]))), (arr_6 [i_2 + 1] [i_2 + 1] [i_1 + 1] [i_1 + 2]))));
                                var_22 = ((/* implicit */unsigned char) arr_6 [i_0] [i_1] [(unsigned char)4] [i_4]);
                                arr_15 [i_1] [i_1] [i_1] [i_3] [i_3] [i_3] = arr_6 [(unsigned char)6] [i_1 + 1] [i_1] [(unsigned char)6];
                                var_23 = ((/* implicit */unsigned char) max((max((((_Bool) arr_7 [i_1 + 3] [i_3] [i_1 + 3] [i_1 + 3])), (max((arr_2 [i_2] [i_2]), (arr_5 [i_1] [i_4]))))), (arr_3 [i_1] [i_2] [i_1])));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            {
                var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) (~(min((((((/* implicit */int) arr_19 [i_5] [i_5] [i_6])) * (((/* implicit */int) var_0)))), ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned char i_7 = 0; i_7 < 15; i_7 += 4) 
                {
                    var_25 &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [(unsigned char)11] [i_6] [i_7] [i_7])) ? (((/* implicit */int) arr_16 [i_6] [i_5])) : (((/* implicit */int) var_5)))))));
                    var_26 = ((/* implicit */_Bool) ((unsigned char) arr_17 [i_6] [i_7]));
                    arr_22 [i_7] [i_7] [i_6] [i_7] = ((/* implicit */_Bool) ((((arr_18 [i_5] [i_6] [i_6]) && (arr_16 [i_7] [i_7]))) ? (((/* implicit */int) arr_18 [i_5] [i_6] [i_6])) : (((/* implicit */int) arr_17 [i_6] [i_6]))));
                    var_27 ^= (_Bool)1;
                    var_28 = ((/* implicit */_Bool) min((var_28), (((/* implicit */_Bool) (-(((/* implicit */int) arr_21 [(_Bool)1] [i_7])))))));
                }
            }
        } 
    } 
}
