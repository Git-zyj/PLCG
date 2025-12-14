/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210785
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210785 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210785
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
    var_16 = ((/* implicit */int) var_7);
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 13; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_2 = 0; i_2 < 14; i_2 += 1) 
                {
                    arr_8 [(signed char)10] [i_0] [(short)8] [i_0] = ((/* implicit */int) arr_6 [i_0] [7] [i_0]);
                    /* LoopSeq 3 */
                    for (short i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        arr_11 [i_0 + 1] [i_1] [i_0] [i_2] [i_3] = ((((/* implicit */_Bool) arr_9 [i_2])) ? (((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) arr_9 [i_0])) : (((/* implicit */int) var_1)))) : (((1338222118) + (649931026))));
                        /* LoopSeq 2 */
                        for (signed char i_4 = 2; i_4 < 13; i_4 += 4) 
                        {
                            arr_14 [i_0 - 1] [i_1] [i_2] [i_3] [i_2] [i_0] = ((/* implicit */short) (-((-(((/* implicit */int) (signed char)-46))))));
                            arr_15 [i_0] [(signed char)11] [i_0] [i_1] [(signed char)11] [(signed char)11] [i_4] = ((/* implicit */signed char) ((((/* implicit */int) arr_13 [i_2] [i_2] [i_2] [i_4 - 2] [i_4])) >= (arr_12 [(signed char)8] [i_1] [(signed char)8] [i_4 - 2] [(signed char)8] [i_0] [i_1])));
                            arr_16 [i_0] [(short)5] [i_1] [i_0] = ((/* implicit */short) (((!(((/* implicit */_Bool) (short)-6152)))) ? (((/* implicit */int) ((signed char) var_11))) : (((/* implicit */int) var_7))));
                        }
                        for (short i_5 = 0; i_5 < 14; i_5 += 2) 
                        {
                            arr_19 [i_0] [i_1] [i_2] [i_1] [i_1] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-72)) ? (((((/* implicit */_Bool) arr_4 [i_0])) ? (arr_12 [i_0] [i_0] [i_0] [i_2] [(signed char)4] [i_0] [1]) : (((/* implicit */int) (signed char)-29)))) : (((((((/* implicit */int) (signed char)-116)) + (2147483647))) >> (((((/* implicit */int) arr_17 [i_0] [i_0] [3] [i_3] [i_5])) + (96)))))));
                            arr_20 [i_0] [i_1] [i_2] = ((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */_Bool) (short)-13663)) && (((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_2] [(signed char)0])))))));
                            var_17 = ((/* implicit */signed char) arr_13 [i_0] [i_1] [i_2] [(short)6] [i_5]);
                        }
                    }
                    for (signed char i_6 = 0; i_6 < 14; i_6 += 3) /* same iter space */
                    {
                        arr_23 [i_0 - 1] [i_0] [i_0] [i_0 - 1] = (signed char)-41;
                        var_18 &= ((((/* implicit */int) var_7)) ^ (((/* implicit */int) arr_21 [i_0 + 1] [i_0] [i_0 + 1] [i_0 - 1] [i_0 - 1] [i_0 - 1])));
                    }
                    for (signed char i_7 = 0; i_7 < 14; i_7 += 3) /* same iter space */
                    {
                        var_19 = ((/* implicit */short) ((((/* implicit */int) var_14)) != (-1)));
                        var_20 += ((/* implicit */signed char) (+((-(((/* implicit */int) arr_13 [i_0 + 1] [i_1] [(signed char)4] [i_7] [i_7]))))));
                        var_21 &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-23304)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_13 [i_0] [i_1] [5] [i_0] [(short)10]))))) ? (((/* implicit */int) (short)32757)) : (((/* implicit */int) ((649931011) > (((/* implicit */int) var_12)))))));
                        var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) (((+(1530328775))) <= (((/* implicit */int) ((-1204810380) != (-503960703)))))))));
                    }
                }
                arr_27 [i_0] = ((/* implicit */int) arr_4 [i_0]);
                var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) ((((/* implicit */_Bool) min((((((/* implicit */int) arr_4 [(short)10])) | (((/* implicit */int) arr_18 [(short)9] [i_1] [(short)9] [i_1] [(signed char)9])))), (max((-1), (((/* implicit */int) (short)-1))))))) && (((/* implicit */_Bool) -9)))))));
            }
        } 
    } 
    var_24 = ((/* implicit */short) (!(((/* implicit */_Bool) 790803168))));
    var_25 = ((((/* implicit */_Bool) min((((/* implicit */int) min((((/* implicit */short) var_1)), (var_9)))), (-790803142)))) ? (((/* implicit */int) (short)30644)) : (((/* implicit */int) (signed char)78)));
}
