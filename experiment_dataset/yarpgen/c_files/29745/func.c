/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29745
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
    var_15 |= var_10;
    var_16 = ((/* implicit */unsigned short) (-((~(((/* implicit */int) var_7))))));
    var_17 = var_2;
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (unsigned short i_1 = 4; i_1 < 13; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 15; i_2 += 3) 
                {
                    for (unsigned short i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        {
                            arr_9 [i_1] [i_1] [i_2] = arr_3 [i_1 - 4];
                            var_18 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */int) min((arr_8 [i_1] [i_2] [i_1] [i_1]), (arr_2 [i_1] [i_2])))) != (((/* implicit */int) arr_4 [i_1 - 3] [i_1] [i_1 + 2])))))));
                            var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_7 [i_1 - 4] [i_1] [i_1] [i_1 + 1]))))) || (((/* implicit */_Bool) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_0 [i_0]))))), (arr_8 [i_1] [i_0] [i_1 - 4] [i_1 - 4]))))));
                            var_20 += ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_5 [i_1 - 4] [i_1 + 2])) ? (((/* implicit */int) arr_5 [i_1 + 1] [i_1 - 3])) : (((/* implicit */int) arr_5 [i_1 - 3] [i_1 + 2])))), (((((/* implicit */int) arr_1 [i_1 + 1] [i_1 - 1])) & (((/* implicit */int) arr_7 [i_1 - 1] [i_1 - 1] [(unsigned short)8] [i_1 - 2]))))));
                            /* LoopSeq 1 */
                            for (unsigned short i_4 = 0; i_4 < 15; i_4 += 4) 
                            {
                                arr_12 [i_4] [i_1] [i_2] [i_1] [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */int) var_0)) > (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_11 [i_1])))))) || (((/* implicit */_Bool) ((unsigned short) arr_1 [i_1 - 4] [i_0])))));
                                var_21 = ((/* implicit */unsigned short) max((var_21), (arr_4 [i_0] [i_4] [i_2])));
                                var_22 = ((unsigned short) (-(((/* implicit */int) arr_4 [i_1 - 1] [i_1] [i_1]))));
                                var_23 = ((/* implicit */unsigned short) ((((((/* implicit */int) var_10)) / (((/* implicit */int) var_0)))) / (((/* implicit */int) var_6))));
                            }
                        }
                    } 
                } 
                arr_13 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (unsigned short)1)) : (((/* implicit */int) (unsigned short)25137))))))) ? (max((((/* implicit */int) (unsigned short)1)), (((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0] [i_1] [i_1])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_8)))))) : (min((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned short)240)) : (((/* implicit */int) (unsigned short)50024)))), (((/* implicit */int) ((unsigned short) arr_0 [i_0])))))));
                var_24 = arr_11 [i_1];
                arr_14 [i_1] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_11 [i_1])) ? (((/* implicit */int) arr_5 [i_1 - 3] [i_1 + 1])) : (((/* implicit */int) arr_10 [i_0] [i_1] [i_1] [i_1 - 2] [i_0])))) % (((/* implicit */int) ((((/* implicit */int) arr_4 [i_1 - 3] [i_1] [i_1 + 1])) <= (((/* implicit */int) ((unsigned short) arr_4 [i_0] [i_1] [i_1]))))))));
            }
        } 
    } 
}
