/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190679
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190679 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190679
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
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */unsigned short) arr_1 [i_0]);
                arr_6 [i_1] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) min((((/* implicit */int) var_2)), (-1731939578)))))) ? (min((((((/* implicit */_Bool) var_3)) ? (var_11) : (((/* implicit */int) arr_5 [i_0] [i_1] [i_1])))), ((~(((/* implicit */int) arr_3 [(unsigned short)6])))))) : (((((arr_1 [i_0]) != (((/* implicit */int) (unsigned short)55968)))) ? (arr_1 [i_0]) : (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_5 [i_0] [i_0] [i_1])) : (arr_4 [14] [i_0] [i_1])))))));
                var_21 = ((/* implicit */int) min((var_21), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (unsigned short)55968)) : (var_13)))) ? (min(((+(arr_0 [i_0]))), (arr_0 [i_0]))) : (((((/* implicit */_Bool) max((-1731939578), (((/* implicit */int) arr_2 [i_1]))))) ? (((((/* implicit */_Bool) -582989300)) ? (var_15) : (912486025))) : (arr_0 [i_0])))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (int i_2 = 0; i_2 < 15; i_2 += 4) 
                {
                    arr_9 [i_1] [i_1] = (~(((/* implicit */int) arr_2 [i_0])));
                    var_22 = ((/* implicit */unsigned short) (+(912486025)));
                    var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) var_13))));
                    var_24 = ((/* implicit */int) (!((!(((/* implicit */_Bool) (unsigned short)55964))))));
                }
            }
        } 
    } 
    var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */int) (!(((/* implicit */_Bool) var_14))))), (var_14)))) ? (var_6) : (((((((/* implicit */int) var_3)) > (var_13))) ? (min((var_7), (((/* implicit */int) var_4)))) : (((/* implicit */int) var_16))))));
    var_26 = var_6;
}
