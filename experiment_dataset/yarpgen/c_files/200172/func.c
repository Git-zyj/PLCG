/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200172
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200172 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200172
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
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 15; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                var_17 &= ((/* implicit */signed char) (((!((!(((/* implicit */_Bool) arr_4 [i_0] [(signed char)3] [i_1])))))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_13)) ^ (((/* implicit */int) (signed char)118))))) || (((/* implicit */_Bool) ((signed char) var_7)))))) : (((/* implicit */int) arr_0 [(signed char)15]))));
                var_18 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) var_15)) << (((((((/* implicit */int) ((signed char) (signed char)-33))) + (62))) - (15)))))) ? ((~(((/* implicit */int) (signed char)-116)))) : (((/* implicit */int) min((max(((signed char)118), (arr_3 [i_0 + 1]))), (((signed char) arr_4 [i_1] [i_1] [i_1])))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_2 = 2; i_2 < 13; i_2 += 4) 
    {
        /* LoopNest 3 */
        for (signed char i_3 = 0; i_3 < 14; i_3 += 4) 
        {
            for (signed char i_4 = 2; i_4 < 13; i_4 += 3) 
            {
                for (signed char i_5 = 0; i_5 < 14; i_5 += 1) 
                {
                    {
                        arr_15 [i_5] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_8 [i_2] [i_2])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_5] [i_5]))))) : (((((/* implicit */int) arr_4 [i_2] [i_2] [i_2])) * (((/* implicit */int) (signed char)(-127 - 1)))))));
                        arr_16 [i_5] = ((/* implicit */signed char) ((((/* implicit */int) arr_12 [i_2 + 1])) > (((/* implicit */int) arr_12 [i_2 - 2]))));
                        var_19 += arr_9 [i_5] [i_2];
                        arr_17 [i_2] [i_3] [i_4] [i_2] |= ((signed char) arr_14 [i_2 - 1] [(signed char)3] [i_2 + 1]);
                    }
                } 
            } 
        } 
        var_20 = arr_3 [i_2 - 2];
        var_21 *= var_4;
    }
    for (signed char i_6 = 0; i_6 < 13; i_6 += 4) 
    {
        var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) ((((/* implicit */int) max((arr_13 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6]), (arr_13 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6])))) & (((/* implicit */int) min((arr_13 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6]), (arr_13 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6])))))))));
        var_23 = var_3;
        /* LoopNest 2 */
        for (signed char i_7 = 0; i_7 < 13; i_7 += 1) 
        {
            for (signed char i_8 = 1; i_8 < 10; i_8 += 4) 
            {
                {
                    arr_24 [(signed char)2] [(signed char)4] [i_8] = ((signed char) ((((/* implicit */int) min((var_13), (arr_8 [(signed char)8] [i_8])))) / (((((/* implicit */_Bool) (signed char)39)) ? (((/* implicit */int) arr_18 [i_6])) : (((/* implicit */int) arr_20 [(signed char)10] [(signed char)11]))))));
                    /* LoopNest 2 */
                    for (signed char i_9 = 0; i_9 < 13; i_9 += 3) 
                    {
                        for (signed char i_10 = 1; i_10 < 11; i_10 += 2) 
                        {
                            {
                                var_24 &= arr_10 [(signed char)11] [i_7];
                                var_25 = (signed char)-6;
                                var_26 = ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-107)) ? (((/* implicit */int) (signed char)-107)) : (((/* implicit */int) (signed char)121))))))))));
                                var_27 = ((/* implicit */signed char) min((((/* implicit */int) ((signed char) arr_28 [i_10 - 1] [(signed char)11] [(signed char)12] [i_10] [i_10 - 1] [(signed char)9]))), (((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) arr_12 [i_6]))))) : (((/* implicit */int) arr_13 [i_8 + 3] [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_8] [i_8]))))));
                                var_28 = ((/* implicit */signed char) min((var_28), (arr_19 [i_10])));
                            }
                        } 
                    } 
                    arr_29 [i_8 - 1] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)0)) / (((/* implicit */int) (signed char)-13))));
                }
            } 
        } 
        var_29 = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) (signed char)-13)) ? (((/* implicit */int) (signed char)25)) : (((/* implicit */int) (signed char)-121)))), (((((/* implicit */int) (signed char)56)) / (((/* implicit */int) arr_19 [(signed char)0])))))))));
    }
}
