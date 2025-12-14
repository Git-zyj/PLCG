/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50543
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50543 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50543
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
    for (signed char i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (signed char i_1 = 3; i_1 < 12; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_0] [i_1] [i_1] = ((/* implicit */_Bool) ((int) (!(var_4))));
                    var_14 = ((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */int) arr_4 [i_1 - 3] [i_1] [i_1 - 2] [i_1 - 1])) == (((/* implicit */int) arr_4 [i_1 - 3] [i_1] [8U] [i_1 - 2]))))), ((+(arr_3 [i_1])))));
                    /* LoopSeq 1 */
                    for (signed char i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        arr_12 [i_0] [i_1] [i_0] [i_3] [i_0] [i_1] = ((/* implicit */unsigned short) 1606547316);
                        arr_13 [i_0] [i_1] [i_3] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((((/* implicit */int) var_2)) & (((/* implicit */int) arr_10 [i_1]))))) ? (min((arr_9 [i_0] [i_1] [i_2] [i_2] [i_3]), (((/* implicit */int) arr_10 [i_1])))) : (((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) arr_5 [(_Bool)1] [i_1] [i_0])) : (arr_2 [i_2]))))), (arr_11 [i_0] [i_0] [i_1] [i_3])));
                        var_15 = ((/* implicit */int) min((var_15), ((~((~((~(((/* implicit */int) var_0))))))))));
                    }
                    /* LoopSeq 2 */
                    for (short i_4 = 0; i_4 < 15; i_4 += 3) 
                    {
                        arr_16 [i_1] [i_1 - 2] [i_4] = ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) var_1))) ? (-1152474756) : ((+(((/* implicit */int) arr_15 [i_0] [i_2] [i_4]))))))), (max((((/* implicit */unsigned int) arr_15 [i_1 - 1] [i_1 - 2] [i_1 + 2])), (arr_0 [i_1] [3U])))));
                        arr_17 [i_0] [i_0] [i_0] [10] [i_2] [i_4] &= ((/* implicit */unsigned int) (((-(arr_11 [i_0] [i_0] [i_0] [i_4]))) % (1152474756)));
                        var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) ((int) var_3)))));
                        arr_18 [i_0] [i_1] [i_0] [i_4] = min((((/* implicit */int) (signed char)0)), (1152474758));
                    }
                    for (unsigned short i_5 = 1; i_5 < 13; i_5 += 2) 
                    {
                        var_17 = (~(var_11));
                        var_18 = ((((/* implicit */_Bool) arr_7 [i_2])) ? (arr_7 [i_1 + 1]) : (((int) (!(((/* implicit */_Bool) -1152474756))))));
                    }
                    arr_21 [i_2] [i_2] [i_1] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) arr_4 [i_1 - 1] [i_1] [i_2] [i_1 - 1]))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_14 [i_1] [i_1 - 2] [i_1 - 2] [i_1 - 2])))) : (min((((/* implicit */unsigned int) (-(-1152474755)))), (arr_6 [i_1 - 1] [i_1 + 2] [i_1 - 2])))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) var_4))));
}
