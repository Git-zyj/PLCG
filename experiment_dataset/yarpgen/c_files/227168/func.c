/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227168
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227168 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227168
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
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        var_11 = ((/* implicit */int) min((var_11), ((-(-383227038)))));
        arr_2 [(signed char)11] = ((/* implicit */int) max((max((min((arr_1 [i_0]), (arr_1 [i_0]))), (arr_1 [i_0]))), (((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_0 [i_0] [i_0])), (arr_1 [i_0])))) ? (((((/* implicit */_Bool) arr_1 [2U])) ? (((/* implicit */unsigned int) 729235166)) : (8388544U))) : (((/* implicit */unsigned int) arr_0 [i_0] [i_0]))))));
        arr_3 [i_0] [i_0] = min((min((arr_1 [i_0]), (((/* implicit */unsigned int) arr_0 [i_0] [i_0])))), (((/* implicit */unsigned int) ((arr_0 [i_0] [i_0]) > (max((((/* implicit */int) (signed char)47)), (arr_0 [i_0] [i_0])))))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 23; i_1 += 4) 
    {
        arr_7 [i_1] &= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_6 [i_1])) ? (arr_6 [i_1]) : (arr_6 [i_1])));
        var_12 = ((/* implicit */signed char) (~(-2094192857)));
        /* LoopNest 2 */
        for (signed char i_2 = 0; i_2 < 23; i_2 += 4) 
        {
            for (signed char i_3 = 1; i_3 < 22; i_3 += 2) 
            {
                {
                    var_13 = ((/* implicit */signed char) arr_4 [i_1]);
                    /* LoopSeq 3 */
                    for (int i_4 = 2; i_4 < 22; i_4 += 2) 
                    {
                        arr_17 [i_4] [i_3] = ((/* implicit */int) arr_10 [i_1] [i_2]);
                        var_14 = ((/* implicit */int) (+(arr_15 [i_1] [i_3] [(signed char)8] [i_1])));
                        var_15 = ((/* implicit */int) (signed char)-20);
                        arr_18 [i_3] [i_3] [i_1] [5] [i_2] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_3])) ? (-153541118) : (-1)))) ? (((/* implicit */int) arr_10 [i_1] [i_3])) : (2094192878));
                    }
                    for (int i_5 = 1; i_5 < 22; i_5 += 2) 
                    {
                        var_16 = ((/* implicit */unsigned int) arr_8 [i_1] [i_1] [13]);
                        var_17 = arr_19 [i_1] [i_1] [i_2] [i_3] [i_5] [i_5];
                    }
                    for (int i_6 = 0; i_6 < 23; i_6 += 3) 
                    {
                        var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_19 [i_1] [i_3] [i_3 + 1] [i_3 - 1] [i_3 + 1] [i_1])))))));
                        var_19 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0)) ? (arr_15 [i_1] [i_2] [i_2] [i_6]) : (8388557U)))) ? (((/* implicit */int) arr_12 [i_3] [i_2] [i_3 + 1])) : (arr_9 [i_1]));
                    }
                    arr_23 [i_3] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_19 [i_3] [i_2] [(signed char)16] [i_2] [i_2] [i_2]) / (((/* implicit */int) (signed char)-64))))) ? (((/* implicit */int) arr_12 [i_1] [i_3 + 1] [i_3 + 1])) : (arr_19 [i_3] [i_2] [i_2] [i_2] [(signed char)4] [i_2])));
                }
            } 
        } 
        arr_24 [i_1] = ((((/* implicit */_Bool) arr_22 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])) ? (((/* implicit */int) arr_22 [i_1] [19U] [i_1] [i_1] [i_1] [i_1])) : (((/* implicit */int) arr_22 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])));
    }
    for (int i_7 = 0; i_7 < 25; i_7 += 1) 
    {
        var_20 = ((/* implicit */int) min((max((((/* implicit */unsigned int) (signed char)(-127 - 1))), ((~(arr_26 [i_7] [(signed char)14]))))), (((/* implicit */unsigned int) max((((/* implicit */int) max(((signed char)-94), ((signed char)120)))), (min((arr_25 [i_7]), (((/* implicit */int) (signed char)(-127 - 1))))))))));
        var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) arr_25 [23]))));
    }
    var_22 = 4095;
    var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) max(((~(var_4))), (min((4294967279U), (((/* implicit */unsigned int) min((453346618), (var_1)))))))))));
    var_24 = ((((/* implicit */_Bool) var_10)) ? (var_0) : (var_10));
}
