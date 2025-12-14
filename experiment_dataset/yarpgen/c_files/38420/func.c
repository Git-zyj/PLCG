/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38420
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38420 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38420
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 2; i_0 < 21; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    arr_12 [(unsigned short)13] [i_2] = var_2;
                    arr_13 [i_0] [i_0] [(signed char)9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0 - 2])) ? (((/* implicit */int) max((arr_2 [i_1]), (arr_3 [i_0 + 2] [i_1])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0 + 3])))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 3; i_4 < 21; i_4 += 4) 
                        {
                            {
                                var_19 = max((((/* implicit */unsigned int) (signed char)-103)), (((unsigned int) ((((/* implicit */_Bool) 3299897201U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)0))) : (29360128U)))));
                                var_20 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_2])) ? (var_4) : (arr_5 [i_1]))))));
                                var_21 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) arr_1 [i_0 + 3] [i_4 + 2]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 + 3] [i_4 + 2]))) : (((((/* implicit */_Bool) (unsigned short)14893)) ? (157258290U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)23))))));
                                arr_21 [i_4] [(unsigned short)4] [10U] [i_3] [i_3] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_10))))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) ((unsigned short) arr_15 [i_0] [i_0] [(unsigned short)7] [11U] [i_3] [i_4 - 3]))))) : (((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_16))))));
                            }
                        } 
                    } 
                    var_22 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_12)), (arr_7 [i_0 + 3])))) ? (((arr_7 [i_0 + 3]) << (((arr_7 [i_0 + 2]) - (467933252U))))) : (((unsigned int) arr_7 [i_0 - 1]))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned int) var_7);
}
