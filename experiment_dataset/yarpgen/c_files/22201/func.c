/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22201
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22201 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22201
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
    for (signed char i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (signed char i_1 = 2; i_1 < 9; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */signed char) (+(((((/* implicit */int) (signed char)-76)) + (((/* implicit */int) (signed char)-62))))));
                var_20 = ((/* implicit */signed char) var_11);
            }
        } 
    } 
    var_21 = ((/* implicit */signed char) var_11);
    /* LoopSeq 2 */
    for (signed char i_2 = 0; i_2 < 15; i_2 += 4) 
    {
        arr_8 [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_7 [i_2]))))) ? (((/* implicit */int) max((arr_7 [i_2]), (((/* implicit */short) arr_6 [i_2]))))) : (((/* implicit */int) arr_7 [i_2]))))) ? ((+(((/* implicit */int) arr_7 [i_2])))) : (((/* implicit */int) ((((/* implicit */_Bool) ((signed char) var_5))) && (((/* implicit */_Bool) arr_7 [i_2])))))));
        var_22 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_5))));
    }
    for (short i_3 = 1; i_3 < 17; i_3 += 4) 
    {
        var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) (signed char)-62))) ? (((/* implicit */int) (signed char)-59)) : (((/* implicit */int) arr_9 [i_3] [i_3]))));
        var_24 = ((/* implicit */short) (signed char)50);
        var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((var_7), (var_4)))) ? (((/* implicit */int) max((((/* implicit */short) min((arr_10 [i_3 + 2]), (arr_10 [i_3])))), (arr_11 [i_3 - 1])))) : (((/* implicit */int) ((((/* implicit */int) ((signed char) (signed char)-117))) <= (((((/* implicit */_Bool) arr_11 [i_3 - 1])) ? (((/* implicit */int) arr_9 [i_3] [i_3 - 1])) : (((/* implicit */int) var_3)))))))));
        /* LoopNest 2 */
        for (signed char i_4 = 2; i_4 < 16; i_4 += 1) 
        {
            for (signed char i_5 = 0; i_5 < 19; i_5 += 4) 
            {
                {
                    var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_6))))) ? (((/* implicit */int) max((arr_16 [i_3] [(signed char)12] [i_5]), (((/* implicit */short) arr_13 [i_3] [i_4 - 1] [(short)6]))))) : (((/* implicit */int) (signed char)-99))))) ? (((/* implicit */int) ((signed char) arr_10 [i_3 + 2]))) : (((/* implicit */int) min((var_8), (((/* implicit */short) (signed char)56))))))))));
                    arr_17 [(signed char)6] [i_4] [(signed char)4] [i_5] = ((/* implicit */short) (+(((/* implicit */int) arr_9 [i_3 - 1] [i_4 - 1]))));
                }
            } 
        } 
    }
}
