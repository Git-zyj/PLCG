/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243989
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243989 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243989
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
    var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) var_12))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        arr_3 [i_0] = (_Bool)1;
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                {
                    arr_8 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -536870912)) ? (((/* implicit */int) var_15)) : (-1751927842)))) ? (((((/* implicit */int) arr_4 [i_0 - 1] [i_0])) * (((/* implicit */int) arr_6 [i_0] [i_2] [i_2])))) : (((/* implicit */int) var_15))));
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned char i_4 = 1; i_4 < 19; i_4 += 4) /* same iter space */
                        {
                            arr_14 [i_4] [i_4] [i_3] [i_2] [i_4] [i_0 + 1] = ((int) (!(((/* implicit */_Bool) var_3))));
                            var_19 -= ((/* implicit */unsigned char) ((arr_5 [i_0] [i_0 - 1] [i_0 - 1]) ? (((/* implicit */int) arr_1 [i_0 - 1])) : (arr_0 [i_3 + 1])));
                            var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) ((_Bool) arr_11 [i_0 - 1] [i_4 - 1] [i_2] [i_0 - 1])))));
                            arr_15 [i_0 - 1] [i_4] [i_0 - 1] [i_3] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)125)) ? (231736890) : (((/* implicit */int) (unsigned char)1))));
                        }
                        for (unsigned char i_5 = 1; i_5 < 19; i_5 += 4) /* same iter space */
                        {
                            arr_20 [i_0] [i_0] [i_3 + 1] [i_3] [i_5 + 2] [i_2] = var_7;
                            arr_21 [i_0] [i_0 + 1] [i_0 + 1] = ((/* implicit */int) (_Bool)1);
                            var_21 = ((/* implicit */int) min((var_21), ((((((_Bool)1) ? (((/* implicit */int) arr_4 [i_0] [i_0])) : (((/* implicit */int) var_11)))) & (((/* implicit */int) var_3))))));
                            arr_22 [i_0] [i_0] [i_0 - 1] [i_0] [i_0 - 1] [i_0 - 1] = ((/* implicit */_Bool) 810403987);
                            var_22 -= ((/* implicit */_Bool) (-(arr_10 [i_0] [i_0] [i_1] [i_2])));
                        }
                        for (unsigned char i_6 = 1; i_6 < 19; i_6 += 4) /* same iter space */
                        {
                            var_23 = ((((/* implicit */int) arr_12 [i_0 - 1] [i_1] [i_3 + 1] [i_2] [i_0 - 1])) | (((/* implicit */int) (unsigned char)255)));
                            arr_27 [i_6] [i_3 + 1] [i_3] [i_2] [i_0] [i_0] = ((/* implicit */unsigned char) (+(arr_17 [i_3])));
                        }
                        arr_28 [i_0] [i_1] [i_3] [i_3] [i_3] [i_3] |= ((/* implicit */unsigned char) (+(((/* implicit */int) (_Bool)1))));
                    }
                    arr_29 [i_0] [i_1] [i_2] = (((_Bool)1) && (((/* implicit */_Bool) -1629048612)));
                }
            } 
        } 
    }
    var_24 = ((/* implicit */int) (_Bool)1);
    var_25 = ((/* implicit */_Bool) ((unsigned char) ((unsigned char) max((var_2), (var_2)))));
}
