/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24155
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24155 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24155
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
    for (unsigned int i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        var_20 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((var_6), (((/* implicit */unsigned int) var_15))))) && (((((/* implicit */int) arr_1 [7] [i_0 + 2])) < (((/* implicit */int) arr_1 [i_0] [i_0 - 1]))))));
        var_21 -= ((/* implicit */unsigned short) max((((/* implicit */int) arr_0 [i_0])), (((((/* implicit */_Bool) arr_2 [i_0 + 2])) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_0 [(unsigned char)16])))) : (((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) arr_1 [(short)18] [i_0 - 1])) : (((/* implicit */int) (signed char)-75))))))));
        var_22 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(min((17123447043311781405ULL), (((/* implicit */unsigned long long int) arr_2 [i_0])))))))));
        var_23 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-81)) * ((-(((/* implicit */int) arr_0 [i_0]))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)62)) ? (((/* implicit */int) arr_1 [i_0 - 1] [i_0 - 1])) : (((/* implicit */int) arr_0 [i_0 - 1]))))) : (((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_1 [i_0] [i_0 + 1])), (arr_2 [i_0 + 2])))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_10))))) : (((((/* implicit */_Bool) arr_1 [i_0 + 2] [i_0 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))) : (493083015U)))))));
        var_24 = ((/* implicit */signed char) max(((-(((/* implicit */int) (signed char)-75)))), ((~(((/* implicit */int) arr_1 [i_0 + 1] [i_0 - 1]))))));
    }
    /* LoopNest 3 */
    for (short i_1 = 2; i_1 < 21; i_1 += 4) 
    {
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (unsigned long long int i_3 = 4; i_3 < 20; i_3 += 2) 
            {
                {
                    var_25 = ((/* implicit */unsigned int) min((((/* implicit */int) min((((/* implicit */signed char) arr_4 [i_1 + 1])), (var_4)))), (((((/* implicit */int) (signed char)88)) + (((/* implicit */int) arr_4 [i_1 + 1]))))));
                    var_26 = ((/* implicit */short) (-((+(((/* implicit */int) var_4))))));
                }
            } 
        } 
    } 
    var_27 = min((((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_6))) | (((/* implicit */unsigned int) ((/* implicit */int) var_7))))), (((/* implicit */unsigned int) (-(((((/* implicit */_Bool) (signed char)-89)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_2))))))));
    /* LoopSeq 1 */
    for (signed char i_4 = 2; i_4 < 19; i_4 += 1) 
    {
        var_28 = ((/* implicit */unsigned int) var_2);
        var_29 = ((/* implicit */_Bool) max((min(((-(((/* implicit */int) var_16)))), (((/* implicit */int) arr_3 [i_4])))), (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_4 - 2])) && ((!(((/* implicit */_Bool) var_16)))))))));
    }
}
