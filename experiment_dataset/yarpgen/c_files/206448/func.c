/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206448
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206448 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206448
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
    for (signed char i_0 = 3; i_0 < 19; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                var_12 = ((signed char) (!(((/* implicit */_Bool) arr_1 [i_0]))));
                arr_6 [i_0] = var_4;
                /* LoopSeq 2 */
                for (signed char i_2 = 0; i_2 < 22; i_2 += 4) 
                {
                    var_13 ^= ((/* implicit */signed char) max((((/* implicit */int) ((signed char) arr_2 [i_0 + 3] [i_2]))), (((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_2] [i_0])) + (((/* implicit */int) var_5))))) ? ((-(((/* implicit */int) (signed char)-123)))) : (((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) (signed char)24)) : (((/* implicit */int) (signed char)-25))))))));
                    var_14 = ((/* implicit */signed char) (((~(((/* implicit */int) var_11)))) * (((((/* implicit */int) (signed char)16)) / (((/* implicit */int) (signed char)(-127 - 1)))))));
                    arr_9 [i_0] [(signed char)2] [i_0] = ((signed char) ((((/* implicit */_Bool) ((signed char) arr_4 [i_1]))) ? (((/* implicit */int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) && (((/* implicit */_Bool) (signed char)-17))))) : (((((/* implicit */_Bool) (signed char)-5)) ? (((/* implicit */int) arr_2 [(signed char)2] [i_0])) : (((/* implicit */int) (signed char)-17))))));
                    /* LoopSeq 1 */
                    for (signed char i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        var_15 = ((signed char) arr_2 [i_0 + 1] [i_0 + 2]);
                        var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) (((~(((/* implicit */int) arr_5 [i_0 - 3])))) | (((/* implicit */int) arr_5 [i_0 - 3])))))));
                        var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_0 + 3] [i_1])) ? (((((/* implicit */_Bool) arr_5 [i_0 + 1])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (signed char)-19)))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (signed char)-26)) : (((/* implicit */int) arr_2 [i_0 + 2] [i_1]))))));
                        var_18 = ((signed char) (signed char)127);
                    }
                    /* LoopSeq 1 */
                    for (signed char i_4 = 4; i_4 < 20; i_4 += 2) 
                    {
                        arr_17 [i_0] [i_1] [i_2] [i_2] [i_4] = ((/* implicit */signed char) (+(((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_15 [i_0] [i_1] [i_1] [i_4])) : (((/* implicit */int) (signed char)10))))))));
                        var_19 = (signed char)127;
                        arr_18 [i_2] [(signed char)11] [(signed char)11] [i_2] = var_5;
                    }
                }
                for (signed char i_5 = 1; i_5 < 21; i_5 += 1) 
                {
                    var_20 = ((/* implicit */signed char) ((((/* implicit */int) max(((signed char)-25), (max((arr_5 [i_1]), (arr_11 [i_0] [i_1] [i_5])))))) * (((/* implicit */int) (signed char)18))));
                    var_21 ^= ((/* implicit */signed char) ((((((/* implicit */_Bool) (signed char)-25)) ? (((((/* implicit */int) var_1)) >> (((((/* implicit */int) (signed char)-17)) + (43))))) : (((/* implicit */int) arr_4 [i_5 + 1])))) | (((/* implicit */int) (signed char)-117))));
                }
                arr_21 [(signed char)12] [i_0] [i_0 + 2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)125)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (signed char)-117))))) ? (((((/* implicit */_Bool) arr_13 [i_0] [i_1] [i_1])) ? (((/* implicit */int) (signed char)16)) : (((/* implicit */int) arr_5 [i_1])))) : (((((/* implicit */int) (signed char)-24)) ^ (((/* implicit */int) (signed char)9))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_6 = 0; i_6 < 22; i_6 += 4) 
    {
        for (signed char i_7 = 0; i_7 < 22; i_7 += 3) 
        {
            {
                var_22 = ((/* implicit */signed char) (((~(((/* implicit */int) (signed char)24)))) >= (((((/* implicit */int) arr_12 [i_6] [i_7] [i_7] [i_6] [(signed char)13])) * (((/* implicit */int) arr_12 [i_7] [i_6] [i_6] [i_6] [i_6]))))));
                var_23 = var_10;
            }
        } 
    } 
}
