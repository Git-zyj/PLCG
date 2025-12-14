/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52071
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52071 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52071
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
    var_14 = var_6;
    var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)31)) ^ (((/* implicit */int) (signed char)26))))) ? ((~(((/* implicit */int) (signed char)-36)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (signed char)70)) : (((/* implicit */int) var_1))))) ? (((/* implicit */int) (signed char)-41)) : (((((/* implicit */int) var_10)) | (((/* implicit */int) var_9))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 16; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 17; i_1 += 2) 
        {
            {
                var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) ((((((/* implicit */_Bool) arr_0 [(signed char)10] [i_1])) ? (((/* implicit */int) arr_6 [i_0])) : (((/* implicit */int) var_9)))) == (((/* implicit */int) arr_3 [i_1]))))) : (((/* implicit */int) min((var_7), (var_13)))))))));
                arr_7 [(signed char)6] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_3 [i_0]))))) ? (((/* implicit */int) arr_1 [i_0])) : (((((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */int) min(((signed char)-17), (var_11)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0])))))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (signed char i_2 = 3; i_2 < 22; i_2 += 4) 
    {
        var_17 &= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_11 [(signed char)20]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_2])) || (((/* implicit */_Bool) (signed char)2))))) : (((/* implicit */int) arr_11 [(signed char)20])))))));
        var_18 = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((((/* implicit */int) var_5)), (((((/* implicit */int) arr_9 [i_2])) | (((/* implicit */int) var_4)))))))));
    }
}
