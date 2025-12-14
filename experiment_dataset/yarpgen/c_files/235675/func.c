/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235675
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235675 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235675
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
    var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) min((((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_14))))) - (((((/* implicit */_Bool) var_14)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))), (((/* implicit */unsigned int) var_14)))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 10; i_1 += 1) 
        {
            {
                var_18 *= ((unsigned char) ((arr_1 [i_1 + 1] [i_1 + 1]) * (arr_1 [i_1 + 1] [i_1 + 1])));
                var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_0])) ? (min((((((/* implicit */int) arr_2 [i_0])) * (((/* implicit */int) arr_2 [i_0])))), (((/* implicit */int) max((arr_2 [i_0]), (((/* implicit */unsigned char) arr_3 [i_0]))))))) : (max((((/* implicit */int) arr_0 [i_0])), (((((/* implicit */int) arr_4 [i_0])) & (((/* implicit */int) arr_3 [i_1])))))))))));
                var_20 = ((/* implicit */_Bool) arr_2 [i_0]);
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned short i_2 = 3; i_2 < 15; i_2 += 3) /* same iter space */
    {
        arr_8 [i_2 - 1] [i_2 - 3] = ((/* implicit */short) (+(max((min((((/* implicit */unsigned int) arr_5 [i_2])), (arr_7 [i_2 - 3]))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_5 [i_2 - 2])) <= (((/* implicit */int) arr_6 [i_2 + 2])))))))));
        /* LoopNest 2 */
        for (unsigned char i_3 = 0; i_3 < 17; i_3 += 1) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    var_21 = ((/* implicit */short) min((var_21), (arr_11 [i_4] [(short)4] [(short)4] [i_2])));
                    var_22 = ((arr_9 [i_2] [i_2] [i_2 - 1]) - (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_4] [i_3] [i_3] [i_2]))));
                    var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) ((unsigned short) arr_9 [i_2 - 3] [i_3] [i_4])))));
                }
            } 
        } 
        arr_13 [i_2 + 1] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_12 [i_2] [i_2] [(unsigned short)12] [i_2 - 3])) ? (((/* implicit */int) arr_5 [i_2 + 1])) : (((/* implicit */int) arr_11 [i_2 - 1] [(unsigned char)0] [i_2 - 2] [(unsigned char)0])))), (((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (unsigned short)15219))))));
        var_24 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) max(((-(((/* implicit */int) arr_11 [i_2] [0U] [0U] [i_2])))), (((/* implicit */int) arr_10 [i_2] [i_2] [(short)16]))))), (arr_9 [i_2] [i_2 - 3] [i_2 + 1])));
        /* LoopNest 2 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (unsigned short i_6 = 3; i_6 < 14; i_6 += 3) 
            {
                {
                    arr_19 [i_2 - 3] [i_5] [i_6] [i_6] = ((/* implicit */unsigned int) ((arr_7 [i_5]) != (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_6])) ? (arr_7 [i_2 - 3]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_2 - 3] [i_5] [i_6])))))) && (((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_12 [i_2] [i_2] [16U] [i_2 - 3])), (arr_10 [i_2] [i_2] [(unsigned char)2]))))))))));
                    arr_20 [i_2] [i_5] [i_5] [i_6 - 3] = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned char)167)))) | (((((/* implicit */_Bool) arr_12 [i_2 - 3] [i_5] [(_Bool)1] [(_Bool)1])) ? (((/* implicit */int) arr_12 [i_2] [i_5] [(unsigned char)4] [i_6 + 1])) : (((/* implicit */int) arr_6 [i_2]))))))), (((((arr_9 [i_2] [i_5] [i_6]) / (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [(unsigned short)4]))))) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_2 + 2])))))));
                    var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)13435)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned short)13435)))))));
                }
            } 
        } 
    }
    for (unsigned short i_7 = 3; i_7 < 15; i_7 += 3) /* same iter space */
    {
        var_26 = ((/* implicit */unsigned short) max((((/* implicit */short) ((_Bool) (+(((/* implicit */int) arr_14 [i_7 - 1] [i_7] [i_7])))))), (((short) arr_7 [i_7 - 3]))));
        var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) arr_10 [i_7 - 2] [i_7 - 2] [(_Bool)1]))));
    }
}
