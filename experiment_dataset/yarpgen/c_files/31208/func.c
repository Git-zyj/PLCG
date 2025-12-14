/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31208
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31208 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31208
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 18; i_1 += 3) 
        {
            {
                /* LoopSeq 4 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    arr_8 [(unsigned char)8] [(unsigned char)8] &= ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) arr_0 [i_0 + 1])) > (((/* implicit */int) arr_5 [i_0 + 1] [i_1 + 1] [i_1 + 1]))))) + (((/* implicit */int) max((arr_5 [i_0 + 1] [i_0 + 1] [i_1 - 1]), (max((arr_7 [i_2] [i_1] [i_0]), (arr_2 [i_0] [0] [i_2]))))))));
                    var_15 = ((/* implicit */_Bool) ((var_7) ? ((+(((/* implicit */int) ((arr_3 [(_Bool)1] [i_1 - 2]) > (var_2)))))) : (501374217)));
                    arr_9 [i_0] [i_1] [i_0] = var_13;
                    arr_10 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_0])) : (((/* implicit */int) max((var_6), (var_7))))));
                }
                for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                {
                    var_16 = arr_0 [i_0 + 1];
                    var_17 = var_6;
                }
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    var_18 = ((/* implicit */int) ((((/* implicit */_Bool) max((arr_3 [i_1] [i_1]), (arr_3 [i_0 + 1] [i_0])))) && (((/* implicit */_Bool) (~(arr_14 [i_0 + 1]))))));
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (int i_6 = 0; i_6 < 19; i_6 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned char) arr_7 [i_1 + 1] [i_0 + 1] [i_4]);
                                arr_22 [(_Bool)1] [i_5] [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */int) arr_4 [i_0 + 1] [i_0 + 1] [i_0 + 1])), (arr_1 [i_0 + 1])))) ? (arr_1 [i_0 + 1]) : (((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (arr_1 [i_0 + 1]) : (arr_1 [i_0 + 1])))));
                                var_20 = (((+(arr_19 [i_1 - 1] [i_0 + 1] [i_0 + 1]))) == ((~(((/* implicit */int) arr_18 [i_0 + 1] [i_0 + 1])))));
                            }
                        } 
                    } 
                }
                for (int i_7 = 0; i_7 < 19; i_7 += 1) 
                {
                    var_21 = ((/* implicit */_Bool) var_12);
                    /* LoopNest 2 */
                    for (unsigned char i_8 = 0; i_8 < 19; i_8 += 3) 
                    {
                        for (int i_9 = 3; i_9 < 16; i_9 += 1) 
                        {
                            {
                                var_22 = (-((+(((/* implicit */int) arr_29 [i_9 - 1] [i_9 - 3] [i_9 + 2] [i_9 + 2] [i_9 - 2] [i_9 - 2])))));
                                var_23 = (((-(((/* implicit */int) arr_28 [i_1 - 2] [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_1] [i_1 - 1])))) > ((+(((/* implicit */int) arr_24 [(_Bool)1] [(_Bool)1] [i_0 + 1] [i_0 + 1])))));
                            }
                        } 
                    } 
                }
                var_24 &= ((/* implicit */unsigned char) (((+(var_4))) >= (((/* implicit */int) arr_28 [i_0] [i_0] [i_0] [i_0 + 1] [i_0] [i_0]))));
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned char) var_7);
    var_26 -= var_7;
}
