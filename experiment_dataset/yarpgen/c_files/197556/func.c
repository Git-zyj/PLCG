/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197556
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197556 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197556
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
    for (signed char i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                var_20 = max((min((-1269834719), (arr_2 [i_1]))), (((/* implicit */int) ((signed char) 1269834719))));
                /* LoopSeq 3 */
                for (signed char i_2 = 0; i_2 < 11; i_2 += 2) 
                {
                    /* LoopSeq 2 */
                    for (signed char i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        var_21 += min((max((((/* implicit */int) var_4)), ((~(arr_5 [i_0]))))), (((((/* implicit */int) ((((/* implicit */int) (unsigned char)114)) < (-2058518750)))) / ((~(((/* implicit */int) (unsigned char)30)))))));
                        arr_11 [i_1] [(signed char)8] [(signed char)8] = ((/* implicit */signed char) ((((int) max((var_0), (-2022512720)))) + (((/* implicit */int) (unsigned char)11))));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 11; i_4 += 2) 
                    {
                        arr_14 [i_0] [2] [3] [i_4] [i_1] = ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)33))))) ? (((/* implicit */int) arr_4 [(unsigned char)10])) : (1052917046));
                        arr_15 [i_0] [i_1] [i_1] [i_1] [(signed char)7] [i_4] = ((/* implicit */signed char) ((arr_5 [i_0]) >> (((arr_5 [i_1]) - (688475661)))));
                    }
                    var_22 *= ((/* implicit */signed char) min((var_0), (((arr_5 [i_2]) >> (((-452276109) + (452276140)))))));
                    var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) max((((/* implicit */int) ((((/* implicit */int) var_11)) > (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)159)) && (((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [i_2])))))))), (((arr_5 [i_1]) >> (((arr_5 [i_0]) - (688475650))))))))));
                    var_24 = ((signed char) (-(((/* implicit */int) (signed char)-110))));
                }
                /* vectorizable */
                for (unsigned char i_5 = 0; i_5 < 11; i_5 += 2) 
                {
                    /* LoopNest 2 */
                    for (signed char i_6 = 0; i_6 < 11; i_6 += 1) 
                    {
                        for (signed char i_7 = 0; i_7 < 11; i_7 += 4) 
                        {
                            {
                                arr_26 [i_0] [i_6] [6] = ((/* implicit */int) ((unsigned char) arr_19 [i_1] [i_5] [i_5] [i_5]));
                                var_25 |= ((/* implicit */int) ((((/* implicit */int) arr_20 [i_0] [i_0] [i_7] [i_6])) != (((/* implicit */int) arr_20 [i_0] [i_0] [i_5] [i_6]))));
                            }
                        } 
                    } 
                    var_26 *= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned char)5)) ? (1269834719) : (-1269834719))) >> (((/* implicit */int) ((((/* implicit */int) arr_0 [i_1])) == (((/* implicit */int) (unsigned char)160)))))));
                }
                /* vectorizable */
                for (int i_8 = 0; i_8 < 11; i_8 += 3) 
                {
                    var_27 += ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((signed char) -1)))));
                    var_28 |= ((/* implicit */signed char) (unsigned char)221);
                    var_29 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)93)) & (((((/* implicit */_Bool) -2147483645)) ? (((/* implicit */int) arr_27 [(signed char)2] [i_8])) : (-291415855)))));
                }
            }
        } 
    } 
    var_30 &= ((/* implicit */int) var_8);
    var_31 = ((/* implicit */signed char) max((min((((((/* implicit */int) var_7)) >> (((((/* implicit */int) (signed char)48)) - (21))))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_4)) : (384))))), (((/* implicit */int) var_19))));
    var_32 = ((((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_11)) ? (var_0) : (var_0))))) ^ (((/* implicit */int) var_4)));
}
