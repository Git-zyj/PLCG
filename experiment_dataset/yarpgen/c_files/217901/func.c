/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217901
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217901 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217901
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
    var_20 = ((/* implicit */unsigned int) var_8);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 10; i_2 += 2) 
                {
                    for (short i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 10; i_4 += 2) 
                        {
                            {
                                var_21 = ((/* implicit */short) ((((unsigned int) (_Bool)0)) * (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (_Bool)0))))));
                                arr_13 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) (-(max((((((/* implicit */int) var_12)) * (((/* implicit */int) (_Bool)0)))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_18)) : (var_16)))))));
                                arr_14 [(_Bool)1] [(short)8] [i_2] [i_3] [(short)8] [(unsigned char)6] [i_0] = min((((unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)22))) ^ (arr_10 [(_Bool)1] [i_1] [i_2] [i_3] [i_4])))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_9) : (271608618U)))) ? (((/* implicit */int) ((arr_3 [i_4]) != (((/* implicit */int) var_18))))) : (((((/* implicit */int) (short)11307)) * (((/* implicit */int) (_Bool)1))))))));
                                arr_15 [i_0] [i_1] [i_0] [i_0] [i_3] [(short)9] = ((/* implicit */short) (-(max((arr_8 [i_0] [i_1] [i_1] [i_2] [i_2] [i_4]), (var_9)))));
                                arr_16 [i_0] [(unsigned char)2] [(unsigned char)2] [i_3] [i_3] [(unsigned char)2] = ((((/* implicit */_Bool) -1272941943)) ? (((((/* implicit */_Bool) arr_4 [i_1])) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_4]))))) : (min((arr_10 [i_4] [i_4] [i_2] [i_2] [i_2]), (arr_10 [i_0] [i_1] [i_2] [i_3] [i_4]))));
                            }
                        } 
                    } 
                } 
                arr_17 [i_0] |= ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_9 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))) : (((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [(short)5] [i_1])) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_7 [i_0] [2U] [2U] [9U])) : (((/* implicit */int) var_12)))))));
                var_22 = ((/* implicit */int) max(((-(((((/* implicit */_Bool) var_13)) ? (536866816U) : (((/* implicit */unsigned int) ((/* implicit */int) var_15))))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_1])) ? (((/* implicit */int) arr_6 [i_0])) : (((/* implicit */int) arr_9 [i_0])))))));
                var_23 = ((/* implicit */unsigned int) (+(((/* implicit */int) (!(arr_2 [i_0] [i_0]))))));
            }
        } 
    } 
    var_24 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) var_15)), (((var_12) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (min((((/* implicit */unsigned int) (_Bool)1)), (var_9)))))));
    var_25 = ((/* implicit */unsigned char) var_1);
}
