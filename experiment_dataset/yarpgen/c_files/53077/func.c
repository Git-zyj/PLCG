/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53077
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53077 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53077
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
    var_11 = ((((/* implicit */_Bool) (+(min((1264286044), (var_6)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) : (var_10));
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        var_12 = ((((/* implicit */_Bool) (+(-832687698)))) ? (var_0) : (arr_0 [i_0]));
        var_13 = (~(((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0]))));
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 24; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                for (int i_3 = 4; i_3 < 22; i_3 += 1) 
                {
                    {
                        var_14 |= var_4;
                        /* LoopSeq 2 */
                        for (int i_4 = 1; i_4 < 24; i_4 += 1) 
                        {
                            arr_12 [24] [i_3] [i_1] [i_2] [i_1] [i_1] [i_0] = (-(((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_3 - 2] [i_4 + 1])) && (((/* implicit */_Bool) arr_7 [i_4] [i_3] [8] [i_0]))))));
                            var_15 = var_6;
                            var_16 ^= 1035567881;
                        }
                        for (int i_5 = 0; i_5 < 25; i_5 += 4) 
                        {
                            var_17 = ((/* implicit */int) min((var_17), (arr_3 [i_0])));
                            var_18 = ((/* implicit */int) max((var_18), ((-2147483647 - 1))));
                        }
                        /* LoopSeq 2 */
                        for (int i_6 = 0; i_6 < 25; i_6 += 4) 
                        {
                            var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))));
                            var_20 = ((max((var_10), (-298010392))) | (arr_16 [i_0] [i_1 - 1] [i_1 - 1] [i_3] [i_3] [i_1] [i_6]));
                        }
                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 25; i_7 += 4) 
                        {
                            var_21 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_3 + 2] [i_3] [i_1] [i_3 + 2] [i_2]))));
                            var_22 = (+(arr_7 [6] [6] [i_1 + 1] [i_3]));
                        }
                    }
                } 
            } 
        } 
    }
    for (int i_8 = 0; i_8 < 11; i_8 += 1) 
    {
        arr_22 [i_8] = (+(((/* implicit */int) ((min((arr_2 [11]), (-1))) < (((arr_7 [i_8] [6] [6] [i_8]) % (arr_10 [i_8] [i_8] [i_8] [i_8] [i_8])))))));
        var_23 = ((((/* implicit */_Bool) (+(arr_18 [18] [18] [i_8] [18] [i_8] [18])))) ? ((-(arr_20 [i_8]))) : (((/* implicit */int) (!(((/* implicit */_Bool) 844087812))))));
    }
    for (int i_9 = 2; i_9 < 11; i_9 += 4) 
    {
        var_24 = ((((/* implicit */int) ((var_0) > (var_7)))) * (((((/* implicit */_Bool) arr_17 [i_9] [i_9 - 1] [i_9] [i_9])) ? (arr_17 [i_9] [i_9] [i_9 - 2] [i_9]) : (arr_17 [i_9] [i_9] [i_9 - 2] [i_9]))));
        arr_25 [i_9] = ((/* implicit */int) ((((/* implicit */int) ((arr_11 [i_9 + 1] [i_9 + 1] [i_9] [i_9 - 1] [i_9 + 1] [i_9 + 1]) < (arr_11 [i_9] [i_9] [i_9] [i_9] [i_9 + 1] [i_9])))) <= (((((/* implicit */_Bool) var_2)) ? (max((arr_8 [i_9] [i_9] [i_9]), (arr_5 [i_9] [6] [i_9]))) : (arr_13 [i_9] [i_9 - 1] [i_9] [i_9] [i_9 + 1])))));
    }
    var_25 = var_6;
    var_26 = (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (0) : (var_5)))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) var_2))))) : ((~(var_9))))));
}
