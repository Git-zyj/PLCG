/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51329
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
    var_20 = ((/* implicit */unsigned char) max((min((((((/* implicit */_Bool) (unsigned short)52089)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-116))))), (((/* implicit */unsigned int) (-(((/* implicit */int) var_2))))))), (((/* implicit */unsigned int) var_5))));
    /* LoopSeq 3 */
    for (signed char i_0 = 2; i_0 < 21; i_0 += 1) 
    {
        var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) arr_1 [i_0] [i_0])) <= (((/* implicit */int) arr_2 [i_0 + 1]))))) - (((/* implicit */int) arr_2 [i_0 - 1]))))) ? (((((/* implicit */int) arr_0 [i_0 + 3] [i_0 + 3])) * (((/* implicit */int) (short)-3674)))) : (((/* implicit */int) (unsigned short)27625))));
        var_22 = ((/* implicit */short) (-(((((/* implicit */_Bool) (signed char)-104)) ? (((/* implicit */int) (unsigned char)205)) : (((/* implicit */int) (unsigned char)195))))));
    }
    for (unsigned char i_1 = 0; i_1 < 17; i_1 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned int i_2 = 3; i_2 < 14; i_2 += 2) 
        {
            for (signed char i_3 = 2; i_3 < 14; i_3 += 2) 
            {
                {
                    arr_11 [i_2] [i_2] [(signed char)11] = ((/* implicit */unsigned int) ((unsigned short) var_4));
                    arr_12 [i_1] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_1])) / (((/* implicit */int) arr_10 [i_1] [i_2] [i_2]))))) ? (((/* implicit */int) min((arr_3 [(signed char)12]), (((/* implicit */unsigned short) (unsigned char)14))))) : (((((/* implicit */_Bool) arr_0 [i_2] [i_3])) ? (((/* implicit */int) arr_1 [i_3 + 3] [i_3 + 3])) : (((/* implicit */int) var_9))))))) ? (((((/* implicit */int) arr_0 [i_3] [i_2 - 2])) / (((/* implicit */int) (unsigned short)2623)))) : ((-(((/* implicit */int) ((unsigned char) (signed char)(-127 - 1))))))));
                    var_23 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */int) (signed char)87)) > (((/* implicit */int) (short)9257))))), ((-(0U)))));
                }
            } 
        } 
        arr_13 [i_1] [i_1] = ((/* implicit */signed char) var_14);
        arr_14 [i_1] = ((/* implicit */unsigned char) min((((/* implicit */int) (unsigned char)5)), ((((_Bool)1) ? (((/* implicit */int) (signed char)106)) : (((/* implicit */int) (unsigned short)7313))))));
    }
    for (unsigned short i_4 = 1; i_4 < 21; i_4 += 4) 
    {
        arr_17 [i_4] = ((/* implicit */unsigned char) min((max((min((2523587048U), (((/* implicit */unsigned int) arr_1 [i_4] [i_4])))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)137)) ? (((/* implicit */int) (signed char)-111)) : (((/* implicit */int) (signed char)47))))))), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_0 [i_4 + 2] [i_4 + 2])))))));
        var_24 = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)112))));
    }
    /* LoopNest 3 */
    for (unsigned char i_5 = 2; i_5 < 15; i_5 += 2) 
    {
        for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
        {
            for (unsigned short i_7 = 0; i_7 < 17; i_7 += 4) 
            {
                {
                    arr_27 [i_6] = (!(((/* implicit */_Bool) ((signed char) (signed char)114))));
                    arr_28 [i_5] [i_6] [i_5] &= ((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_7] [i_5] [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (1771380233U)))) ? (((((/* implicit */_Bool) (short)595)) ? (((/* implicit */int) (unsigned short)28197)) : (((/* implicit */int) (unsigned short)53336)))) : (((/* implicit */int) arr_24 [i_7]))))), (((unsigned int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) (signed char)-72)))))));
                    var_25 = ((/* implicit */signed char) (unsigned char)255);
                    var_26 = ((/* implicit */signed char) ((((/* implicit */int) arr_5 [i_5] [(short)13] [i_7])) > (((/* implicit */int) arr_15 [(short)5]))));
                }
            } 
        } 
    } 
    var_27 |= ((/* implicit */signed char) min((((/* implicit */unsigned int) (signed char)112)), (var_4)));
}
