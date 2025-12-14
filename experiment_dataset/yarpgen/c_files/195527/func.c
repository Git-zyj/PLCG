/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195527
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195527 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195527
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
    var_18 = ((/* implicit */unsigned int) var_11);
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (unsigned char i_1 = 3; i_1 < 14; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                {
                    var_19 = ((/* implicit */unsigned int) ((unsigned char) ((unsigned short) var_15)));
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 2; i_3 < 14; i_3 += 4) 
                    {
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (int i_4 = 4; i_4 < 13; i_4 += 4) 
                        {
                            var_20 = ((/* implicit */unsigned char) (-(arr_7 [i_0] [i_0] [i_4] [i_1 - 1] [i_3 + 1])));
                            arr_11 [i_2] [i_2] [i_2] [i_0] [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) ((int) ((arr_1 [i_0]) / (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_3] [i_2] [i_1]))))));
                            var_21 += ((/* implicit */unsigned char) ((unsigned short) 2088670807U));
                        }
                        for (unsigned short i_5 = 2; i_5 < 13; i_5 += 2) 
                        {
                            arr_15 [i_5] [i_3] [i_0] [i_2] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)206)) && (((/* implicit */_Bool) arr_12 [i_0] [i_1 - 2] [i_5 + 1] [i_5] [i_5])))))));
                            var_22 = ((/* implicit */unsigned int) ((((int) 1950171156U)) & (((/* implicit */int) ((var_2) != (((/* implicit */unsigned int) ((int) var_9))))))));
                            var_23 = ((unsigned int) ((unsigned char) arr_13 [i_0] [i_1] [i_0] [i_0] [i_3] [i_5]));
                            var_24 = ((((/* implicit */int) ((1950171163U) != (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_3 - 2] [i_1 - 2] [i_2])))))) ^ (((/* implicit */int) ((unsigned short) var_17))));
                            var_25 = ((/* implicit */unsigned short) ((unsigned int) (+(arr_12 [i_3] [i_3] [i_3 - 2] [i_3] [i_3]))));
                        }
                        for (int i_6 = 2; i_6 < 14; i_6 += 4) 
                        {
                            var_26 = ((/* implicit */unsigned char) (+(((unsigned int) arr_14 [i_1 + 1] [i_1 + 1] [i_3 - 1] [i_6 - 2] [i_0]))));
                            arr_18 [i_0] [i_2] [i_2] [i_2] [i_1] [i_0] [i_0] = ((/* implicit */unsigned short) ((unsigned int) ((unsigned short) arr_5 [i_1 - 2])));
                        }
                        arr_19 [i_0] [i_0] [i_0] = ((/* implicit */int) ((unsigned char) ((unsigned short) var_7)));
                        arr_20 [i_0] [i_0] [i_0] = ((unsigned int) ((int) arr_7 [i_2] [i_2] [i_2] [i_2] [i_2]));
                    }
                    /* LoopNest 2 */
                    for (unsigned char i_7 = 2; i_7 < 13; i_7 += 1) 
                    {
                        for (unsigned int i_8 = 3; i_8 < 13; i_8 += 2) 
                        {
                            {
                                var_27 = ((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) ((var_13) < (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))))) & (((unsigned int) arr_23 [i_7] [i_0] [i_0])))) < (((unsigned int) (unsigned char)126))));
                                var_28 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned int) 1073741823U)))));
                                arr_26 [i_0] [i_1] [i_0] [i_7] [i_8] = ((((unsigned int) var_17)) / (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_4 [i_1 - 1] [i_1] [i_0])))));
                                arr_27 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((unsigned char) (+(((/* implicit */int) ((var_3) <= (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))))));
                            }
                        } 
                    } 
                    var_29 ^= ((((unsigned int) 3832026837U)) & (((unsigned int) var_2)));
                }
            } 
        } 
    } 
}
