/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245177
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245177 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245177
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
    var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) min((((((/* implicit */int) (unsigned short)53396)) << ((((~(var_10))) - (1145034436U))))), (((/* implicit */int) ((short) ((((/* implicit */int) (unsigned short)12140)) << (((((/* implicit */int) (signed char)-119)) + (122))))))))))));
    var_17 *= ((/* implicit */_Bool) var_4);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 12; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    var_18 += ((/* implicit */unsigned int) ((((((/* implicit */int) var_5)) & (((/* implicit */int) (unsigned short)65531)))) | (((/* implicit */int) (unsigned short)53402))));
                    var_19 *= ((arr_1 [i_0] [i_0]) >> (((((/* implicit */int) arr_5 [i_1 + 3] [i_1 + 3])) - (13596))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 4; i_4 < 14; i_4 += 3) 
                        {
                            {
                                var_20 += ((/* implicit */unsigned short) ((max((arr_1 [i_1 + 2] [i_2]), (arr_1 [i_3] [i_2]))) == (arr_1 [(short)15] [i_3])));
                                var_21 = ((/* implicit */short) (((((~(((((((/* implicit */int) (short)-1902)) + (2147483647))) << (((((/* implicit */int) arr_14 [i_0] [i_0] [i_2] [i_2] [i_2] [i_4 - 3])) - (10508))))))) + (2147483647))) << ((((~(((/* implicit */int) var_13)))) - (123)))));
                                arr_16 [i_0] [i_0] = ((/* implicit */unsigned int) (((~(((/* implicit */int) arr_10 [i_1 + 4] [i_1 + 4])))) > (((/* implicit */int) var_12))));
                            }
                        } 
                    } 
                    arr_17 [3U] = ((/* implicit */short) ((((/* implicit */int) min(((!(arr_8 [i_0] [i_0]))), ((!(((/* implicit */_Bool) (unsigned short)36528))))))) == ((-((+(((/* implicit */int) (_Bool)1))))))));
                    arr_18 [i_0] [i_2] |= ((/* implicit */signed char) (!(((/* implicit */_Bool) 1848788218U))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (short i_5 = 2; i_5 < 16; i_5 += 2) 
    {
        for (unsigned short i_6 = 2; i_6 < 14; i_6 += 3) 
        {
            {
                var_22 = ((/* implicit */unsigned short) min((min((arr_22 [i_6] [i_6] [i_5]), ((+(arr_19 [i_5] [(signed char)0]))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_24 [i_6 + 2] [i_6 + 1] [i_6 + 1])) : (((/* implicit */int) arr_24 [i_6 + 3] [i_6 + 4] [i_6 + 2])))))));
                var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) min((arr_23 [i_6]), (arr_23 [i_5]))))) < (((((/* implicit */unsigned int) ((/* implicit */int) (short)-28471))) + (4294967295U)))))) | (((/* implicit */int) ((signed char) ((16U) * (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_6]))))))))))));
                /* LoopNest 2 */
                for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
                {
                    for (signed char i_8 = 0; i_8 < 18; i_8 += 3) 
                    {
                        {
                            arr_30 [i_8] = ((/* implicit */_Bool) ((short) ((signed char) arr_25 [i_7 + 1] [i_7 + 1] [i_7 + 1])));
                            var_24 = ((/* implicit */signed char) ((((/* implicit */int) arr_26 [i_6 + 4] [i_7 + 1])) + (((/* implicit */int) (unsigned short)12133))));
                            arr_31 [(_Bool)0] [i_5] [i_5] [(unsigned short)6] &= ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)36972))) ^ (min((((((/* implicit */_Bool) (short)-15851)) ? (33554432U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned int) arr_23 [i_7])))));
                            arr_32 [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_8] [i_6] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) arr_26 [i_5 - 2] [i_5 - 1])), (var_11))))) <= (arr_21 [i_5 - 2] [i_5 - 1])));
                        }
                    } 
                } 
                arr_33 [i_6] [i_6] = ((((/* implicit */_Bool) (~(((unsigned int) arr_22 [i_5] [i_6] [i_6]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_26 [(_Bool)1] [i_6])))) : ((+((+(arr_22 [i_5 + 2] [i_6 + 3] [i_5 + 2]))))));
            }
        } 
    } 
}
