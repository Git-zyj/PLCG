/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227396
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227396 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227396
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        var_17 = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) min((arr_3 [i_0]), (arr_2 [i_0]))))))) < (((/* implicit */int) arr_0 [i_0]))));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            /* LoopNest 3 */
            for (unsigned short i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                for (unsigned short i_3 = 0; i_3 < 25; i_3 += 3) 
                {
                    for (unsigned short i_4 = 0; i_4 < 25; i_4 += 4) 
                    {
                        {
                            var_18 -= ((/* implicit */unsigned short) (~(((((/* implicit */int) (unsigned short)36771)) - (((((/* implicit */_Bool) (unsigned short)36746)) ? (((/* implicit */int) (unsigned short)58520)) : (((/* implicit */int) (unsigned short)13995))))))));
                            var_19 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_11 [i_0] [i_0] [i_1] [i_2] [i_3] [i_4] [i_4]))));
                            var_20 = ((/* implicit */unsigned short) (+(((/* implicit */int) min((arr_6 [i_4] [i_3] [i_2] [i_0]), (arr_6 [i_4] [i_3] [i_1] [i_0]))))));
                        }
                    } 
                } 
            } 
            var_21 ^= arr_10 [i_0] [i_0] [i_0] [i_0] [i_0];
            var_22 -= ((/* implicit */unsigned short) min((((/* implicit */int) ((((/* implicit */int) arr_4 [i_0] [i_0] [i_0])) >= (((/* implicit */int) arr_4 [(unsigned short)23] [i_0] [(unsigned short)23]))))), ((-(((/* implicit */int) arr_4 [i_0] [(unsigned short)18] [i_0]))))));
        }
        var_23 = ((/* implicit */unsigned short) ((((/* implicit */int) min((min((arr_4 [i_0] [i_0] [i_0]), (arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))), (arr_5 [i_0] [i_0])))) - (((((/* implicit */_Bool) min((arr_11 [i_0] [i_0] [(unsigned short)21] [i_0] [i_0] [i_0] [i_0]), (arr_3 [i_0])))) ? (((/* implicit */int) min((arr_11 [(unsigned short)2] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), (arr_2 [i_0])))) : ((+(((/* implicit */int) arr_4 [i_0] [(unsigned short)4] [i_0]))))))));
    }
    var_24 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) min((var_10), (var_15)))) : (((/* implicit */int) ((((/* implicit */int) var_1)) <= (((/* implicit */int) var_12))))))), (((/* implicit */int) var_12))));
    /* LoopNest 2 */
    for (unsigned short i_5 = 0; i_5 < 22; i_5 += 4) 
    {
        for (unsigned short i_6 = 0; i_6 < 22; i_6 += 4) 
        {
            {
                var_25 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) arr_1 [i_5])) ? (((/* implicit */int) arr_1 [i_5])) : (((/* implicit */int) arr_7 [i_5]))))));
                var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_5] [(unsigned short)2])) ? (((/* implicit */int) arr_17 [i_5] [i_6])) : (((/* implicit */int) arr_17 [i_5] [i_6]))))) ? (((((/* implicit */_Bool) arr_17 [i_5] [i_6])) ? (((/* implicit */int) arr_4 [i_6] [i_6] [i_5])) : (((/* implicit */int) arr_17 [i_6] [i_5])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_5] [i_5] [i_6]))))))))));
            }
        } 
    } 
}
