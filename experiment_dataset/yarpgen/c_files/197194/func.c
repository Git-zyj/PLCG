/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197194
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197194 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197194
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
    var_11 = ((/* implicit */signed char) (!(((/* implicit */_Bool) -25))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 4) /* same iter space */
    {
        var_12 = ((/* implicit */unsigned char) arr_0 [i_0] [i_0]);
        arr_2 [i_0] = ((/* implicit */unsigned int) arr_1 [i_0]);
        /* LoopNest 2 */
        for (signed char i_1 = 2; i_1 < 13; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    var_13 *= ((/* implicit */unsigned int) var_4);
                    arr_8 [i_1] [(signed char)4] [(unsigned short)1] = ((/* implicit */int) ((-25) < (((/* implicit */int) arr_5 [i_0] [i_1] [i_1]))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned int i_3 = 1; i_3 < 14; i_3 += 3) 
        {
            for (unsigned int i_4 = 4; i_4 < 15; i_4 += 2) 
            {
                {
                    arr_16 [i_0] [i_0] [i_4 - 4] = ((/* implicit */signed char) arr_1 [i_3]);
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 16; i_5 += 4) 
                    {
                        for (signed char i_6 = 4; i_6 < 15; i_6 += 1) 
                        {
                            {
                                arr_22 [i_0] [i_3 + 2] = arr_13 [i_4 - 3] [i_4];
                                arr_23 [i_0] [i_4] [i_4 - 4] [14U] [i_6 + 1] |= ((/* implicit */unsigned char) var_8);
                            }
                        } 
                    } 
                    var_14 *= ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_5)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_0] [i_0])))))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0]))) : (arr_19 [i_0] [i_0])))))) ? ((~(max((var_8), (((/* implicit */unsigned int) var_5)))))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-10))));
                }
            } 
        } 
        var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(arr_19 [8U] [i_0])))) ? (((((/* implicit */_Bool) arr_19 [i_0] [i_0])) ? (arr_19 [i_0] [i_0]) : (arr_19 [i_0] [i_0]))) : (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-122)))))));
    }
    for (unsigned int i_7 = 0; i_7 < 16; i_7 += 4) /* same iter space */
    {
        arr_26 [i_7] = ((/* implicit */int) arr_1 [7U]);
        var_16 = (~(((((/* implicit */_Bool) arr_3 [i_7] [i_7] [i_7])) ? (arr_3 [i_7] [(unsigned short)8] [i_7]) : (arr_20 [(signed char)11] [i_7] [(signed char)11] [i_7] [i_7] [i_7]))));
    }
}
