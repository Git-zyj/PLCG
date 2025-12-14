/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241137
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241137 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241137
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
    var_16 = ((/* implicit */unsigned int) var_11);
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 13; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned int i_2 = 0; i_2 < 17; i_2 += 2) 
                {
                    arr_7 [i_0] [i_0] [i_1] [i_0 - 2] = ((/* implicit */_Bool) arr_5 [i_0 + 1] [i_0 - 3] [i_0] [i_0 + 4]);
                    arr_8 [6U] [i_1] [(unsigned short)6] [i_0] = ((/* implicit */long long int) arr_2 [i_1]);
                    var_17 = ((/* implicit */unsigned short) ((((1602162317U) * (2692804978U))) == (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                }
                for (unsigned char i_3 = 0; i_3 < 17; i_3 += 4) /* same iter space */
                {
                    /* LoopSeq 4 */
                    for (signed char i_4 = 1; i_4 < 14; i_4 += 2) 
                    {
                        arr_14 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */_Bool) ((unsigned int) ((signed char) ((((/* implicit */int) var_13)) + (arr_1 [(signed char)0] [i_1])))));
                        var_18 = ((/* implicit */unsigned short) 1602162318U);
                    }
                    for (unsigned short i_5 = 1; i_5 < 15; i_5 += 3) /* same iter space */
                    {
                        var_19 = ((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)0))));
                        arr_17 [i_1] [i_1] [i_3] [i_5] = ((/* implicit */signed char) ((unsigned int) min((((((/* implicit */int) arr_16 [i_1])) / (((/* implicit */int) arr_6 [i_1])))), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_10 [i_0] [i_1] [i_3] [i_1])))))));
                    }
                    for (unsigned short i_6 = 1; i_6 < 15; i_6 += 3) /* same iter space */
                    {
                        var_20 = ((/* implicit */signed char) min((((((/* implicit */_Bool) 1602162318U)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((2692804982U) < (1602162326U))))) : (min((((/* implicit */unsigned int) 1438626389)), (1602162325U))))), (max((min((arr_11 [(unsigned short)12] [i_1] [i_3] [i_1]), (((/* implicit */unsigned int) (unsigned short)22107)))), (min((arr_19 [i_0]), (((/* implicit */unsigned int) arr_5 [i_0] [i_1] [i_3] [i_6 - 1]))))))));
                        var_21 = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1602162325U)) ? (((/* implicit */int) (unsigned short)22107)) : (((/* implicit */int) (unsigned short)43403))))) ? (((((/* implicit */_Bool) (unsigned short)8)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_1]))) : (2692804978U))) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned char) var_12)), (arr_15 [i_0] [i_1] [i_1] [i_1] [i_6] [i_6 + 2]))))))));
                    }
                    for (unsigned short i_7 = 3; i_7 < 15; i_7 += 2) 
                    {
                        arr_25 [i_0] [i_1] [i_1] = (unsigned short)16297;
                        arr_26 [i_3] [i_3] [i_3] [i_1] [i_3] [i_3] = ((/* implicit */_Bool) min((((/* implicit */unsigned int) (signed char)-126)), (1602162314U)));
                        var_22 = (+(arr_11 [i_0] [i_1] [(_Bool)1] [i_1]));
                        arr_27 [i_0] [i_1] [i_1] [i_7] = ((/* implicit */_Bool) (+(((((/* implicit */int) arr_16 [i_1])) ^ (((/* implicit */int) (signed char)57))))));
                    }
                    arr_28 [i_1] = ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (signed char)109)))));
                }
                for (unsigned char i_8 = 0; i_8 < 17; i_8 += 4) /* same iter space */
                {
                    var_23 = ((/* implicit */unsigned short) (-(((int) var_2))));
                    arr_31 [i_1] [i_1] [i_1] = arr_24 [i_0 + 2] [i_1];
                }
                var_24 = ((_Bool) ((unsigned short) 2692804971U));
            }
        } 
    } 
}
