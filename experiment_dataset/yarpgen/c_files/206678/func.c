/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206678
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206678 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206678
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
    var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) ((unsigned char) ((((var_17) >> (((((/* implicit */int) var_12)) - (8071))))) != (((/* implicit */unsigned int) ((/* implicit */int) (short)32739)))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (unsigned char i_2 = 1; i_2 < 11; i_2 += 2) 
            {
                {
                    var_21 += ((/* implicit */unsigned int) var_1);
                    /* LoopSeq 2 */
                    for (int i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        arr_14 [i_1] = ((/* implicit */unsigned int) ((short) (+(var_16))));
                        var_22 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_3])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (101807783U)));
                        var_23 += ((/* implicit */unsigned int) ((unsigned char) ((((int) arr_12 [i_0] [(unsigned char)2] [i_1] [i_2] [i_0] [i_3])) + (((/* implicit */int) ((3100289050U) != (((/* implicit */unsigned int) 1048026152))))))));
                    }
                    for (unsigned char i_4 = 0; i_4 < 12; i_4 += 3) 
                    {
                        arr_18 [i_0] [i_2] [i_2] [i_1] [i_1] = ((/* implicit */unsigned char) arr_13 [i_0] [i_0]);
                        var_24 = ((unsigned int) ((int) 0));
                    }
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (short i_5 = 0; i_5 < 12; i_5 += 3) 
    {
        /* LoopSeq 1 */
        for (int i_6 = 0; i_6 < 12; i_6 += 2) 
        {
            var_25 = ((/* implicit */short) ((var_18) >> ((((~(((/* implicit */int) var_0)))) + (2865)))));
            var_26 = (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_14) : (((/* implicit */unsigned int) arr_22 [i_6] [i_6]))))) ? (((/* implicit */unsigned int) 1048026142)) : (max((arr_15 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]), (((/* implicit */unsigned int) arr_12 [i_5] [i_5] [i_5] [i_6] [i_6] [i_6])))))));
        }
        var_27 = ((/* implicit */int) min((((/* implicit */unsigned int) min((-1048026152), (1048026152)))), (((((/* implicit */_Bool) ((var_19) / (((/* implicit */unsigned int) -1048026152))))) ? (((unsigned int) var_0)) : (((/* implicit */unsigned int) var_11))))));
        var_28 |= ((/* implicit */short) ((((/* implicit */_Bool) (~(max((arr_19 [8U]), (-1048026152)))))) ? (max((((/* implicit */int) ((var_1) > (((/* implicit */int) (unsigned char)255))))), (1048026151))) : (((/* implicit */int) ((((0) - (((/* implicit */int) (unsigned char)15)))) > (((/* implicit */int) ((1048026152) != (((/* implicit */int) arr_24 [i_5]))))))))));
    }
    /* LoopSeq 1 */
    for (int i_7 = 0; i_7 < 23; i_7 += 2) 
    {
        var_29 |= ((int) min((((/* implicit */unsigned int) max((((/* implicit */int) var_12)), (1048026151)))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) arr_27 [i_7])) : (872341898U)))));
        var_30 -= ((/* implicit */short) (-(((arr_27 [i_7]) / (-1048026175)))));
        var_31 = ((/* implicit */int) max((var_31), (((((/* implicit */_Bool) -1085020837)) ? (-1048026158) : (0)))));
    }
}
