/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245514
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245514 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245514
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
    var_19 = ((/* implicit */unsigned short) (-(((/* implicit */int) min((((/* implicit */unsigned short) (short)-9689)), (var_4))))));
    var_20 *= max((((/* implicit */unsigned short) (short)9288)), (min((((/* implicit */unsigned short) var_16)), ((unsigned short)28971))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 1; i_0 < 20; i_0 += 1) 
    {
        var_21 = ((/* implicit */short) max((((/* implicit */unsigned short) min((arr_0 [i_0 + 1]), (arr_0 [i_0 - 1])))), (((unsigned short) arr_1 [i_0 - 1]))));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        for (short i_4 = 0; i_4 < 21; i_4 += 4) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned short) arr_1 [i_3]);
                                arr_15 [(unsigned short)11] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((((((/* implicit */int) arr_12 [i_0] [(unsigned short)6] [i_2] [(short)8] [i_4])) + (2147483647))) >> (((((/* implicit */int) arr_12 [i_0] [(short)1] [i_4] [i_3] [(short)19])) + (3655))))) | (((/* implicit */int) ((unsigned short) arr_10 [i_1] [(short)4] [(unsigned short)20] [i_4])))))) ? ((-(((/* implicit */int) ((short) arr_12 [(unsigned short)7] [i_3] [i_2] [i_1] [(unsigned short)6]))))) : (((/* implicit */int) ((((((/* implicit */_Bool) arr_4 [i_2] [(short)4])) ? (((/* implicit */int) arr_1 [(unsigned short)0])) : (((/* implicit */int) arr_14 [(short)8])))) <= (((((/* implicit */int) arr_10 [i_0] [i_1] [i_2] [i_3])) ^ (((/* implicit */int) arr_5 [i_0] [(unsigned short)20] [(short)17])))))))));
                                arr_16 [i_0] [(short)11] [i_2] [i_3] [(unsigned short)1] = ((/* implicit */unsigned short) max(((~(((/* implicit */int) arr_12 [i_0 + 1] [i_0 + 1] [i_0 + 1] [(short)18] [i_0 - 1])))), (((/* implicit */int) ((((/* implicit */_Bool) arr_6 [(unsigned short)10] [i_1] [(short)11] [i_0 - 1])) || (((/* implicit */_Bool) arr_6 [i_0] [(unsigned short)3] [i_2] [i_0 + 1])))))));
                            }
                        } 
                    } 
                    arr_17 [i_0] = ((/* implicit */short) arr_2 [i_0] [(unsigned short)10] [(unsigned short)15]);
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned short i_5 = 0; i_5 < 21; i_5 += 2) 
        {
            for (short i_6 = 1; i_6 < 20; i_6 += 3) 
            {
                {
                    var_23 = ((/* implicit */unsigned short) arr_12 [i_0 - 1] [i_5] [(unsigned short)14] [i_6 - 1] [(unsigned short)3]);
                    var_24 *= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)47002))))) ? (((/* implicit */int) ((unsigned short) arr_10 [i_0] [(unsigned short)10] [(unsigned short)0] [(unsigned short)11]))) : (((/* implicit */int) min((arr_3 [i_0] [(unsigned short)4] [i_0]), (arr_21 [(short)0] [i_6])))))) & (((((/* implicit */_Bool) (short)9688)) ? (((/* implicit */int) (short)4165)) : (((/* implicit */int) (unsigned short)47010))))));
                }
            } 
        } 
    }
}
