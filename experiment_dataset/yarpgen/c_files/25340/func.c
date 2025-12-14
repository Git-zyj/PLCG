/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25340
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
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (signed char i_1 = 3; i_1 < 18; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned short i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        var_13 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(((/* implicit */int) (signed char)96)))))));
                        arr_11 [i_0] [(unsigned short)13] [i_2] [i_0] [i_3] = ((/* implicit */signed char) arr_5 [i_0] [i_1]);
                    }
                    for (unsigned short i_4 = 4; i_4 < 15; i_4 += 4) 
                    {
                        arr_15 [i_0] [i_1] [i_1 - 2] [i_2] [i_2] [i_4] = (signed char)-84;
                        arr_16 [i_4] [i_2] [(signed char)15] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)31)) + (((/* implicit */int) var_12))));
                        var_14 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (signed char)114)) : (((/* implicit */int) (unsigned short)4777))))) ? (((/* implicit */int) arr_3 [i_4 + 3] [i_1 - 2] [i_0])) : (((/* implicit */int) arr_1 [i_1 - 1] [(signed char)1]))));
                    }
                    var_15 -= ((/* implicit */unsigned short) min((((/* implicit */signed char) ((((/* implicit */int) arr_0 [i_1 - 1])) <= (((/* implicit */int) arr_0 [i_1 - 1]))))), (arr_13 [i_0] [i_0] [i_1] [i_2] [i_2] [i_2])));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) var_3))));
    /* LoopNest 2 */
    for (signed char i_5 = 4; i_5 < 13; i_5 += 1) 
    {
        for (signed char i_6 = 0; i_6 < 14; i_6 += 4) 
        {
            {
                var_17 = var_2;
                /* LoopNest 3 */
                for (signed char i_7 = 0; i_7 < 14; i_7 += 3) 
                {
                    for (signed char i_8 = 1; i_8 < 12; i_8 += 4) 
                    {
                        for (signed char i_9 = 0; i_9 < 14; i_9 += 4) 
                        {
                            {
                                arr_34 [(signed char)6] [(signed char)6] [i_8 + 1] [(signed char)13] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_1 [(signed char)3] [i_6])), (arr_25 [i_6])))) ? (((/* implicit */int) arr_17 [i_7] [i_7])) : (((/* implicit */int) ((unsigned short) var_8)))))) ? (((/* implicit */int) max((arr_27 [i_6] [i_6]), (((/* implicit */unsigned short) ((signed char) arr_5 [i_6] [i_8])))))) : (((/* implicit */int) (!((!(((/* implicit */_Bool) var_9)))))))));
                                var_18 = var_5;
                                var_19 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_2 [i_8]))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
