/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249663
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249663 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249663
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 21; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (unsigned char i_2 = 1; i_2 < 22; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 1; i_3 < 21; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 2; i_4 < 20; i_4 += 3) 
                        {
                            {
                                var_10 = ((/* implicit */unsigned char) max((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_0] [(unsigned char)6] [i_2] [i_3])) || (((/* implicit */_Bool) arr_6 [i_1] [i_2]))))) != (((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_2] [i_2])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned char)105))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (unsigned char)109)) : (((/* implicit */int) (unsigned char)210))))) ? (((/* implicit */int) max(((unsigned char)216), (arr_4 [(unsigned char)15] [i_1])))) : (((/* implicit */int) max(((unsigned char)183), ((unsigned char)73))))))));
                                arr_13 [i_0] [i_1] [i_1] [i_2] [i_0] = (unsigned char)238;
                                var_11 = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) (unsigned char)59)) || (((/* implicit */_Bool) var_9)))) ? (((/* implicit */int) ((unsigned char) (unsigned char)54))) : (((/* implicit */int) max((arr_5 [i_0] [i_0] [(unsigned char)18]), ((unsigned char)95)))))) > (((/* implicit */int) (unsigned char)37))));
                                var_12 = ((/* implicit */unsigned char) ((((((/* implicit */int) (unsigned char)177)) ^ (((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) arr_6 [i_1] [i_1]))))))) != (min((((((/* implicit */_Bool) (unsigned char)183)) ? (((/* implicit */int) arr_4 [i_0] [i_0])) : (((/* implicit */int) (unsigned char)213)))), (((/* implicit */int) ((unsigned char) var_2)))))));
                                var_13 = (unsigned char)157;
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 24; i_5 += 2) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 24; i_6 += 4) 
                        {
                            {
                                arr_21 [i_1] [i_1] [(unsigned char)5] [(unsigned char)3] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */int) var_1)) > (((((/* implicit */int) arr_16 [i_0 + 1] [i_0 + 2] [i_1] [i_2 + 2])) ^ (((/* implicit */int) arr_16 [i_0 + 2] [i_0 + 2] [i_1] [i_2 + 1]))))));
                                var_14 = arr_1 [i_0] [i_0];
                                var_15 = min((((unsigned char) ((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_2] [i_5])) ? (((/* implicit */int) arr_17 [i_5])) : (((/* implicit */int) arr_2 [i_1] [i_1] [i_6]))))), (((unsigned char) ((((/* implicit */_Bool) (unsigned char)2)) ? (((/* implicit */int) (unsigned char)245)) : (((/* implicit */int) var_3))))));
                                arr_22 [i_0] [i_1] [i_2] [i_1] [(unsigned char)23] [i_6] [i_2] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((unsigned char) arr_14 [i_2 + 1] [i_1] [i_2]))) ? (((/* implicit */int) arr_16 [i_0 + 1] [i_2 + 1] [i_1] [i_0 + 1])) : (((/* implicit */int) arr_7 [i_6])))), (((/* implicit */int) arr_6 [i_1] [i_1]))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_7 = 0; i_7 < 24; i_7 += 4) 
                    {
                        for (unsigned char i_8 = 0; i_8 < 24; i_8 += 2) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)84)) ? (((/* implicit */int) (unsigned char)246)) : (((/* implicit */int) var_8))))) ? (((/* implicit */int) (unsigned char)132)) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned char)130)) : (((/* implicit */int) arr_20 [i_0] [i_1] [i_1] [i_1] [i_8]))))))) ? (((/* implicit */int) ((((/* implicit */int) min(((unsigned char)40), (var_8)))) <= (((/* implicit */int) var_1))))) : (((((((/* implicit */int) (unsigned char)0)) * (((/* implicit */int) (unsigned char)73)))) | (((((/* implicit */int) (unsigned char)38)) * (((/* implicit */int) arr_3 [i_7]))))))));
                                var_17 = max((var_5), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)217)) + (((/* implicit */int) (unsigned char)189))))) || (((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)50)) / (((/* implicit */int) (unsigned char)4)))))))));
                                var_18 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_2 + 1])) || (((/* implicit */_Bool) arr_7 [i_2 + 1]))))) < (((/* implicit */int) ((unsigned char) ((unsigned char) (unsigned char)63))))));
                            }
                        } 
                    } 
                    var_19 = arr_18 [i_0] [i_2];
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_9 = 0; i_9 < 14; i_9 += 4) 
    {
        for (unsigned char i_10 = 0; i_10 < 14; i_10 += 4) 
        {
            {
                arr_35 [i_9] [(unsigned char)0] [(unsigned char)0] = (unsigned char)104;
                /* LoopNest 2 */
                for (unsigned char i_11 = 0; i_11 < 14; i_11 += 1) 
                {
                    for (unsigned char i_12 = 0; i_12 < 14; i_12 += 3) 
                    {
                        {
                            var_20 = max((((unsigned char) (unsigned char)238)), (min((((unsigned char) (unsigned char)73)), (((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)250)) <= (((/* implicit */int) arr_1 [i_10] [i_12]))))))));
                            arr_42 [(unsigned char)6] [(unsigned char)6] [i_12] [i_11] [i_11] [i_11] = ((unsigned char) ((unsigned char) var_0));
                        }
                    } 
                } 
            }
        } 
    } 
    var_21 = var_2;
}
