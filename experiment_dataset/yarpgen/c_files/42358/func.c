/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42358
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42358 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42358
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
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        var_17 = max((((/* implicit */short) ((((/* implicit */int) var_8)) != (((/* implicit */int) (signed char)-1))))), (((short) arr_0 [i_0])));
        arr_3 [(signed char)2] [(signed char)2] &= ((/* implicit */unsigned char) ((((/* implicit */int) max((max((((/* implicit */signed char) var_14)), ((signed char)-1))), (min((var_15), (arr_1 [i_0])))))) - (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_2 [i_0]))))));
    }
    var_18 = ((/* implicit */short) min((((signed char) ((((/* implicit */int) (signed char)-1)) - (((/* implicit */int) var_10))))), (min((min(((signed char)3), (((/* implicit */signed char) var_14)))), (min(((signed char)3), ((signed char)3)))))));
    var_19 = ((/* implicit */unsigned char) min((var_14), (((((/* implicit */int) ((((/* implicit */int) var_9)) != (((/* implicit */int) (signed char)3))))) != (((/* implicit */int) min((var_12), (((/* implicit */unsigned char) var_0)))))))));
    /* LoopSeq 2 */
    for (signed char i_1 = 3; i_1 < 14; i_1 += 4) 
    {
        var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */int) (unsigned char)124)) < (((/* implicit */int) var_7))))), ((((+(((/* implicit */int) (unsigned char)255)))) | ((~(((/* implicit */int) (unsigned char)131)))))))))));
        var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) arr_6 [i_1]))));
    }
    for (signed char i_2 = 0; i_2 < 12; i_2 += 4) 
    {
        var_22 = ((/* implicit */unsigned char) ((signed char) min((arr_9 [i_2]), (arr_9 [i_2]))));
        var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) min((((/* implicit */int) max((var_0), (arr_6 [i_2])))), (((((/* implicit */_Bool) arr_6 [i_2])) ? (((/* implicit */int) arr_6 [i_2])) : (((/* implicit */int) (signed char)-1)))))))));
    }
}
